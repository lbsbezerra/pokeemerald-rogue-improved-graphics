#include "global.h"
#include "item_menu.h"
#include "battle.h"
#include "battle_controllers.h"
#include "battle_pyramid.h"
#include "frontier_util.h"
#include "battle_pyramid_bag.h"
#include "berry_tag_screen.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_specials.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu_icons.h"
#include "item_use.h"
#include "lilycove_lady.h"
#include "list_menu.h"
#include "link.h"
#include "mail.h"
#include "main.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "money.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "player_pc.h"
#include "pokemon.h"
#include "pokemon_summary_screen.h"
#include "scanline_effect.h"
#include "script.h"
#include "shop.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text_window.h"
#include "menu_helpers.h"
#include "window.h"
#include "apprentice.h"
#include "battle_pike.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "rogue_controller.h"
#include "rogue_player_customisation.h"
#include "rogue_quest.h"
#include "rogue_safari.h"

#define TAG_POCKET_SCROLL_ARROW 110
#define TAG_BAG_SCROLL_ARROW    111
// Immune to blending; doesn't conflict with tags in event_object_movement
#define PAL_TAG_KEY_ITEM_WHEEL  0x9000

#define MAX_POCKET_ITEMS BAG_ITEM_CAPACITY

// RogueNote: TODO - Modify pocket structure

// Up to 8 item slots can be visible at a time
#define MAX_ITEMS_SHOWN 8

enum {
    SWITCH_POCKET_NONE,
    SWITCH_POCKET_LEFT,
    SWITCH_POCKET_RIGHT
};

enum {
    ACTION_USE,
    ACTION_TOSS,
    ACTION_REGISTER,
    ACTION_GIVE,
    ACTION_CANCEL,
    ACTION_BATTLE_USE,
    ACTION_CHECK,
    ACTION_WALK,
    ACTION_DESELECT,
    ACTION_CHECK_TAG,
    ACTION_CONFIRM,
    ACTION_SHOW,
    ACTION_GIVE_FAVOR_LADY,
    ACTION_CONFIRM_QUIZ_LADY,
    ACTION_SORT_TYPE,
    ACTION_SORT_NAME,
    ACTION_SORT_VALUE,
    ACTION_SORT_AMOUNT,
    ACTION_DUMMY,
};

enum {
    WIN_ITEM_LIST,
    WIN_DESCRIPTION,
    WIN_POCKET_NAME,
    WIN_TMHM_INFO_ICONS,
    WIN_TMHM_INFO,
    WIN_MESSAGE, // Identical to ITEMWIN_MESSAGE. Unused?
    WIN_BAG_CAPACITY,
    WIN_MON_ICON_0,
    WIN_MON_ICON_1,
    WIN_MON_ICON_2,
    WIN_MON_ICON_3,
    WIN_MON_ICON_4,
    WIN_MON_ICON_5,
    //WIN_BAG_STACK_AMOUNT,
};

// Item list ID for toSwapPos to indicate an item is not currently being swapped
#define NOT_SWAPPING 0xFF

struct ListBuffer1 {
    struct ListMenuItem subBuffers[MAX_POCKET_ITEMS];
};

struct ListBuffer2 {
    u8 name[MAX_POCKET_ITEMS][ITEM_NAME_LENGTH + 10];
};

static void CB2_Bag(void);
static bool8 SetupBagMenu(void);
static void BagMenu_InitBGs(void);
static bool8 LoadBagMenu_Graphics(void);
static void LoadBagMenuTextWindows(void);
static void AllocateBagItemListBuffers(void);
static void LoadBagItemListBuffers(u8);
static void PrintPocketNames(const u8 *, const u8 *);
static void CopyPocketNameToWindow(u32);
static void DrawPocketIndicatorSquare(u8, bool8);
static void CreatePocketScrollArrowPair(void);
static void CreatePocketSwitchArrowPair(void);
static void DestroyPocketSwitchArrowPair(void);
static void PrepareTMHMMoveWindow(void);
static bool8 IsWallysBag(void);
static void Task_WallyTutorialBagMenu(u8);
static void Task_BagMenu_HandleInput(u8);
static void GetItemName(u8 *, u16);
static void PrintItemDescription(int);
static void PrintBagCapacity();
static void BagMenu_PrintCursorAtPos(u8, u8);
static void BagMenu_Print(u8, u8, const u8 *, u8, u8, u8, u8, u8, u8);
static void Task_CloseBagMenu(u8);
static u8 AddItemMessageWindow(u8);
static void RemoveItemMessageWindow(u8);
static void ReturnToItemList(u8);
static void PrintItemQuantity(u8, s16);
static u8 BagMenu_AddWindow(u8);
static u8 GetSwitchBagPocketDirection(void);
static void SwitchBagPocket(u8, s16, bool16);
static bool8 CanSwapItems(void);
static void StartItemSwap(u8 taskId);
static void Task_SwitchBagPocket(u8);
static void Task_HandleSwappingItemsInput(u8);
static void DoItemSwap(u8);
static void CancelItemSwap(u8);
static void PrintTMHMMoveData(u16);
static void PrintContextMenuItems(u8);
static void PrintContextMenuItemGrid(u8, u8, u8);
static void Task_ItemContext_SingleRow(u8);
static void Task_ItemContext_MultipleRows(u8);
static bool8 IsValidContextMenuPos(s8);
static void BagMenu_RemoveWindow(u8);
static void PrintThereIsNoPokemon(u8);
static void Task_ChooseHowManyToToss(u8);
static void AskTossItems(u8);
static void Task_RemoveItemFromBag(u8);
static void ItemMenu_Cancel(u8);
static void HandleErrorMessage(u8);
static void PrintItemCantBeHeld(u8);
static void DisplayCurrentMoneyWindow(void);
static void DisplaySellItemPriceAndConfirm(u8);
static void InitSellHowManyInput(u8);
static void AskSellItems(u8);
static void RemoveMoneyWindow(void);
static void Task_ChooseHowManyToSell(u8);
static void SellItem(u8);
static void WaitAfterItemSell(u8);
static void TryDepositItem(u8);
static void Task_ChooseHowManyToDeposit(u8 taskId);
static void WaitDepositErrorMessage(u8);
static void CB2_ApprenticeExitBagMenu(void);
static void CB2_FavorLadyExitBagMenu(void);
static void CB2_QuizLadyExitBagMenu(void);
static void UpdatePocketItemLists(void);
static void InitPocketListPositions(void);
static void InitPocketScrollPositions(void);
static u8 CreateBagInputHandlerTask(u8);
static void DrawItemListBgRow(u8);
static void BagMenu_MoveCursorCallback(s32, bool8, struct ListMenu *);
static void BagMenu_ItemPrintCallback(u8, u32, u8);
static void ItemMenu_UseOutOfBattle(u8);
static void ItemMenu_Toss(u8);
static void ItemMenu_Register(u8);
static void ItemMenu_Give(u8);
static void ItemMenu_Cancel(u8);
static void ItemMenu_UseInBattle(u8);
static void ItemMenu_CheckTag(u8);
static void ItemMenu_Show(u8);
static void ItemMenu_GiveFavorLady(u8);
static void ItemMenu_ConfirmQuizLady(u8);
static void ItemMenu_SortByName(u8);
static void ItemMenu_SortByType(u8);
static void ItemMenu_SortByValue(u8);
static void ItemMenu_SortByAmount(u8);
static void Task_ItemContext_Normal(u8);
static void Task_ItemContext_GiveToParty(u8);
static void Task_ItemContext_Sell(u8);
static void Task_ItemContext_Deposit(u8);
static void Task_ItemContext_GiveToPC(u8);
static void Task_ItemContext_Sort(u8);
static void ConfirmToss(u8);
static void CancelToss(u8);
static void ConfirmSell(u8);
static void CancelSell(u8);

// Key item wheel
static void Task_KeyItemWheel(u8 taskId);

static const struct BgTemplate sBgTemplates_ItemMenu[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0,
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
    {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0,
    },
};

static const struct ListMenuTemplate sItemListMenu =
{
    .items = NULL,
    .moveCursorFunc = BagMenu_MoveCursorCallback,
    .itemPrintFunc = BagMenu_ItemPrintCallback,
    .totalItems = 0,
    .maxShowed = 0,
    .windowId = WIN_ITEM_LIST,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 1,
    .fillValue = 0,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_L_R,
    .fontId = FONT_NARROW,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct MenuAction sItemMenuActions[] = {
    [ACTION_USE]               = {gMenuText_Use,      {ItemMenu_UseOutOfBattle}},
    [ACTION_TOSS]              = {gMenuText_Toss,     {ItemMenu_Toss}},
    [ACTION_REGISTER]          = {gMenuText_Register, {ItemMenu_Register}},
    [ACTION_GIVE]              = {gMenuText_Give,     {ItemMenu_Give}},
    [ACTION_CANCEL]            = {gText_Cancel2,      {ItemMenu_Cancel}},
    [ACTION_BATTLE_USE]        = {gMenuText_Use,      {ItemMenu_UseInBattle}},
    [ACTION_CHECK]             = {gMenuText_Check,    {ItemMenu_UseOutOfBattle}},
    [ACTION_WALK]              = {gMenuText_Walk,     {ItemMenu_UseOutOfBattle}},
    [ACTION_DESELECT]          = {gMenuText_Deselect, {ItemMenu_Register}},
    [ACTION_CHECK_TAG]         = {gMenuText_CheckTag, {ItemMenu_CheckTag}},
    [ACTION_CONFIRM]           = {gMenuText_Confirm,  {Task_FadeAndCloseBagMenu}},
    [ACTION_SHOW]              = {gMenuText_Show,     {ItemMenu_Show}},
    [ACTION_GIVE_FAVOR_LADY]   = {gMenuText_Give2,    {ItemMenu_GiveFavorLady}},
    [ACTION_CONFIRM_QUIZ_LADY] = {gMenuText_Confirm,  {ItemMenu_ConfirmQuizLady}},
    [ACTION_SORT_TYPE]         = {gMenuText_SortType,   {ItemMenu_SortByType}},
    [ACTION_SORT_NAME]         = {gMenuText_SortName,   {ItemMenu_SortByName}},
    [ACTION_SORT_VALUE]        = {gMenuText_SortValue,  {ItemMenu_SortByValue}},
    [ACTION_SORT_AMOUNT]       = {gMenuText_SortAmount, {ItemMenu_SortByAmount}},
    [ACTION_DUMMY]             = {gText_EmptyString2, {NULL}}
};

// these are all 2D arrays with a width of 2 but are represented as 1D arrays
// ACTION_DUMMY is used to represent blank spaces
static const u8 sContextMenuItems_ItemsPocket[] = {
    ACTION_USE,         ACTION_GIVE,
    ACTION_TOSS,        ACTION_CANCEL
};

static const u8 sContextMenuItems_KeyItemsPocket[] = {
    ACTION_USE,         ACTION_REGISTER,
    ACTION_DUMMY,       ACTION_CANCEL
};

static const u8 sContextMenuItems_BallsPocket[] = {
    ACTION_GIVE,        ACTION_DUMMY,
    ACTION_TOSS,        ACTION_CANCEL
};

static const u8 sContextMenuItems_TmHmPocket[] = {
    ACTION_USE,         ACTION_GIVE,
    ACTION_TOSS,        ACTION_CANCEL
};

static const u8 sContextMenuItems_BerriesPocket[] = {
    ACTION_USE,         ACTION_GIVE,
    ACTION_TOSS,        ACTION_CHECK_TAG,
    ACTION_DUMMY,       ACTION_CANCEL
};

static const u8 sContextMenuItems_BattleUse[] = {
    ACTION_BATTLE_USE,  ACTION_CANCEL
};

static const u8 sContextMenuItems_Give[] = {
    ACTION_GIVE,        ACTION_CANCEL
};

static const u8 sContextMenuItems_Cancel[] = {
    ACTION_CANCEL
};

static const u8 sContextMenuItems_BerryBlenderCrush[] = {
    ACTION_CONFIRM,     ACTION_CHECK_TAG,
    ACTION_DUMMY,       ACTION_CANCEL
};

static const u8 sContextMenuItems_Apprentice[] = {
    ACTION_SHOW,        ACTION_CANCEL
};

static const u8 sContextMenuItems_FavorLady[] = {
    ACTION_GIVE_FAVOR_LADY, ACTION_CANCEL
};

static const u8 sContextMenuItems_QuizLady[] = {
    ACTION_CONFIRM_QUIZ_LADY, ACTION_CANCEL
};

static const u8 sContextMenuItems_Sort[] = {
    ACTION_SORT_TYPE,       ACTION_SORT_NAME,
    ACTION_SORT_VALUE,      ACTION_SORT_AMOUNT,
    ACTION_CANCEL,          ACTION_DUMMY
};

static const TaskFunc sContextMenuFuncs[] = {
    [ITEMMENULOCATION_FIELD] =                  Task_ItemContext_Normal,
    [ITEMMENULOCATION_BATTLE] =                 Task_ItemContext_Normal,
    [ITEMMENULOCATION_PARTY] =                  Task_ItemContext_GiveToParty,
    [ITEMMENULOCATION_SHOP] =                   Task_ItemContext_Sell,
    [ITEMMENULOCATION_BERRY_TREE] =             Task_FadeAndCloseBagMenu,
    [ITEMMENULOCATION_BERRY_BLENDER_CRUSH] =    Task_ItemContext_Normal,
    [ITEMMENULOCATION_ITEMPC] =                 Task_ItemContext_Deposit,
    [ITEMMENULOCATION_FAVOR_LADY] =             Task_ItemContext_Normal,
    [ITEMMENULOCATION_QUIZ_LADY] =              Task_ItemContext_Normal,
    [ITEMMENULOCATION_APPRENTICE] =             Task_ItemContext_Normal,
    [ITEMMENULOCATION_WALLY] =                  NULL,
    [ITEMMENULOCATION_PCBOX] =                  Task_ItemContext_GiveToPC
};

static const struct YesNoFuncTable sYesNoTossFunctions = {ConfirmToss, CancelToss};

static const struct YesNoFuncTable sYesNoSellItemFunctions = {ConfirmSell, CancelSell};

static const struct ScrollArrowsTemplate sBagScrollArrowsTemplate = {
    .firstArrowType = SCROLL_ARROW_LEFT,
    .firstX = 28,
    .firstY = 16,
    .secondArrowType = SCROLL_ARROW_RIGHT,
    .secondX = 100,
    .secondY = 16,
    .fullyUpThreshold = -1,
    .fullyDownThreshold = -1,
    .tileTag = TAG_BAG_SCROLL_ARROW,
    .palTag = TAG_BAG_SCROLL_ARROW,
    .palNum = 0,
};

// Key item wheel gfx
static const u8 sRegisterUp_Gfx[] = INCBIN_U8("graphics/bag/select_button.4bpp");
static const u8 sRegisterRight_Gfx[] = INCBIN_U8("graphics/bag/select_button_right.4bpp");
static const u8 sRegisterDown_Gfx[] = INCBIN_U8("graphics/bag/select_button_down.4bpp");
static const u8 sRegisterLeft_Gfx[] = INCBIN_U8("graphics/bag/select_button_left.4bpp");

static const u8* const sRegisteredSelect_Gfx[] = {sRegisterUp_Gfx, sRegisterRight_Gfx, sRegisterDown_Gfx, sRegisterLeft_Gfx, sRegisterUp_Gfx};

static const u32 sKeyItemBoxGfx[] = INCBIN_U32("graphics/bag/key_item_box.4bpp");
static const u16 sKeyItemBoxPal[] = INCBIN_U16("graphics/bag/key_item_box.gbapal");

static const struct SpritePalette sSpritePalette_KeyItemBox = {
    .data = sKeyItemBoxPal,
    .tag = PAL_TAG_KEY_ITEM_WHEEL,
};

static const struct SpriteFrameImage sPicTable_KeyItemBox[] = {
    obj_frame_tiles(sKeyItemBoxGfx),
};

const struct OamData sOam_KeyItemBox = {
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 1,
    .objMode = ST_OAM_OBJ_NORMAL,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
};

const struct OamData sOam_KeyItemBoxWin = {
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 1,
    .objMode = ST_OAM_OBJ_WINDOW,
    .affineMode = ST_OAM_AFFINE_OFF,
};

static const union AnimCmd sSpriteAnim_KeyItemBox[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_KeyItemBox[] =
{
    sSpriteAnim_KeyItemBox
};

static const union AffineAnimCmd sAffineAnim_KeyItemBox0[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBox1[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0xC0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBox2[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x80, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBox3[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x40, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBoxGrow0[] =
{
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0, 0),
    AFFINEANIMCMD_FRAME(0xC0, 0xC0, 0, 0),
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x120, 0, 0),
    AFFINEANIMCMD_FRAME(0x120, 0x120, 0, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x110, 0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBoxGrow1[] =
{
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0xC0, 0xC0, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x120, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x120, 0x120, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x110, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0xC0, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0xC0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBoxGrow2[] =
{
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0x80, 0),
    AFFINEANIMCMD_FRAME(0xC0, 0xC0, 0x80, 0),
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x120, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x120, 0x120, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x110, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x80, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x80, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KeyItemBoxGrow3[] =
{
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0x40, 0),
    AFFINEANIMCMD_FRAME(0xC0, 0xC0, 0x40, 0),
    AFFINEANIMCMD_FRAME(0xE0, 0xE0, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x120, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x120, 0x120, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x110, 0x110, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x40, 0),
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0x40, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_KeyItemBox[] =
{
    sAffineAnim_KeyItemBox0,
    sAffineAnim_KeyItemBox1,
    sAffineAnim_KeyItemBox2,
    sAffineAnim_KeyItemBox3,
    sAffineAnim_KeyItemBoxGrow0,
    sAffineAnim_KeyItemBoxGrow1,
    sAffineAnim_KeyItemBoxGrow2,
    sAffineAnim_KeyItemBoxGrow3,
};

static const struct SpriteTemplate sSpriteTemplate_KeyItemBox = {
    .tileTag = PAL_TAG_KEY_ITEM_WHEEL,
    .paletteTag = PAL_TAG_KEY_ITEM_WHEEL,
    .oam = &sOam_KeyItemBox,
    .anims = sSpriteAnimTable_KeyItemBox,
    .images = sPicTable_KeyItemBox,
    .affineAnims = sAffineAnims_KeyItemBox,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_KeyItemBoxWin = {
    .tileTag = PAL_TAG_KEY_ITEM_WHEEL,
    .paletteTag = PAL_TAG_KEY_ITEM_WHEEL,
    .oam = &sOam_KeyItemBoxWin,
    .anims = sSpriteAnimTable_KeyItemBox,
    .images = sPicTable_KeyItemBox,
    .affineAnims = sAffineAnims_KeyItemBox,
    .callback = SpriteCallbackDummy,
};

static const u8 sKeyItemBoxXPos[MAX_REGISTERED_ITEMS] = {(DISPLAY_WIDTH / 2), (DISPLAY_WIDTH / 2) + 32, (DISPLAY_WIDTH / 2), (DISPLAY_WIDTH / 2) - 32};
static const u8 sKeyItemBoxYPos[MAX_REGISTERED_ITEMS] = {(DISPLAY_HEIGHT / 2) - 32, (DISPLAY_HEIGHT / 2), (DISPLAY_HEIGHT / 2) + 32, (DISPLAY_HEIGHT / 2)};

enum {
    COLORID_NORMAL,
    COLORID_POCKET_NAME,
    COLORID_GRAY_CURSOR,
    COLORID_BAG_CAPACITY,
    COLORID_TMHM_INFO,
    COLORID_NONE = 0xFF
};
static const u8 sFontColorTable[][3] = {
                            // bgColor, textColor, shadowColor
    [COLORID_NORMAL]      = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_LIGHT_GRAY},
    [COLORID_POCKET_NAME] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_RED},
    [COLORID_GRAY_CURSOR] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_GRAY, TEXT_COLOR_GREEN},
    [COLORID_BAG_CAPACITY]= {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_LIGHT_GRAY},
    [COLORID_TMHM_INFO]   = {TEXT_COLOR_TRANSPARENT, TEXT_DYNAMIC_COLOR_5,  TEXT_DYNAMIC_COLOR_1}
};

static const struct WindowTemplate sDefaultBagWindows[] =
{
    [WIN_ITEM_LIST] = {
        .bg = 0,
        .tilemapLeft = 14,
        .tilemapTop = 2,
        .width = 15,
        .height = 16,
        .paletteNum = 1,
        .baseBlock = 39,
    },
    [WIN_DESCRIPTION] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 14,
        .height = 6,
        .paletteNum = 1,
        .baseBlock = 279,
    },
    [WIN_POCKET_NAME] = {
        .bg = 0,
        .tilemapLeft = 4,
        .tilemapTop = 1,
        .width = 8,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 363,
    },
    [WIN_TMHM_INFO_ICONS] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 13,
        .width = 5,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 379,
    },
    [WIN_TMHM_INFO] = {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 13,
        .width = 4,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 409,
    },
    [WIN_MESSAGE] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 27,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 433,
    },
    [WIN_BAG_CAPACITY] = {
        .bg = 0,
        .tilemapLeft = 24,
        .tilemapTop = 0,
        .width = 5,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 541,
    },
    [WIN_MON_ICON_0] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 4,
        .width = 4,
        .height = 4,
        .paletteNum = 2,
        .baseBlock = 551,
    },
    [WIN_MON_ICON_1] = {
        .bg = 0,
        .tilemapLeft = 5,
        .tilemapTop = 4,
        .width = 4,
        .height = 4,
        .paletteNum = 3,
        .baseBlock = 551 + 16 * 1,
    },
    [WIN_MON_ICON_2] = {
        .bg = 0,
        .tilemapLeft = 9,
        .tilemapTop = 4,
        .width = 4,
        .height = 4,
        .paletteNum = 4,
        .baseBlock = 551 + 16 * 2,
    },
    [WIN_MON_ICON_3] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 8,
        .width = 4,
        .height = 4,
        .paletteNum = 5,
        .baseBlock = 551 + 16 * 3,
    },
    [WIN_MON_ICON_4] = {
        .bg = 0,
        .tilemapLeft = 5,
        .tilemapTop = 8,
        .width = 4,
        .height = 4,
        .paletteNum = 6,
        .baseBlock = 551 + 16 * 4,
    },
    [WIN_MON_ICON_5] = {
        .bg = 0,
        .tilemapLeft = 9,
        .tilemapTop = 8,
        .width = 4,
        .height = 4,
        .paletteNum = 7,
        .baseBlock = 551 + 16 * 5,
    },
    //[WIN_BAG_STACK_AMOUNT] = {
    //    .bg = 0,
    //    .tilemapLeft = 26,
    //    .tilemapTop = 18,
    //    .width = 4,
    //    .height = 2,
    //    .paletteNum = 1,
    //    .baseBlock = 551,
    //},
    DUMMY_WIN_TEMPLATE,
};

