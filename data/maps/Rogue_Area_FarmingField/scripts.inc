Rogue_Area_FarmingField_MapScripts::
# 8 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_FarmingField_OnMapLoad
	.byte 0


Rogue_Area_FarmingField_OnMapLoad::
# 13 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_BERRY_FIELD_BREWING
# 14 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_FarmingField_OnMapLoad_2
# 20 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	setflag FLAG_TEMP_4
Rogue_Area_FarmingField_OnMapLoad_1:
# 23 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_BERRY_FIELD_EXTRA_FIELD0
# 24 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_FarmingField_OnMapLoad_6
# 30 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	setflag FLAG_TEMP_1
Rogue_Area_FarmingField_OnMapLoad_5:
# 33 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_BERRY_FIELD_EXTRA_FIELD1
# 34 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_FarmingField_OnMapLoad_10
# 40 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Area_FarmingField_OnMapLoad_9:
# 43 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_BERRY_FIELD_EXTRA_FIELD2
# 44 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_FarmingField_OnMapLoad_13
# 50 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	setflag FLAG_TEMP_3
	return

Rogue_Area_FarmingField_OnMapLoad_2:
# 16 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	clearflag FLAG_TEMP_4
	goto Rogue_Area_FarmingField_OnMapLoad_1

Rogue_Area_FarmingField_OnMapLoad_6:
# 26 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_Area_FarmingField_OnMapLoad_5

Rogue_Area_FarmingField_OnMapLoad_10:
# 36 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_Area_FarmingField_OnMapLoad_9

Rogue_Area_FarmingField_OnMapLoad_13:
# 46 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	clearflag FLAG_TEMP_3
	return


Rogue_Area_FarmingField_MakePotions::
# 56 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	lock
# 58 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_0
# 60 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	checkitemspace ITEM_MOOMOO_MILK, 1
# 61 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_FarmingField_MakePotions_2
# 67 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	begindynamicmultichoice
# 68 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	appenddynamicmultichoice Rogue_Area_FarmingField_MakePotions_Text_2, 0
# 69 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	appenddynamicmultichoice Rogue_Area_FarmingField_MakePotions_Text_3, 1
# 70 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	appenddynamicmultichoice Rogue_Area_FarmingField_MakePotions_Text_4, 2
# 71 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	appenddynamicmultichoice Rogue_Area_FarmingField_MakePotions_Text_5, 3
# 72 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	appenddynamicmultichoice Rogue_Area_FarmingField_MakePotions_Text_6, MULTI_B_PRESSED
# 74 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	message Rogue_Area_FarmingField_MakePotions_Text_7
# 75 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	waitmessage
# 76 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 78 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	case 0, Rogue_Area_FarmingField_MakePotions_6
# 98 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	case 1, Rogue_Area_FarmingField_MakePotions_7
# 116 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	case 2, Rogue_Area_FarmingField_MakePotions_8
# 134 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	case 3, Rogue_Area_FarmingField_MakePotions_9
Rogue_Area_FarmingField_MakePotions_1:
# 154 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	release
	return

Rogue_Area_FarmingField_MakePotions_2:
# 63 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_1
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_6:
# 81 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_8
# 83 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 2
# 84 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_10
# 95 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_10
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_7:
# 99 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_11
# 101 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 5
# 102 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_13
# 113 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_10
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_8:
# 117 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_13
# 119 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 20
# 120 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_16
# 131 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_10
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_9:
# 135 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_15
# 137 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 40
# 138 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_19
# 149 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_10
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_10:
# 86 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_9, MSGBOX_YESNO
# 87 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_22
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_13:
# 104 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_12, MSGBOX_YESNO
# 105 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_24
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_16:
# 122 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_14, MSGBOX_YESNO
# 123 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_26
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_19:
# 140 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	msgbox Rogue_Area_FarmingField_MakePotions_Text_16, MSGBOX_YESNO
# 141 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_FarmingField_MakePotions_28
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_22:
# 89 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 90 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	additem ITEM_POTION, 1
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_24:
# 107 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 5
# 108 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	additem ITEM_SUPER_POTION, 1
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_26:
# 125 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 20
# 126 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	additem ITEM_HYPER_POTION, 1
	goto Rogue_Area_FarmingField_MakePotions_1

Rogue_Area_FarmingField_MakePotions_28:
# 143 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 40
# 144 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	additem ITEM_MAX_POTION, 1
	goto Rogue_Area_FarmingField_MakePotions_1


Rogue_Area_FarmingField_MakePotions_Text_0:
# 58 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "It's a Potion Cauldron!$"

Rogue_Area_FarmingField_MakePotions_Text_1:
# 63 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "You don't have any free room in your\n"
	.string "Bag.$"

Rogue_Area_FarmingField_MakePotions_Text_2:
# 68 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Potion$"

Rogue_Area_FarmingField_MakePotions_Text_3:
# 69 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Super Potion$"

Rogue_Area_FarmingField_MakePotions_Text_4:
# 70 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Hyper Potion$"

Rogue_Area_FarmingField_MakePotions_Text_5:
# 71 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Max Potion$"

Rogue_Area_FarmingField_MakePotions_Text_6:
# 72 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Exit$"

Rogue_Area_FarmingField_MakePotions_Text_7:
# 74 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "What would you like to make?$"

Rogue_Area_FarmingField_MakePotions_Text_8:
# 81 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "To make a Potion, 2 Oran Berries are\n"
	.string "needed.$"

Rogue_Area_FarmingField_MakePotions_Text_9:
# 86 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Would you like to brew a Potion?$"

Rogue_Area_FarmingField_MakePotions_Text_10:
# 95 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "You don't have enough Berries to brew\n"
	.string "this.$"

Rogue_Area_FarmingField_MakePotions_Text_11:
# 99 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "To make a Super Potion, 5 Oran Berries\n"
	.string "are needed.$"

Rogue_Area_FarmingField_MakePotions_Text_12:
# 104 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Would you like to brew a Super Potion?$"

Rogue_Area_FarmingField_MakePotions_Text_13:
# 117 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "To make a Hyper Potion, 20 Oran Berries\n"
	.string "are needed.$"

Rogue_Area_FarmingField_MakePotions_Text_14:
# 122 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Would you like to brew a Hyper Potion?$"

Rogue_Area_FarmingField_MakePotions_Text_15:
# 135 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "To make a Max Potion, 40 Oran Berries\n"
	.string "are needed.$"

Rogue_Area_FarmingField_MakePotions_Text_16:
# 140 "data/maps/Rogue_Area_FarmingField/scripts.pory"
	.string "Would you like to brew a Max Potion?$"
