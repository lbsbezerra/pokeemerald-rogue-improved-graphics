Rogue_Area_TownSquare_MapScripts::
# 10 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_TownSquare_OnMapLoad
	.byte 0


Rogue_Area_TownSquare_OnMapLoad::
# 15 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	specialvar VAR_RESULT, RogueHub_GetStatueLevel
# 17 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case 3, Rogue_Area_TownSquare_OnMapLoad_3
# 21 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case 2, Rogue_Area_TownSquare_OnMapLoad_4
# 23 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case 1, Rogue_Area_TownSquare_OnMapLoad_5
# 26 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_0
Rogue_Area_TownSquare_OnMapLoad_1:
# 30 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_REPORT_TO_PROF
	goto_if_lt Rogue_Area_TownSquare_OnMapLoad_8
# 44 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	clearflag FLAG_TEMP_1
# 46 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	clearflag FLAG_TEMP_3
# 47 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	clearflag FLAG_TEMP_4
# 49 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_le Rogue_Area_TownSquare_OnMapLoad_14
Rogue_Area_TownSquare_OnMapLoad_7:
# 59 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_TOWN_SQUARE_TUTORS
# 60 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_TownSquare_OnMapLoad_11
# 66 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setflag FLAG_TEMP_2
	return

Rogue_Area_TownSquare_OnMapLoad_3:
# 20 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_3
	goto Rogue_Area_TownSquare_OnMapLoad_1

Rogue_Area_TownSquare_OnMapLoad_4:
# 22 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_2
	goto Rogue_Area_TownSquare_OnMapLoad_1

Rogue_Area_TownSquare_OnMapLoad_5:
# 24 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_1
	goto Rogue_Area_TownSquare_OnMapLoad_1

Rogue_Area_TownSquare_OnMapLoad_8:
# 33 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setobjectxyperm 3, 21, 8
# 36 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setflag FLAG_TEMP_3
# 39 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setflag FLAG_TEMP_4
	goto Rogue_Area_TownSquare_OnMapLoad_7

Rogue_Area_TownSquare_OnMapLoad_11:
# 62 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Rogue_Area_TownSquare_OnMapLoad_14:
# 51 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setflag FLAG_TEMP_4
# 54 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setobjectxyperm 3, 24, 9
# 55 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto Rogue_Area_TownSquare_OnMapLoad_7


Rogue_Area_TownSquare_TalkTownStatue::
# 72 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	lock
# 74 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	specialvar VAR_RESULT, RogueHub_GetStatueLevel
# 76 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case 3, Rogue_Area_TownSquare_TalkTownStatue_3
# 81 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkTownStatue_Text_1
Rogue_Area_TownSquare_TalkTownStatue_1:
# 84 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Special_ViewWorldMap
# 85 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitstate
# 87 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkTownStatue_3:
# 79 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkTownStatue_Text_0
	goto Rogue_Area_TownSquare_TalkTownStatue_1


Rogue_Area_TownSquare_TalkBackpacker::
# 92 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	lock
# 93 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	faceplayer
# 95 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBackpacker_Text_0
# 97 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	specialvar VAR_0x8004, Rogue_GetBagCapacityUpgradeLevel
# 99 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_0x8004, ITEM_BAG_MAX_CAPACITY_UPGRADE
	goto_if_eq Rogue_Area_TownSquare_TalkBackpacker_1
# 106 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Rogue_BufferBagUpgradeCost
# 108 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBackpacker_Text_2, MSGBOX_YESNO
# 111 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_TownSquare_TalkBackpacker_4
# 138 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	hidemoneybox
# 139 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBackpacker_Text_4
# 140 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkBackpacker_1:
# 101 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBackpacker_Text_1
# 102 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkBackpacker_4:
# 113 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Rogue_CheckBagUpgradeCost
# 115 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_TownSquare_TalkBackpacker_7
# 131 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	hidemoneybox
# 132 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBackpacker_Text_3
# 133 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkBackpacker_7:
# 117 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Rogue_RemoveBagUpgradeCost
# 118 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	updatemoneybox
# 120 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	playse SE_SHOP
# 121 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitse
# 123 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	hidemoneybox
# 124 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
# 125 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	delay 1
# 127 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Rogue_IncreaseBagCapacityUpgradeLevel
	return