// Values were setup based on 551 being the start but that has since changed so just fix with macro
#define CONTEXT_BASE_BLOCK_START (551 + 16 * 6)
#define CONTEXT_BASE_BLOCK(val) (val + CONTEXT_BASE_BLOCK_START - 551)

static const struct WindowTemplate sContextMenuWindowTemplates[] =
{
    [ITEMWIN_1x1] = {
        .bg = 1,
        .tilemapLeft = 22,
        .tilemapTop = 17,
        .width = 7,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(551),
    },
    [ITEMWIN_1x2] = {
        .bg = 1,
        .tilemapLeft = 22,
        .tilemapTop = 15,
        .width = 7,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(565),
    },
    [ITEMWIN_2x2] = {
        .bg = 1,
        .tilemapLeft = 15,
        .tilemapTop = 15,
        .width = 14,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(593),
    },
    [ITEMWIN_2x3] = {
        .bg = 1,
        .tilemapLeft = 15,
        .tilemapTop = 13,
        .width = 14,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(649),
    },
    [ITEMWIN_MESSAGE] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 27,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(733),
    },
    [ITEMWIN_YESNO_LOW] = { // Yes/No tucked in corner, for toss confirm
        .bg = 1,
        .tilemapLeft = 24,
        .tilemapTop = 15,
        .width = 5,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(841),
    },
    [ITEMWIN_YESNO_HIGH] = { // Yes/No higher up, positioned above a lower message box
        .bg = 1,
        .tilemapLeft = 21,
        .tilemapTop = 9,
        .width = 5,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(861 - 20), // to share memory with YESNO_LOW as we're going past 1024 which causes issues due to OW collision masks in fill methods :/
    },
    [ITEMWIN_QUANTITY] = { // Used for quantity of items to Toss/Deposit
        .bg = 1,
        .tilemapLeft = 24,
        .tilemapTop = 17,
        .width = 5,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(881 - 20),
    },
    [ITEMWIN_QUANTITY_WIDE] = { // Used for quantity and price of items to Sell
        .bg = 1,
        .tilemapLeft = 18,
        .tilemapTop = 11,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(891 - 20),
    },
    [ITEMWIN_MONEY] = {
        .bg = 1,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = CONTEXT_BASE_BLOCK(911 - 20),
    },
};

EWRAM_DATA struct BagMenu *gBagMenu = 0;
EWRAM_DATA struct BagPosition gBagPosition = {0};
static EWRAM_DATA struct ListBuffer1 *sListBuffer1 = 0;
static EWRAM_DATA struct ListBuffer2 *sListBuffer2 = 0;
EWRAM_DATA u16 gSpecialVar_ItemId = 0;
static EWRAM_DATA bool8 sTempDisableDescriptionPrint = FALSE; // HACK
// used to hold the palette for the 4th (clockwise) item in the key item wheel
// so it can be scanline-copied into place
// This could be 12 bytes smaller if we used AllocZeroed,
// but that isn't really a lot of space
static EWRAM_DATA u16 sKeyItemWheelExtraPalette[16] = {0};

void ResetBagScrollPositions(void)
{
    gBagPosition.pocket = ITEMS_POCKET;
    memset(gBagPosition.cursorPosition, 0, sizeof(gBagPosition.cursorPosition));
    memset(gBagPosition.scrollPosition, 0, sizeof(gBagPosition.scrollPosition));
}

void CB2_BagMenuFromStartMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_FIELD, POCKETS_COUNT, CB2_ReturnToFieldWithOpenMenu);
}

void CB2_BagMenuFromBattle(void)
{
    if(Rogue_UseSafariBattle())
        // Just want to select pokeball type in safair
        GoToBagMenu(ITEMMENULOCATION_BERRY_TREE, BALLS_POCKET, CB2_SetUpReshowBattleScreenAfterMenu2);
    else if (!InBattlePyramid())
        GoToBagMenu(ITEMMENULOCATION_BATTLE, POCKETS_COUNT, CB2_SetUpReshowBattleScreenAfterMenu2);
    else
        GoToBattlePyramidBagMenu(PYRAMIDBAG_LOC_BATTLE, CB2_SetUpReshowBattleScreenAfterMenu2);
}

// Choosing berry to plant
void CB2_ChooseBerry(void)
{
    GoToBagMenu(ITEMMENULOCATION_BERRY_TREE, BERRIES_POCKET, CB2_ReturnToFieldContinueScript);
}

void CB2_ChooseBall(void)
{
    // Don't know if this menulocation type needs changing, but it seems to work
    GoToBagMenu(ITEMMENULOCATION_BERRY_TREE, BALLS_POCKET, CB2_ReturnToFieldContinueScript);
}

void CB2_ChoosePokeblock(void)
{
    // Don't know if this menulocation type needs changing, but it seems to work
    GoToBagMenu(ITEMMENULOCATION_BERRY_TREE, POKEBLOCK_POCKET, CB2_ReturnToFieldContinueScript);
}

// Choosing berry for Berry Blender or Berry Crush
void ChooseBerryForMachine(void (*exitCallback)(void))
{
    GoToBagMenu(ITEMMENULOCATION_BERRY_BLENDER_CRUSH, BERRIES_POCKET, exitCallback);
}

void CB2_GoToSellMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_SHOP, POCKETS_COUNT, CB2_ExitSellMenu);
}

void CB2_GoToItemDepositMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_ITEMPC, POCKETS_COUNT, CB2_PlayerPCExitBagMenu);
}

void ApprenticeOpenBagMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_APPRENTICE, POCKETS_COUNT, CB2_ApprenticeExitBagMenu);
    gSpecialVar_0x8005 = ITEM_NONE;
    gSpecialVar_Result = FALSE;
}

void FavorLadyOpenBagMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_FAVOR_LADY, POCKETS_COUNT, CB2_FavorLadyExitBagMenu);
    gSpecialVar_Result = FALSE;
}

void QuizLadyOpenBagMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_QUIZ_LADY, POCKETS_COUNT, CB2_QuizLadyExitBagMenu);
    gSpecialVar_Result = FALSE;
}

void GoToBagMenu(u8 location, u8 pocket, void ( *exitCallback)())
{
    gBagMenu = AllocZeroed(sizeof(*gBagMenu));
    if (gBagMenu == NULL)
    {
        // Alloc failed, exit
        SetMainCallback2(exitCallback);
    }
    else
    {
        if (location != ITEMMENULOCATION_LAST)
            gBagPosition.location = location;
        if (exitCallback)
            gBagPosition.exitCallback = exitCallback;
        if (pocket < POCKETS_COUNT)
            gBagPosition.pocket = pocket;
        if (gBagPosition.location == ITEMMENULOCATION_BERRY_TREE ||
            gBagPosition.location == ITEMMENULOCATION_BERRY_BLENDER_CRUSH)
            gBagMenu->pocketSwitchDisabled = TRUE;
        gBagMenu->newScreenCallback = NULL;
        gBagMenu->toSwapPos = NOT_SWAPPING;
        gBagMenu->pocketScrollArrowsTask = TASK_NONE;
        gBagMenu->pocketSwitchArrowsTask = TASK_NONE;
        memset(gBagMenu->spriteIds, SPRITE_NONE, sizeof(gBagMenu->spriteIds));
        memset(gBagMenu->windowIds, WINDOW_NONE, sizeof(gBagMenu->windowIds));
        SetMainCallback2(CB2_Bag);
    }
}

