Rogue_Area_Market_MapScripts::
# 8 "data/maps/Rogue_Area_Market/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_Market_OnMapLoad
	.byte 0


Rogue_Area_Market_OnMapLoad::
# 14 "data/maps/Rogue_Area_Market/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARKET_BANK
# 15 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_OnMapLoad_2
# 21 "data/maps/Rogue_Area_Market/scripts.pory"
	setflag FLAG_TEMP_1
Rogue_Area_Market_OnMapLoad_1:
# 24 "data/maps/Rogue_Area_Market/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARKET_TREAT_SHOP
# 25 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_Market_OnMapLoad_6
# 31 "data/maps/Rogue_Area_Market/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Area_Market_OnMapLoad_5:
# 34 "data/maps/Rogue_Area_Market/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARKET_POKEBLOCK_BLENDERS
# 35 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_Market_OnMapLoad_9
# 41 "data/maps/Rogue_Area_Market/scripts.pory"
	setflag FLAG_TEMP_3
	return

Rogue_Area_Market_OnMapLoad_2:
# 17 "data/maps/Rogue_Area_Market/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_Area_Market_OnMapLoad_1

Rogue_Area_Market_OnMapLoad_6:
# 27 "data/maps/Rogue_Area_Market/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_Area_Market_OnMapLoad_5

Rogue_Area_Market_OnMapLoad_9:
# 37 "data/maps/Rogue_Area_Market/scripts.pory"
	clearflag FLAG_TEMP_3
	return


Rogue_Area_Market_ShopBank::
# 49 "data/maps/Rogue_Area_Market/scripts.pory"
	lock
# 50 "data/maps/Rogue_Area_Market/scripts.pory"
	faceplayer
# 51 "data/maps/Rogue_Area_Market/scripts.pory"
	message Rogue_Area_Market_ShopBank_Text_0
# 52 "data/maps/Rogue_Area_Market/scripts.pory"
	waitmessage
# 54 "data/maps/Rogue_Area_Market/scripts.pory"
	pokemart BankMart
# 56 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_ShopBank_Text_1
# 57 "data/maps/Rogue_Area_Market/scripts.pory"
	release
	return


Rogue_Area_Market_BankSign::
# 62 "data/maps/Rogue_Area_Market/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARKET_BANK
# 63 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BankSign_1
	return

Rogue_Area_Market_BankSign_1:
# 65 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BankSign_Text_0, MSGBOX_SIGN
	return


	.align 2
# 69 "data/maps/Rogue_Area_Market/scripts.pory"
BankMart:
# 71 "data/maps/Rogue_Area_Market/scripts.pory"
	.2byte ITEM_SMALL_COIN_CASE
# 72 "data/maps/Rogue_Area_Market/scripts.pory"
	.2byte ITEM_LARGE_COIN_CASE
	.2byte ITEM_NONE

Rogue_Area_Market_BlendPokeblockNovice::
# 78 "data/maps/Rogue_Area_Market/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 80 "data/maps/Rogue_Area_Market/scripts.pory"
	lock
# 83 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNovice_Text_0, MSGBOX_YESNO
# 85 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockNovice_2
# 107 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNovice_Text_2
Rogue_Area_Market_BlendPokeblockNovice_1:
# 110 "data/maps/Rogue_Area_Market/scripts.pory"
	release
	return

Rogue_Area_Market_BlendPokeblockNovice_2:
# 87 "data/maps/Rogue_Area_Market/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 89 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockNovice_5
# 102 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNovice_Text_1
	goto Rogue_Area_Market_BlendPokeblockNovice_1

Rogue_Area_Market_BlendPokeblockNovice_5:
# 92 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_0x800A, 20
# 94 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Area_Market_BlendPokeblockNovice_8:
# 95 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockNovice_9
	goto Rogue_Area_Market_BlendPokeblockNovice_1

Rogue_Area_Market_BlendPokeblockNovice_9:
# 97 "data/maps/Rogue_Area_Market/scripts.pory"
	call Rogue_Area_Market_BlendPokeblockNoviceLoop
	goto Rogue_Area_Market_BlendPokeblockNovice_8


Rogue_Area_Market_BlendPokeblockNoviceLoop::
# 115 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_0
# 117 "data/maps/Rogue_Area_Market/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/Rogue_Area_Market/scripts.pory"
	special Bag_ChooseBerry
# 119 "data/maps/Rogue_Area_Market/scripts.pory"
	waitstate
# 121 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_ne Rogue_Area_Market_BlendPokeblockNoviceLoop_1
# 156 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Market_BlendPokeblockNoviceLoop_1:
# 123 "data/maps/Rogue_Area_Market/scripts.pory"
	special Rogue_IsValidPokeblockBerry
# 124 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockNoviceLoop_4
# 151 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_4
	return

Rogue_Area_Market_BlendPokeblockNoviceLoop_4:
# 127 "data/maps/Rogue_Area_Market/scripts.pory"
	checkitem VAR_ITEM_ID, 20
