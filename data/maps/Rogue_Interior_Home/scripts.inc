Rogue_Interior_Home_MapScripts::
# 3 "data/maps/Rogue_Interior_Home/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Rogue_Interior_Home_OnResume
	.byte 0


Rogue_Interior_Home_OnResume::
# 8 "data/maps/Rogue_Interior_Home/scripts.pory"
	setstepcallback STEP_CB_SECRET_BASE
	return


Rogue_Interior_Home_TurnOnPC::
# 13 "data/maps/Rogue_Interior_Home/scripts.pory"
	lockall
# 14 "data/maps/Rogue_Interior_Home/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 15 "data/maps/Rogue_Interior_Home/scripts.pory"
	special DoPCTurnOnEffect
# 17 "data/maps/Rogue_Interior_Home/scripts.pory"
	playse SE_PC_ON
# 18 "data/maps/Rogue_Interior_Home/scripts.pory"
	msgbox Rogue_Interior_Home_TurnOnPC_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Rogue_Interior_Home/scripts.pory"
	special BedroomPC
# 20 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitstate
# 24 "data/maps/Rogue_Interior_Home/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 25 "data/maps/Rogue_Interior_Home/scripts.pory"
	playse SE_PC_OFF
# 26 "data/maps/Rogue_Interior_Home/scripts.pory"
	special DoPCTurnOffEffect
# 28 "data/maps/Rogue_Interior_Home/scripts.pory"
	releaseall
	return


Rogue_Interior_Home_TurnOnPCLowerFloor::
# 33 "data/maps/Rogue_Interior_Home/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_HOME_UPPER_FLOOR
# 34 "data/maps/Rogue_Interior_Home/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Home_TurnOnPCLowerFloor_1
	return

Rogue_Interior_Home_TurnOnPCLowerFloor_1:
# 36 "data/maps/Rogue_Interior_Home/scripts.pory"
	lockall
# 37 "data/maps/Rogue_Interior_Home/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 38 "data/maps/Rogue_Interior_Home/scripts.pory"
	special DoPCTurnOnEffect
# 40 "data/maps/Rogue_Interior_Home/scripts.pory"
	playse SE_PC_ON
# 41 "data/maps/Rogue_Interior_Home/scripts.pory"
	msgbox Rogue_Interior_Home_TurnOnPC_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/Rogue_Interior_Home/scripts.pory"
	special BedroomPC
# 43 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitstate
# 47 "data/maps/Rogue_Interior_Home/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 48 "data/maps/Rogue_Interior_Home/scripts.pory"
	playse SE_PC_OFF
# 49 "data/maps/Rogue_Interior_Home/scripts.pory"
	special DoPCTurnOffEffect
# 51 "data/maps/Rogue_Interior_Home/scripts.pory"
	releaseall
	return


Rogue_Interior_Home_NoteBook::
# 57 "data/maps/Rogue_Interior_Home/scripts.pory"
	lockall
# 59 "data/maps/Rogue_Interior_Home/scripts.pory"
	msgbox Rogue_Interior_Home_NoteBook_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/Rogue_Interior_Home/scripts.pory"
	releaseall
	return


Rogue_Interior_Home_ChangeClothes::
# 66 "data/maps/Rogue_Interior_Home/scripts.pory"
	lockall
# 68 "data/maps/Rogue_Interior_Home/scripts.pory"
	specialvar VAR_RESULT, RoguePlayer_HandleEasterEggOutfitUnlocks
# 70 "data/maps/Rogue_Interior_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Home_ChangeClothes_2
Rogue_Interior_Home_ChangeClothes_1:
# 75 "data/maps/Rogue_Interior_Home/scripts.pory"
	message Rogue_Interior_Home_ChangeClothes_Text_0
# 76 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitmessage
# 78 "data/maps/Rogue_Interior_Home/scripts.pory"
	multichoice 20, 6, MULTI_CHANGE_CLOTHES, NO
# 80 "data/maps/Rogue_Interior_Home/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/Rogue_Interior_Home/scripts.pory"
	case 0, Rogue_Interior_Home_ChangeClothes_6
# 87 "data/maps/Rogue_Interior_Home/scripts.pory"
	case 1, Rogue_Interior_Home_ChangeClothes_7
Rogue_Interior_Home_ChangeClothes_4:
# 95 "data/maps/Rogue_Interior_Home/scripts.pory"
	special Rogue_FixPartyMonDetails
# 96 "data/maps/Rogue_Interior_Home/scripts.pory"
	releaseall
	return

