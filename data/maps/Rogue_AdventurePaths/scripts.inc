Rogue_AdventurePaths_MapScripts::
# 9 "data/maps/Rogue_AdventurePaths/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Rogue_AdventurePaths_OnLoad
# 10 "data/maps/Rogue_AdventurePaths/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_AdventurePaths_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_AdventurePaths_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Rogue_AdventurePaths/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_AdventurePaths_PreviewCutscene
	.2byte 0


Rogue_AdventurePaths_OnLoad::
# 22 "data/maps/Rogue_AdventurePaths/scripts.pory"
	special RogueAdv_ApplyAdventureMetatiles
	return


Rogue_AdventurePaths_PreviewCutscene::
# 27 "data/maps/Rogue_AdventurePaths/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 30 "data/maps/Rogue_AdventurePaths/scripts.pory"
AdventurePaths_OffsetCamera:
# 31 "data/maps/Rogue_AdventurePaths/scripts.pory"
	walk_right
# 31 "data/maps/Rogue_AdventurePaths/scripts.pory"
	walk_right
# 31 "data/maps/Rogue_AdventurePaths/scripts.pory"
	walk_right
# 31 "data/maps/Rogue_AdventurePaths/scripts.pory"
	walk_right
	step_end

Rogue_AdventurePaths_InteractRoom::
# 36 "data/maps/Rogue_AdventurePaths/scripts.pory"
	lock
# 37 "data/maps/Rogue_AdventurePaths/scripts.pory"
	special RogueAdv_GetLastInteractedRoomParams
# 39 "data/maps/Rogue_AdventurePaths/scripts.pory"
	switch VAR_0x8005
# 41 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_BOSS, Rogue_AdventurePaths_InteractRoom_3
# 45 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_MINIBOSS, Rogue_AdventurePaths_InteractRoom_4
# 48 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_WILD_DEN, Rogue_AdventurePaths_InteractRoom_5
# 51 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_HONEY_TREE, Rogue_AdventurePaths_InteractRoom_6
# 54 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_GAMESHOW, Rogue_AdventurePaths_InteractRoom_7
# 57 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_DARK_DEAL, Rogue_AdventurePaths_InteractRoom_8
# 60 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_LAB, Rogue_AdventurePaths_InteractRoom_9
# 63 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_SHRINE, Rogue_AdventurePaths_InteractRoom_10
# 66 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_CATCHING_CONTEST, Rogue_AdventurePaths_InteractRoom_11
# 69 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_SIGN, Rogue_AdventurePaths_InteractRoom_12
# 72 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_BATTLE_SIM, Rogue_AdventurePaths_InteractRoom_13
# 75 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_RESTSTOP, Rogue_AdventurePaths_InteractRoom_14
# 94 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_ROUTE, Rogue_AdventurePaths_InteractRoom_15
# 110 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_LEGENDARY, Rogue_AdventurePaths_InteractRoom_16
# 113 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_ROOM_TEAM_HIDEOUT, Rogue_AdventurePaths_InteractRoom_17
# 117 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_15, MSGBOX_YESNO
Rogue_AdventurePaths_InteractRoom_1:
# 120 "data/maps/Rogue_AdventurePaths/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_AdventurePaths_InteractRoom_20
Rogue_AdventurePaths_InteractRoom_19:
# 125 "data/maps/Rogue_AdventurePaths/scripts.pory"
	release
	return

Rogue_AdventurePaths_InteractRoom_3:
# 42 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Rogue_AdventurePaths/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_4:
# 46 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_1, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_5:
# 49 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_2, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_6:
# 52 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_3, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_7:
# 55 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_4, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_8:
# 58 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_5, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_9:
# 61 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_6, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_10:
# 64 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_7, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_11:
# 67 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_8, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_12:
# 70 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_9, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_13:
# 73 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_10, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_14:
# 76 "data/maps/Rogue_AdventurePaths/scripts.pory"
	switch VAR_0x8006
# 78 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_SUBROOM_RESTSTOP_FULL, Rogue_AdventurePaths_InteractRoom_23
# 81 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_SUBROOM_RESTSTOP_SHOP, Rogue_AdventurePaths_InteractRoom_24
# 84 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_SUBROOM_RESTSTOP_BATTLE, Rogue_AdventurePaths_InteractRoom_25
# 87 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case ADVPATH_SUBROOM_RESTSTOP_DAYCARE, Rogue_AdventurePaths_InteractRoom_26
# 91 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_15, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_15:
# 95 "data/maps/Rogue_AdventurePaths/scripts.pory"
	switch VAR_0x8006
# 97 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case 0, Rogue_AdventurePaths_InteractRoom_29
# 100 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case 1, Rogue_AdventurePaths_InteractRoom_30
# 103 "data/maps/Rogue_AdventurePaths/scripts.pory"
	case 2, Rogue_AdventurePaths_InteractRoom_31
# 107 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_15, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_16:
# 111 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_19, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_17:
# 114 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_20, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_20:
# 122 "data/maps/Rogue_AdventurePaths/scripts.pory"
	special RogueAdv_WarpLastInteractedRoom
	goto Rogue_AdventurePaths_InteractRoom_19

Rogue_AdventurePaths_InteractRoom_23:
# 79 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_11, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_24:
# 82 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_12, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_25:
# 85 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_13, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_26:
# 88 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_14, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_29:
# 98 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_16, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_30:
# 101 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_17, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1

Rogue_AdventurePaths_InteractRoom_31:
# 104 "data/maps/Rogue_AdventurePaths/scripts.pory"
	msgbox Rogue_AdventurePaths_InteractRoom_Text_18, MSGBOX_YESNO
	goto Rogue_AdventurePaths_InteractRoom_1


Rogue_AdventurePaths_InteractRoom_Text_0:
# 42 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Mighty Trainer!$"

Rogue_AdventurePaths_InteractRoom_Text_1:
# 46 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Strong Trainer!\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_2:
# 49 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's the habitat of a Trained Pokémon!\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_3:
# 52 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Honey Tree habitat!\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_4:
# 55 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a… Game Show?\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_5:
# 58 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Dark Deal…?\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_6:
# 61 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Pokémon Lab.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_7:
# 64 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Mysterious Shrine.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_8:
# 67 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Catching Contest.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_9:
# 70 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Mysterious Sign.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_10:
# 73 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Battle Simulator.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_11:
# 79 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Full Rest Stop.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_12:
# 82 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Mart Rest Stop.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_13:
# 85 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Battle Prep. Rest Stop.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_14:
# 88 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Day Care Rest Stop.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_15:
# 91 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "??\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_16:
# 98 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Calm {STR_VAR_1} route.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_17:
# 101 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's an Average {STR_VAR_1} route.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_18:
# 104 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Tough {STR_VAR_1} route.\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_19:
# 111 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Pokémon of Legends!\n"
	.string "Enter this encounter?$"

Rogue_AdventurePaths_InteractRoom_Text_20:
# 114 "data/maps/Rogue_AdventurePaths/scripts.pory"
	.string "It's a Team Hideout!\n"
	.string "Enter this encounter?$"
