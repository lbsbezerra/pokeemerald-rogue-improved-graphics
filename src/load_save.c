#include "global.h"
#include "malloc.h"
#include "berry_powder.h"
#include "item.h"
#include "load_save.h"
#include "main.h"
#include "overworld.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "save_location.h"
#include "trainer_hill.h"
#include "gba/flash_internal.h"
#include "decoration_inventory.h"
#include "agb_flash.h"
#include "event_data.h"
#include "constants/event_objects.h"

#include "rogue_controller.h"
#include "rogue_save.h"

static void ApplyNewEncryptionKeyToAllEncryptedData(u32 encryptionKey);

#define SAVEBLOCK_MOVE_RANGE    128

struct LoadedSaveData
{
    struct ItemSlot items[BAG_ITEM_CAPACITY];
    struct Mail mail[MAIL_COUNT];
};

// EWRAM DATA
EWRAM_DATA struct SaveBlock2ASLR gSaveblock2 = {0};
EWRAM_DATA struct SaveBlock1ASLR gSaveblock1 = {0};
EWRAM_DATA struct PokemonStorageASLR gPokemonStorage = {0};

EWRAM_DATA struct LoadedSaveData gLoadedSaveData = {0};
EWRAM_DATA u32 gLastEncryptionKey = 0;

// IWRAM common
bool32 gFlashMemoryPresent;
struct SaveBlock1 *gSaveBlock1Ptr;
struct SaveBlock2 *gSaveBlock2Ptr;
struct PokemonStorage *gPokemonStoragePtr;
struct RogueSaveBlock *gRogueSaveBlock;

// code
void CheckForFlashMemory(void)
{
    if (!IdentifyFlash())
    {
        gFlashMemoryPresent = TRUE;
        InitFlashTimer();
    }
    else
    {
        gFlashMemoryPresent = FALSE;
    }
}

void ClearSav2(void)
{
    CpuFill16(0, &gSaveblock2, sizeof(struct SaveBlock2ASLR));
}

void ClearSav1(void)
{
    CpuFill16(0, &gSaveblock1, sizeof(struct SaveBlock1ASLR));
}

// Offset is the sum of the trainer id bytes
void SetSaveBlocksPointers(u16 offset)
{
    struct SaveBlock1** sav1_LocalVar = &gSaveBlock1Ptr;

    offset = (offset + Random()) & (SAVEBLOCK_MOVE_RANGE - 4);

    gSaveBlock2Ptr = (void *)(&gSaveblock2) + offset;
    *sav1_LocalVar = (void *)(&gSaveblock1) + offset;
    gPokemonStoragePtr = (void *)(&gPokemonStorage) + offset;

    SetDecorationInventoriesPointers();
}

void MoveSaveBlocks_ResetHeap(void)
{
    void *vblankCB, *hblankCB;
    u32 encryptionKey;
    struct SaveBlock2 *saveBlock2Copy;
    struct SaveBlock1 *saveBlock1Copy;
    struct PokemonStorage *pokemonStorageCopy;

    // save interrupt functions and turn them off
    vblankCB = gMain.vblankCallback;
    hblankCB = gMain.hblankCallback;
    gMain.vblankCallback = NULL;
    gMain.hblankCallback = NULL;
    gTrainerHillVBlankCounter = NULL;

    saveBlock2Copy = (struct SaveBlock2 *)(gHeap);
    saveBlock1Copy = (struct SaveBlock1 *)(gHeap + sizeof(struct SaveBlock2));
    pokemonStorageCopy = (struct PokemonStorage *)(gHeap + sizeof(struct SaveBlock2) + sizeof(struct SaveBlock1));

    // backup the saves.
    *saveBlock2Copy = *gSaveBlock2Ptr;
    *saveBlock1Copy = *gSaveBlock1Ptr;
    *pokemonStorageCopy = *gPokemonStoragePtr;

    // change saveblocks' pointers
    // argument is a sum of the individual trainerId bytes
    SetSaveBlocksPointers(
      saveBlock2Copy->playerTrainerId[0] +
      saveBlock2Copy->playerTrainerId[1] +
      saveBlock2Copy->playerTrainerId[2] +
      saveBlock2Copy->playerTrainerId[3]);

    // restore saveblock data since the pointers changed
    *gSaveBlock2Ptr = *saveBlock2Copy;
    *gSaveBlock1Ptr = *saveBlock1Copy;
    *gPokemonStoragePtr = *pokemonStorageCopy;

    // Must be done after copy back, as the ptrs can dynamically change
    UpdateBagItemsPointers();
    RogueSave_UpdatePointers();

    // heap was destroyed in the copying process, so reset it
    InitHeap(gHeap, HEAP_SIZE);

    // restore interrupt functions
    gMain.hblankCallback = hblankCB;
    gMain.vblankCallback = vblankCB;

    // create a new encryption key
    encryptionKey = (Random() << 16) + (Random());
    ApplyNewEncryptionKeyToAllEncryptedData(encryptionKey);
    gSaveBlock2Ptr->encryptionKey = encryptionKey;
}