void CB2_BagMenuRun(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

void VBlankCB_BagMenuRun(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

#define tListTaskId        data[0]
#define tListPosition      data[1]
#define tQuantity          data[2]
#define tNeverRead         data[3]
#define tItemCount         data[8]
#define tMsgWindowId       data[10]
#define tPocketSwitchDir   data[11]
#define tPocketSwitchTimer data[12]
#define tPocketSwitchState data[13]

static void CB2_Bag(void)
{
    while(MenuHelpers_ShouldWaitForLinkRecv() != TRUE && SetupBagMenu() != TRUE && MenuHelpers_IsLinkActive() != TRUE)
        {};
}

static bool8 SetupBagMenu(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        gPaletteFade.bufferTransferDisabled = TRUE;
        gMain.state++;
        break;
    case 4:
        ResetSpriteData();
        gMain.state++;
        break;
    case 5:
        gMain.state++;
        break;
    case 6:
        if (!MenuHelpers_IsLinkActive())
            ResetTasks();
        gMain.state++;
        break;
    case 7:
        BagMenu_InitBGs();
        gBagMenu->graphicsLoadState = 0;
        gMain.state++;
        break;
    case 8:
        if (!LoadBagMenu_Graphics())
            break;
        gMain.state++;
        break;
    case 9:
        LoadBagMenuTextWindows();
        gMain.state++;
        break;
    case 10:
        UpdatePocketItemLists();
        InitPocketListPositions();
        InitPocketScrollPositions();
        gMain.state++;
        break;
    case 11:
        AllocateBagItemListBuffers();
        gMain.state++;
        break;
    case 12:
        LoadBagItemListBuffers(gBagPosition.pocket);
        gMain.state++;
        break;
    case 13:
        PrintPocketNames(gPocketNamesStringsTable[gBagPosition.pocket], 0);
        CopyPocketNameToWindow(0);

        {
            u8 i;
            for(i = 0; i < POCKETS_COUNT; ++i)
                DrawPocketIndicatorSquare(i, (i == gBagPosition.pocket));
        }

        gMain.state++;
        break;
    case 14:
        taskId = CreateBagInputHandlerTask(gBagPosition.location);
        gTasks[taskId].tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, gBagPosition.scrollPosition[gBagPosition.pocket], gBagPosition.cursorPosition[gBagPosition.pocket]);
        gTasks[taskId].tNeverRead = 0;
        gTasks[taskId].tItemCount = 0;
        gMain.state++;
        break;
    case 15:
        AddBagVisualSprite(gBagPosition.pocket);

        if(gBagPosition.pocket == TMHM_POCKET)
            SetBagSpriteVisible(FALSE);

        gMain.state++;
        break;
    case 16:
        CreateItemMenuSwapLine();
        gMain.state++;
        break;
    case 17:
        CreatePocketScrollArrowPair();
        CreatePocketSwitchArrowPair();
        gMain.state++;
        break;
    case 18:
        PrepareTMHMMoveWindow();
        gMain.state++;
        break;
    case 19:
        BlendPalettes(PALETTES_ALL, 16, 0);
        gMain.state++;
        break;
    case 20:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gPaletteFade.bufferTransferDisabled = FALSE;
        gMain.state++;
        break;
    default:
        SetVBlankCallback(VBlankCB_BagMenuRun);
        SetMainCallback2(CB2_BagMenuRun);
        return TRUE;
    }
    return FALSE;
}

static void BagMenu_InitBGs(void)
{
    ResetVramOamAndBgCntRegs();
    memset(gBagMenu->tilemapBuffer, 0, sizeof(gBagMenu->tilemapBuffer));
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates_ItemMenu, ARRAY_COUNT(sBgTemplates_ItemMenu));
    SetBgTilemapBuffer(2, gBagMenu->tilemapBuffer);
    ResetAllBgsCoordinates();
    ScheduleBgCopyTilemapToVram(2);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
}

static bool8 LoadBagMenu_Graphics(void)
{
    switch (gBagMenu->graphicsLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(2, gBagScreen_Gfx, 0, 0, 0);
        gBagMenu->graphicsLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            if(gBagPosition.pocket == TMHM_POCKET)
                LZDecompressWram(gBagScreen_GfxTileMapTMHM, gBagMenu->tilemapBuffer);
            else
                LZDecompressWram(gBagScreen_GfxTileMap, gBagMenu->tilemapBuffer);
            gBagMenu->graphicsLoadState++;
        }
        break;
    case 2:
        LoadCompressedPalette(gBagScreenMale_Pal, BG_PLTT_ID(0), 2 * PLTT_SIZE_4BPP);
        gBagMenu->graphicsLoadState++;
        break;
    case 3:
        LoadCompressedSpriteSheet(&gBagSpriteSheet[RoguePlayer_GetBagGfxVariant()]);
        gBagMenu->graphicsLoadState++;
        break;
    case 4:
        LoadCompressedSpritePalette(&gBagPaletteTable[RoguePlayer_GetBagGfxVariant()]);
        gBagMenu->graphicsLoadState++;
        break;
    default:
        LoadListMenuSwapLineGfx();
        gBagMenu->graphicsLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static u8 CreateBagInputHandlerTask(u8 location)
{
    u8 taskId;
    if (location == ITEMMENULOCATION_WALLY)
        taskId = CreateTask(Task_WallyTutorialBagMenu, 0);
    else
        taskId = CreateTask(Task_BagMenu_HandleInput, 0);
    return taskId;
}

static void AllocateBagItemListBuffers(void)
{
    sListBuffer1 = Alloc(sizeof(*sListBuffer1));
    sListBuffer2 = Alloc(sizeof(*sListBuffer2));
}

static void LoadBagItemListBuffers(u8 pocketId)
{
    u16 i;
    struct BagPocket *pocket = &gBagPockets[pocketId];
    struct ListMenuItem *subBuffer;

    if (!gBagMenu->hideCloseBagText)
    {
        for (i = 0; i < gBagMenu->numItemStacks[pocketId] - 1; i++)
        {
            GetItemName(sListBuffer2->name[i], pocket->itemSlots[i].itemId);
            subBuffer = sListBuffer1->subBuffers;
            subBuffer[i].name = sListBuffer2->name[i];
            subBuffer[i].id = i;
        }
        StringCopy(sListBuffer2->name[i], gText_CloseBag);
        subBuffer = sListBuffer1->subBuffers;
        subBuffer[i].name = sListBuffer2->name[i];
        subBuffer[i].id = LIST_CANCEL;
    }
    else
    {
        for (i = 0; i < gBagMenu->numItemStacks[pocketId]; i++)
        {
            GetItemName(sListBuffer2->name[i], pocket->itemSlots[i].itemId);
            subBuffer = sListBuffer1->subBuffers;
            subBuffer[i].name = sListBuffer2->name[i];
            subBuffer[i].id = i;
        }
    }
    gMultiuseListMenuTemplate = sItemListMenu;
    gMultiuseListMenuTemplate.totalItems = gBagMenu->numItemStacks[pocketId];
    gMultiuseListMenuTemplate.items = sListBuffer1->subBuffers;
    gMultiuseListMenuTemplate.maxShowed = gBagMenu->numShownItems[pocketId];
}

static void GetItemName(u8 *dest, u16 itemId)
{
    switch (gBagPosition.pocket)
    {
    case TMHM_POCKET:
        StringCopy(gStringVar2, gMoveNames[ItemIdToBattleMoveId(itemId)]);
        if (itemId >= ITEM_TR01)
        {
            // Get TR number
            ConvertIntToDecimalStringN(gStringVar1, itemId - ITEM_TR01 + 1, STR_CONV_MODE_LEADING_ZEROS, 2);
            StringExpandPlaceholders(dest, gText_NumberItem_HM);
        }
        else if (itemId >= ITEM_HM01)
        {
            // Get HM number
            ConvertIntToDecimalStringN(gStringVar1, itemId - ITEM_HM01 + 1, STR_CONV_MODE_LEADING_ZEROS, 1);
            StringExpandPlaceholders(dest, gText_NumberItem_HM);
        }
        else
        {
            // Get TM number
            ConvertIntToDecimalStringN(gStringVar1, itemId - ITEM_TM01 + 1, STR_CONV_MODE_LEADING_ZEROS, 2);
            StringExpandPlaceholders(dest, gText_NumberItem_HM);
        }
        break;
    case BERRIES_POCKET:
        ConvertIntToDecimalStringN(gStringVar1, itemId - FIRST_BERRY_INDEX + 1, STR_CONV_MODE_LEADING_ZEROS, 2);
        CopyItemName(itemId, gStringVar2);
        StringExpandPlaceholders(dest, gText_NumberItem_TMBerry);
        break;
    default:
        CopyItemName(itemId, dest);
        break;
    }
}

static void BagMenu_MoveCursorCallback(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    if(onInit)
    {
        PrintBagCapacity();
    }

    if (onInit != TRUE)
    {
        PlaySE(SE_SELECT);
        ShakeBagSprite();
    }
    if (gBagMenu->toSwapPos == NOT_SWAPPING)
    {
        RemoveBagItemIconSprite(gBagMenu->itemIconSlot ^ 1);

        // Don't use icon on TM's page as it will overlap the party preview
        if(gBagPosition.pocket != TMHM_POCKET)
        {
            if (itemIndex != LIST_CANCEL)
            AddBagItemIconSprite(BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, itemIndex), gBagMenu->itemIconSlot);
            else
            AddBagItemIconSprite(ITEM_LIST_END, gBagMenu->itemIconSlot);
        }

        gBagMenu->itemIconSlot ^= 1;
        if (!gBagMenu->inhibitItemDescriptionPrint)
            PrintItemDescription(itemIndex);
    }
}

static void BagMenu_ItemPrintCallback(u8 windowId, u32 itemIndex, u8 y)
{
    u16 itemId;
    u16 itemQuantity;
    s32 offset;

    if (itemIndex != LIST_CANCEL)
    {
        if (gBagMenu->toSwapPos != NOT_SWAPPING)
        {
            // Swapping items, draw cursor at original item's location
            if (gBagMenu->toSwapPos == (u8)itemIndex)
                BagMenu_PrintCursorAtPos(y, COLORID_GRAY_CURSOR);
            else
                BagMenu_PrintCursorAtPos(y, COLORID_NONE);
        }

        itemId = BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, itemIndex);
        itemQuantity = BagGetQuantityByPocketPosition(gBagPosition.pocket + 1, itemIndex);

        // Draw TM icon
        if (itemId >= ITEM_TR01 && itemId <= ITEM_TR50)
            BlitBitmapToWindow(windowId, gBagMenuTRIcon_Gfx, 8, y - 1, 16, 16);
        if (itemId >= ITEM_TM01 && itemId <= ITEM_TM50)
            BlitBitmapToWindow(windowId, gBagMenuTMIcon_Gfx, 8, y - 1, 16, 16);
        else if (itemId >= ITEM_HM01 && itemId <= ITEM_HM08)
            BlitBitmapToWindow(windowId, gBagMenuHMIcon_Gfx, 8, y - 1, 16, 16);

        if (gBagPosition.pocket == BERRIES_POCKET)
        {
            // Print berry quantity
            ConvertIntToDecimalStringN(gStringVar1, itemQuantity, STR_CONV_MODE_RIGHT_ALIGN, BERRY_CAPACITY_DIGITS);
            StringExpandPlaceholders(gStringVar4, gText_xVar1);
            offset = GetStringRightAlignXOffset(FONT_NARROW, gStringVar4, 119);
            BagMenu_Print(windowId, FONT_NARROW, gStringVar4, offset, y, 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL);
        }
        else if(gBagPosition.pocket == TMHM_POCKET)
        {
            // Prefer not to print item quantity for regular TMs/HMs as they are infinite use
            if(itemQuantity > 1 || (itemId >= ITEM_TR01 && itemId <= ITEM_TR50))
            {
                // Print item quantity
                ConvertIntToDecimalStringN(gStringVar1, itemQuantity, STR_CONV_MODE_RIGHT_ALIGN, BAG_ITEM_CAPACITY_DIGITS);
                StringExpandPlaceholders(gStringVar4, gText_xVar1);
                offset = GetStringRightAlignXOffset(FONT_NARROW, gStringVar4, 119);
                BagMenu_Print(windowId, FONT_NARROW, gStringVar4, offset, y, 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL);
            }
        }
        else if (gBagPosition.pocket != KEYITEMS_POCKET)
        {
            // RogueNote: Always print item count, for these pockets
            ConvertIntToDecimalStringN(gStringVar1, itemQuantity, STR_CONV_MODE_RIGHT_ALIGN, BAG_ITEM_CAPACITY_DIGITS);
            StringExpandPlaceholders(gStringVar4, gText_xVar1);
            offset = GetStringRightAlignXOffset(FONT_NARROW, gStringVar4, 119);
            BagMenu_Print(windowId, FONT_NARROW, gStringVar4, offset, y, 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL);
        }
        else
        {
            if(itemQuantity > 1)
            //if(ItemId_GetImportance(itemId) == FALSE || itemQuantity > 1)
            {
                // Print item quantity
                ConvertIntToDecimalStringN(gStringVar1, itemQuantity, STR_CONV_MODE_RIGHT_ALIGN, BAG_ITEM_CAPACITY_DIGITS);
                StringExpandPlaceholders(gStringVar4, gText_xVar1);
                offset = GetStringRightAlignXOffset(FONT_NARROW, gStringVar4, 119);
                BagMenu_Print(windowId, FONT_NARROW, gStringVar4, offset, y, 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL);
            }

            if (itemId && (offset = RegisteredItemIndex(itemId)) >= 0)
            {
                // Print registered icon
                BlitBitmapToWindow(windowId, sRegisteredSelect_Gfx[offset], 96, y - 1, 24, 16);
            }
        }
    }
}

static void PrintItemDescription(int itemIndex)
{
    if(sTempDisableDescriptionPrint)
        return;

    if(gBagPosition.pocket == TMHM_POCKET)
    {
        // Print move info by default (Better UX for TRs)
        ClearWindowTilemap(WIN_DESCRIPTION);
        PrintTMHMMoveData(BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, itemIndex));
        PutWindowTilemap(WIN_TMHM_INFO_ICONS);
        PutWindowTilemap(WIN_TMHM_INFO);

        PutWindowTilemap(WIN_MON_ICON_0);
        PutWindowTilemap(WIN_MON_ICON_1);
        PutWindowTilemap(WIN_MON_ICON_2);
        PutWindowTilemap(WIN_MON_ICON_3);
        PutWindowTilemap(WIN_MON_ICON_4);
        PutWindowTilemap(WIN_MON_ICON_5);

        ScheduleBgCopyTilemapToVram(0);
    }
    else
    {
        const u8 *str;

        ClearWindowTilemap(WIN_MON_ICON_0);
        ClearWindowTilemap(WIN_MON_ICON_1);
        ClearWindowTilemap(WIN_MON_ICON_2);
        ClearWindowTilemap(WIN_MON_ICON_3);
        ClearWindowTilemap(WIN_MON_ICON_4);
        ClearWindowTilemap(WIN_MON_ICON_5);

        if (itemIndex != LIST_CANCEL)
        {
            str = ItemId_GetDescription(BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, itemIndex));
        }
        else
        {
            // Print 'Cancel' description
            StringCopy(gStringVar1, gBagMenu_ReturnToStrings[gBagPosition.location]);
            StringExpandPlaceholders(gStringVar4, gText_ReturnToVar1);
            str = gStringVar4;
        }
        FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, str, 3, 1, 0, 0, 0, COLORID_NORMAL);
    }
}

