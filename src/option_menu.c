#include "global.h"
#include "option_menu.h"
#include "main.h"
#include "menu.h"
#include "m4a.h"
#include "scanline_effect.h"
#include "palette.h"
#include "sprite.h"
#include "task.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"

#define QUICK_JUMP_AMOUNT 4

// Task data
enum
{
    TD_MENUSELECTION,
    TD_SUBMENU,
    TD_PREVIOUS_MENUSELECTION,
};

// Menu items
enum
{
    MENUITEM_MENU_GAME,
    MENUITEM_MENU_GRAPHICS,
    MENUITEM_MENU_UI,
    MENUITEM_MENU_AUDIO,
    MENUITEM_TEXTSPEED,
    MENUITEM_BATTLESCENE_WILD_BATTLES,
    MENUITEM_BATTLESCENE_TRAINER_BATTLES,
    MENUITEM_BATTLESCENE_KEY_BATTLES,
    MENUITEM_AUTORUN_TOGGLE,
    MENUITEM_NICKNAME_MODE,
    MENUITEM_TIME_OF_DAY,
    MENUITEM_SEASON,
    MENUITEM_WEATHER,
    MENUITEM_SOUND,
    MENUITEM_POPUP_SOUND,
    MENUITEM_SOUND_CHANNEL_BGM,
    MENUITEM_SOUND_CHANNEL_SE,
    MENUITEM_SOUND_CHANNEL_BATTLE_SE,
    MENUITEM_SOUND_LOW_HEALTH,
    MENUITEM_BUTTONMODE,
    MENUITEM_FRAMETYPE,
    MENUITEM_CANCEL,
};

enum
{
    SUBMENUITEM_NONE,
    SUBMENUITEM_GAME,
    SUBMENUITEM_GRAPHICS,
    SUBMENUITEM_UI,
    SUBMENUITEM_AUDIO,
    SUBMENUITEM_COUNT,
};

// Window Ids
enum
{
    WIN_TEXT_OPTION,
    WIN_OPTIONS
};

#define MAX_MENUITEM_COUNT 7
#define YPOS_SPACING      16

extern const u8 gText_16Spaces[];
extern const u8 gText_32Spaces[];

// this file's functions
static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void HighlightOptionMenuItem(u8 selection);
static void DrawSubmenuTitle(u8 submenu);
static void DrawOptionMenuTexts(u8 submenu, bool8 includeChoices);
static void DrawBgWindowFrames(void);
static u8 GetMenuItemValue(u8 menuItem);
static void SetMenuItemValue(u8 menuItem, u8 value);

static u8 TextSpeed_ProcessInput(u8 menuOffset, u8 selection);
static void TextSpeed_DrawChoices(u8 menuOffset, u8 selection);
static u8 BattleScene_ProcessInput(u8 menuOffset, u8 selection);
static void BattleScene_DrawChoices(u8 menuOffset, u8 selection);
static u8 InvertedToggle_ProcessInput(u8 menuOffset, u8 selection);
static void InvertedToggle_DrawChoices(u8 menuOffset, u8 selection);
static u8 AutoRun_ProcessInput(u8 menuOffset, u8 selection);
static void AutoRun_DrawChoices(u8 menuOffset, u8 selection);
static u8 NicknameMode_ProcessInput(u8 menuOffset, u8 selection);
static void NicknameMode_DrawChoices(u8 menuOffset, u8 selection);
static u8 TimeOfDaySeason_ProcessInput(u8 menuOffset, u8 selection);
static void TimeOfDaySeason_DrawChoices(u8 menuOffset, u8 selection);
static u8 Sound_ProcessInput(u8 menuOffset, u8 selection);
static void Sound_DrawChoices(u8 menuOffset, u8 selection);
static u8 SoundChannelBGM_ProcessInput(u8 menuOffset, u8 selection);
static void SoundChannelBGM_DrawChoices(u8 menuOffset, u8 selection);
static u8 SoundChannelSE_ProcessInput(u8 menuOffset, u8 selection);
static void SoundChannelSE_DrawChoices(u8 menuOffset, u8 selection);
static u8 SoundLowHealth_ProcessInput(u8 menuOffset, u8 selection);
static void SoundLowHealth_DrawChoices(u8 menuOffset, u8 selection);
static u8 ButtonMode_ProcessInput(u8 menuOffset, u8 selection);
static void ButtonMode_DrawChoices(u8 menuOffset, u8 selection);
static u8 FrameType_ProcessInput(u8 menuOffset, u8 selection);
static void FrameType_DrawChoices(u8 menuOffset, u8 selection);
static u8 Empty_ProcessInput(u8 menuOffset, u8 selection);
static void Empty_DrawChoices(u8 menuOffset, u8 selection);