u32 UseContinueGameWarp(void)
{
    return gSaveBlock2Ptr->specialSaveWarpFlags & CONTINUE_GAME_WARP;
}

void ClearContinueGameWarpStatus(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags &= ~CONTINUE_GAME_WARP;
}

void SetContinueGameWarpStatus(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags |= CONTINUE_GAME_WARP;
}

void SetContinueGameWarpStatusToDynamicWarp(void)
{
    SetContinueGameWarpToDynamicWarp(0);
    gSaveBlock2Ptr->specialSaveWarpFlags |= CONTINUE_GAME_WARP;
}

void ClearContinueGameWarpStatus2(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags &= ~CONTINUE_GAME_WARP;
}

void SavePlayerParty(void)
{
    int i;

    gSaveBlock1Ptr->playerPartyCount = gPlayerPartyCount;

    for (i = 0; i < PARTY_SIZE; i++)
        gSaveBlock1Ptr->playerParty[i] = gPlayerParty[i];
}

void LoadPlayerParty(void)
{
    int i;

    gPlayerPartyCount = gSaveBlock1Ptr->playerPartyCount;

    for (i = 0; i < PARTY_SIZE; i++)
        gPlayerParty[i] = gSaveBlock1Ptr->playerParty[i];
}

void SaveObjectEvents(void)
{
    int i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        gSaveBlock1Ptr->objectEvents[i] = gObjectEvents[i];

        if(Rogue_IsObjectEventExcludedFromSave(&gSaveBlock1Ptr->objectEvents[i]))
            gSaveBlock1Ptr->objectEvents[i].active = FALSE;
    }
}

void LoadObjectEvents(void)
{
    int i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        gObjectEvents[i] = gSaveBlock1Ptr->objectEvents[i];

        if(Rogue_IsObjectEventExcludedFromSave(&gObjectEvents[i]))
            gObjectEvents[i].active = FALSE;
    }
}

void CopyPartyAndObjectsToSave(void)
{
    SavePlayerParty();
    SaveObjectEvents();
}

void CopyPartyAndObjectsFromSave(void)
{
    LoadPlayerParty();
    LoadObjectEvents();
}

void LoadPlayerBag(void)
{
    int i;

    // load bag items.
    for (i = 0; i < BAG_ITEM_CAPACITY; i++)
        gLoadedSaveData.items[i] = gSaveBlock1Ptr->bagPockets[i];

    // load mail.
    for (i = 0; i < MAIL_COUNT; i++)
        gLoadedSaveData.mail[i] = gSaveBlock1Ptr->mail[i];

    gLastEncryptionKey = gSaveBlock2Ptr->encryptionKey;
}

void SavePlayerBag(void)
{
    int i;
    u32 encryptionKeyBackup;

    // save player items.
    for (i = 0; i < BAG_ITEM_CAPACITY; i++)
        gSaveBlock1Ptr->bagPockets[i] = gLoadedSaveData.items[i];

    // save mail.
    for (i = 0; i < MAIL_COUNT; i++)
        gSaveBlock1Ptr->mail[i] = gLoadedSaveData.mail[i];

    encryptionKeyBackup = gSaveBlock2Ptr->encryptionKey;
    gSaveBlock2Ptr->encryptionKey = gLastEncryptionKey;
    ApplyNewEncryptionKeyToBagItems(encryptionKeyBackup);
    gSaveBlock2Ptr->encryptionKey = encryptionKeyBackup; // updated twice?
}

void ApplyNewEncryptionKeyToHword(u16 *hWord, u32 newKey)
{
    *hWord ^= gSaveBlock2Ptr->encryptionKey;
    *hWord ^= newKey;
}

void ApplyNewEncryptionKeyToWord(u32 *word, u32 newKey)
{
    *word ^= gSaveBlock2Ptr->encryptionKey;
    *word ^= newKey;
}

static void ApplyNewEncryptionKeyToAllEncryptedData(u32 encryptionKey)
{
    ApplyNewEncryptionKeyToGameStats(encryptionKey);
    ApplyNewEncryptionKeyToBagItems_(encryptionKey);
    ApplyNewEncryptionKeyToBerryPowder(encryptionKey);
    ApplyNewEncryptionKeyToWord(&gSaveBlock1Ptr->money, encryptionKey);
    //ApplyNewEncryptionKeyToHword(&gSaveBlock1Ptr->coins, encryptionKey);
}