# 129 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockNoviceLoop_7
# 146 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_3
	return

Rogue_Area_Market_BlendPokeblockNoviceLoop_7:
# 131 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_1
# 133 "data/maps/Rogue_Area_Market/scripts.pory"
	waitse
# 134 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_0x8004, 1
# 135 "data/maps/Rogue_Area_Market/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/Rogue_Area_Market/scripts.pory"
	special DoBerryBlending
# 137 "data/maps/Rogue_Area_Market/scripts.pory"
	waitstate
# 139 "data/maps/Rogue_Area_Market/scripts.pory"
	call Rogue_Common_DisplayPopups
# 141 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_2, MSGBOX_YESNO
	return


Rogue_Area_Market_BlendPokeblockMaster::
# 162 "data/maps/Rogue_Area_Market/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 164 "data/maps/Rogue_Area_Market/scripts.pory"
	lock
# 167 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockMaster_Text_0, MSGBOX_YESNO
# 169 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockMaster_2
# 191 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNovice_Text_2
Rogue_Area_Market_BlendPokeblockMaster_1:
# 194 "data/maps/Rogue_Area_Market/scripts.pory"
	release
	return

Rogue_Area_Market_BlendPokeblockMaster_2:
# 171 "data/maps/Rogue_Area_Market/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 173 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockMaster_5
# 186 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNovice_Text_1
	goto Rogue_Area_Market_BlendPokeblockMaster_1

Rogue_Area_Market_BlendPokeblockMaster_5:
# 176 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_0x800A, 70
# 178 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Area_Market_BlendPokeblockMaster_8:
# 179 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockMaster_9
	goto Rogue_Area_Market_BlendPokeblockMaster_1

Rogue_Area_Market_BlendPokeblockMaster_9:
# 181 "data/maps/Rogue_Area_Market/scripts.pory"
	call Rogue_Area_Market_BlendPokeblockMasterLoop
	goto Rogue_Area_Market_BlendPokeblockMaster_8


Rogue_Area_Market_BlendPokeblockMasterLoop::
# 199 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_0
# 201 "data/maps/Rogue_Area_Market/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/Rogue_Area_Market/scripts.pory"
	special Bag_ChooseBerry
# 203 "data/maps/Rogue_Area_Market/scripts.pory"
	waitstate
# 205 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_ne Rogue_Area_Market_BlendPokeblockMasterLoop_1
# 239 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Market_BlendPokeblockMasterLoop_1:
# 207 "data/maps/Rogue_Area_Market/scripts.pory"
	special Rogue_IsValidPokeblockBerry
# 208 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockMasterLoop_4
# 234 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_4
	return

Rogue_Area_Market_BlendPokeblockMasterLoop_4:
# 211 "data/maps/Rogue_Area_Market/scripts.pory"
	checkitem VAR_ITEM_ID, 70
# 213 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_BlendPokeblockMasterLoop_7
# 229 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockMasterLoop_Text_0
	return

Rogue_Area_Market_BlendPokeblockMasterLoop_7:
# 215 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_1
# 217 "data/maps/Rogue_Area_Market/scripts.pory"
	waitse
# 218 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_0x8004, 1
# 219 "data/maps/Rogue_Area_Market/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/Rogue_Area_Market/scripts.pory"
	special DoBerryBlending
# 221 "data/maps/Rogue_Area_Market/scripts.pory"
	waitstate
# 223 "data/maps/Rogue_Area_Market/scripts.pory"
	call Rogue_Common_DisplayPopups
# 225 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_2, MSGBOX_YESNO
	return


Rogue_Area_Market_TalkBerryBlender::
# 245 "data/maps/Rogue_Area_Market/scripts.pory"
	lock
# 246 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_TalkBerryBlender_Text_0
# 247 "data/maps/Rogue_Area_Market/scripts.pory"
	release
	return


Rogue_Area_Market_TalkPokeblockHelper::
# 252 "data/maps/Rogue_Area_Market/scripts.pory"
	lock
# 253 "data/maps/Rogue_Area_Market/scripts.pory"
	faceplayer
# 254 "data/maps/Rogue_Area_Market/scripts.pory"
	msgbox Rogue_Area_Market_TalkPokeblockHelper_Text_0
# 256 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Area_Market_TalkPokeblockHelper_2:
# 258 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Market_TalkPokeblockHelper_3
# 286 "data/maps/Rogue_Area_Market/scripts.pory"
	release
	return

Rogue_Area_Market_TalkPokeblockHelper_3:
# 260 "data/maps/Rogue_Area_Market/scripts.pory"
	begindynamicmultichoice 32
# 261 "data/maps/Rogue_Area_Market/scripts.pory"
	special Rogue_AppendMultichoicePokeblockItems
# 262 "data/maps/Rogue_Area_Market/scripts.pory"
	message Rogue_Area_Market_TalkPokeblockHelper_Text_1
