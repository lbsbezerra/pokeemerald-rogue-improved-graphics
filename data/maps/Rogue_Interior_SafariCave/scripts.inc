Rogue_Interior_SafariCave_MapScripts::
	.byte 0


Rogue_Interior_SafariCave_InteractLegendSummon::
# 12 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	lock
# 14 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_0
# 16 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Rogue_AnyLegendsInSafari
# 18 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_SafariCave_InteractLegendSummon_2
# 69 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_6
Rogue_Interior_SafariCave_InteractLegendSummon_1:
# 72 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	release
	return

Rogue_Interior_SafariCave_InteractLegendSummon_2:
# 21 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_1
# 23 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special RogueSafari_CompactEmptyEntries
# 24 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Special_SelectSafariMonInPokedex
# 25 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 27 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	compare VAR_RESULT, ROGUE_SAFARI_TOTAL_MONS
	goto_if_ne Rogue_Interior_SafariCave_InteractLegendSummon_5
	goto Rogue_Interior_SafariCave_InteractLegendSummon_1

Rogue_Interior_SafariCave_InteractLegendSummon_5:
# 29 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 31 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Rogue_BufferSafariMonInfo
# 32 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Bag_ChoosePokeblock
# 35 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 37 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	compare VAR_ITEM_ID, ITEM_NONE
	goto_if_ne Rogue_Interior_SafariCave_InteractLegendSummon_7
	goto Rogue_Interior_SafariCave_InteractLegendSummon_1

Rogue_Interior_SafariCave_InteractLegendSummon_7:
# 39 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Rogue_CheckSafariMonLikesPokeblock
# 40 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_SafariCave_InteractLegendSummon_9
# 61 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Rogue_BufferSafariMonInfo
# 62 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_5
	goto Rogue_Interior_SafariCave_InteractLegendSummon_1

Rogue_Interior_SafariCave_InteractLegendSummon_9:
# 42 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	bufferitemnameplural STR_VAR_2, VAR_ITEM_ID, ROGUE_SAFARI_LEGENDS_POKEBLOCK_COST
# 43 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	checkitem VAR_ITEM_ID, ROGUE_SAFARI_LEGENDS_POKEBLOCK_COST
# 45 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_SafariCave_InteractLegendSummon_12
# 56 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_4
	goto Rogue_Interior_SafariCave_InteractLegendSummon_1

Rogue_Interior_SafariCave_InteractLegendSummon_12:
# 47 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_InteractLegendSummon_Text_3
# 48 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	removeitem VAR_ITEM_ID, ROGUE_SAFARI_LEGENDS_POKEBLOCK_COST
# 50 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	closemessage
# 51 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special Rogue_EnqueueSafariBattle
# 52 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	call Rogue_Interior_SafariCave_BattleSummonMon
	goto Rogue_Interior_SafariCave_InteractLegendSummon_1


Rogue_Interior_SafariCave_BattleSummonMon::
# 77 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	fadeoutbgm 1
# 79 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 80 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	delay 60
# 82 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8004, 1
# 83 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8005, 1
# 84 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8006, 8
# 85 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8007, 5
# 86 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special ShakeCamera
# 87 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 89 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	playbgm MUS_DP_LEGEND_APPEARS, FALSE
# 91 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	delay 60
# 92 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8004, -2
# 93 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8005, 2
# 94 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8006, 8
# 95 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8007, 5
# 96 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special ShakeCamera
# 97 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 99 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	delay 60
# 100 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8004, 3
# 101 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8005, 3
# 102 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8006, 8
# 103 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8007, 5
# 104 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special ShakeCamera
# 105 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 107 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	delay 60
# 108 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8004, -4
# 109 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8005, 4
# 110 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8006, 8
# 111 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8007, 5
# 112 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special ShakeCamera
# 113 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
# 115 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	delay 90
# 116 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8004, 5
# 117 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8005, 5
# 118 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8006, 8
# 119 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	setvar VAR_0x8007, 5
# 120 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special ShakeCamera
# 123 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 124 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	msgbox Rogue_Interior_SafariCave_BattleSummonMon_Text_0
# 126 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitmoncry
# 128 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	seteventmon VAR_RESULT, 1, ITEMS_COUNT, FALSE
# 129 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	special BattleSetup_StartWildBattle
# 130 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	waitstate
	return


Rogue_Interior_SafariCave_InteractLegendSummon_Text_0:
# 14 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "It's an odd statue…$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_1:
# 21 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "Powerful Pokémon cries echo\n"
	.string "throughout the cave.\p"
	.string "20 {POKEBLOCK} can be offered in order to\n"
	.string "encounter one of these Pokemon.\p"
	.string "Which Pokémon would you like to make an\n"
	.string "offering to?$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_2:
# 32 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "What would you like to offer to\n"
	.string "{STR_VAR_1}?$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_3:
# 47 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "{STR_VAR_2} were scattered near\n"
	.string "the statue…$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_4:
# 56 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "That is not enough {POKEBLOCK}.\n"
	.string "{STR_VAR_2} are needed in order to\l"
	.string "make an offering.$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_5:
# 62 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "{STR_VAR_1} won't like that type of\n"
	.string "{POKEBLOCK}.$"

Rogue_Interior_SafariCave_InteractLegendSummon_Text_6:
# 69 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "The cave is silent…$"

Rogue_Interior_SafariCave_BattleSummonMon_Text_0:
# 124 "data/maps/Rogue_Interior_SafariCave/scripts.pory"
	.string "!!!$"
