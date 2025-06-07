Rogue_Area_DayCare_MapScripts::
# 13 "data/maps/Rogue_Area_DayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_DayCare_OnMapLoad
	.byte 0


Rogue_Area_DayCare_OnMapLoad::
# 18 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special Rogue_SetupDaycareSpeciesGraphics
# 20 "data/maps/Rogue_Area_DayCare/scripts.pory"
	random 2
# 21 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_Area_DayCare_OnMapLoad_2
# 27 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MISC_YOUNG_COUPLE_F
Rogue_Area_DayCare_OnMapLoad_1:
# 30 "data/maps/Rogue_Area_DayCare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_BREEDER
# 31 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_DayCare_OnMapLoad_6
# 37 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setflag FLAG_TEMP_1
Rogue_Area_DayCare_OnMapLoad_5:
# 40 "data/maps/Rogue_Area_DayCare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_PHONE
# 41 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_DayCare_OnMapLoad_10
# 47 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Area_DayCare_OnMapLoad_9:
# 50 "data/maps/Rogue_Area_DayCare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_TEA_SHOP
# 51 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_DayCare_OnMapLoad_13
# 57 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setflag FLAG_TEMP_4
	return

Rogue_Area_DayCare_OnMapLoad_2:
# 23 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MISC_YOUNG_COUPLE_M
	goto Rogue_Area_DayCare_OnMapLoad_1

Rogue_Area_DayCare_OnMapLoad_6:
# 33 "data/maps/Rogue_Area_DayCare/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_Area_DayCare_OnMapLoad_5

Rogue_Area_DayCare_OnMapLoad_10:
# 43 "data/maps/Rogue_Area_DayCare/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_Area_DayCare_OnMapLoad_9

Rogue_Area_DayCare_OnMapLoad_13:
# 53 "data/maps/Rogue_Area_DayCare/scripts.pory"
	clearflag FLAG_TEMP_4
	return


Rogue_Area_DayCare_SwapMonGender::
# 63 "data/maps/Rogue_Area_DayCare/scripts.pory"
	lock
# 64 "data/maps/Rogue_Area_DayCare/scripts.pory"
	faceplayer
# 66 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 67 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special BufferMonNickname
# 68 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_SwapMonGender_Text_0, MSGBOX_YESNO
# 70 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_DayCare_SwapMonGender_2
# 84 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_SwapMonGender_Text_1
Rogue_Area_DayCare_SwapMonGender_1:
# 87 "data/maps/Rogue_Area_DayCare/scripts.pory"
	release
	return

Rogue_Area_DayCare_SwapMonGender_2:
# 72 "data/maps/Rogue_Area_DayCare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/Rogue_Area_DayCare/scripts.pory"
	playse SE_USE_ITEM
# 75 "data/maps/Rogue_Area_DayCare/scripts.pory"
	waitse
# 76 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special Rogue_SwapMonGender
# 78 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_DayCare_SwapMonGender_1


Rogue_Area_DayCare_TalkEggBreeder::
# 92 "data/maps/Rogue_Area_DayCare/scripts.pory"
	lock
# 93 "data/maps/Rogue_Area_DayCare/scripts.pory"
	faceplayer
# 95 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_0
# 97 "data/maps/Rogue_Area_DayCare/scripts.pory"
	goto_if_set FLAG_ROGUE_DAYCARE_EGG_READY, Rogue_Area_DayCare_TalkEggBreeder_2
# 109 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_ROGUE_DAYCARE_EGG_SPECIES, SPECIES_NONE
	goto_if_ne Rogue_Area_DayCare_TalkEggBreeder_6
# 116 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_3
# 117 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Area_DayCare_TalkEggBreeder_5:
# 120 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_DayCare_TalkEggBreeder_9
Rogue_Area_DayCare_TalkEggBreeder_1:
# 156 "data/maps/Rogue_Area_DayCare/scripts.pory"
	release
	return