EWRAM_DATA static bool8 sArrowPressed = FALSE;

//static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text.gbapal");
static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text2.gbapal"); // <- inserts extra greens
// note: this is only used in the Japanese release
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp");

static const u8 sText_HighlightOn[] = _("{COLOR LIGHT_BLUE}{SHADOW BLUE}");
static const u8 sText_HighlightOff[] = _("{COLOR LIGHT_RED}{SHADOW LIGHT_GREEN}");
static const u8 sText_HighlightMid[] = _("{SHADOW LIGHT_GREEN}");

static const u8 sText_BattleScene_1x[] = _("{COLOR LIGHT_BLUE}{SHADOW BLUE}1x Speed");
static const u8 sText_BattleScene_2x[] = _("{SHADOW LIGHT_GREEN}2x Speed");
static const u8 sText_BattleScene_3x[] = _("{COLOR LIGHT_RED}{SHADOW LIGHT_GREEN}3x Speed");
static const u8 sText_BattleScene_4x[] = _("{COLOR LIGHT_RED}{SHADOW LIGHT_GREEN}4x Speed");
static const u8 sText_BattleScene_Disabled[] = _("{COLOR LIGHT_RED}{SHADOW LIGHT_GREEN}Disabled");

typedef u8 (*MenuItemInputCallback)(u8, u8);
typedef void (*MenuItemDrawCallback)(u8, u8);

struct MenuEntry
{
    const u8 * itemName;
    MenuItemInputCallback processInput;
    MenuItemDrawCallback drawChoices;
};

struct MenuEntries
{
    const u8 * titleName;
    const u8 menuOptions[MAX_MENUITEM_COUNT];
};