static void PrintBagCapacity()
{
    u16 usedSlots;
    const u8 *str = gText_Var1SlashVar2;
    u16 freeSlots = GetBagUnreservedFreeSlots();
    u16 totalSlots = GetBagUnreservedTotalSlots();
    //u16 stackSize = Rogue_GetBagPocketAmountPerItem(gBagPosition.pocket);

#ifdef ROGUE_DEBUG
    // Debug: show the reserverd pocket capacity in key items pocket
    if(gBagPosition.pocket == KEYITEMS_POCKET)
    {
        freeSlots = GetBagReservedFreeSlots();
        totalSlots = GetBagReservedTotalSlots();
    }
    else
#endif
    // Display unlimited to make it clear that this pocket doesn't take up space
    if(ItemPocketUsesReservedSlots(gBagPosition.pocket))
    {
        
        FillWindowPixelBuffer(WIN_BAG_CAPACITY, PIXEL_FILL(0));
        BagMenu_Print(WIN_BAG_CAPACITY, FONT_NARROW, gText_Unlimited, 2, 0, 0, 0, 0, COLORID_BAG_CAPACITY);
        return;
    }

    usedSlots = totalSlots - freeSlots;

    // Pring slot info
    ConvertIntToDecimalStringN(gStringVar1, usedSlots, STR_CONV_MODE_RIGHT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar2, totalSlots, STR_CONV_MODE_LEFT_ALIGN, 3);

    StringExpandPlaceholders(gStringVar4, gText_Var1SlashVar2);
    str = gStringVar4;

    FillWindowPixelBuffer(WIN_BAG_CAPACITY, PIXEL_FILL(0));
    BagMenu_Print(WIN_BAG_CAPACITY, FONT_NARROW, str, 2, 0, 0, 0, 0, COLORID_BAG_CAPACITY);

    // Print slot size
    //ConvertIntToDecimalStringN(gStringVar1, stackSize, STR_CONV_MODE_RIGHT_ALIGN, 3);
    //StringExpandPlaceholders(gStringVar4, gText_xVar1);

    //FillWindowPixelBuffer(WIN_BAG_STACK_AMOUNT, PIXEL_FILL(0));
    //BagMenu_Print(WIN_BAG_STACK_AMOUNT, FONT_NARROW, str, 0, 0, 0, 0, 0, COLORID_BAG_CAPACITY);
}

static void BagMenu_PrintCursor(u8 listTaskId, u8 colorIndex)
{
    BagMenu_PrintCursorAtPos(ListMenuGetYCoordForPrintingArrowCursor(listTaskId), colorIndex);
}

static void BagMenu_PrintCursorAtPos(u8 y, u8 colorIndex)
{
    if (colorIndex == COLORID_NONE)
        FillWindowPixelRect(WIN_ITEM_LIST, PIXEL_FILL(0), 0, y, GetMenuCursorDimensionByFont(FONT_NORMAL, 0), GetMenuCursorDimensionByFont(FONT_NORMAL, 1));
    else
        BagMenu_Print(WIN_ITEM_LIST, FONT_NORMAL, gText_SelectorArrow2, 0, y, 0, 0, 0, colorIndex);

}

static void CreatePocketScrollArrowPair(void)
{
    if (gBagMenu->pocketScrollArrowsTask == TASK_NONE)
        gBagMenu->pocketScrollArrowsTask = AddScrollIndicatorArrowPairParameterized(
            SCROLL_ARROW_UP,
            172,
            12,
            148,
            gBagMenu->numItemStacks[gBagPosition.pocket] - gBagMenu->numShownItems[gBagPosition.pocket],
            TAG_POCKET_SCROLL_ARROW,
            TAG_POCKET_SCROLL_ARROW,
            &gBagPosition.scrollPosition[gBagPosition.pocket]);
}

void BagDestroyPocketScrollArrowPair(void)
{
    if (gBagMenu->pocketScrollArrowsTask != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(gBagMenu->pocketScrollArrowsTask);
        gBagMenu->pocketScrollArrowsTask = TASK_NONE;
    }
    DestroyPocketSwitchArrowPair();
}

static void CreatePocketSwitchArrowPair(void)
{
    if (gBagMenu->pocketSwitchDisabled != TRUE && gBagMenu->pocketSwitchArrowsTask == TASK_NONE)
        gBagMenu->pocketSwitchArrowsTask = AddScrollIndicatorArrowPair(&sBagScrollArrowsTemplate, &gBagPosition.pocketSwitchArrowPos);
}

static void DestroyPocketSwitchArrowPair(void)
{
    if (gBagMenu->pocketSwitchArrowsTask != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(gBagMenu->pocketSwitchArrowsTask);
        gBagMenu->pocketSwitchArrowsTask = TASK_NONE;
    }
}

static void FreeBagMenu(void)
{
    Free(sListBuffer2);
    Free(sListBuffer1);
    FreeAllWindowBuffers();
    Free(gBagMenu);
}

void Task_FadeAndCloseBagMenu(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_CloseBagMenu;
}

static void Task_CloseBagMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        DestroyListMenuTask(tListTaskId, &gBagPosition.scrollPosition[gBagPosition.pocket], &gBagPosition.cursorPosition[gBagPosition.pocket]);

        // If ready for a new screen (e.g. party menu for giving an item) go to that screen
        // Otherwise exit the bag and use callback set up when the bag was first opened
        if (gBagMenu->newScreenCallback != NULL)
            SetMainCallback2(gBagMenu->newScreenCallback);
        else
            SetMainCallback2(gBagPosition.exitCallback);

        BagDestroyPocketScrollArrowPair();
        ResetSpriteData();
        FreeAllSpritePalettes();
        FreeBagMenu();
        DestroyTask(taskId);
    }
}

void UpdatePocketItemList(u8 pocketId)
{
    u16 i;
    struct BagPocket *pocket = &gBagPockets[pocketId];
    switch (pocketId)
    {
    case TMHM_POCKET:
    case BERRIES_POCKET:
        SortBerriesOrTMHMs(pocket);
        break;
    default:
        CompactItemsInBagPocket(pocket);
        break;
    }

    gBagMenu->numItemStacks[pocketId] = 0;

    for (i = 0; i < pocket->capacity && pocket->itemSlots[i].itemId; i++)
        gBagMenu->numItemStacks[pocketId]++;

    if (!gBagMenu->hideCloseBagText)
        gBagMenu->numItemStacks[pocketId]++;

    if (gBagMenu->numItemStacks[pocketId] > MAX_ITEMS_SHOWN)
        gBagMenu->numShownItems[pocketId] = MAX_ITEMS_SHOWN;
    else
        gBagMenu->numShownItems[pocketId] = gBagMenu->numItemStacks[pocketId];
}

static void UpdatePocketItemLists(void)
{
    u8 i;
    for (i = 0; i < POCKETS_COUNT; i++)
        UpdatePocketItemList(i);
}

void UpdatePocketListPosition(u8 pocketId)
{
    SetCursorWithinListBounds(&gBagPosition.scrollPosition[pocketId], &gBagPosition.cursorPosition[pocketId], gBagMenu->numShownItems[pocketId], gBagMenu->numItemStacks[pocketId]);
}

static void InitPocketListPositions(void)
{
    u8 i;
    for (i = 0; i < POCKETS_COUNT; i++)
        UpdatePocketListPosition(i);
}

static void InitPocketScrollPositions(void)
{
    u8 i;
    for (i = 0; i < POCKETS_COUNT; i++)
        SetCursorScrollWithinListBounds(&gBagPosition.scrollPosition[i], &gBagPosition.cursorPosition[i], gBagMenu->numShownItems[i], gBagMenu->numItemStacks[i], MAX_ITEMS_SHOWN);
}

u8 GetItemListPosition(u8 pocketId)
{
    return gBagPosition.scrollPosition[pocketId] + gBagPosition.cursorPosition[pocketId];
}

void DisplayItemMessage(u8 taskId, u8 fontId, const u8 *str, void (*callback)(u8 taskId))
{
    s16 *data = gTasks[taskId].data;

    tMsgWindowId = AddItemMessageWindow(ITEMWIN_MESSAGE);
    FillWindowPixelBuffer(tMsgWindowId, PIXEL_FILL(1));
    DisplayMessageAndContinueTask(taskId, tMsgWindowId, 10, 13, fontId, GetPlayerTextSpeedDelay(), str, callback);
    ScheduleBgCopyTilemapToVram(1);
}

void CloseItemMessage(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];
    RemoveItemMessageWindow(ITEMWIN_MESSAGE);
    DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
    UpdatePocketItemList(gBagPosition.pocket);
    UpdatePocketListPosition(gBagPosition.pocket);
    LoadBagItemListBuffers(gBagPosition.pocket);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
    ScheduleBgCopyTilemapToVram(0);
    ReturnToItemList(taskId);
}

static void AddItemQuantityWindow(u8 windowType)
{
    PrintItemQuantity(BagMenu_AddWindow(windowType), 1);
}

static void PrintItemQuantity(u8 windowId, s16 quantity)
{
    u8 numDigits = (gBagPosition.pocket == BERRIES_POCKET) ? BERRY_CAPACITY_DIGITS : BAG_ITEM_CAPACITY_DIGITS;
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEADING_ZEROS, numDigits);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gStringVar4, GetStringCenterAlignXOffset(FONT_NORMAL, gStringVar4, 0x28), 2, 0, 0);
}

// Prints the quantity of items to be sold and the amount that would be earned
static void PrintItemSoldAmount(int windowId, int numSold, int moneyEarned)
{
    u8 numDigits = (gBagPosition.pocket == BERRIES_POCKET) ? BERRY_CAPACITY_DIGITS : BAG_ITEM_CAPACITY_DIGITS;
    ConvertIntToDecimalStringN(gStringVar1, numSold, STR_CONV_MODE_LEADING_ZEROS, numDigits);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, gStringVar4, 0, 1, TEXT_SKIP_DRAW, 0);
    PrintMoneyAmount(windowId, 38, 1, moneyEarned, 0);
}

static void Task_BagMenu_HandleInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];
    s32 listPosition;

    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE && !gPaletteFade.active)
    {
        switch (GetSwitchBagPocketDirection())
        {
        case SWITCH_POCKET_LEFT:
            SwitchBagPocket(taskId, MENU_CURSOR_DELTA_LEFT, FALSE);
            return;
        case SWITCH_POCKET_RIGHT:
            SwitchBagPocket(taskId, MENU_CURSOR_DELTA_RIGHT, FALSE);
            return;
        default:
            if (JOY_NEW(SELECT_BUTTON))
            {
                PlaySE(SE_SELECT);
                BagDestroyPocketScrollArrowPair();
                Task_ItemContext_Sort(taskId);
                return;
            }
            break;
        }

        listPosition = ListMenu_ProcessInput(tListTaskId);
        ListMenuGetScrollAndRow(tListTaskId, scrollPos, cursorPos);
        switch (listPosition)
        {
        case LIST_NOTHING_CHOSEN:
            break;
        case LIST_CANCEL:
            if (gBagPosition.location == ITEMMENULOCATION_BERRY_BLENDER_CRUSH)
            {
                PlaySE(SE_FAILURE);
                break;
            }
            PlaySE(SE_SELECT);
            gSpecialVar_ItemId = ITEM_NONE;
            gTasks[taskId].func = Task_FadeAndCloseBagMenu;
            break;
        default: // A_BUTTON
            PlaySE(SE_SELECT);
            BagDestroyPocketScrollArrowPair();
            BagMenu_PrintCursor(tListTaskId, COLORID_GRAY_CURSOR);
            tListPosition = listPosition;
            tQuantity = BagGetQuantityByPocketPosition(gBagPosition.pocket + 1, listPosition);
            gSpecialVar_ItemId = BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, listPosition);

            // Just update the active safari ball and act as if we didn't click anything
            if(gMain.inBattle && Rogue_UseSafariBattle())
            {
                RogueSafari_SetActivePokeballType(gSpecialVar_ItemId);
                gSpecialVar_ItemId = ITEM_NONE;
            }

            sContextMenuFuncs[gBagPosition.location](taskId);
            break;
        }
    }
}

static void ReturnToItemList(u8 taskId)
{
    CreatePocketScrollArrowPair();
    CreatePocketSwitchArrowPair();
    
    if(gBagPosition.pocket == TMHM_POCKET)
    {
        ClearWindowTilemap(WIN_DESCRIPTION);
        PutWindowTilemap(WIN_TMHM_INFO_ICONS);
        PutWindowTilemap(WIN_TMHM_INFO);
        PutWindowTilemap(WIN_MON_ICON_0);
        PutWindowTilemap(WIN_MON_ICON_1);
        PutWindowTilemap(WIN_MON_ICON_2);
        PutWindowTilemap(WIN_MON_ICON_3);
        PutWindowTilemap(WIN_MON_ICON_4);
        PutWindowTilemap(WIN_MON_ICON_5);
    }
    else
    {
        ClearWindowTilemap(WIN_TMHM_INFO_ICONS);
        ClearWindowTilemap(WIN_TMHM_INFO);
        ClearWindowTilemap(WIN_MON_ICON_0);
        ClearWindowTilemap(WIN_MON_ICON_1);
        ClearWindowTilemap(WIN_MON_ICON_2);
        ClearWindowTilemap(WIN_MON_ICON_3);
        ClearWindowTilemap(WIN_MON_ICON_4);
        ClearWindowTilemap(WIN_MON_ICON_5);
        PutWindowTilemap(WIN_DESCRIPTION);
    }

    PutWindowTilemap(WIN_BAG_CAPACITY);
    //PutWindowTilemap(WIN_BAG_STACK_AMOUNT);
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = Task_BagMenu_HandleInput;
}

static u8 GetSwitchBagPocketDirection(void)
{
    u8 LRKeys;
    if (gBagMenu->pocketSwitchDisabled)
        return SWITCH_POCKET_NONE;
    LRKeys = GetLRKeysPressed();
    if (JOY_NEW(DPAD_LEFT) || LRKeys == MENU_L_PRESSED)
    {
        PlaySE(SE_SELECT);
        return SWITCH_POCKET_LEFT;
    }
    if (JOY_NEW(DPAD_RIGHT) || LRKeys == MENU_R_PRESSED)
    {
        PlaySE(SE_SELECT);
        return SWITCH_POCKET_RIGHT;
    }
    return SWITCH_POCKET_NONE;
}

static void ChangeBagPocketId(u8 *bagPocketId, s8 deltaBagPocketId)
{
    u8 i;
    s16 pocket = *bagPocketId;
    for(i = 0; i < POCKETS_COUNT; ++i)
    {
        pocket = (pocket + deltaBagPocketId);

        if(pocket >= 0)
            pocket %= POCKETS_COUNT;
        else
            pocket += POCKETS_COUNT;

        if(gBagPockets[pocket].capacity != 0)
        {
            // Found an non-empty pocket to jump to
            *bagPocketId = (u8)pocket;
            return;
        }
    }

    // If we've gotten here, it means there isn't any other valid pocket to move to


    //if (deltaBagPocketId == MENU_CURSOR_DELTA_RIGHT && *bagPocketId == POCKETS_COUNT - 1)
    //    *bagPocketId = 0;
    //else if (deltaBagPocketId == MENU_CURSOR_DELTA_LEFT && *bagPocketId == 0)
    //    *bagPocketId = POCKETS_COUNT - 1;
    //else
    //    *bagPocketId += deltaBagPocketId;
}