Rogue_Area_TownSquare_TalkBuilder::
# 147 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	lock
# 148 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	faceplayer
# 150 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_lt Rogue_Area_TownSquare_TalkBuilder_2
# 157 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_eq Rogue_Area_TownSquare_TalkBuilder_3
# 211 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_5
Rogue_Area_TownSquare_TalkBuilder_1:
# 214 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkBuilder_2:
# 153 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_0
# 155 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	turnobject 3, DIR_NORTH
	goto Rogue_Area_TownSquare_TalkBuilder_1

Rogue_Area_TownSquare_TalkBuilder_3:
# 160 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	clearflag FLAG_ROGUE_HIDE_WORKBENCHES
# 161 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
# 163 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_1
# 165 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 166 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitse
# 168 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Special_ViewWorldMap
# 169 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitstate
# 171 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_2
# 172 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	giveitem ITEM_BUILDING_SUPPLIES
# 174 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_3
# 176 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitse
# 177 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	closemessage
# 179 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 180 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case DIR_NORTH, Rogue_Area_TownSquare_TalkBuilder_9
# 186 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case DIR_EAST, Rogue_Area_TownSquare_TalkBuilder_10
# 190 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	case DIR_WEST, Rogue_Area_TownSquare_TalkBuilder_11
Rogue_Area_TownSquare_TalkBuilder_7:
# 196 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setobjectxyperm 3, 25, 9
# 198 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	special Rogue_IsMultiplayerClient
# 199 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_TownSquare_TalkBuilder_12
# 205 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	call Rogue_Area_WorkbenchOptions
	goto Rogue_Area_TownSquare_TalkBuilder_1

Rogue_Area_TownSquare_TalkBuilder_9:
# 183 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement 3, Rogue_Area_TownSquare_WorkbenchBuilder_North
# 184 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Area_TownSquare_WorkbenchPlayer_North
# 185 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitmovement 0
	goto Rogue_Area_TownSquare_TalkBuilder_7

Rogue_Area_TownSquare_TalkBuilder_10:
# 187 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement 3, Rogue_Area_TownSquare_WorkbenchBuilder_East
# 188 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Area_TownSquare_WorkbenchPlayer_East
# 189 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitmovement 0
	goto Rogue_Area_TownSquare_TalkBuilder_7

Rogue_Area_TownSquare_TalkBuilder_11:
# 191 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement 3, Rogue_Area_TownSquare_WorkbenchBuilder_West
# 192 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Area_TownSquare_WorkbenchPlayer_West
# 193 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	waitmovement 0
	goto Rogue_Area_TownSquare_TalkBuilder_7

Rogue_Area_TownSquare_TalkBuilder_12:
# 201 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBuilder_Text_4
	goto Rogue_Area_TownSquare_TalkBuilder_1


# 217 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchPlayer_North:
# 219 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	delay_16
# 220 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_up
# 221 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_up
	step_end

# 224 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchBuilder_North:
# 226 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_right
# 227 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_left
	step_end

# 230 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchPlayer_East:
# 232 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	delay_16
# 233 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_right
# 234 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_up
	step_end

# 237 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchBuilder_East:
# 239 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_right
# 240 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_left
	step_end

# 243 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchPlayer_West:
# 245 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	delay_16
# 246 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_left
# 247 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_up
	step_end

# 250 "data/maps/Rogue_Area_TownSquare/scripts.pory"
Rogue_Area_TownSquare_WorkbenchBuilder_West:
# 252 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	walk_left
# 253 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	face_right
	step_end

Rogue_Area_TownSquare_TalkBallGuy::
# 258 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	lock
# 259 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	faceplayer
# 261 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_ROGUE_FREE_POKE_BALL, ITEM_NONE
	goto_if_eq Rogue_Area_TownSquare_TalkBallGuy_2
# 267 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBallGuy_Text_1
# 269 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	checkitemspace VAR_ROGUE_FREE_POKE_BALL, 1
# 271 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_TownSquare_TalkBallGuy_5
# 278 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBallGuy_Text_2
Rogue_Area_TownSquare_TalkBallGuy_1:
# 282 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	release
	return

Rogue_Area_TownSquare_TalkBallGuy_2:
# 263 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	msgbox Rogue_Area_TownSquare_TalkBallGuy_Text_0
	goto Rogue_Area_TownSquare_TalkBallGuy_1