static const struct MenuEntry sOptionMenuItems[] =
{
    [MENUITEM_MENU_GAME] = 
    {
        .itemName = gText_OptionGame,
        .processInput = Empty_ProcessInput,
        .drawChoices = Empty_DrawChoices
    },
    [MENUITEM_MENU_GRAPHICS] = 
    {
        .itemName = gText_OptionGraphics,
        .processInput = Empty_ProcessInput,
        .drawChoices = Empty_DrawChoices
    },
    [MENUITEM_MENU_UI] = 
    {
        .itemName = gText_OptionUI,
        .processInput = Empty_ProcessInput,
        .drawChoices = Empty_DrawChoices
    },
    [MENUITEM_MENU_AUDIO] = 
    {
        .itemName = gText_OptionAudio,
        .processInput = Empty_ProcessInput,
        .drawChoices = Empty_DrawChoices
    },
    [MENUITEM_TEXTSPEED] = 
    {
        .itemName = gText_TextSpeed,
        .processInput = TextSpeed_ProcessInput,
        .drawChoices = TextSpeed_DrawChoices
    },
    [MENUITEM_BATTLESCENE_WILD_BATTLES] = 
    {
        .itemName = gText_BattleSceneWild,
        .processInput = BattleScene_ProcessInput,
        .drawChoices = BattleScene_DrawChoices
    },
    [MENUITEM_BATTLESCENE_TRAINER_BATTLES] = 
    {
        .itemName = gText_BattleSceneTrainer,
        .processInput = BattleScene_ProcessInput,
        .drawChoices = BattleScene_DrawChoices
    },
    [MENUITEM_BATTLESCENE_KEY_BATTLES] = 
    {
        .itemName = gText_BattleSceneKey,
        .processInput = BattleScene_ProcessInput,
        .drawChoices = BattleScene_DrawChoices
    },
    [MENUITEM_AUTORUN_TOGGLE] = 
    {
        .itemName = gText_AutoRun,
        .processInput = AutoRun_ProcessInput,
        .drawChoices = AutoRun_DrawChoices
    },
    [MENUITEM_NICKNAME_MODE] = 
    {
        .itemName = gText_NicknameMode,
        .processInput = NicknameMode_ProcessInput,
        .drawChoices = NicknameMode_DrawChoices
    },
    [MENUITEM_TIME_OF_DAY] = 
    {
        .itemName = gText_TimeOfDay,
        .processInput = TimeOfDaySeason_ProcessInput,
        .drawChoices = TimeOfDaySeason_DrawChoices
    },
    [MENUITEM_SEASON] = 
    {
        .itemName = gText_Seasons,
        .processInput = TimeOfDaySeason_ProcessInput,
        .drawChoices = TimeOfDaySeason_DrawChoices
    },
    [MENUITEM_WEATHER] = 
    {
        .itemName = gText_Weather,
        .processInput = TimeOfDaySeason_ProcessInput,
        .drawChoices = TimeOfDaySeason_DrawChoices
    },
    [MENUITEM_SOUND] = 
    {
        .itemName = gText_Sound,
        .processInput = Sound_ProcessInput,
        .drawChoices = Sound_DrawChoices
    },
    [MENUITEM_POPUP_SOUND] = 
    {
        .itemName = gText_PopupSound,
        .processInput = InvertedToggle_ProcessInput,
        .drawChoices = InvertedToggle_DrawChoices
    },
    [MENUITEM_SOUND_CHANNEL_BGM] = 
    {
        .itemName = gText_SoundChannelBGM,
        .processInput = SoundChannelBGM_ProcessInput,
        .drawChoices = SoundChannelBGM_DrawChoices
    },
    [MENUITEM_SOUND_CHANNEL_SE] = 
    {
        .itemName = gText_SoundChannelSE,
        .processInput = SoundChannelSE_ProcessInput,
        .drawChoices = SoundChannelSE_DrawChoices
    },
    [MENUITEM_SOUND_CHANNEL_BATTLE_SE] = 
    {
        .itemName = gText_SoundChannelBattleSE,
        .processInput = SoundChannelSE_ProcessInput,
        .drawChoices = SoundChannelSE_DrawChoices
    },
    [MENUITEM_SOUND_LOW_HEALTH] = 
    {
        .itemName = gText_SoundLowHealth,
        .processInput = SoundLowHealth_ProcessInput,
        .drawChoices = SoundLowHealth_DrawChoices
    },
    [MENUITEM_BUTTONMODE] = 
    {
        .itemName = gText_ButtonMode,
        .processInput = ButtonMode_ProcessInput,
        .drawChoices = ButtonMode_DrawChoices
    },
    [MENUITEM_FRAMETYPE] = 
    {
        .itemName = gText_Frame,
        .processInput = FrameType_ProcessInput,
        .drawChoices = FrameType_DrawChoices
    },
    [MENUITEM_CANCEL] = 
    {
        .itemName = gText_OptionMenuCancel,
        .processInput = Empty_ProcessInput,
        .drawChoices = Empty_DrawChoices
    },
};

