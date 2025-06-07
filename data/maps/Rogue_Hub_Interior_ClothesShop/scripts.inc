Rogue_Hub_Interior_ClothesShop_MapScripts::
# 3 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Hub_Interior_ClothesShop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Rogue_Hub_Interior_ClothesShop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0


Rogue_Hub_Clothes_TalkAssistant::
# 11 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lockall
# 12 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	faceplayer
# 13 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_TalkAssistant_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	releaseall
	return


Rogue_Hub_Clothes_ChangeStyle0::
# 19 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 21 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle0_Text_0
# 23 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	message Rogue_Hub_Clothes_ChangeStyle0_Text_1
# 24 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitmessage
# 25 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	multichoice 20, 4, MULTI_STYLE_CHOICE, NO
# 27 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Hub_Clothes_ChangeStyle0_3
# 33 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 34 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Hub_Clothes_ChangeStyle0_1:
# 37 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_ChangeStyle0_6
# 46 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle0_Text_2
Rogue_Hub_Clothes_ChangeStyle0_5:
# 49 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_ChangeStyle0_3:
# 30 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Hub_Clothes_ChangeStyle0_1

Rogue_Hub_Clothes_ChangeStyle0_6:
# 39 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerStyle0
# 41 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 19, 20
# 42 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_ChangeStyle0_5


Rogue_Hub_Clothes_ChangeStyle1::
# 54 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 56 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle1_Text_0
# 58 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	message Rogue_Hub_Clothes_ChangeStyle1_Text_1
# 59 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitmessage
# 60 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	multichoice 20, 2, MULTI_STYLE2_CHOICE, NO
# 62 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Hub_Clothes_ChangeStyle1_3
# 68 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 69 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Hub_Clothes_ChangeStyle1_1:
# 72 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_ChangeStyle1_6
# 81 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle0_Text_2
Rogue_Hub_Clothes_ChangeStyle1_5:
# 84 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_ChangeStyle1_3:
# 65 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Hub_Clothes_ChangeStyle1_1

Rogue_Hub_Clothes_ChangeStyle1_6:
# 74 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerStyle1
# 76 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 21, 20
# 77 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_ChangeStyle1_5


Rogue_Hub_Clothes_ChangeName::
# 89 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 91 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeName_Text_0, MSGBOX_YESNO
# 93 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_ChangeName_2
# 103 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle0_Text_2
Rogue_Hub_Clothes_ChangeName_1:
# 106 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_ChangeName_2:
# 95 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special ChangePlayerNickname
# 97 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
# 99 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeName_Text_1
	goto Rogue_Hub_Clothes_ChangeName_1


Rogue_Hub_Clothes_ChangePokemonHubName::
# 112 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 114 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangePokemonHubName_Text_0, MSGBOX_YESNO
# 116 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_ChangePokemonHubName_2
# 126 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangeStyle0_Text_2
Rogue_Hub_Clothes_ChangePokemonHubName_1:
# 129 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_ChangePokemonHubName_2:
# 118 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special ChangePokemonHubName
# 120 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
# 122 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_ChangePokemonHubName_Text_1
	goto Rogue_Hub_Clothes_ChangePokemonHubName_1


Rogue_Hub_Clothes_SetStyle_Brendan::
# 135 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 137 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Brendan_Text_0, MSGBOX_YESNO
# 138 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_Brendan_2
Rogue_Hub_Clothes_SetStyle_Brendan_1:
# 151 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_Brendan_2:
# 142 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 0
# 143 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 145 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 4, 20
# 148 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_Brendan_1


Rogue_Hub_Clothes_SetStyle_May::
# 156 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 158 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Brendan_Text_0, MSGBOX_YESNO
# 159 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_May_2
Rogue_Hub_Clothes_SetStyle_May_1:
# 172 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_May_2:
# 163 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 1
# 164 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 166 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 8, 20
# 169 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_May_1


Rogue_Hub_Clothes_SetStyle_Red::
# 177 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 179 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Brendan_Text_0, MSGBOX_YESNO
# 180 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_Red_2
Rogue_Hub_Clothes_SetStyle_Red_1:
# 193 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_Red_2:
# 184 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 2
# 185 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 187 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 29, 20
# 190 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_Red_1


Rogue_Hub_Clothes_SetStyle_Leaf::
# 198 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 200 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Brendan_Text_0, MSGBOX_YESNO
# 201 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_Leaf_2
Rogue_Hub_Clothes_SetStyle_Leaf_1:
# 214 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_Leaf_2:
# 205 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 3
# 206 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 208 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 33, 20
# 211 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_Leaf_1


Rogue_Hub_Clothes_SetStyle_Ethan::
# 219 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 221 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Ethan_Text_0, MSGBOX_YESNO
# 222 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_Ethan_2
Rogue_Hub_Clothes_SetStyle_Ethan_1:
# 235 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_Ethan_2:
# 226 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 4
# 227 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 229 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 16, 4
# 232 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_Ethan_1


Rogue_Hub_Clothes_SetStyle_Lyra::
# 240 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	lock
# 242 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	msgbox Rogue_Hub_Clothes_SetStyle_Ethan_Text_0, MSGBOX_YESNO
# 243 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_Clothes_SetStyle_Lyra_2
Rogue_Hub_Clothes_SetStyle_Lyra_1:
# 256 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	release
	return

Rogue_Hub_Clothes_SetStyle_Lyra_2:
# 247 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	setvar VAR_0x8006, 5
# 248 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	special Script_ChangePlayerGender
# 250 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	warp MAP_ROGUE_HUB_INTERIOR_CLOTHES_SHOP, 21, 4
# 253 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	waitstate
	goto Rogue_Hub_Clothes_SetStyle_Lyra_1


Rogue_Hub_Clothes_TalkAssistant_Text_0:
# 13 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Are you feeling bored of your look?\n"
	.string "If so you're in the right place!\p"
	.string "Just walk up to one of the statues to\n"
	.string "swap your avatar!$"

Rogue_Hub_Clothes_ChangeStyle0_Text_0:
# 21 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Hello!\n"
	.string "I can help with adjusting your\l"
	.string "appearance$"

Rogue_Hub_Clothes_ChangeStyle0_Text_1:
# 23 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Which appearance option would you like\n"
	.string "to swap to?$"

Rogue_Hub_Clothes_ChangeStyle0_Text_2:
# 46 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Come back any time!$"

Rogue_Hub_Clothes_ChangeStyle1_Text_0:
# 56 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Hello!\n"
	.string "I can help with adjusting your clothing\l"
	.string "style$"

Rogue_Hub_Clothes_ChangeStyle1_Text_1:
# 58 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Which clothing style option would you\n"
	.string "like to swap to?$"

Rogue_Hub_Clothes_ChangeName_Text_0:
# 91 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Would you like to change your name?$"

Rogue_Hub_Clothes_ChangeName_Text_1:
# 99 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "{PLAYER} it is!$"

Rogue_Hub_Clothes_ChangePokemonHubName_Text_0:
# 114 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Would you like to change the village\n"
	.string "name?$"

Rogue_Hub_Clothes_ChangePokemonHubName_Text_1:
# 122 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "{POKEMON_HUB} it is!$"

Rogue_Hub_Clothes_SetStyle_Brendan_Text_0:
# 137 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Change to this style?$"

Rogue_Hub_Clothes_SetStyle_Ethan_Text_0:
# 221 "data/maps/Rogue_Hub_Interior_ClothesShop/scripts.pory"
	.string "Change to this style?\n"
	.string "(WARNING UNFINISHED)$"