Rogue_Area_DayCare_TalkEggBreeder_2:
# 99 "data/maps/Rogue_Area_DayCare/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_DAYCARE_EGG_SPECIES
# 100 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_1
# 102 "data/maps/Rogue_Area_DayCare/scripts.pory"
	giveegg VAR_ROGUE_DAYCARE_EGG_SPECIES
# 104 "data/maps/Rogue_Area_DayCare/scripts.pory"
	clearflag FLAG_ROGUE_DAYCARE_EGG_READY
# 105 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_ROGUE_DAYCARE_EGG_SPECIES, SPECIES_NONE
	goto Rogue_Area_DayCare_TalkEggBreeder_1

Rogue_Area_DayCare_TalkEggBreeder_6:
# 111 "data/maps/Rogue_Area_DayCare/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_DAYCARE_EGG_SPECIES
# 112 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_2, MSGBOX_YESNO
	goto Rogue_Area_DayCare_TalkEggBreeder_5

Rogue_Area_DayCare_TalkEggBreeder_9:
# 122 "data/maps/Rogue_Area_DayCare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_BREEDER_SEEN_DEX
# 124 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_DayCare_TalkEggBreeder_12
# 131 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special Special_SelectDayCareCaughtMonInPokedex
# 132 "data/maps/Rogue_Area_DayCare/scripts.pory"
	waitstate
Rogue_Area_DayCare_TalkEggBreeder_11:
# 135 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne Rogue_Area_DayCare_TalkEggBreeder_15
	goto Rogue_Area_DayCare_TalkEggBreeder_1

Rogue_Area_DayCare_TalkEggBreeder_12:
# 126 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special Special_SelectDayCareMonInPokedex
# 127 "data/maps/Rogue_Area_DayCare/scripts.pory"
	waitstate
	goto Rogue_Area_DayCare_TalkEggBreeder_11

Rogue_Area_DayCare_TalkEggBreeder_15:
# 137 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special Rogue_TransformIntoValidDaycareEgg
# 139 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_eq Rogue_Area_DayCare_TalkEggBreeder_17
# 145 "data/maps/Rogue_Area_DayCare/scripts.pory"
	clearflag FLAG_ROGUE_DAYCARE_EGG_READY
# 146 "data/maps/Rogue_Area_DayCare/scripts.pory"
	copyvar VAR_ROGUE_DAYCARE_EGG_SPECIES, VAR_RESULT
# 147 "data/maps/Rogue_Area_DayCare/scripts.pory"
	setvar VAR_ROGUE_DAYCARE_EGG_CYCLES, 0
# 148 "data/maps/Rogue_Area_DayCare/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_DAYCARE_EGG_SPECIES
# 150 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_5
	goto Rogue_Area_DayCare_TalkEggBreeder_1

Rogue_Area_DayCare_TalkEggBreeder_17:
# 141 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_TalkEggBreeder_Text_4
	goto Rogue_Area_DayCare_TalkEggBreeder_1


Rogue_Area_DayCare_InteractWithPhoneBooth::
# 161 "data/maps/Rogue_Area_DayCare/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 162 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Rogue_Area_DayCare_InteractWithPhoneBooth_1
	return

Rogue_Area_DayCare_InteractWithPhoneBooth_1:
# 164 "data/maps/Rogue_Area_DayCare/scripts.pory"
	lock
# 165 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_InteractWithPhoneBooth_Text_0
# 167 "data/maps/Rogue_Area_DayCare/scripts.pory"
	goto_if_unset FLAG_ROGUE_RUN_ACTIVE, Rogue_Area_DayCare_InteractWithPhoneBooth_4
Rogue_Area_DayCare_InteractWithPhoneBooth_3:
# 177 "data/maps/Rogue_Area_DayCare/scripts.pory"
	release
	return

Rogue_Area_DayCare_InteractWithPhoneBooth_4:
# 169 "data/maps/Rogue_Area_DayCare/scripts.pory"
	checkitem ITEM_DAYCARE_PHONE
# 171 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_DayCare_InteractWithPhoneBooth_6
	goto Rogue_Area_DayCare_InteractWithPhoneBooth_3