static const struct MenuEntries sOptionMenuEntries[SUBMENUITEM_COUNT] =
{
    [SUBMENUITEM_NONE] = 
    {
        .titleName = gText_Option,
        .menuOptions = 
        {
            MENUITEM_MENU_GAME,
            MENUITEM_MENU_GRAPHICS,
            MENUITEM_MENU_UI,
            MENUITEM_MENU_AUDIO,
            MENUITEM_CANCEL
        }
    },
    [SUBMENUITEM_GAME] = 
    {
        .titleName = gText_OptionGame,
        .menuOptions = 
        {
            MENUITEM_NICKNAME_MODE,
            MENUITEM_AUTORUN_TOGGLE,
            MENUITEM_BUTTONMODE,
            MENUITEM_CANCEL
        }
    },
    [SUBMENUITEM_GRAPHICS] = 
    {
        .titleName = gText_OptionGraphics,
        .menuOptions = 
        {
            MENUITEM_TIME_OF_DAY,
            MENUITEM_SEASON,
            MENUITEM_WEATHER,
            MENUITEM_BATTLESCENE_WILD_BATTLES,
            MENUITEM_BATTLESCENE_TRAINER_BATTLES,
            MENUITEM_BATTLESCENE_KEY_BATTLES,
            MENUITEM_CANCEL
        }
    },
    [SUBMENUITEM_UI] = 
    {
        .titleName = gText_OptionUI,
        .menuOptions = 
        {
            MENUITEM_TEXTSPEED,
            MENUITEM_FRAMETYPE,
            MENUITEM_CANCEL
        }
    },
    [SUBMENUITEM_AUDIO] = 
    {
        .titleName = gText_OptionAudio,
        .menuOptions = 
        {
            MENUITEM_SOUND,
            MENUITEM_POPUP_SOUND,
            MENUITEM_SOUND_LOW_HEALTH,
            MENUITEM_SOUND_CHANNEL_BGM,
            MENUITEM_SOUND_CHANNEL_SE,
            MENUITEM_SOUND_CHANNEL_BATTLE_SE,
            MENUITEM_CANCEL
        }
    }
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 26,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 26,
        .height = 14,
        .paletteNum = 1,
        .baseBlock = 0x36
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
   {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   },
   {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
   }
};

static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};

// code
static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void CB2_InitOptionMenu(void)
{
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void*)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        InitWindows(sOptionMenuWinTemplates);
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        gMain.state++;
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, 0, sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 0x70, 0x20);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, 16, sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        PutWindowTilemap(0);
        //DrawSubmenuTitle();
        gMain.state++;
        break;
    case 7:
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(1);
        //DrawOptionMenuTexts();
        gMain.state++;
    case 9:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 10:
    {
        u8 taskId = CreateTask(Task_OptionMenuFadeIn, 0);

        gTasks[taskId].data[TD_MENUSELECTION] = 0;
        gTasks[taskId].data[TD_SUBMENU] = 0;

        DrawOptionMenuTexts(gTasks[taskId].data[TD_SUBMENU], TRUE);
        DrawSubmenuTitle(gTasks[taskId].data[TD_SUBMENU]);
        HighlightOptionMenuItem(gTasks[taskId].data[TD_MENUSELECTION]);

        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
        gMain.state++;
        break;
    }
    case 11:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_OptionMenuProcessInput;
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    bool8 submenuChanged = FALSE;
    u8 menuSelection = gTasks[taskId].data[TD_MENUSELECTION];
    u8 submenuSelection = gTasks[taskId].data[TD_SUBMENU];
    u8 menuItem = sOptionMenuEntries[submenuSelection].menuOptions[menuSelection];

    if (JOY_NEW(B_BUTTON) || (JOY_NEW(A_BUTTON) && menuItem == MENUITEM_CANCEL))
    {
        if(submenuSelection != SUBMENUITEM_NONE)
        {
            submenuSelection = SUBMENUITEM_NONE;
            submenuChanged = TRUE;
        }
        else
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if(JOY_NEW(A_BUTTON) && submenuSelection == SUBMENUITEM_NONE)
    {
        switch (menuItem)
        {
        case MENUITEM_MENU_GAME:
            submenuSelection = SUBMENUITEM_GAME;
            submenuChanged = TRUE;
            break;

        case MENUITEM_MENU_GRAPHICS:
            submenuSelection = SUBMENUITEM_GRAPHICS;
            submenuChanged = TRUE;
            break;

        case MENUITEM_MENU_UI:
            submenuSelection = SUBMENUITEM_UI;
            submenuChanged = TRUE;
            break;

        case MENUITEM_MENU_AUDIO:
            submenuSelection = SUBMENUITEM_AUDIO;
            submenuChanged = TRUE;
            break;
        }
    }
    else if (JOY_NEW(DPAD_UP | L_BUTTON))
    {
        u8 i;
        u8 repeatAmount = JOY_REPEAT(L_BUTTON) ? QUICK_JUMP_AMOUNT : 1;
        
        for(i = 0; i < repeatAmount; ++i)
        {
            if(menuSelection == 0)
            {
                menuSelection = 0;
                break;
            }
            else
                menuSelection--;
        }

        HighlightOptionMenuItem(menuSelection);
        gTasks[taskId].data[TD_MENUSELECTION] = menuSelection;
    }
    else if (JOY_NEW(DPAD_DOWN | R_BUTTON))
    {
        u8 i;
        u8 repeatAmount = JOY_REPEAT(R_BUTTON) ? QUICK_JUMP_AMOUNT : 1;
        
        for(i = 0; i < repeatAmount; ++i)
        {
            if(menuItem == MENUITEM_CANCEL)
            {
                break;
            }
            else
            {
                menuSelection++;
                menuItem = sOptionMenuEntries[submenuSelection].menuOptions[menuSelection];
            }
        }

        HighlightOptionMenuItem(menuSelection);
        gTasks[taskId].data[TD_MENUSELECTION] = menuSelection;
    }
    else if(menuItem != MENUITEM_CANCEL)
    {
        u8 currOption;
        u8 prevOption;

        prevOption = GetMenuItemValue(menuItem);

        currOption = sOptionMenuItems[menuItem].processInput(menuSelection, prevOption);

        if(prevOption != currOption)
        {
            sOptionMenuItems[menuItem].drawChoices(menuSelection, currOption);

            SetMenuItemValue(menuItem, currOption);
        }

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }

    if(submenuChanged)
    {
        if(submenuSelection == SUBMENUITEM_NONE)
        {
            menuSelection = gTasks[taskId].data[TD_PREVIOUS_MENUSELECTION];
        }
        else
        {
            gTasks[taskId].data[TD_PREVIOUS_MENUSELECTION] = menuSelection;
            menuSelection = 0;
        }
        
        gTasks[taskId].data[TD_MENUSELECTION] = menuSelection;
        gTasks[taskId].data[TD_SUBMENU] = submenuSelection;

        DrawOptionMenuTexts(submenuSelection, TRUE);
        DrawSubmenuTitle(submenuSelection);
        HighlightOptionMenuItem(menuSelection);
    }
}