Rogue_Interior_Home_ChangeClothes_2:
# 72 "data/maps/Rogue_Interior_Home/scripts.pory"
	call Rogue_Common_DisplayPopups
	goto Rogue_Interior_Home_ChangeClothes_1

Rogue_Interior_Home_ChangeClothes_6:
# 83 "data/maps/Rogue_Interior_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/Rogue_Interior_Home/scripts.pory"
	special Special_ViewPlayerCustomisationMenu
# 85 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitstate
	goto Rogue_Interior_Home_ChangeClothes_4

Rogue_Interior_Home_ChangeClothes_7:
# 88 "data/maps/Rogue_Interior_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Rogue_Interior_Home/scripts.pory"
	special ChangePlayerNickname
# 90 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitstate
	goto Rogue_Interior_Home_ChangeClothes_4


Rogue_Interior_Home_EnterBed::
# 101 "data/maps/Rogue_Interior_Home/scripts.pory"
	lockall
# 103 "data/maps/Rogue_Interior_Home/scripts.pory"
	message Rogue_Interior_Home_EnterBed_Text_0
# 104 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitmessage
# 106 "data/maps/Rogue_Interior_Home/scripts.pory"
	multichoice 21, 4, MULTI_SELECT_TIME, NO
# 109 "data/maps/Rogue_Interior_Home/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 110 "data/maps/Rogue_Interior_Home/scripts.pory"
	setvar VAR_0x8005, MULTI_B_PRESSED
# 112 "data/maps/Rogue_Interior_Home/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Rogue_Interior_Home_EnterBed_2
Rogue_Interior_Home_EnterBed_1:
# 122 "data/maps/Rogue_Interior_Home/scripts.pory"
	special Rogue_SetTimeAndSeason
# 124 "data/maps/Rogue_Interior_Home/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_Home_EnterBed_4
	return

Rogue_Interior_Home_EnterBed_2:
# 114 "data/maps/Rogue_Interior_Home/scripts.pory"
	message Rogue_Interior_Home_EnterBed_Text_1
# 115 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitmessage
# 117 "data/maps/Rogue_Interior_Home/scripts.pory"
	multichoice 21, 4, MULTI_SELECT_SEASON, NO
# 119 "data/maps/Rogue_Interior_Home/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
	goto Rogue_Interior_Home_EnterBed_1

Rogue_Interior_Home_EnterBed_4:
# 126 "data/maps/Rogue_Interior_Home/scripts.pory"
	closemessage
# 128 "data/maps/Rogue_Interior_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/Rogue_Interior_Home/scripts.pory"
	fadeoutbgm 1
# 134 "data/maps/Rogue_Interior_Home/scripts.pory"
	playbgm MUS_NONE, FALSE
# 135 "data/maps/Rogue_Interior_Home/scripts.pory"
	delay 30
# 139 "data/maps/Rogue_Interior_Home/scripts.pory"
	playse SE_M_SNORE
# 140 "data/maps/Rogue_Interior_Home/scripts.pory"
	waitse
# 141 "data/maps/Rogue_Interior_Home/scripts.pory"
	delay 50
# 143 "data/maps/Rogue_Interior_Home/scripts.pory"
	special ReloadWarpSilent
	return


# 159 "data/maps/Rogue_Interior_Home/scripts.pory"
PlayerLeaveBed:
# 161 "data/maps/Rogue_Interior_Home/scripts.pory"
	walk_right
	step_end

Rogue_Interior_Home_TurnOnPC_Text_0:
# 18 "data/maps/Rogue_Interior_Home/scripts.pory"
	.string "{PLAYER} booted up the PC.$"

Rogue_Interior_Home_NoteBook_Text_0:
# 59 "data/maps/Rogue_Interior_Home/scripts.pory"
	.string "It's a notebook!\p"
	.string "It has a bunch of incoherent\n"
	.string "scribblings from…\p"
	.string "someone called…\p"
	.string "Tate?\p"
	.string "Why's it here?$"

Rogue_Interior_Home_ChangeClothes_Text_0:
# 75 "data/maps/Rogue_Interior_Home/scripts.pory"
	.string "What would you like to do?$"

Rogue_Interior_Home_EnterBed_Text_0:
# 103 "data/maps/Rogue_Interior_Home/scripts.pory"
	.string "What time would you like to wake up?$"

Rogue_Interior_Home_EnterBed_Text_1:
# 114 "data/maps/Rogue_Interior_Home/scripts.pory"
	.string "Which season would you like to wake up\n"
	.string "in?$"