static void SwitchBagPocket(u8 taskId, s16 deltaBagPocketId, bool16 skipEraseList)
{
    s16* data = gTasks[taskId].data;
    u8 oldPocket = gBagPosition.pocket;
    u8 newPocket;

    tPocketSwitchState = 0;
    tPocketSwitchTimer = 0;
    tPocketSwitchDir = deltaBagPocketId;
    if (!skipEraseList)
    {
        ClearWindowTilemap(WIN_ITEM_LIST);
        ClearWindowTilemap(WIN_DESCRIPTION);
        DestroyListMenuTask(tListTaskId, &gBagPosition.scrollPosition[gBagPosition.pocket], &gBagPosition.cursorPosition[gBagPosition.pocket]);
        ScheduleBgCopyTilemapToVram(0);
        gSprites[gBagMenu->spriteIds[ITEMMENUSPRITE_ITEM + (gBagMenu->itemIconSlot ^ 1)]].invisible = TRUE;
        BagDestroyPocketScrollArrowPair();
    }
    newPocket = gBagPosition.pocket;
    ChangeBagPocketId(&newPocket, deltaBagPocketId);
    if (deltaBagPocketId == MENU_CURSOR_DELTA_RIGHT)
    {
        PrintPocketNames(gPocketNamesStringsTable[gBagPosition.pocket], gPocketNamesStringsTable[newPocket]);
        CopyPocketNameToWindow(0);
    }
    else
    {
        PrintPocketNames(gPocketNamesStringsTable[newPocket], gPocketNamesStringsTable[gBagPosition.pocket]);
        CopyPocketNameToWindow(8);
    }

    if(newPocket == TMHM_POCKET)
    {
        u8 i;
        LZDecompressWram(gBagScreen_GfxTileMapTMHM, gBagMenu->tilemapBuffer);

        for(i = 0; i < POCKETS_COUNT; ++i)
            DrawPocketIndicatorSquare(i, FALSE);

        SetBagSpriteVisible(FALSE);
    }
    else  if(oldPocket == TMHM_POCKET)
    {
        u8 i;
        LZDecompressWram(gBagScreen_GfxTileMap, gBagMenu->tilemapBuffer);

        for(i = 0; i < POCKETS_COUNT; ++i)
            DrawPocketIndicatorSquare(i, FALSE);

        SetBagSpriteVisible(TRUE);

        // Hide previously visible sprites
        ClearWindowTilemap(WIN_MON_ICON_0);
        ClearWindowTilemap(WIN_MON_ICON_1);
        ClearWindowTilemap(WIN_MON_ICON_2);
        ClearWindowTilemap(WIN_MON_ICON_3);
        ClearWindowTilemap(WIN_MON_ICON_4);
        ClearWindowTilemap(WIN_MON_ICON_5);
        CopyWindowToVram(WIN_MON_ICON_0, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_1, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_2, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_3, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_4, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_5, COPYWIN_GFX);
    }

    DrawPocketIndicatorSquare(gBagPosition.pocket, FALSE);
    DrawPocketIndicatorSquare(newPocket, TRUE);
    FillBgTilemapBufferRect_Palette0(2, 11, 14, 2, 15, 16);
    ScheduleBgCopyTilemapToVram(2);
    SetBagVisualPocketId(newPocket, TRUE);
    RemoveBagSprite(ITEMMENUSPRITE_BALL);
    AddSwitchPocketRotatingBallSprite(deltaBagPocketId);
    SetTaskFuncWithFollowupFunc(taskId, Task_SwitchBagPocket, gTasks[taskId].func);
}

static void Task_SwitchBagPocket(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!MenuHelpers_IsLinkActive() && !IsWallysBag())
    {
        switch (GetSwitchBagPocketDirection())
        {
        case SWITCH_POCKET_LEFT:
            ChangeBagPocketId(&gBagPosition.pocket, tPocketSwitchDir);
            SwitchTaskToFollowupFunc(taskId);
            SwitchBagPocket(taskId, MENU_CURSOR_DELTA_LEFT, TRUE);
            return;
        case SWITCH_POCKET_RIGHT:
            ChangeBagPocketId(&gBagPosition.pocket, tPocketSwitchDir);
            SwitchTaskToFollowupFunc(taskId);
            SwitchBagPocket(taskId, MENU_CURSOR_DELTA_RIGHT, TRUE);
            return;
        }
    }
    switch (tPocketSwitchState)
    {
    case 0:
        DrawItemListBgRow(tPocketSwitchTimer);
        if (!(++tPocketSwitchTimer & 1))
        {
            if (tPocketSwitchDir == MENU_CURSOR_DELTA_RIGHT)
                CopyPocketNameToWindow((u8)(tPocketSwitchTimer >> 1));
            else
                CopyPocketNameToWindow((u8)(8 - (tPocketSwitchTimer >> 1)));
        }
        if (tPocketSwitchTimer == 16)
            tPocketSwitchState++;
        break;
    case 1:
        ChangeBagPocketId(&gBagPosition.pocket, tPocketSwitchDir);
        LoadBagItemListBuffers(gBagPosition.pocket);
        tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, gBagPosition.scrollPosition[gBagPosition.pocket], gBagPosition.cursorPosition[gBagPosition.pocket]);
        PutWindowTilemap(WIN_BAG_CAPACITY);
        //PutWindowTilemap(WIN_BAG_STACK_AMOUNT);
        PutWindowTilemap(WIN_POCKET_NAME);

        if(gBagPosition.pocket == TMHM_POCKET)
        {
            PutWindowTilemap(WIN_TMHM_INFO_ICONS);
            PutWindowTilemap(WIN_TMHM_INFO);
            PutWindowTilemap(WIN_MON_ICON_0);
            PutWindowTilemap(WIN_MON_ICON_1);
            PutWindowTilemap(WIN_MON_ICON_2);
            PutWindowTilemap(WIN_MON_ICON_3);
            PutWindowTilemap(WIN_MON_ICON_4);
            PutWindowTilemap(WIN_MON_ICON_5);
        }
        else
        {
            PutWindowTilemap(WIN_DESCRIPTION);
            ClearWindowTilemap(WIN_MON_ICON_0);
            ClearWindowTilemap(WIN_MON_ICON_1);
            ClearWindowTilemap(WIN_MON_ICON_2);
            ClearWindowTilemap(WIN_MON_ICON_3);
            ClearWindowTilemap(WIN_MON_ICON_4);
            ClearWindowTilemap(WIN_MON_ICON_5);
        }

        ScheduleBgCopyTilemapToVram(0);
        CreatePocketScrollArrowPair();
        CreatePocketSwitchArrowPair();
        SwitchTaskToFollowupFunc(taskId);
    }
}

// The background of the item list is a lighter color than the surrounding menu
// When the pocket is switched this lighter background is redrawn row by row
static void DrawItemListBgRow(u8 y)
{
    FillBgTilemapBufferRect_Palette0(2, 17, 14, y + 2, 15, 1);
    ScheduleBgCopyTilemapToVram(2);
}

static void DrawPocketIndicatorSquare(u8 x, bool8 isCurrentPocket)
{
    u8 offset = 5;

    if(POCKETS_COUNT > 4)
    {
        offset -= (POCKETS_COUNT - 4) / 2;
    }

    if (!isCurrentPocket)
    {
        if(gBagPockets[x].capacity == 0)
            FillBgTilemapBufferRect_Palette0(2, 0x102C, x + offset, 3, 1, 1);
        else
            FillBgTilemapBufferRect_Palette0(2, 0x1017, x + offset, 3, 1, 1);
    }
    else
        FillBgTilemapBufferRect_Palette0(2, 0x102B, x + offset, 3, 1, 1);

    ScheduleBgCopyTilemapToVram(2);
}

static bool8 UNUSED CanSwapItems(void)
{
    // Swaps can only be done from the field or in battle (as opposed to while selling items, for example)
    if (gBagPosition.location == ITEMMENULOCATION_FIELD
     || gBagPosition.location == ITEMMENULOCATION_BATTLE)
    {
        // TMHMs and berries are numbered, and so may not be swapped
        if (gBagPosition.pocket != TMHM_POCKET
         && gBagPosition.pocket != BERRIES_POCKET)
            return TRUE;
    }
    return FALSE;
}

static void UNUSED StartItemSwap(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    ListMenuSetUnkIndicatorsStructField(tListTaskId, 16, 1);
    tListPosition = gBagPosition.scrollPosition[gBagPosition.pocket] + gBagPosition.cursorPosition[gBagPosition.pocket];
    gBagMenu->toSwapPos = tListPosition;
    CopyItemName(BagGetItemIdByPocketPosition(gBagPosition.pocket + 1, tListPosition), gStringVar1);
    StringExpandPlaceholders(gStringVar4, gText_MoveVar1Where);
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
    UpdateItemMenuSwapLinePos(tListPosition);
    DestroyPocketSwitchArrowPair();
    BagMenu_PrintCursor(tListTaskId, COLORID_GRAY_CURSOR);
    gTasks[taskId].func = Task_HandleSwappingItemsInput;
}

static void Task_HandleSwappingItemsInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        if (JOY_NEW(SELECT_BUTTON))
        {
            PlaySE(SE_SELECT);
            ListMenuGetScrollAndRow(tListTaskId, &gBagPosition.scrollPosition[gBagPosition.pocket], &gBagPosition.cursorPosition[gBagPosition.pocket]);
            DoItemSwap(taskId);
        }
        else
        {
            s32 input = ListMenu_ProcessInput(tListTaskId);
            ListMenuGetScrollAndRow(tListTaskId, &gBagPosition.scrollPosition[gBagPosition.pocket], &gBagPosition.cursorPosition[gBagPosition.pocket]);
            SetItemMenuSwapLineInvisibility(FALSE);
            UpdateItemMenuSwapLinePos(gBagPosition.cursorPosition[gBagPosition.pocket]);
            switch (input)
            {
            case LIST_NOTHING_CHOSEN:
                break;
            case LIST_CANCEL:
                PlaySE(SE_SELECT);
                if (JOY_NEW(A_BUTTON))
                    DoItemSwap(taskId);
                else
                    CancelItemSwap(taskId);
                break;
            default:
                PlaySE(SE_SELECT);
                DoItemSwap(taskId);
                break;
            }
        }
    }
}

static void DoItemSwap(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];
    u16 realPos = (*scrollPos + *cursorPos);

    if (tListPosition == realPos || tListPosition == realPos - 1)
    {
        // Position is the same as the original, cancel
        CancelItemSwap(taskId);
    }
    else
    {
        MoveItemSlotInList(gBagPockets[gBagPosition.pocket].itemSlots, tListPosition, realPos);
        gBagMenu->toSwapPos = NOT_SWAPPING;
        DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
        if (tListPosition < realPos)
            gBagPosition.cursorPosition[gBagPosition.pocket]--;
        LoadBagItemListBuffers(gBagPosition.pocket);
        tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
        SetItemMenuSwapLineInvisibility(TRUE);
        CreatePocketSwitchArrowPair();
        gTasks[taskId].func = Task_BagMenu_HandleInput;
    }
}

static void CancelItemSwap(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];

    gBagMenu->toSwapPos = NOT_SWAPPING;
    DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
    if (tListPosition < *scrollPos + *cursorPos)
        gBagPosition.cursorPosition[gBagPosition.pocket]--;
    LoadBagItemListBuffers(gBagPosition.pocket);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
    SetItemMenuSwapLineInvisibility(TRUE);
    CreatePocketSwitchArrowPair();
    gTasks[taskId].func = Task_BagMenu_HandleInput;
}

static void OpenContextMenu(u8 taskId, bool8 forSorting)
{
    switch (gBagPosition.location)
    {
    case ITEMMENULOCATION_BATTLE:
    case ITEMMENULOCATION_WALLY:
        if (ItemId_GetBattleUsage(gSpecialVar_ItemId))
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_BattleUse;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_BattleUse);
        }
        else
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Cancel;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Cancel);
        }
        break;
    case ITEMMENULOCATION_BERRY_BLENDER_CRUSH:
        gBagMenu->contextMenuItemsPtr = sContextMenuItems_BerryBlenderCrush;
        gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_BerryBlenderCrush);
        break;
    case ITEMMENULOCATION_APPRENTICE:
        if (!ItemId_GetImportance(gSpecialVar_ItemId) && gSpecialVar_ItemId != ITEM_ENIGMA_BERRY_E_READER)
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Apprentice;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Apprentice);
        }
        else
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Cancel;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Cancel);
        }
        break;
    case ITEMMENULOCATION_FAVOR_LADY:
        if (!ItemId_GetImportance(gSpecialVar_ItemId) && gSpecialVar_ItemId != ITEM_ENIGMA_BERRY_E_READER)
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_FavorLady;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_FavorLady);
        }
        else
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Cancel;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Cancel);
        }
        break;
    case ITEMMENULOCATION_QUIZ_LADY:
        if (!ItemId_GetImportance(gSpecialVar_ItemId) && gSpecialVar_ItemId != ITEM_ENIGMA_BERRY_E_READER)
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_QuizLady;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_QuizLady);
        }
        else
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Cancel;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Cancel);
        }
        break;
    case ITEMMENULOCATION_PARTY:
    case ITEMMENULOCATION_SHOP:
    case ITEMMENULOCATION_BERRY_TREE:
    case ITEMMENULOCATION_ITEMPC:
    default:
        if (MenuHelpers_IsLinkActive() == TRUE || InUnionRoom() == TRUE)
        {
            if (gBagPosition.pocket == KEYITEMS_POCKET || !IsHoldingItemAllowed(gSpecialVar_ItemId))
            {
                gBagMenu->contextMenuItemsPtr = sContextMenuItems_Cancel;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Cancel);
            }
            else
            {
                gBagMenu->contextMenuItemsPtr = sContextMenuItems_Give;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Give);
            }
        }
        else if(forSorting)
        {
            gBagMenu->contextMenuItemsPtr = sContextMenuItems_Sort;
            gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_Sort);
        }
        else
        {
            
            switch (gBagPosition.pocket)
            {
            case KEYITEMS_POCKET:
                gBagMenu->contextMenuItemsPtr = gBagMenu->contextMenuItemsBuffer;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_KeyItemsPocket);
                memcpy(&gBagMenu->contextMenuItemsBuffer, &sContextMenuItems_KeyItemsPocket, sizeof(sContextMenuItems_KeyItemsPocket));
                if (RegisteredItemIndex(gSpecialVar_ItemId) >= 0)
                    gBagMenu->contextMenuItemsBuffer[1] = ACTION_DESELECT;
                if (gSpecialVar_ItemId == ITEM_MACH_BIKE || gSpecialVar_ItemId == ITEM_ACRO_BIKE)
                {
                    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_MACH_BIKE | PLAYER_AVATAR_FLAG_ACRO_BIKE))
                        gBagMenu->contextMenuItemsBuffer[0] = ACTION_WALK;
                }
                break;
            case BALLS_POCKET:
                gBagMenu->contextMenuItemsPtr = sContextMenuItems_BallsPocket;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_BallsPocket);
                break;
            case TMHM_POCKET:
                gBagMenu->contextMenuItemsPtr = sContextMenuItems_TmHmPocket;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_TmHmPocket);
                break;
            case BERRIES_POCKET:
                gBagMenu->contextMenuItemsPtr = sContextMenuItems_BerriesPocket;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_BerriesPocket);
                break;
            //case ITEMS_POCKET:
            default:
                gBagMenu->contextMenuItemsPtr = gBagMenu->contextMenuItemsBuffer;
                gBagMenu->contextMenuNumItems = ARRAY_COUNT(sContextMenuItems_ItemsPocket);
                memcpy(&gBagMenu->contextMenuItemsBuffer, &sContextMenuItems_ItemsPocket, sizeof(sContextMenuItems_ItemsPocket));
                if (ItemIsMail(gSpecialVar_ItemId) == TRUE)
                    gBagMenu->contextMenuItemsBuffer[0] = ACTION_CHECK;
                break;
            }
        }
    }

    if(forSorting)
    {
        ClearWindowTilemap(WIN_TMHM_INFO_ICONS);
        ClearWindowTilemap(WIN_TMHM_INFO);
        FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_SortedByWhat, 3, 1, 0, 0, 0, COLORID_NORMAL);
        PutWindowTilemap(WIN_DESCRIPTION);
        ScheduleBgCopyTilemapToVram(0);
    }
    else if (gBagPosition.pocket == TMHM_POCKET)
    {
        ClearWindowTilemap(WIN_DESCRIPTION);
        PrintTMHMMoveData(gSpecialVar_ItemId);
        PutWindowTilemap(WIN_TMHM_INFO_ICONS);
        PutWindowTilemap(WIN_TMHM_INFO);
        PutWindowTilemap(WIN_MON_ICON_0);
        PutWindowTilemap(WIN_MON_ICON_1);
        PutWindowTilemap(WIN_MON_ICON_2);
        PutWindowTilemap(WIN_MON_ICON_3);
        PutWindowTilemap(WIN_MON_ICON_4);
        PutWindowTilemap(WIN_MON_ICON_5);
        ScheduleBgCopyTilemapToVram(0);
    }
    else
    {
        CopyItemName(gSpecialVar_ItemId, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_Var1IsSelected);
        FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
    }

    if (gBagMenu->contextMenuNumItems == 1)
        PrintContextMenuItems(BagMenu_AddWindow(ITEMWIN_1x1));
    else if (gBagMenu->contextMenuNumItems == 2)
        PrintContextMenuItems(BagMenu_AddWindow(ITEMWIN_1x2));
    else if (gBagMenu->contextMenuNumItems == 4)
        PrintContextMenuItemGrid(BagMenu_AddWindow(ITEMWIN_2x2), 2, 2);
    else
        PrintContextMenuItemGrid(BagMenu_AddWindow(ITEMWIN_2x3), 2, 3);
}