static void Task_OptionMenuSave(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        SetMainCallback2(gMain.savedCallback);
    }
}

static void HighlightOptionMenuItem(u8 index)
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(16, DISPLAY_WIDTH - 16));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(index * 16 + 40, index * 16 + 56));
}

static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style)
{
    u8 dst[32];
    u16 i;

    for (i = 0; *text != EOS && i <= (ARRAY_COUNT(dst) - 2); i++)
        dst[i] = *(text++);

    if (style != 0)
    {
        dst[2] = 4;
        dst[5] = 5;
    }

    dst[i] = EOS;
    AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, dst, x, y + 1, TEXT_SKIP_DRAW, NULL);
}

static u8 TextSpeed_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

#define VALUE_X_OFFSET 124

static void DrawChoiceSelection(u8 menuOffset, u8 selection, u8 const** strings, u8 stringCount)
{
    const u8* text = NULL;
    u8 style = 0;

    // Hack to wipe tiles????
    DrawOptionMenuChoice(gText_32Spaces, VALUE_X_OFFSET, menuOffset * YPOS_SPACING, 0);

    AGB_ASSERT(selection < stringCount);
    text = strings[min(selection, stringCount - 1)];

    DrawOptionMenuChoice(text, VALUE_X_OFFSET, menuOffset * YPOS_SPACING, style);
}

