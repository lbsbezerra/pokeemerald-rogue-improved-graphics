Rogue_Hub_Debug_MapScripts::
	.byte 0


Rogue_Debug_FillPCWithGen::
# 6 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 8 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_FillPCWithGen_Text_0, MSGBOX_YESNO
# 10 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_FillPCWithGen_2
Rogue_Debug_FillPCWithGen_1:
# 52 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_FillPCWithGen_Text_4, MSGBOX_YESNO
# 53 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_FillPCWithGen_5
Rogue_Debug_FillPCWithGen_4:
# 59 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_FillPCWithGen_2:
# 12 "data/maps/Rogue_Hub_Debug/scripts.pory"
	message Rogue_Debug_FillPCWithGen_Text_1
# 13 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitmessage
# 18 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_QUEST_LOG
# 19 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Debug_FillPCWithGen_8
Rogue_Debug_FillPCWithGen_7:
# 24 "data/maps/Rogue_Hub_Debug/scripts.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, Rogue_Debug_FillPCWithGen_11
# 30 "data/maps/Rogue_Hub_Debug/scripts.pory"
	multichoice 20, 6, MULTI_GENERATIONS_UPTO3, NO
Rogue_Debug_FillPCWithGen_10:
# 33 "data/maps/Rogue_Hub_Debug/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/Rogue_Hub_Debug/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Debug_FillPCWithGen_15
# 39 "data/maps/Rogue_Hub_Debug/scripts.pory"
	case 8, Rogue_Debug_FillPCWithGen_16
Rogue_Debug_FillPCWithGen_16:
# 40 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitse
# 41 "data/maps/Rogue_Hub_Debug/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Rogue_Hub_Debug/scripts.pory"
	addvar VAR_RESULT, 1
# 43 "data/maps/Rogue_Hub_Debug/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 45 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_FillGenPC
# 47 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_FillPCWithGen_Text_3, MSGBOX_DEFAULT
	goto Rogue_Debug_FillPCWithGen_1

Rogue_Debug_FillPCWithGen_5:
# 55 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_FillDex
# 56 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_FillPCWithGen_Text_3, MSGBOX_DEFAULT
	goto Rogue_Debug_FillPCWithGen_4

Rogue_Debug_FillPCWithGen_8:
# 21 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_QUEST_LOG
	goto Rogue_Debug_FillPCWithGen_7

Rogue_Debug_FillPCWithGen_11:
# 26 "data/maps/Rogue_Hub_Debug/scripts.pory"
	multichoice 20, 0, MULTI_GENERATIONS_UPTO9, NO
	goto Rogue_Debug_FillPCWithGen_10

Rogue_Debug_FillPCWithGen_15:
# 36 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_FillPCWithGen_Text_2, MSGBOX_DEFAULT
	goto Rogue_Debug_FillPCWithGen_1


Rogue_Debug_ClearQuests::
# 64 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 66 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_ClearQuests_Text_0, MSGBOX_YESNO
# 68 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_ClearQuests_2
Rogue_Debug_ClearQuests_1:
# 73 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_ClearQuests_2:
# 70 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_ClearQuests
	goto Rogue_Debug_ClearQuests_1


Rogue_Debug_CompleteAvaliableQuests::
# 78 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 80 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_CompleteAvaliableQuests_Text_0, MSGBOX_YESNO
# 82 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_CompleteAvaliableQuests_2
Rogue_Debug_CompleteAvaliableQuests_1:
# 87 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_CompleteAvaliableQuests_2:
# 84 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_CompleteAvaliableQuests
	goto Rogue_Debug_CompleteAvaliableQuests_1


Rogue_Debug_CollectAllQuests::
# 92 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 94 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_CollectAllQuests_Text_0, MSGBOX_YESNO
# 96 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_CollectAllQuests_2
Rogue_Debug_CollectAllQuests_1:
# 101 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_CollectAllQuests_2:
# 98 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_CollectAllQuests
	goto Rogue_Debug_CollectAllQuests_1


Rogue_Debug_AddMoney::
# 106 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 108 "data/maps/Rogue_Hub_Debug/scripts.pory"
	addmoney 10000
# 109 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_AddMoney_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_C_GEAR
# 130 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Debug_AddMoney_2
Rogue_Debug_AddMoney_1:
# 135 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_STAR_PIECE, 100
# 136 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_RARE_CANDY, 100
# 137 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE, 100
# 138 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_BUILDING_SUPPLIES, 100
# 140 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_AddMoney_2:
# 132 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_C_GEAR, 1
	goto Rogue_Debug_AddMoney_1