static void PrintContextMenuItems(u8 windowId)
{
    PrintMenuActionTexts(windowId, FONT_NARROW, 8, 1, 0, 16, gBagMenu->contextMenuNumItems, sItemMenuActions, gBagMenu->contextMenuItemsPtr);
    InitMenuInUpperLeftCornerNormal(windowId, gBagMenu->contextMenuNumItems, 0);
}

static void PrintContextMenuItemGrid(u8 windowId, u8 columns, u8 rows)
{
    PrintMenuActionGrid(windowId, FONT_NARROW, 8, 1, 56, columns, rows, sItemMenuActions, gBagMenu->contextMenuItemsPtr);
    InitMenuActionGrid(windowId, 56, columns, rows, 0);
}

static void Task_ItemContext_Normal(u8 taskId)
{
    OpenContextMenu(taskId, FALSE);

    // Context menu width is never greater than 2 columns, so if
    // there are more than 2 items then there are multiple rows
    if (gBagMenu->contextMenuNumItems <= 2)
        gTasks[taskId].func = Task_ItemContext_SingleRow;
    else
        gTasks[taskId].func = Task_ItemContext_MultipleRows;
}

static void Task_ItemContext_Sort(u8 taskId)
{
    OpenContextMenu(taskId, TRUE);

    // Context menu width is never greater than 2 columns, so if
    // there are more than 2 items then there are multiple rows
    if (gBagMenu->contextMenuNumItems <= 2)
        gTasks[taskId].func = Task_ItemContext_SingleRow;
    else
        gTasks[taskId].func = Task_ItemContext_MultipleRows;
}

static void Task_ItemContext_SingleRow(u8 taskId)
{
    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        s8 selection = Menu_ProcessInputNoWrap();
        switch (selection)
        {
        case MENU_NOTHING_CHOSEN:
            break;
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            sItemMenuActions[ACTION_CANCEL].func.void_u8(taskId);
            break;
        default:
            PlaySE(SE_SELECT);
            sItemMenuActions[gBagMenu->contextMenuItemsPtr[selection]].func.void_u8(taskId);
            break;
        }
    }
}

static void Task_ItemContext_MultipleRows(u8 taskId)
{
    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        s8 cursorPos = Menu_GetCursorPos();
        if (JOY_NEW(DPAD_UP))
        {
            if (cursorPos > 0 && IsValidContextMenuPos(cursorPos - 2))
            {
                PlaySE(SE_SELECT);
                ChangeMenuGridCursorPosition(MENU_CURSOR_DELTA_NONE, MENU_CURSOR_DELTA_UP);
            }
        }
        else if (JOY_NEW(DPAD_DOWN))
        {
            if (cursorPos < (gBagMenu->contextMenuNumItems - 2) && IsValidContextMenuPos(cursorPos + 2))
            {
                PlaySE(SE_SELECT);
                ChangeMenuGridCursorPosition(MENU_CURSOR_DELTA_NONE, MENU_CURSOR_DELTA_DOWN);
            }
        }
        else if (JOY_NEW(DPAD_LEFT) || GetLRKeysPressed() == MENU_L_PRESSED)
        {
            if ((cursorPos & 1) && IsValidContextMenuPos(cursorPos - 1))
            {
                PlaySE(SE_SELECT);
                ChangeMenuGridCursorPosition(MENU_CURSOR_DELTA_LEFT, MENU_CURSOR_DELTA_NONE);
            }
        }
        else if (JOY_NEW(DPAD_RIGHT) || GetLRKeysPressed() == MENU_R_PRESSED)
        {
            if (!(cursorPos & 1) && IsValidContextMenuPos(cursorPos + 1))
            {
                PlaySE(SE_SELECT);
                ChangeMenuGridCursorPosition(MENU_CURSOR_DELTA_RIGHT, MENU_CURSOR_DELTA_NONE);
            }
        }
        else if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            sItemMenuActions[gBagMenu->contextMenuItemsPtr[cursorPos]].func.void_u8(taskId);
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            sItemMenuActions[ACTION_CANCEL].func.void_u8(taskId);
        }
    }
}

static bool8 IsValidContextMenuPos(s8 cursorPos)
{
    if (cursorPos < 0)
        return FALSE;
    if (cursorPos > gBagMenu->contextMenuNumItems)
        return FALSE;
    if (gBagMenu->contextMenuItemsPtr[cursorPos] == ACTION_DUMMY)
        return FALSE;
    return TRUE;
}

static void RemoveContextWindow(void)
{
    if (gBagMenu->contextMenuNumItems == 1)
        BagMenu_RemoveWindow(ITEMWIN_1x1);
    else if (gBagMenu->contextMenuNumItems == 2)
        BagMenu_RemoveWindow(ITEMWIN_1x2);
    else if (gBagMenu->contextMenuNumItems == 4)
        BagMenu_RemoveWindow(ITEMWIN_2x2);
    else
        BagMenu_RemoveWindow(ITEMWIN_2x3);
}

static void ItemMenu_UseOutOfBattle(u8 taskId)
{
    if (ItemId_GetFieldFunc(gSpecialVar_ItemId))
    {
        RemoveContextWindow();
        if (CalculatePlayerPartyCount() == 0 && ItemId_GetType(gSpecialVar_ItemId) == ITEM_USE_PARTY_MENU)
        {
            PrintThereIsNoPokemon(taskId);
        }
        else
        {
            FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
            ScheduleBgCopyTilemapToVram(0);
            if (gBagPosition.pocket != BERRIES_POCKET)
                ItemId_GetFieldFunc(gSpecialVar_ItemId)(taskId);
            else
                ItemUseOutOfBattle_Berry(taskId);
        }
    }
}

static void ItemMenu_Toss(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    RemoveContextWindow();
    tItemCount = 1;
    if (tQuantity == 1)
    {
        AskTossItems(taskId);
    }
    else
    {
        CopyItemName(gSpecialVar_ItemId, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_TossHowManyVar1s);
        FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
        AddItemQuantityWindow(ITEMWIN_QUANTITY);
        gTasks[taskId].func = Task_ChooseHowManyToToss;
    }
}

static void AskTossItems(u8 taskId)
{
    // Always just instant confirm toss now
    ConfirmToss(taskId);

    //s16* data = gTasks[taskId].data;
//
    //CopyItemName(gSpecialVar_ItemId, gStringVar1);
    //ConvertIntToDecimalStringN(gStringVar2, tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
    //StringExpandPlaceholders(gStringVar4, gText_ConfirmTossItems);
    //FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    //BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
    //BagMenu_YesNo(taskId, ITEMWIN_YESNO_LOW, &sYesNoTossFunctions);
}

static void CancelToss(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    PrintItemDescription(tListPosition);
    BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
    ReturnToItemList(taskId);
}

static void Task_ChooseHowManyToToss(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, tQuantity) == TRUE)
    {
        PrintItemQuantity(gBagMenu->windowIds[ITEMWIN_QUANTITY], tItemCount);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY);
        AskTossItems(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY);
        CancelToss(taskId);
    }
}

// Returns [1-4] based on dpad, or 0 otherwise
static u32 DpadInputToRegisteredItemIndex(bool32 check) {
    u32 i = 0;
    if (JOY_NEW(DPAD_UP))
        i = 1;
    else if (JOY_NEW(DPAD_RIGHT))
        i = 2;
    else if (JOY_NEW(DPAD_DOWN))
        i = 3;
    else if (JOY_NEW(DPAD_LEFT))
        i = 4;
    // If `check`, verify that slot actually has an item registered
    if (i && check && gSaveBlock1Ptr->registeredItems[i-1] == ITEM_NONE && CheckBagHasItem(gSaveBlock1Ptr->registeredItems[i-1], 1))
        i = 0;
    return i;
}

static void Task_RegisterUsingDpad(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];
    u32 i = 0;
    if (JOY_NEW(B_BUTTON)) {
        PlaySE(SE_SELECT);
        ItemMenu_Cancel(taskId);
        return;
    }
    i = DpadInputToRegisteredItemIndex(FALSE);
    if (i == 0)
        return;
    PlaySE(SE_SELECT);
    // register and refresh menu
    gSaveBlock1Ptr->registeredItems[i - 1] = gSpecialVar_ItemId;
    DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
    LoadBagItemListBuffers(gBagPosition.pocket);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
    ScheduleBgCopyTilemapToVram(0);
    ItemMenu_Cancel(taskId);
}

static void RemoveItemFromBagInternal(u8 taskId)
{
    s16* data = gTasks[taskId].data;
    u16* scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16* cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];

    PlaySE(SE_SELECT);
    RemoveBagItem(gSpecialVar_ItemId, tItemCount);
    DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
    UpdatePocketItemList(gBagPosition.pocket);
    UpdatePocketListPosition(gBagPosition.pocket);
    LoadBagItemListBuffers(gBagPosition.pocket);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
    PrintBagCapacity();
    ScheduleBgCopyTilemapToVram(0);
    ReturnToItemList(taskId);
}

static void ConfirmToss(u8 taskId)
{
    //s16* data = gTasks[taskId].data;

    //CopyItemName(gSpecialVar_ItemId, gStringVar1);
    //ConvertIntToDecimalStringN(gStringVar2, tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
    //StringExpandPlaceholders(gStringVar4, gText_ThrewAwayVar2Var1s);
    //FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    //BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
    //gTasks[taskId].func = Task_RemoveItemFromBag;

    RemoveItemFromBagInternal(taskId);
}

// Remove selected item(s) from the bag and update list
// For when items are tossed or deposited
static void Task_RemoveItemFromBag(u8 taskId)
{
    //s16* data = gTasks[taskId].data;
    //u16* scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    //u16* cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];

    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        RemoveItemFromBagInternal(taskId);
    }
}

static u32 CountRegisteredItems(void) {
    u32 i;
    u32 count = 0;
    for (i = 0; i < ARRAY_COUNT(gSaveBlock1Ptr->registeredItems); i++)
        if (gSaveBlock1Ptr->registeredItems[i] != ITEM_NONE)
            count++;
    return count;
}

// if passed ITEM_NONE, finds the first registered item's index
s32 RegisteredItemIndex(u16 item) {
    s32 i;
    for (i = 0; i < ARRAY_COUNT(gSaveBlock1Ptr->registeredItems); i++)
        if (gSaveBlock1Ptr->registeredItems[i] && (!item || gSaveBlock1Ptr->registeredItems[i] == item))
            return i;
    return -1;
}

static void ItemMenu_Register(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];
    s32 index = RegisteredItemIndex(gSpecialVar_ItemId);
    s32 count = CountRegisteredItems();
    // unregister/deselect item
    if (index >= 0) {
        gSaveBlock1Ptr->registeredItems[index] = ITEM_NONE;
        index = 1; // ensure menu is closed
    // no items registered; register this one in slot 0
    } else if (count == 0) {
        gSaveBlock1Ptr->registeredItems[0] = gSpecialVar_ItemId;
    }

    // no DPAD required; just close the menu
    if (index >= 0 || count == 0) {
        DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
        LoadBagItemListBuffers(gBagPosition.pocket);
        tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
        ScheduleBgCopyTilemapToVram(0);
        ItemMenu_Cancel(taskId);
        return;
    }

    // DPAD registration
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_PressAnyDpadKey, 3, 1, 0, 0, 0, COLORID_NORMAL);
    gTasks[taskId].func = Task_RegisterUsingDpad;
}

static void ItemMenu_Give(u8 taskId)
{
    RemoveContextWindow();
    if (!IsWritingMailAllowed(gSpecialVar_ItemId))
    {
        DisplayItemMessage(taskId, FONT_NORMAL, gText_CantWriteMail, HandleErrorMessage);
    }
    else if (!ItemId_GetImportance(gSpecialVar_ItemId))
    {
        if (CalculatePlayerPartyCount() == 0)
        {
            PrintThereIsNoPokemon(taskId);
        }
        else
        {
            gBagMenu->newScreenCallback = CB2_ChooseMonToGiveItem;
            Task_FadeAndCloseBagMenu(taskId);
        }
    }
    else
    {
        PrintItemCantBeHeld(taskId);
    }
}

static void PrintThereIsNoPokemon(u8 taskId)
{
    DisplayItemMessage(taskId, FONT_NORMAL, gText_NoPokemon, HandleErrorMessage);
}

static void PrintItemCantBeHeld(u8 taskId)
{
    CopyItemName(gSpecialVar_ItemId, gStringVar1);
    StringExpandPlaceholders(gStringVar4, gText_Var1CantBeHeld);
    DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, HandleErrorMessage);
}

static void HandleErrorMessage(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        CloseItemMessage(taskId);
    }
}

static void ItemMenu_CheckTag(u8 taskId)
{
    gBagMenu->newScreenCallback = DoBerryTagScreen;
    Task_FadeAndCloseBagMenu(taskId);
}

static void ItemMenu_Cancel(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    RemoveContextWindow();
    PrintItemDescription(tListPosition);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
    ReturnToItemList(taskId);
}

static void ItemMenu_UseInBattle(u8 taskId)
{
    // Safety check
    u16 type = ItemId_GetType(gSpecialVar_ItemId);
    if (!ItemId_GetBattleUsage(gSpecialVar_ItemId))
        return;

    RemoveContextWindow();
    if (type == ITEM_USE_BAG_MENU)
        ItemUseInBattle_BagMenu(taskId);
    else if (type == ITEM_USE_PARTY_MENU)
        ItemUseInBattle_PartyMenu(taskId);
    else if (type == ITEM_USE_PARTY_MENU_MOVES)
        ItemUseInBattle_PartyMenuChooseMove(taskId);
}

void CB2_ReturnToBagMenuPocket(void)
{
    GoToBagMenu(ITEMMENULOCATION_LAST, POCKETS_COUNT, NULL);
}

static void Task_ItemContext_GiveToParty(u8 taskId)
{
    if (!IsWritingMailAllowed(gSpecialVar_ItemId))
    {
        DisplayItemMessage(taskId, FONT_NORMAL, gText_CantWriteMail, HandleErrorMessage);
    }
    else if (!IsHoldingItemAllowed(gSpecialVar_ItemId))
    {
        CopyItemName(gSpecialVar_ItemId, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_Var1CantBeHeldHere);
        DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, HandleErrorMessage);
    }
    else if (gBagPosition.pocket != KEYITEMS_POCKET && !ItemId_GetImportance(gSpecialVar_ItemId))
    {
        Task_FadeAndCloseBagMenu(taskId);
    }
    else
    {
        PrintItemCantBeHeld(taskId);
    }
}

// Selected item to give to a Pokémon in PC storage
static void Task_ItemContext_GiveToPC(u8 taskId)
{
    if (ItemIsMail(gSpecialVar_ItemId) == TRUE)
        DisplayItemMessage(taskId, FONT_NORMAL, gText_CantWriteMail, HandleErrorMessage);
    else if (gBagPosition.pocket != KEYITEMS_POCKET && !ItemId_GetImportance(gSpecialVar_ItemId))
        gTasks[taskId].func = Task_FadeAndCloseBagMenu;
    else
        PrintItemCantBeHeld(taskId);
}