static void TextSpeed_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_TextSpeedSlow,
        gText_TextSpeedMid,
        gText_TextSpeedFast,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 BattleScene_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < OPTIONS_BATTLE_SCENE_COUNT - 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = OPTIONS_BATTLE_SCENE_COUNT - 1;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void BattleScene_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[OPTIONS_BATTLE_SCENE_COUNT] = 
    {
        [OPTIONS_BATTLE_SCENE_1X] = sText_BattleScene_1x,
        [OPTIONS_BATTLE_SCENE_2X] = sText_BattleScene_2x,
        [OPTIONS_BATTLE_SCENE_3X] = sText_BattleScene_3x,
        [OPTIONS_BATTLE_SCENE_4X] = sText_BattleScene_4x,
        [OPTIONS_BATTLE_SCENE_DISABLED] = sText_BattleScene_Disabled,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 InvertedToggle_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void InvertedToggle_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_BattleSceneOn,
        gText_BattleSceneOff,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 AutoRun_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void AutoRun_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_AutoRunHold,
        gText_AutoRunToggle,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 NicknameMode_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < OPTIONS_NICKNAME_COUNT - 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = OPTIONS_NICKNAME_COUNT - 1;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void NicknameMode_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_TextNicknameAsk,
        gText_TextNicknameAlways,
        gText_TextNicknameNever,
        gText_TextNicknameRandom,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 TimeOfDaySeason_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void TimeOfDaySeason_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_TimeOfDayHidden,
        gText_TimeOfDayVisible,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 Sound_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Sound_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_SoundMono,
        gText_SoundStereo,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 SoundChannelBGM_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_REPEAT(DPAD_RIGHT))
    {
        if (selection < 10)
            selection++;

        sArrowPressed = TRUE;
    }
    if (JOY_REPEAT(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void SoundChannelBGM_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 text[16];
    u8* textPtr;

    if (selection == 0)
        textPtr = StringCopy(text, sText_HighlightOff);
    else if (selection == 10)
        textPtr = StringCopy(text, sText_HighlightOn);
    else
        textPtr = StringCopy(text, sText_HighlightMid);

    textPtr = ConvertUIntToDecimalStringN(textPtr, selection * 10, STR_CONV_MODE_LEFT_ALIGN, 3);

    textPtr[0] = 0x5B; // %
    textPtr[1] = 0; // ' '
    textPtr[2] = 0; // ' '
    textPtr[3] = EOS;

    DrawOptionMenuChoice(text, VALUE_X_OFFSET, menuOffset * YPOS_SPACING, 0);
}

static u8 SoundChannelSE_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_REPEAT(DPAD_RIGHT))
    {
        if (selection < 10)
            selection++;

        sArrowPressed = TRUE;
    }
    if (JOY_REPEAT(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void SoundChannelSE_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 text[16];
    u8* textPtr;

    if (selection == 0)
        textPtr = StringCopy(text, sText_HighlightOff);
    else if (selection == 10)
        textPtr = StringCopy(text, sText_HighlightOn);
    else
        textPtr = StringCopy(text, sText_HighlightMid);

    textPtr = ConvertUIntToDecimalStringN(textPtr, selection * 10, STR_CONV_MODE_LEFT_ALIGN, 3);

    textPtr[0] = 0x5B; // %
    textPtr[1] = 0; // ' '
    textPtr[2] = 0; // ' '
    textPtr[3] = EOS;

    DrawOptionMenuChoice(text, VALUE_X_OFFSET, menuOffset * YPOS_SPACING, 0);
}

static u8 SoundLowHealth_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < OPTIONS_HEALTH_BEEP_COUNT - 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = OPTIONS_HEALTH_BEEP_COUNT - 1;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void SoundLowHealth_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        [OPTIONS_HEALTH_BEEP_OFF] = gText_TextLowHealthOff,
        [OPTIONS_HEALTH_BEEP_3_BEEPS] = gText_TextLowHealth3Beeps,
        [OPTIONS_HEALTH_BEEP_LOOPING] = gText_TextLowHealthLooping,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 FrameType_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
        sArrowPressed = TRUE;
    }
    return selection;
}

static void FrameType_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 text[16];
    u8 n = selection + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = 0x77;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, VALUE_X_OFFSET, menuOffset* YPOS_SPACING, 0);
    DrawOptionMenuChoice(text, VALUE_X_OFFSET + 24, menuOffset* YPOS_SPACING, 0);
}