Rogue_Debug_GiveSacredAsh::
# 145 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 147 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_SACRED_ASH
# 148 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveSacredAsh_2
# 155 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_GiveSacredAsh_Text_1
# 156 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_SACRED_ASH, 1
Rogue_Debug_GiveSacredAsh_1:
# 159 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_GiveSacredAsh_2:
# 150 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_GiveSacredAsh_Text_0
# 151 "data/maps/Rogue_Hub_Debug/scripts.pory"
	removeitem ITEM_SACRED_ASH, 1
	goto Rogue_Debug_GiveSacredAsh_1


Rogue_Debug_TrainerSingle::
# 164 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 165 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special HealPlayerParty
# 166 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_StartBattle
# 167 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_DisplayDifficultyConfigMenu::
# 172 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 173 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_DisplayDifficultyConfigMenu_Text_0
# 174 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special Special_ViewDifficultyConfigMenu
# 175 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitstate
# 177 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_DisplayPokedex::
# 182 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 183 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_DisplayPokedex_Text_0
# 184 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special Special_SelectMonInPokedex
# 185 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitstate
# 186 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_DisplayVoltorbFlip::
# 191 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 192 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_DisplayVoltorbFlip_Text_0
# 193 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special Special_ViewVoltorbFlip
# 194 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitstate
# 195 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_DisplayWorldMap::
# 200 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 201 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_DisplayWorldMap_Text_0
# 202 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special Special_ViewWorldMap
# 203 "data/maps/Rogue_Hub_Debug/scripts.pory"
	waitstate
# 204 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_GiveDynamicUniqueMon::
# 209 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 210 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_GiveDynamicUniqueMon_Text_0, MSGBOX_YESNO
# 212 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveDynamicUniqueMon_2
Rogue_Debug_GiveDynamicUniqueMon_1:
# 218 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_GiveDynamicUniqueMon_Text_1, MSGBOX_YESNO
# 220 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveDynamicUniqueMon_5
Rogue_Debug_GiveDynamicUniqueMon_4:
# 226 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_GiveDynamicUniqueMon_Text_2, MSGBOX_YESNO
# 228 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveDynamicUniqueMon_8
Rogue_Debug_GiveDynamicUniqueMon_7:
# 234 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_GiveDynamicUniqueMon_2:
# 214 "data/maps/Rogue_Hub_Debug/scripts.pory"
	setvar VAR_0x8004, 0
# 215 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_GiveDynamicUniqueMon
	goto Rogue_Debug_GiveDynamicUniqueMon_1

Rogue_Debug_GiveDynamicUniqueMon_5:
# 222 "data/maps/Rogue_Hub_Debug/scripts.pory"
	setvar VAR_0x8004, 1
# 223 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_GiveDynamicUniqueMon
	goto Rogue_Debug_GiveDynamicUniqueMon_4

Rogue_Debug_GiveDynamicUniqueMon_8:
# 230 "data/maps/Rogue_Hub_Debug/scripts.pory"
	setvar VAR_0x8004, 2
# 231 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueDebug_GiveDynamicUniqueMon
	goto Rogue_Debug_GiveDynamicUniqueMon_7


Rogue_Debug_GiveMegaRing::
# 239 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 249 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_MEGA_RING
# 250 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveMegaRing_2
# 256 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_MEGA_RING
Rogue_Debug_GiveMegaRing_1:
# 261 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_GiveMegaRing_2:
# 252 "data/maps/Rogue_Hub_Debug/scripts.pory"
	removeitem ITEM_MEGA_RING
	goto Rogue_Debug_GiveMegaRing_1


Rogue_Debug_GiveZRing::
# 266 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 276 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_Z_POWER_RING
# 277 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_GiveZRing_2
# 283 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_Z_POWER_RING
Rogue_Debug_GiveZRing_1:
# 288 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_GiveZRing_2:
# 279 "data/maps/Rogue_Hub_Debug/scripts.pory"
	removeitem ITEM_Z_POWER_RING
	goto Rogue_Debug_GiveZRing_1


Rogue_Debug_DynamaxBand::
# 293 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 303 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_DYNAMAX_BAND
# 304 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_DynamaxBand_2
# 310 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_DYNAMAX_BAND
Rogue_Debug_DynamaxBand_1:
# 315 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_DynamaxBand_2:
# 306 "data/maps/Rogue_Hub_Debug/scripts.pory"
	removeitem ITEM_DYNAMAX_BAND
	goto Rogue_Debug_DynamaxBand_1