#define tUsingRegisteredKeyItem data[3] // See usage in item_use.c

bool8 UseRegisteredKeyItemOnField(void)
{
    u32 taskId;
    u32 i;
    ItemUseFunc func = NULL;

    if (InUnionRoom() == TRUE || InBattlePyramid() || InBattlePike() || InMultiPartnerRoom() == TRUE)
        return FALSE;
    HideMapNamePopUpWindow();
    ChangeBgY_ScreenOff(0, 0, BG_COORD_SET);
    i = CountRegisteredItems();
    // Show key item wheel
    if (i > 1) {
        func = Task_KeyItemWheel;
    // Use the only registered item
    }
    else if(i == 1)
    {
        for (i = 0; i < ARRAY_COUNT(gSaveBlock1Ptr->registeredItems); i++)
            if (gSaveBlock1Ptr->registeredItems[i] != ITEM_NONE)
            {
                func = ItemId_GetFieldFunc(gSaveBlock1Ptr->registeredItems[i]);
                break;
            }
    }

    if (func) 
    {
        LockPlayerFieldControls();
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
        taskId = CreateTask(func, 8);
        gTasks[taskId].tUsingRegisteredKeyItem = TRUE;
        return TRUE;
    }
    ScriptContext_SetupScript(EventScript_SelectWithoutRegisteredItem);
    return TRUE;
}

static void HBlankCB_KeyItemWheel(void) {
    u32 vCount = REG_VCOUNT;
    if (vCount >= DISPLAY_HEIGHT) {
        sKeyItemWheelExtraPalette[0] = 0;
        return;
    }
    // Copy item 3
    if (vCount >= 64 && sKeyItemWheelExtraPalette[0] == 0) {
        CpuFastCopy(&sKeyItemWheelExtraPalette[0], (u32*)(BG_PLTT + PLTT_ID(13)*2), PLTT_SIZE_4BPP);
        sKeyItemWheelExtraPalette[0] = 0x8000;
    }
}

#define tState data[0]
// MAX_REGISTERED_ITEMS box sprites
#define tBoxSprite (data + 1)
#define tBoxWinSprite (data + 1 + MAX_REGISTERED_ITEMS)
// MAX_REGISTERED_ITEMS icon windows
#define tIconWindow (data + 1 + 2*MAX_REGISTERED_ITEMS)

// Free key item wheel gfx using sprites & windows from task data
static void FreeKeyItemWheelGfx(s16 *data) {
    u32 i;
    struct Sprite *sprite;
    FreeSpriteTilesByTag(PAL_TAG_KEY_ITEM_WHEEL);
    FreeSpritePaletteByTag(PAL_TAG_KEY_ITEM_WHEEL);

    // free box sprites
    for (i = 0; i < MAX_REGISTERED_ITEMS; i++) {
        if (tBoxSprite[i] >= MAX_SPRITES)
            continue;
        sprite = &gSprites[tBoxSprite[i]];
        FreeSpriteOamMatrix(sprite);
        DestroySprite(sprite);
    }

    for (i = 0; i < MAX_REGISTERED_ITEMS; i++) {
        if (tBoxWinSprite[i] >= MAX_SPRITES)
            continue;
        sprite = &gSprites[tBoxWinSprite[i]];
        FreeSpriteOamMatrix(sprite);
        DestroySprite(sprite);
    }

    // free item windows
    for (i = 0; i < MAX_REGISTERED_ITEMS; i++) {
        if (tIconWindow[i] == WINDOW_NONE)
            continue;
        FillWindowPixelBuffer(tIconWindow[i], PIXEL_FILL(0));
        ClearWindowTilemap(tIconWindow[i]);
        CopyWindowToVram(tIconWindow[i], COPYWIN_FULL);
        RemoveWindow(tIconWindow[i]);
    }
    SetHBlankCallback(NULL);

    // Reload window palette otherwise we mess up popups
    LoadMessageBoxPalette();
}

static void Task_KeyItemWheel(u8 taskId) {
    u32 i, j;
    s16 *data = gTasks[taskId].data;
    switch (tState)
    {
    case 0:
    {
        // Ensure we have a palette free
        FieldEffectFreeAllSprites();

        LoadSpritePalette(&sSpritePalette_KeyItemBox);
        LoadSpriteSheetByTemplate(&sSpriteTemplate_KeyItemBox, 0);

        for (i = 0; i < MAX_REGISTERED_ITEMS; i++) {
            // Create box sprite
            tBoxSprite[i] = j = CreateSprite(&sSpriteTemplate_KeyItemBox, sKeyItemBoxXPos[i], sKeyItemBoxYPos[i], 0);
            if (j < MAX_SPRITES)
                StartSpriteAffineAnim(&gSprites[j], i);
            tBoxWinSprite[i] = MAX_SPRITES;
            // For each registered item the player has, create a window and blit its icon to it
            tIconWindow[i] = WINDOW_NONE;
            if (!gSaveBlock1Ptr->registeredItems[i] || !CheckBagHasItem(gSaveBlock1Ptr->registeredItems[i], 1))
                continue;
            tIconWindow[i] = j = AddWindowParameterized(0, sKeyItemBoxXPos[i] / 8 - 2, sKeyItemBoxYPos[i] / 8 - 2, 4, 4, i == 3 ? 13 : 13 + i, 16*(i+10));
            if (j == WINDOW_NONE)
                continue;
            PutWindowTilemap(j);
            BlitItemIconToWindow(gSaveBlock1Ptr->registeredItems[i], j, 4, 4, i == 3 ? sKeyItemWheelExtraPalette : NULL);
            CopyWindowToVram(j, COPYWIN_FULL);
        }
        SetHBlankCallback(HBlankCB_KeyItemWheel);
        EnableInterrupts(INTR_FLAG_VBLANK | INTR_FLAG_HBLANK);
        PlaySE(SE_WIN_OPEN);
        // in dark caves, we need to spawn OBJWIN sprites to show the boxes
        tState = (gSaveBlock1Ptr->flashLevel > 1) ? 4 : 1;
        break;
    }
    case 1: // process input
    {
        if (JOY_NEW(B_BUTTON)) {
            PlaySE(SE_SELECT);
            tState = 3; // destroy and unfreeze
            break;
        }
        i = DpadInputToRegisteredItemIndex(TRUE);
        if (i == 0 || data[i] == MAX_SPRITES)
            break;
        // use item as if it was registered
        gSpecialVar_ItemId = gSaveBlock1Ptr->registeredItems[i - 1];
        PlaySE(SE_SELECT);
        StartSpriteAffineAnim(&gSprites[data[i]], i + 4 - 1);
        data[15] = data[i];
        tState = 2; // wait for anim
        break;
    }
    case 2:
        if (!gSprites[data[15]].affineAnimEnded)
            break;
        FreeKeyItemWheelGfx(data);
        i = CreateTask(ItemId_GetFieldFunc(gSpecialVar_ItemId), 8);
        gTasks[i].tUsingRegisteredKeyItem = TRUE;
        DestroyTask(taskId);
        DisableInterrupts(INTR_FLAG_HBLANK);
        break;
    case 3:
        FreeKeyItemWheelGfx(data);
        ScriptUnfreezeObjectEvents();
        UnlockPlayerFieldControls();
        DestroyTask(taskId);
        DisableInterrupts(INTR_FLAG_HBLANK);
        break;
    case 4:
        // Enable sprites to be shown inside WINOBJ
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJWIN_ON);
        SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WINOBJ_OBJ);
        // Create box sprites, but in OBJWIN mode
        for (i = 0; i < MAX_REGISTERED_ITEMS; i++)
            tBoxWinSprite[i] = CreateSprite(&sSpriteTemplate_KeyItemBoxWin, sKeyItemBoxXPos[i], sKeyItemBoxYPos[i], 0);
        tState = 1;
        break;
    }
}

#undef tState
#undef tBoxSprite
#undef tIconWindow
#undef tUsingRegisteredKeyItem

static void Task_ItemContext_Sell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (ItemId_GetPrice(gSpecialVar_ItemId) == 0 || ItemId_GetPocket(gSpecialVar_ItemId) == POCKET_KEY_ITEMS)
    {
        CopyItemName(gSpecialVar_ItemId, gStringVar2);
        StringExpandPlaceholders(gStringVar4, gText_CantBuyKeyItem);
        DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, CloseItemMessage);
    }
    else
    {
        tItemCount = 1;
        if (tQuantity == 1)
        {
            DisplayCurrentMoneyWindow();
            DisplaySellItemPriceAndConfirm(taskId);
        }
        else
        {
            CopyItemName(gSpecialVar_ItemId, gStringVar2);
            StringExpandPlaceholders(gStringVar4, gText_HowManyToSell);
            DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, InitSellHowManyInput);
        }
    }
}

#if I_SELL_VALUE_FRACTION >= GEN_9
#define ITEM_SELL_FACTOR 4
#else
#define ITEM_SELL_FACTOR 2
#endif

static void DisplaySellItemPriceAndConfirm(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    ConvertIntToDecimalStringN(gStringVar1, (ItemId_GetPrice(gSpecialVar_ItemId) / ITEM_SELL_FACTOR) * tItemCount, STR_CONV_MODE_LEFT_ALIGN, 6);
    StringExpandPlaceholders(gStringVar4, gText_ICanPayVar1);
    DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, AskSellItems);
}

static void AskSellItems(u8 taskId)
{
    BagMenu_YesNo(taskId, ITEMWIN_YESNO_HIGH, &sYesNoSellItemFunctions);
}

static void CancelSell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    RemoveMoneyWindow();
    RemoveItemMessageWindow(ITEMWIN_MESSAGE);
    BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
    ReturnToItemList(taskId);
}

static void InitSellHowManyInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u8 windowId = BagMenu_AddWindow(ITEMWIN_QUANTITY_WIDE);

    PrintItemSoldAmount(windowId, 1, (ItemId_GetPrice(gSpecialVar_ItemId) / ITEM_SELL_FACTOR) * tItemCount);
    DisplayCurrentMoneyWindow();
    gTasks[taskId].func = Task_ChooseHowManyToSell;
}

static void Task_ChooseHowManyToSell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, tQuantity) == TRUE)
    {
        PrintItemSoldAmount(gBagMenu->windowIds[ITEMWIN_QUANTITY_WIDE], tItemCount, (ItemId_GetPrice(gSpecialVar_ItemId) / ITEM_SELL_FACTOR) * tItemCount);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY_WIDE);
        DisplaySellItemPriceAndConfirm(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
        RemoveMoneyWindow();
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY_WIDE);
        RemoveItemMessageWindow(ITEMWIN_MESSAGE);
        ReturnToItemList(taskId);
    }
}

static void ConfirmSell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    CopyItemName(gSpecialVar_ItemId, gStringVar2);
    ConvertIntToDecimalStringN(gStringVar1, (ItemId_GetPrice(gSpecialVar_ItemId) / ITEM_SELL_FACTOR) * tItemCount, STR_CONV_MODE_LEFT_ALIGN, 6);
    StringExpandPlaceholders(gStringVar4, gText_TurnedOverVar1ForVar2);
    DisplayItemMessage(taskId, FONT_NORMAL, gStringVar4, SellItem);
}

static void SellItem(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *scrollPos = &gBagPosition.scrollPosition[gBagPosition.pocket];
    u16 *cursorPos = &gBagPosition.cursorPosition[gBagPosition.pocket];

    PlaySE(SE_SHOP);
    RemoveBagItem(gSpecialVar_ItemId, tItemCount);
    AddMoney(&gSaveBlock1Ptr->money, (ItemId_GetPrice(gSpecialVar_ItemId) / ITEM_SELL_FACTOR) * tItemCount);
    DestroyListMenuTask(tListTaskId, scrollPos, cursorPos);
    UpdatePocketItemList(gBagPosition.pocket);
    UpdatePocketListPosition(gBagPosition.pocket);
    LoadBagItemListBuffers(gBagPosition.pocket);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, *scrollPos, *cursorPos);
    BagMenu_PrintCursor(tListTaskId, COLORID_GRAY_CURSOR);
    PrintMoneyAmountInMoneyBox(gBagMenu->windowIds[ITEMWIN_MONEY], GetMoney(&gSaveBlock1Ptr->money), 0);
    gTasks[taskId].func = WaitAfterItemSell;
}

static void WaitAfterItemSell(u8 taskId)
{
    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        RemoveMoneyWindow();
        CloseItemMessage(taskId);
    }
}

static void Task_ItemContext_Deposit(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    tItemCount = 1;
    if (tQuantity == 1)
    {
        TryDepositItem(taskId);
    }
    else
    {
        CopyItemName(gSpecialVar_ItemId, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_DepositHowManyVar1);
        FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
        AddItemQuantityWindow(ITEMWIN_QUANTITY);
        gTasks[taskId].func = Task_ChooseHowManyToDeposit;
    }
}

static void Task_ChooseHowManyToDeposit(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, tQuantity) == TRUE)
    {
        PrintItemQuantity(gBagMenu->windowIds[ITEMWIN_QUANTITY], tItemCount);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY);
        TryDepositItem(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        PrintItemDescription(tListPosition);
        BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
        BagMenu_RemoveWindow(ITEMWIN_QUANTITY);
        ReturnToItemList(taskId);
    }
}

static void TryDepositItem(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));
    if (ItemId_GetImportance(gSpecialVar_ItemId))
    {
        // Can't deposit important items
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_CantStoreImportantItems, 3, 1, 0, 0, 0, COLORID_NORMAL);
        gTasks[taskId].func = WaitDepositErrorMessage;
    }
    else if (AddPCItem(gSpecialVar_ItemId, tItemCount) == TRUE)
    {
        // Successfully deposited
        CopyItemName(gSpecialVar_ItemId, gStringVar1);
        ConvertIntToDecimalStringN(gStringVar2, tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
        StringExpandPlaceholders(gStringVar4, gText_DepositedVar2Var1s);
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gStringVar4, 3, 1, 0, 0, 0, COLORID_NORMAL);
        gTasks[taskId].func = Task_RemoveItemFromBag;
    }
    else
    {
        // No room to deposit
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_NoRoomForItems, 3, 1, 0, 0, 0, COLORID_NORMAL);
        gTasks[taskId].func = WaitDepositErrorMessage;
    }
}

static void WaitDepositErrorMessage(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        PrintItemDescription(tListPosition);
        PrintBagCapacity();
        BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
        ReturnToItemList(taskId);
    }
}

static bool8 IsWallysBag(void)
{
    if (gBagPosition.location == ITEMMENULOCATION_WALLY)
        return TRUE;
    return FALSE;
}

static void PrepareBagForWallyTutorial(void)
{
}

static void RestoreBagAfterWallyTutorial(void)
{
}

void DoWallyTutorialBagMenu(void)
{
    PrepareBagForWallyTutorial();
    AddBagItem(ITEM_POTION, 1);
    AddBagItem(ITEM_POKE_BALL, 1);
    GoToBagMenu(ITEMMENULOCATION_WALLY, ITEMS_POCKET, CB2_SetUpReshowBattleScreenAfterMenu2);
}

#define tTimer data[8]
#define WALLY_BAG_DELAY 102 // The number of frames between each action Wally takes in the bag