static u8 ButtonMode_ProcessInput(u8 menuOffset, u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void ButtonMode_DrawChoices(u8 menuOffset, u8 selection)
{
    u8 const* options[] = 
    {
        gText_ButtonTypeNormal,
        gText_ButtonTypeLR,
        gText_ButtonTypeLEqualsA,
    };
    DrawChoiceSelection(menuOffset, selection, options, ARRAY_COUNT(options));
}

static u8 Empty_ProcessInput(u8 menuOffset, u8 selection)
{
    return 0;
}

static void Empty_DrawChoices(u8 menuOffset, u8 selection)
{

}

static void DrawSubmenuTitle(u8 submenu)
{
    FillWindowPixelBuffer(WIN_TEXT_OPTION, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_TEXT_OPTION, FONT_NORMAL, sOptionMenuEntries[submenu].titleName, 8, 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_TEXT_OPTION, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(u8 submenu, bool8 includeChoices)
{
    u8 i;
    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));

    for (i = 0; i < MAX_MENUITEM_COUNT; i++)
    {
        u8 menuItem = sOptionMenuEntries[submenu].menuOptions[i];

        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, sOptionMenuItems[menuItem].itemName, 8, (i * YPOS_SPACING) + 1, TEXT_SKIP_DRAW, NULL);

        if(menuItem == MENUITEM_CANCEL)
            break;
    }

    if(includeChoices)
    {
        for (i = 0; i < MAX_MENUITEM_COUNT; i++)
        {
            u8 menuItem = sOptionMenuEntries[submenu].menuOptions[i];
        
            sOptionMenuItems[menuItem].drawChoices(i, GetMenuItemValue(menuItem));

            if(menuItem == MENUITEM_CANCEL)
                break;
        }
    }

    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static u8 GetMenuItemValue(u8 menuItem)
{
    switch (menuItem)
    {
    case MENUITEM_TEXTSPEED:
        return gSaveBlock2Ptr->optionsTextSpeed;
        
    case MENUITEM_BATTLESCENE_WILD_BATTLES:
        return gSaveBlock2Ptr->optionsWildBattleScene;
        
    case MENUITEM_BATTLESCENE_TRAINER_BATTLES:
        return gSaveBlock2Ptr->optionsTrainerBattleScene;

    case MENUITEM_BATTLESCENE_KEY_BATTLES:
        return gSaveBlock2Ptr->optionsBossBattleScene;
        
    case MENUITEM_AUTORUN_TOGGLE:
        return gSaveBlock2Ptr->optionsAutoRunToggle;
        
    case MENUITEM_NICKNAME_MODE:
        return gSaveBlock2Ptr->optionsNicknameMode;

    case MENUITEM_TIME_OF_DAY:
        return gSaveBlock2Ptr->timeOfDayVisuals;

    case MENUITEM_SEASON:
        return gSaveBlock2Ptr->seasonVisuals;

    case MENUITEM_WEATHER:
        return gSaveBlock2Ptr->weatherVisuals;

    case MENUITEM_SOUND:
        return gSaveBlock2Ptr->optionsSound;

    case MENUITEM_POPUP_SOUND:
        return gSaveBlock2Ptr->optionsPopupSoundOff;

    case MENUITEM_SOUND_CHANNEL_BGM:
        return gSaveBlock2Ptr->optionsSoundChannelBGM;

    case MENUITEM_SOUND_CHANNEL_SE:
        return gSaveBlock2Ptr->optionsSoundChannelSE;

    case MENUITEM_SOUND_CHANNEL_BATTLE_SE:
        return gSaveBlock2Ptr->optionsSoundChannelBattleSE;

    case MENUITEM_SOUND_LOW_HEALTH:
        return gSaveBlock2Ptr->optionsLowHealthBeep;
        
    case MENUITEM_BUTTONMODE:
        return gSaveBlock2Ptr->optionsButtonMode;
        
    case MENUITEM_FRAMETYPE:
        return gSaveBlock2Ptr->optionsWindowFrameType;
    }

    return 0;
}

static void SetMenuItemValue(u8 menuItem, u8 value)
{
    switch (menuItem)
    {
    case MENUITEM_TEXTSPEED:
        gSaveBlock2Ptr->optionsTextSpeed = value;
        break;

    case MENUITEM_BATTLESCENE_WILD_BATTLES:
        gSaveBlock2Ptr->optionsWildBattleScene = value;
        break;

    case MENUITEM_BATTLESCENE_TRAINER_BATTLES:
        gSaveBlock2Ptr->optionsTrainerBattleScene = value;
        break;

    case MENUITEM_BATTLESCENE_KEY_BATTLES:
        gSaveBlock2Ptr->optionsBossBattleScene = value;
        break;

    case MENUITEM_AUTORUN_TOGGLE:
        gSaveBlock2Ptr->optionsAutoRunToggle = value;
        break;

    case MENUITEM_NICKNAME_MODE:
        gSaveBlock2Ptr->optionsNicknameMode = value;
        break;

    case MENUITEM_TIME_OF_DAY:
        gSaveBlock2Ptr->timeOfDayVisuals = value;
        break;

    case MENUITEM_SEASON:
        gSaveBlock2Ptr->seasonVisuals = value;
        break;

    case MENUITEM_WEATHER:
        gSaveBlock2Ptr->weatherVisuals = value;
        break;
        
    case MENUITEM_SOUND:
        gSaveBlock2Ptr->optionsSound = value;
        break;

    case MENUITEM_POPUP_SOUND:
        gSaveBlock2Ptr->optionsPopupSoundOff = value;
        break;
        
    case MENUITEM_SOUND_CHANNEL_BGM:
        {
            bool8 refreshMus = gSaveBlock2Ptr->optionsSoundChannelBGM == 0 || value == 0;

            gSaveBlock2Ptr->optionsSoundChannelBGM = value;

            if(refreshMus)
                FadeOutAndPlayNewMapMusic(GetCurrentMapMusic(), 1);
            else
                m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 256);
        }
        break;
        
    case MENUITEM_SOUND_CHANNEL_SE:
        gSaveBlock2Ptr->optionsSoundChannelSE = value;
        m4aMPlayVolumeControl(&gMPlayInfo_SE1, TRACKS_ALL, 256);
        m4aMPlayVolumeControl(&gMPlayInfo_SE2, TRACKS_ALL, 256);
        m4aMPlayVolumeControl(&gMPlayInfo_SE3, TRACKS_ALL, 256);
        break;

    case MENUITEM_SOUND_CHANNEL_BATTLE_SE:
        gSaveBlock2Ptr->optionsSoundChannelBattleSE = value;
        m4aMPlayVolumeControl(&gMPlayInfo_SE1, TRACKS_ALL, 256);
        m4aMPlayVolumeControl(&gMPlayInfo_SE2, TRACKS_ALL, 256);
        m4aMPlayVolumeControl(&gMPlayInfo_SE3, TRACKS_ALL, 256);
        break;

    case MENUITEM_SOUND_LOW_HEALTH:
        gSaveBlock2Ptr->optionsLowHealthBeep = value;
        break;
        
    case MENUITEM_BUTTONMODE:
        gSaveBlock2Ptr->optionsButtonMode = value;
        break;
        
    case MENUITEM_FRAMETYPE:
        gSaveBlock2Ptr->optionsWindowFrameType = value;
        break;
    }
}

#define TILE_TOP_CORNER_L 0x1A2
#define TILE_TOP_EDGE     0x1A3
#define TILE_TOP_CORNER_R 0x1A4
#define TILE_LEFT_EDGE    0x1A5
#define TILE_RIGHT_EDGE   0x1A7
#define TILE_BOT_CORNER_L 0x1A8
#define TILE_BOT_EDGE     0x1A9
#define TILE_BOT_CORNER_R 0x1AA

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Draw title window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  0, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1,  3,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2,  3, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28,  3,  1,  1,  7);

    // Draw options list window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  4, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
