Rogue_Area_InteractWithWorkbench::
# 7 "data/scripts/Rogue/Rogue_Hub.pory"
	special Rogue_IsMultiplayerClient
# 8 "data/scripts/Rogue/Rogue_Hub.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_InteractWithWorkbench_1
# 14 "data/scripts/Rogue/Rogue_Hub.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_gt Rogue_Area_InteractWithWorkbench_2
# 26 "data/scripts/Rogue/Rogue_Hub.pory"
	lock
# 27 "data/scripts/Rogue/Rogue_Hub.pory"
	msgbox Rogue_Area_InteractWithWorkbench_Text_0
# 28 "data/scripts/Rogue/Rogue_Hub.pory"
	release
	return

Rogue_Area_InteractWithWorkbench_1:
# 10 "data/scripts/Rogue/Rogue_Hub.pory"
	lock
# 11 "data/scripts/Rogue/Rogue_Hub.pory"
	msgbox Rogue_Area_InteractWithWorkbench_Text_0
# 12 "data/scripts/Rogue/Rogue_Hub.pory"
	release
	return

Rogue_Area_InteractWithWorkbench_2:
# 16 "data/scripts/Rogue/Rogue_Hub.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 17 "data/scripts/Rogue/Rogue_Hub.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne Rogue_Area_InteractWithWorkbench_6
	return

Rogue_Area_InteractWithWorkbench_6:
# 19 "data/scripts/Rogue/Rogue_Hub.pory"
	lock
# 20 "data/scripts/Rogue/Rogue_Hub.pory"
	call Rogue_Area_WorkbenchOptions
# 21 "data/scripts/Rogue/Rogue_Hub.pory"
	release
	return


Rogue_Area_WorkbenchOptions::
# 34 "data/scripts/Rogue/Rogue_Hub.pory"
	lock
# 35 "data/scripts/Rogue/Rogue_Hub.pory"
	message Rogue_Area_WorkbenchOptions_Text_0
# 36 "data/scripts/Rogue/Rogue_Hub.pory"
	waitmessage
# 38 "data/scripts/Rogue/Rogue_Hub.pory"
	rogue_dynamicpokemart ROGUE_SHOP_HUB_UPGRADES
# 41 "data/scripts/Rogue/Rogue_Hub.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_WorkbenchOptions_2
Rogue_Area_WorkbenchOptions_1:
# 53 "data/scripts/Rogue/Rogue_Hub.pory"
	release
	return

Rogue_Area_WorkbenchOptions_2:
# 43 "data/scripts/Rogue/Rogue_Hub.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/scripts/Rogue/Rogue_Hub.pory"
	call Rogue_Area_PlayBuildSound
# 47 "data/scripts/Rogue/Rogue_Hub.pory"
	msgbox Rogue_Area_WorkbenchOptions_Text_1, MSGBOX_DEFAULT
# 49 "data/scripts/Rogue/Rogue_Hub.pory"
	waitfanfare
# 50 "data/scripts/Rogue/Rogue_Hub.pory"
	special ReloadWarpSilent
	goto Rogue_Area_WorkbenchOptions_1


Rogue_Area_PlayBuildSound::
# 61 "data/scripts/Rogue/Rogue_Hub.pory"
	closemessage
# 62 "data/scripts/Rogue/Rogue_Hub.pory"
	playbgm MUS_NONE, FALSE
# 63 "data/scripts/Rogue/Rogue_Hub.pory"
	delay 15
# 65 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_BRIDGE_WALK
# 66 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 67 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_BRIDGE_WALK
# 68 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 69 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_BRIDGE_WALK
# 70 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 71 "data/scripts/Rogue/Rogue_Hub.pory"
	delay 15
# 73 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_M_DIG
# 74 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 75 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_M_DIG
# 76 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 77 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_M_DIG
# 78 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 79 "data/scripts/Rogue/Rogue_Hub.pory"
	delay 15
# 81 "data/scripts/Rogue/Rogue_Hub.pory"
	playse SE_M_VICEGRIP
# 82 "data/scripts/Rogue/Rogue_Hub.pory"
	waitse
# 83 "data/scripts/Rogue/Rogue_Hub.pory"
	delay 15
# 85 "data/scripts/Rogue/Rogue_Hub.pory"
	playfanfare MUS_LEVEL_UP
	return


Rogue_Area_InteractWithWorkbench_Text_0:
# 11 "data/scripts/Rogue/Rogue_Hub.pory"
	.string "It's a workbench!\p"
	.string "It's has a bunch of complicated designs\n"
	.string "and tools on top.$"

Rogue_Area_WorkbenchOptions_Text_0:
# 35 "data/scripts/Rogue/Rogue_Hub.pory"
	.string "What would you like to build?$"

Rogue_Area_WorkbenchOptions_Text_1:
# 47 "data/scripts/Rogue/Rogue_Hub.pory"
	.string "{POKEMON_HUB} has been upgraded!$"