# 263 "data/maps/Rogue_Area_Market/scripts.pory"
	waitmessage
# 264 "data/maps/Rogue_Area_Market/scripts.pory"
	enddynamicmultichoice 19, 2, 5, TRUE
# 266 "data/maps/Rogue_Area_Market/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Rogue_Area_Market_TalkPokeblockHelper_5
# 282 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Area_Market_TalkPokeblockHelper_2

Rogue_Area_Market_TalkPokeblockHelper_5:
# 268 "data/maps/Rogue_Area_Market/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 269 "data/maps/Rogue_Area_Market/scripts.pory"
	addvar VAR_0x8004, FIRST_ITEM_POKEBLOCK
# 270 "data/maps/Rogue_Area_Market/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8004
# 272 "data/maps/Rogue_Area_Market/scripts.pory"
	begindynamicmultichoice 32
# 273 "data/maps/Rogue_Area_Market/scripts.pory"
	special Rogue_AppendMultichoiceBerriesForPokeblock
# 274 "data/maps/Rogue_Area_Market/scripts.pory"
	message Rogue_Area_Market_TalkPokeblockHelper_Text_2
# 275 "data/maps/Rogue_Area_Market/scripts.pory"
	waitmessage
# 276 "data/maps/Rogue_Area_Market/scripts.pory"
	enddynamicmultichoice 19, 2, 5, TRUE
# 278 "data/maps/Rogue_Area_Market/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Area_Market_TalkPokeblockHelper_2


Rogue_Area_Market_ShopBank_Text_0:
# 51 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Welcome to the Bank!\p"
	.string "I can provide you with Coin Cases which\n"
	.string "will convert into instantaneous\l"
	.string "Pokédollars whenever you embark on an\l"
	.string "Adventure.\p"
	.string "Would you like to buy and Coin Cases?$"

Rogue_Area_Market_ShopBank_Text_1:
# 56 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Come again soon!$"

Rogue_Area_Market_BankSign_Text_0:
# 65 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "The Bank$"

Rogue_Area_Market_BlendPokeblockNovice_Text_0:
# 83 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Hello!\n"
	.string "I'm a {POKEBLOCK} Blending Novice.\p"
	.string "I can help you produce up to 10 {POKEBLOCK}\n"
	.string "per 20 berries.\p"
	.string "Would you like to blend some {POKEBLOCK} with\n"
	.string "me?$"

Rogue_Area_Market_BlendPokeblockNovice_Text_1:
# 102 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Oh.\p"
	.string "It doesn't look like you have any\n"
	.string "berries to blend.$"

Rogue_Area_Market_BlendPokeblockNovice_Text_2:
# 107 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "I see.\n"
	.string "If you change your mind feel free to\l"
	.string "speak with me again.$"

Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_0:
# 115 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Which berry would you like to blend?$"

Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_1:
# 131 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "OK.\p"
	.string "Let's blend!$"

Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_2:
# 141 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Would you like to blend more berries?$"

Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_3:
# 146 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "You don't have enough berries.\p"
	.string "You need 20 berries to blend with me.$"

Rogue_Area_Market_BlendPokeblockNoviceLoop_Text_4:
# 151 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "I'm afraid that berry won't produce any\n"
	.string "{POKEBLOCK}.\p"
	.string "You can use the Check Tag option in\n"
	.string "your Bag to see which {POKEBLOCK} a berry\l"
	.string "will produce when blended.$"

Rogue_Area_Market_BlendPokeblockMaster_Text_0:
# 167 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Hello!\n"
	.string "I'm a {POKEBLOCK} Blending Master.\p"
	.string "I can help you produce up to 30 {POKEBLOCK}\n"
	.string "per 70 berries.\p"
	.string "Would you like to blend some {POKEBLOCK} with\n"
	.string "me?$"

Rogue_Area_Market_BlendPokeblockMasterLoop_Text_0:
# 229 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "You don't have enough berries.\p"
	.string "You need 70 berries to blend with me.$"

Rogue_Area_Market_TalkBerryBlender_Text_0:
# 246 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "They're intensely focusing on using the\n"
	.string "Berry Blending Machine.$"

Rogue_Area_Market_TalkPokeblockHelper_Text_0:
# 254 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "You look like a Trainer to me!\p"
	.string "I'm something of a {POKEBLOCK} Expert\n"
	.string "myself.\p"
	.string "I can help you learn which Berries make\n"
	.string "what kinds of {POKEBLOCK}, if you'd like.$"

Rogue_Area_Market_TalkPokeblockHelper_Text_1:
# 262 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "Which type of {POKEBLOCK} are you\n"
	.string "interested in?$"

Rogue_Area_Market_TalkPokeblockHelper_Text_2:
# 274 "data/maps/Rogue_Area_Market/scripts.pory"
	.string "These are the Berries which produce\n"
	.string "{STR_VAR_1}.$"
