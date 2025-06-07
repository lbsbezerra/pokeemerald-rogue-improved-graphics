Rogue_Encounter_Graveyard_MapScripts::
# 14 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Encounter_Graveyard_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Rogue_Encounter_Graveyard_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0


Rogue_Graveyard_EnterTrigger::
# 22 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	lock
# 24 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Graveyard_CameraInitialFocus
# 26 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	waitmovement 0
# 28 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	msgbox Rogue_Graveyard_EnterTrigger_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Graveyard_CameraInitialUnfocus
# 31 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	waitmovement 0
# 32 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	special RemoveCameraObject
# 34 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	release
	return


Rogue_Graveyard_SelectOption_Internal::
# 39 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	lockall
# 41 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8001
# 42 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	callnative ScriptMenu_ShowItemDescription
# 44 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	msgbox Rogue_Graveyard_SelectOption_Internal_Text_0, MSGBOX_YESNO
# 46 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	callnative ScriptMenu_HideItemDescription
# 48 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Graveyard_SelectOption_Internal_2
Rogue_Graveyard_SelectOption_Internal_1:
# 87 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	releaseall
	return

Rogue_Graveyard_SelectOption_Internal_2:
# 51 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	finditem VAR_0x8001, 1
# 52 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	call Rogue_Common_DisplayPopups
# 54 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	playse SE_THUNDER
# 56 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	removeobject 1, MAP_ROGUE_ENCOUNTER_GRAVEYARD
# 57 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	removeobject 2, MAP_ROGUE_ENCOUNTER_GRAVEYARD
# 58 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	removeobject 3, MAP_ROGUE_ENCOUNTER_GRAVEYARD
# 60 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 61 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	applymovement 4, Graveyard_Devil_Eyes
# 63 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	msgbox Rogue_Graveyard_SelectOption_Internal_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	waitmovement 0
# 68 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	giveitem VAR_ROGUE_ITEM10, 1
# 69 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	call Rogue_Common_DisplayPopups
# 71 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	copyvar VAR_0x8004, VAR_ROGUE_ITEM10
# 72 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	callnative ScriptMenu_ShowItemDescription
# 73 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	msgbox Rogue_Graveyard_SelectOption_Internal_Text_2, MSGBOX_DEFAULT
# 74 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	closemessage
# 75 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	callnative ScriptMenu_HideItemDescription
# 77 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
# 79 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	applymovement 4, Graveyard_Devil_Leave
# 80 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	waitmovement 0
# 82 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	removeobject 4, MAP_ROGUE_ENCOUNTER_GRAVEYARD
	goto Rogue_Graveyard_SelectOption_Internal_1


Rogue_Graveyard_SelectOption0::
# 92 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM0
# 93 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	call Rogue_Graveyard_SelectOption_Internal
	return


Rogue_Graveyard_SelectOption1::
# 98 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM1
# 99 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	call Rogue_Graveyard_SelectOption_Internal
	return


Rogue_Graveyard_SelectOption2::
# 104 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM2
# 105 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	call Rogue_Graveyard_SelectOption_Internal
	return


# 108 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
Graveyard_CameraInitialFocus:
# 109 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_up
# 109 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_up
# 109 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_up
	step_end

# 112 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
Graveyard_CameraInitialUnfocus:
# 113 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_down
# 113 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_down
# 113 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_down
	step_end

# 116 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
Graveyard_Devil_Eyes:
# 117 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	face_left
	step_end

# 120 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
Graveyard_Devil_Leave:
# 121 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_up
# 121 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_up
# 121 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_up
# 121 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	walk_fast_up
	step_end

Rogue_Graveyard_EnterTrigger_Text_0:
# 28 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	.string "???: One… choice…$"

Rogue_Graveyard_SelectOption_Internal_Text_0:
# 44 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	.string "Choose this Charm?$"

Rogue_Graveyard_SelectOption_Internal_Text_1:
# 63 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	.string "???: The price this time shall be…$"

Rogue_Graveyard_SelectOption_Internal_Text_2:
# 73 "data/maps/Rogue_Encounter_Graveyard/scripts.pory"
	.string "You have been afflicted with a new\n"
	.string "Curse.$"