Rogue_Debug_HealingFlask::
# 320 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 322 "data/maps/Rogue_Hub_Debug/scripts.pory"
	checkitem ITEM_HEALING_FLASK
# 323 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_HealingFlask_2
# 329 "data/maps/Rogue_Hub_Debug/scripts.pory"
	giveitem ITEM_HEALING_FLASK
Rogue_Debug_HealingFlask_1:
# 332 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_HealingFlask_2:
# 325 "data/maps/Rogue_Hub_Debug/scripts.pory"
	removeitem ITEM_HEALING_FLASK
	goto Rogue_Debug_HealingFlask_1


Rogue_Debug_ChooseStarter::
# 337 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 338 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special ChooseStarter
# 339 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return


Rogue_Debug_ClearDynamicCustomMons::
# 345 "data/maps/Rogue_Hub_Debug/scripts.pory"
	special RogueGift_ClearDynamicCustomMons
# 346 "data/maps/Rogue_Hub_Debug/scripts.pory"
	call Rogue_Interior_BillsLab_TalkPC
	return


Rogue_Debug_AdjustMonMasteries::
# 351 "data/maps/Rogue_Hub_Debug/scripts.pory"
	lock
# 352 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_AdjustMonMasteries_Text_0, MSGBOX_YESNO
# 353 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_AdjustMonMasteries_2
Rogue_Debug_AdjustMonMasteries_1:
# 358 "data/maps/Rogue_Hub_Debug/scripts.pory"
	msgbox Rogue_Debug_AdjustMonMasteries_Text_1, MSGBOX_YESNO
# 359 "data/maps/Rogue_Hub_Debug/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Debug_AdjustMonMasteries_5
Rogue_Debug_AdjustMonMasteries_4:
# 364 "data/maps/Rogue_Hub_Debug/scripts.pory"
	release
	return

Rogue_Debug_AdjustMonMasteries_2:
# 355 "data/maps/Rogue_Hub_Debug/scripts.pory"
	callnative RogueDebug_ClearMonMasteries
	goto Rogue_Debug_AdjustMonMasteries_1

Rogue_Debug_AdjustMonMasteries_5:
# 361 "data/maps/Rogue_Hub_Debug/scripts.pory"
	callnative RogueDebug_FillMonMasteries
	goto Rogue_Debug_AdjustMonMasteries_4


Rogue_Debug_FillPCWithGen_Text_0:
# 8 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Fill PC?$"

Rogue_Debug_FillPCWithGen_Text_1:
# 12 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Which gen?$"

Rogue_Debug_FillPCWithGen_Text_2:
# 36 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "No worries!\n"
	.string "Come chat to me if you ever change your\l"
	.string "mind.$"

Rogue_Debug_FillPCWithGen_Text_3:
# 47 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Done.$"

Rogue_Debug_FillPCWithGen_Text_4:
# 52 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Fill dex?$"

Rogue_Debug_ClearQuests_Text_0:
# 66 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "ClearQuests$"

Rogue_Debug_CompleteAvaliableQuests_Text_0:
# 80 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "CompleteAvaliableQuests$"

Rogue_Debug_CollectAllQuests_Text_0:
# 94 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "CollectAllQuests$"

Rogue_Debug_AddMoney_Text_0:
# 109 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Lots of stuff.$"

Rogue_Debug_GiveSacredAsh_Text_0:
# 150 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "REMOVED$"

Rogue_Debug_GiveSacredAsh_Text_1:
# 155 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "GIVEN$"

Rogue_Debug_DisplayDifficultyConfigMenu_Text_0:
# 173 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Difficulty menu$"

Rogue_Debug_DisplayPokedex_Text_0:
# 183 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Select Mon$"

Rogue_Debug_DisplayVoltorbFlip_Text_0:
# 192 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Voltorb flip$"

Rogue_Debug_DisplayWorldMap_Text_0:
# 201 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Hub map$"

Rogue_Debug_GiveDynamicUniqueMon_Text_0:
# 210 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Give Dynamic Unique Common?$"

Rogue_Debug_GiveDynamicUniqueMon_Text_1:
# 218 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Give Dynamic Unique Rare?$"

Rogue_Debug_GiveDynamicUniqueMon_Text_2:
# 226 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "Give Dynamic Unique Epic?$"

Rogue_Debug_AdjustMonMasteries_Text_0:
# 352 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "reset mon masteries?$"

Rogue_Debug_AdjustMonMasteries_Text_1:
# 358 "data/maps/Rogue_Hub_Debug/scripts.pory"
	.string "fill mon masteries?$"