Rogue_Area_TownSquare_TalkBallGuy_5:
# 273 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	giveitem VAR_ROGUE_FREE_POKE_BALL, 1
# 274 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	setvar VAR_ROGUE_FREE_POKE_BALL, ITEM_NONE
	goto Rogue_Area_TownSquare_TalkBallGuy_1


Rogue_Area_TownSquare_TalkTownStatue_Text_0:
# 79 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "{POKEMON_HUB}\n"
	.string "The land of chaotic tales.$"

Rogue_Area_TownSquare_TalkTownStatue_Text_1:
# 81 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "{POKEMON_HUB}\n"
	.string "The land of chaotic beginnings…$"

Rogue_Area_TownSquare_TalkBackpacker_Text_0:
# 95 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Hi there {PLAYER}!$"

Rogue_Area_TownSquare_TalkBackpacker_Text_1:
# 101 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "I hope that bag's working out well for\n"
	.string "you!$"

Rogue_Area_TownSquare_TalkBackpacker_Text_2:
# 109 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "I can upgrade your bag for\n"
	.string "¥{STR_VAR_2}, if you'd like?$"

Rogue_Area_TownSquare_TalkBackpacker_Text_3:
# 132 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "It doesn't look like you have enough\n"
	.string "money there bud.$"

Rogue_Area_TownSquare_TalkBackpacker_Text_4:
# 139 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Sure! You're busy!\p"
	.string "I get that!$"

Rogue_Area_TownSquare_TalkBuilder_Text_0:
# 153 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "I'm almost finished up here.\n"
	.string "Come back and check later.$"

Rogue_Area_TownSquare_TalkBuilder_Text_1:
# 163 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Ah! {PLAYER}!\n"
	.string "Just the person I was waiting for!\p"
	.string "Professor Elm told me that you were\n"
	.string "going on Adventures for {POKEMON_HUB}\l"
	.string "now.\p"
	.string "Which means you'll now be in charge of\n"
	.string "collecting Building Supplies for\l"
	.string "{POKEMON_HUB} expansion.\p"
	.string "Here, let me show you.\p"
	.string "Firstly, you can have this Town Map.\p"
	.string "You can use it to look at the current\n"
	.string "layout of {POKEMON_HUB}.$"

Rogue_Area_TownSquare_TalkBuilder_Text_2:
# 171 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "That's the current layout of\n"
	.string "{POKEMON_HUB}.\p"
	.string "You can build and upgrade areas with\n"
	.string "Building Supplies you gather from\l"
	.string "completing Quests.\p"
	.string "Here's some I had left over.$"

Rogue_Area_TownSquare_TalkBuilder_Text_3:
# 174 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Now if you interact with Workbenches\n"
	.string "like this one here, you'll be able to\l"
	.string "spend the Building Supplies on\l"
	.string "improving {POKEMON_HUB}.\p"
	.string "Give it a try!$"

Rogue_Area_TownSquare_TalkBuilder_Text_4:
# 201 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "You cannot use the Workbench while\n"
	.string "visiting {POKEMON_HUB}.\p"
	.string "If you want to use the Workbench, you\n"
	.string "need to Exit Multiplayer.$"

Rogue_Area_TownSquare_TalkBuilder_Text_5:
# 211 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Just walk up to any of the Workbenches\n"
	.string "and you should be able to queue up build\l"
	.string "orders for {POKEMON_HUB}.$"

Rogue_Area_TownSquare_TalkBallGuy_Text_0:
# 263 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Hey there! Thanks for rolling by to have\n"
	.string "a chat with your mate- the Ball Guy.\p"
	.string "Don't worry.\n"
	.string "Next time, I'll give you yet another\l"
	.string "Poké Ball!\p"
	.string "You ain't stopping, so neither am I!$"

Rogue_Area_TownSquare_TalkBallGuy_Text_1:
# 267 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Hey there! Thanks for rolling by to have\n"
	.string "a chat with your mate- the Ball Guy.\p"
	.string "I've got the perfect Poké Ball for you!$"

Rogue_Area_TownSquare_TalkBallGuy_Text_2:
# 278 "data/maps/Rogue_Area_TownSquare/scripts.pory"
	.string "Oh, bud.\n"
	.string "You've got no space in your Bag.\p"
	.string "Free up some space and then I'll be\n"
	.string "happy to give you a Poké Ball!$"