static void Task_WallyTutorialBagMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        switch (tTimer)
        {
        case WALLY_BAG_DELAY * 1:
            PlaySE(SE_SELECT);
            SwitchBagPocket(taskId, MENU_CURSOR_DELTA_RIGHT, FALSE);
            tTimer++;
            break;
        case WALLY_BAG_DELAY * 2:
            PlaySE(SE_SELECT);
            BagMenu_PrintCursor(tListTaskId, COLORID_GRAY_CURSOR);
            gSpecialVar_ItemId = ITEM_POKE_BALL;
            OpenContextMenu(taskId, FALSE);
            tTimer++;
            break;
        case WALLY_BAG_DELAY * 3:
            PlaySE(SE_SELECT);
            RemoveContextWindow();
            DestroyListMenuTask(tListTaskId, 0, 0);
            RestoreBagAfterWallyTutorial();
            Task_FadeAndCloseBagMenu(taskId);
            break;
        default:
            tTimer++;
            break;
        }
    }
}

#undef tTimer

// This action is used to show the Apprentice an item when
// they ask what item they should make their Pokémon hold
static void ItemMenu_Show(u8 taskId)
{
    gSpecialVar_0x8005 = gSpecialVar_ItemId;
    gSpecialVar_Result = TRUE;
    RemoveContextWindow();
    Task_FadeAndCloseBagMenu(taskId);
}

static void CB2_ApprenticeExitBagMenu(void)
{
    gFieldCallback = Apprentice_ScriptContext_Enable;
    SetMainCallback2(CB2_ReturnToField);
}

static void ItemMenu_GiveFavorLady(u8 taskId)
{
    RemoveBagItem(gSpecialVar_ItemId, 1);
    gSpecialVar_Result = TRUE;
    RemoveContextWindow();
    Task_FadeAndCloseBagMenu(taskId);
}

static void CB2_FavorLadyExitBagMenu(void)
{
    gFieldCallback = FieldCallback_FavorLadyEnableScriptContexts;
    SetMainCallback2(CB2_ReturnToField);
}

// This action is used to confirm which item to use as
// a prize for a custom quiz with the Lilycove Quiz Lady
static void ItemMenu_ConfirmQuizLady(u8 taskId)
{
    gSpecialVar_Result = TRUE;
    RemoveContextWindow();
    Task_FadeAndCloseBagMenu(taskId);
}

static void SortBagBy(u8 taskId, u8 sortMode)
{
    s16* data = gTasks[taskId].data;

    //PlaySE(SE_SELECT);
    gSaveBlock1Ptr->bagSortMode = sortMode;

    SortItemsInBag();

    // Hack to stop description box from flashing when sorting
    sTempDisableDescriptionPrint = TRUE;

    // Redraw list
    {
        ClearWindowTilemap(WIN_ITEM_LIST);
        //ClearWindowTilemap(WIN_DESCRIPTION);
        DestroyListMenuTask(tListTaskId, &gBagPosition.scrollPosition[gBagPosition.pocket], &gBagPosition.cursorPosition[gBagPosition.pocket]);

        LoadBagItemListBuffers(gBagPosition.pocket);
        tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, gBagPosition.scrollPosition[gBagPosition.pocket], gBagPosition.cursorPosition[gBagPosition.pocket]);
        //PutWindowTilemap(WIN_DESCRIPTION);
        //PutWindowTilemap(WIN_BAG_CAPACITY);
        //PutWindowTilemap(WIN_BAG_STACK_AMOUNT);
        //PutWindowTilemap(WIN_POCKET_NAME);
        ScheduleBgCopyTilemapToVram(0);
    }

    sTempDisableDescriptionPrint = FALSE;

    // Print "sorted by" text
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(0));

    switch (gSaveBlock1Ptr->bagSortMode)
    {
    case ITEM_SORT_MODE_TYPE:
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_SortedByType, 3, 1, 0, 0, 0, COLORID_NORMAL);
        break;

    case ITEM_SORT_MODE_NAME:
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_SortedByName, 3, 1, 0, 0, 0, COLORID_NORMAL); 
        break;

    case ITEM_SORT_MODE_VALUE:
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_SortedByValue, 3, 1, 0, 0, 0, COLORID_NORMAL);
        break;

    case ITEM_SORT_MODE_AMOUNT:
        BagMenu_Print(WIN_DESCRIPTION, FONT_NORMAL, gText_SortedByAmount, 3, 1, 0, 0, 0, COLORID_NORMAL);
        break;

    default:
        AGB_ASSERT(FALSE);
        break;
    }

    // Now cancel out and return
    RemoveContextWindow();
    //PrintItemDescription(tListPosition);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    BagMenu_PrintCursor(tListTaskId, COLORID_NORMAL);
    ReturnToItemList(taskId);
}

static void ItemMenu_SortByName(u8 taskId)
{
    SortBagBy(taskId, ITEM_SORT_MODE_NAME);
}

static void ItemMenu_SortByType(u8 taskId)
{
    SortBagBy(taskId, ITEM_SORT_MODE_TYPE);
}

static void ItemMenu_SortByValue(u8 taskId)
{
    SortBagBy(taskId, ITEM_SORT_MODE_VALUE);
}

static void ItemMenu_SortByAmount(u8 taskId)
{
    SortBagBy(taskId, ITEM_SORT_MODE_AMOUNT);
}

static void CB2_QuizLadyExitBagMenu(void)
{
    gFieldCallback = FieldCallback_QuizLadyEnableScriptContexts;
    SetMainCallback2(CB2_ReturnToField);
}

static void PrintPocketNames(const u8 *pocketName1, const u8 *pocketName2)
{
    struct WindowTemplate window = {0};
    u16 windowId;
    int offset;

    window.width = 16;
    window.height = 2;
    windowId = AddWindow(&window);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
    offset = GetStringCenterAlignXOffset(FONT_NORMAL, pocketName1, 0x40);
    BagMenu_Print(windowId, FONT_NORMAL, pocketName1, offset, 1, 0, 0, TEXT_SKIP_DRAW, COLORID_POCKET_NAME);
    if (pocketName2)
    {
        offset = GetStringCenterAlignXOffset(FONT_NORMAL, pocketName2, 0x40);
        BagMenu_Print(windowId, FONT_NORMAL, pocketName2, offset + 0x40, 1, 0, 0, TEXT_SKIP_DRAW, COLORID_POCKET_NAME);
    }
    CpuCopy32((u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA), gBagMenu->pocketNameBuffer, sizeof(gBagMenu->pocketNameBuffer));
    RemoveWindow(windowId);
}

static void CopyPocketNameToWindow(u32 a)
{
    u8 (*tileDataBuffer)[32][32];
    u8 *windowTileData;
    int b;
    if (a > 8)
        a = 8;
    tileDataBuffer = &gBagMenu->pocketNameBuffer;
    windowTileData = (u8 *)GetWindowAttribute(2, WINDOW_TILE_DATA);
    CpuCopy32(&tileDataBuffer[0][a], windowTileData, 0x100); // Top half of pocket name
    b = a + 16;
    CpuCopy32(&tileDataBuffer[0][b], windowTileData + 0x100, 0x100); // Bottom half of pocket name
    CopyWindowToVram(WIN_POCKET_NAME, COPYWIN_GFX);
}

static void LoadBagMenuTextWindows(void)
{
    u8 i;

    InitWindows(sDefaultBagWindows);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(0, 1, BG_PLTT_ID(14));
    LoadMessageBoxGfx(0, 10, BG_PLTT_ID(13));
    ListMenuLoadStdPalAt(BG_PLTT_ID(12), 1);
    LoadPalette(&gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
    for (i = 0; i <= WIN_POCKET_NAME; i++)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
    }
    PutWindowTilemap(WIN_BAG_CAPACITY);
    //PutWindowTilemap(WIN_BAG_STACK_AMOUNT);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
}

static void BagMenu_Print(u8 windowId, u8 fontId, const u8 *str, u8 left, u8 top, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIndex)
{
    //if(windowId == WIN_DESCRIPTION && sTempDisableDescriptionPrint)
    //    return;

    if(windowId == WIN_DESCRIPTION)
        gTextFlags.replaceScrollWithNewLine = TRUE;

    AddTextPrinterParameterized4(windowId, fontId, left, top, letterSpacing, lineSpacing, sFontColorTable[colorIndex], speed, str);

    if(windowId == WIN_DESCRIPTION)
        gTextFlags.replaceScrollWithNewLine = FALSE;
}

static u8 UNUSED BagMenu_GetWindowId(u8 windowType)
{
    return gBagMenu->windowIds[windowType];
}

static u8 BagMenu_AddWindow(u8 windowType)
{
    u8 *windowId = &gBagMenu->windowIds[windowType];
    if (*windowId == WINDOW_NONE)
    {
        *windowId = AddWindow(&sContextMenuWindowTemplates[windowType]);
        DrawStdFrameWithCustomTileAndPalette(*windowId, FALSE, 1, 14);
        ScheduleBgCopyTilemapToVram(1);
    }
    return *windowId;
}

static void BagMenu_RemoveWindow(u8 windowType)
{
    u8 *windowId = &gBagMenu->windowIds[windowType];
    if (*windowId != WINDOW_NONE)
    {
        ClearStdWindowAndFrameToTransparent(*windowId, FALSE);
        ClearWindowTilemap(*windowId);
        RemoveWindow(*windowId);
        ScheduleBgCopyTilemapToVram(1);
        *windowId = WINDOW_NONE;
    }
}

static u8 AddItemMessageWindow(u8 windowType)
{
    u8 *windowId = &gBagMenu->windowIds[windowType];
    if (*windowId == WINDOW_NONE)
        *windowId = AddWindow(&sContextMenuWindowTemplates[windowType]);
    return *windowId;
}

static void RemoveItemMessageWindow(u8 windowType)
{
    u8 *windowId = &gBagMenu->windowIds[windowType];
    if (*windowId != WINDOW_NONE)
    {
        ClearDialogWindowAndFrameToTransparent(*windowId, FALSE);
        // This ClearWindowTilemap call is redundant, since ClearDialogWindowAndFrameToTransparent already calls it.
        ClearWindowTilemap(*windowId);
        RemoveWindow(*windowId);
        ScheduleBgCopyTilemapToVram(1);
        *windowId = WINDOW_NONE;
    }
}

void BagMenu_YesNo(u8 taskId, u8 windowType, const struct YesNoFuncTable *funcTable)
{
    CreateYesNoMenuWithCallbacks(taskId, &sContextMenuWindowTemplates[windowType], 1, 0, 2, 1, 14, funcTable);
}

static void DisplayCurrentMoneyWindow(void)
{
    u8 windowId = BagMenu_AddWindow(ITEMWIN_MONEY);
    PrintMoneyAmountInMoneyBoxWithBorder(windowId, 1, 14, GetMoney(&gSaveBlock1Ptr->money));
    AddMoneyLabelObject(19, 11);
}

static void RemoveMoneyWindow(void)
{
    BagMenu_RemoveWindow(ITEMWIN_MONEY);
    RemoveMoneyLabelObject();
}

static void PrepareTMHMMoveWindow(void)
{
    FillWindowPixelBuffer(WIN_TMHM_INFO_ICONS, PIXEL_FILL(0));
    BlitMenuInfoIcon(WIN_TMHM_INFO_ICONS, MENU_INFO_ICON_TYPE, 0, 0);
    BlitMenuInfoIcon(WIN_TMHM_INFO_ICONS, MENU_INFO_ICON_POWER, 0, 12);
    BlitMenuInfoIcon(WIN_TMHM_INFO_ICONS, MENU_INFO_ICON_ACCURACY, 0, 24);
    BlitMenuInfoIcon(WIN_TMHM_INFO_ICONS, MENU_INFO_ICON_PP, 0, 36);
    CopyWindowToVram(WIN_TMHM_INFO_ICONS, COPYWIN_GFX);

    // TODO - Blit icons?
}

static void BlitMonSlotIconForItem(u8 windowId, u16 slot, u16 itemId)
{
    u16 species = GetMonData(&gPlayerParty[slot], MON_DATA_SPECIES);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));

    if(species != SPECIES_NONE)
    {
        BlitPokemonIconToWindow(species, windowId, 0, 0, NULL);

        if(!CanSpeciesLearnTM(species, itemId))
        {
            // Make grey if can't teach move
            TintPalette_GrayScale2(&gPlttBufferUnfaded[BG_PLTT_ID(gWindows[windowId].window.paletteNum)], PLTT_SIZE_4BPP);
            TintPalette_GrayScale2(&gPlttBufferFaded[BG_PLTT_ID(gWindows[windowId].window.paletteNum)], PLTT_SIZE_4BPP);
        }
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintTMHMMoveData(u16 itemId)
{
    u8 i;
    u16 moveId;
    const u8 *text;

    FillWindowPixelBuffer(WIN_TMHM_INFO, PIXEL_FILL(0));
    if (itemId == ITEM_NONE)
    {
        for (i = 0; i < 4; i++)
            BagMenu_Print(WIN_TMHM_INFO, FONT_NORMAL, gText_ThreeDashes, 7, i * 12, 0, 0, TEXT_SKIP_DRAW, COLORID_TMHM_INFO);
        CopyWindowToVram(WIN_TMHM_INFO, COPYWIN_GFX);

        // Blit mon icons
        ClearWindowTilemap(WIN_MON_ICON_0);
        ClearWindowTilemap(WIN_MON_ICON_1);
        ClearWindowTilemap(WIN_MON_ICON_2);
        ClearWindowTilemap(WIN_MON_ICON_3);
        ClearWindowTilemap(WIN_MON_ICON_4);
        ClearWindowTilemap(WIN_MON_ICON_5);
        CopyWindowToVram(WIN_MON_ICON_0, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_1, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_2, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_3, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_4, COPYWIN_GFX);
        CopyWindowToVram(WIN_MON_ICON_5, COPYWIN_GFX);
    }
    else
    {
        moveId = ItemIdToBattleMoveId(itemId);
        BlitMenuInfoIcon(WIN_TMHM_INFO, gBattleMoves[moveId].type + 1, 0, 0);

        // Print TMHM power
        if (gBattleMoves[moveId].power <= 1)
        {
            text = gText_ThreeDashes;
        }
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, gBattleMoves[moveId].power, STR_CONV_MODE_RIGHT_ALIGN, 3);
            text = gStringVar1;
        }
        BagMenu_Print(WIN_TMHM_INFO, FONT_NORMAL, text, 7, 12, 0, 0, TEXT_SKIP_DRAW, COLORID_TMHM_INFO);

        // Print TMHM accuracy
        if (gBattleMoves[moveId].accuracy == 0)
        {
            text = gText_ThreeDashes;
        }
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, gBattleMoves[moveId].accuracy, STR_CONV_MODE_RIGHT_ALIGN, 3);
            text = gStringVar1;
        }
        BagMenu_Print(WIN_TMHM_INFO, FONT_NORMAL, text, 7, 24, 0, 0, TEXT_SKIP_DRAW, COLORID_TMHM_INFO);

        // Print TMHM pp
        ConvertIntToDecimalStringN(gStringVar1, gBattleMoves[moveId].pp, STR_CONV_MODE_RIGHT_ALIGN, 3);
        BagMenu_Print(WIN_TMHM_INFO, FONT_NORMAL, gStringVar1, 7, 36, 0, 0, TEXT_SKIP_DRAW, COLORID_TMHM_INFO);

        CopyWindowToVram(WIN_TMHM_INFO, COPYWIN_GFX);

        // Blit mon icons
        BlitMonSlotIconForItem(WIN_MON_ICON_0, 0, itemId);
        BlitMonSlotIconForItem(WIN_MON_ICON_1, 1, itemId);
        BlitMonSlotIconForItem(WIN_MON_ICON_2, 2, itemId);
        BlitMonSlotIconForItem(WIN_MON_ICON_3, 3, itemId);
        BlitMonSlotIconForItem(WIN_MON_ICON_4, 4, itemId);
        BlitMonSlotIconForItem(WIN_MON_ICON_5, 5, itemId);
    }
}