Rogue_Area_DayCare_InteractWithPhoneBooth_6:
# 173 "data/maps/Rogue_Area_DayCare/scripts.pory"
	call Rogue_Area_DayCare_GiveDayCarePhone
	goto Rogue_Area_DayCare_InteractWithPhoneBooth_3


Rogue_Area_DayCare_GiveDayCarePhone::
# 183 "data/maps/Rogue_Area_DayCare/scripts.pory"
	msgbox Rogue_Area_DayCare_GiveDayCarePhone_Text_0
# 184 "data/maps/Rogue_Area_DayCare/scripts.pory"
	giveitem ITEM_DAYCARE_PHONE
# 185 "data/maps/Rogue_Area_DayCare/scripts.pory"
	call Rogue_Common_DisplayPopups
	return


Rogue_Area_DayCare_SpeakDaycareLady::
# 190 "data/maps/Rogue_Area_DayCare/scripts.pory"
	call Rogue_SpeakDaycareLady
# 192 "data/maps/Rogue_Area_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_DayCare_SpeakDaycareLady_1
	return

Rogue_Area_DayCare_SpeakDaycareLady_1:
# 194 "data/maps/Rogue_Area_DayCare/scripts.pory"
	lock
# 195 "data/maps/Rogue_Area_DayCare/scripts.pory"
	special ReloadWarpSilent
# 196 "data/maps/Rogue_Area_DayCare/scripts.pory"
	release
	return


Rogue_Area_DayCare_SwapMonGender_Text_0:
# 68 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "Well hi there!\p"
	.string "I just brewed a fresh batch of Tea.\n"
	.string "Sometimes Pokémon who drink it can\l"
	.string "change gender!\p"
	.string "Did you want me to share some with\n"
	.string "{STR_VAR_1}?$"

Rogue_Area_DayCare_SwapMonGender_Text_1:
# 84 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "Well, I have plenty of Herbal Remedy Tea\n"
	.string "to go around, if you change your mind!$"

Rogue_Area_DayCare_TalkEggBreeder_Text_0:
# 95 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "Hello there, {PLAYER}!$"

Rogue_Area_DayCare_TalkEggBreeder_Text_1:
# 100 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "I managed to find that {STR_VAR_1}\n"
	.string "egg you were looking for!$"

Rogue_Area_DayCare_TalkEggBreeder_Text_2:
# 112 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "I've not managed to locate a\n"
	.string "{STR_VAR_1} egg quite yet.\p"
	.string "Would you like for me to look for a\n"
	.string "different type of Pokémon instead?$"

Rogue_Area_DayCare_TalkEggBreeder_Text_3:
# 116 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "If you'd like I can attempt to acquire a\n"
	.string "Pokémon for you whilst, you're out\l"
	.string "Adventuring!\p"
	.string "Which Pokémon would you like and egg\n"
	.string "for?$"

Rogue_Area_DayCare_TalkEggBreeder_Text_4:
# 141 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "I'm not sure I would be able to locate\n"
	.string "an Egg for that Pokémon, I'm afraid.$"

Rogue_Area_DayCare_TalkEggBreeder_Text_5:
# 150 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "Alright!\n"
	.string "I'll keep my eyes out for a\l"
	.string "{STR_VAR_1} egg.$"

Rogue_Area_DayCare_InteractWithPhoneBooth_Text_0:
# 165 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "It's the Day Care's phone!$"

Rogue_Area_DayCare_GiveDayCarePhone_Text_0:
# 183 "data/maps/Rogue_Area_DayCare/scripts.pory"
	.string "Oh?\n"
	.string "There's a small package with a note\l"
	.string "attached.\p"
	.string "It reads…\p"
	.string "'Dear {PLAYER}, please accept this\n"
	.string "Pokégear.\p"
	.string "You can use it to remotely make\n"
	.string "requests with the Day Care, whilst\l"
	.string "you're out on Adventures.\p"
	.string "Best of luck!\p"
	.string "- The Day Care Staff'$"
