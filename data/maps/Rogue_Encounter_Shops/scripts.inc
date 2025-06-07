Rogue_Encounter_Shops_MapScripts::
	.byte 0


Rogue_Encounter_Shops_TalkVendingMachine::
# 5 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	lock
# 7 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	msgbox Rogue_Encounter_Shops_TalkVendingMachine_Text_0
# 9 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	goto_if_set FLAG_ROGUE_VENDING_MACHINE_USED, Rogue_Encounter_Shops_TalkVendingMachine_2
# 15 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	showmoneybox 0, 0
# 16 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	msgbox Rogue_Encounter_Shops_TalkVendingMachine_Text_2, MSGBOX_YESNO
# 18 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Shops_TalkVendingMachine_6
Rogue_Encounter_Shops_TalkVendingMachine_5:
# 96 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	hidemoneybox
Rogue_Encounter_Shops_TalkVendingMachine_1:
# 99 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	release
	return

Rogue_Encounter_Shops_TalkVendingMachine_2:
# 11 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	msgbox Rogue_Encounter_Shops_TalkVendingMachine_Text_1
	goto Rogue_Encounter_Shops_TalkVendingMachine_1

Rogue_Encounter_Shops_TalkVendingMachine_6:
# 20 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	closemessage
# 23 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	checkitemspace ITEM_YELLOW_SHARD, 1
# 24 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_Shops_TalkVendingMachine_8
# 30 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	checkconstantmoney 1000
# 31 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Shops_TalkVendingMachine_11
# 91 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	msgbox Rogue_Encounter_Shops_TalkVendingMachine_Text_4
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_8:
# 26 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	msgbox Rogue_Encounter_Shops_TalkVendingMachine_Text_3
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_11:
# 33 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	removeconstantmoney 1000
# 34 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	updatemoneybox
# 35 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	playse SE_VEND
# 36 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	waitse
# 38 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	hidemoneybox
# 39 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	setflag FLAG_ROGUE_VENDING_MACHINE_USED
# 41 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	random 100
# 43 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_Encounter_Shops_TalkVendingMachine_14
# 47 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_Encounter_Shops_TalkVendingMachine_15
# 53 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	random 10
# 55 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 0, Rogue_Encounter_Shops_TalkVendingMachine_20
# 60 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 1, Rogue_Encounter_Shops_TalkVendingMachine_21
# 63 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 2, Rogue_Encounter_Shops_TalkVendingMachine_22
# 66 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 3, Rogue_Encounter_Shops_TalkVendingMachine_23
# 69 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 4, Rogue_Encounter_Shops_TalkVendingMachine_24
# 72 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 5, Rogue_Encounter_Shops_TalkVendingMachine_25
# 75 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 6, Rogue_Encounter_Shops_TalkVendingMachine_26
# 78 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 7, Rogue_Encounter_Shops_TalkVendingMachine_27
# 81 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 8, Rogue_Encounter_Shops_TalkVendingMachine_28
# 84 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	case 9, Rogue_Encounter_Shops_TalkVendingMachine_29
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_14:
# 45 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_15:
# 49 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_20:
# 58 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_POTION, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_21:
# 61 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_22:
# 64 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_23:
# 67 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_24:
# 70 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_LEMONADE, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_25:
# 73 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_26:
# 76 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_27:
# 79 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_28:
# 82 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_SODA_POP, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5

Rogue_Encounter_Shops_TalkVendingMachine_29:
# 85 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	giveitem ITEM_POKE_DOLL, 1
	goto Rogue_Encounter_Shops_TalkVendingMachine_5


Rogue_Encounter_Shops_TalkVendingMachine_Text_0:
# 7 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	.string "It's a Vending Machine!$"

Rogue_Encounter_Shops_TalkVendingMachine_Text_1:
# 11 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	.string "I doesn't look like it has anything else\n"
	.string "inside…$"

Rogue_Encounter_Shops_TalkVendingMachine_Text_2:
# 16 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	.string "You can't quite make out what's inside.\p"
	.string "Do you want to insert ¥1000?$"

Rogue_Encounter_Shops_TalkVendingMachine_Text_3:
# 26 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	.string "You don't have enough space in your\n"
	.string "Bag.$"

Rogue_Encounter_Shops_TalkVendingMachine_Text_4:
# 91 "data/maps/Rogue_Encounter_Shops/scripts.pory"
	.string "You don't have enough money.$"
