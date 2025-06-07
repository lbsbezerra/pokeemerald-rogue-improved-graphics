Rogue_Hub_ProfLab_MapScripts::
# 8 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Rogue_Hub_ProfLab_OnTransition
	.byte 0


Rogue_Hub_ProfLab_OnTransition::
# 13 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	switch VAR_STARTER_MON
# 15 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case 1, Rogue_Hub_ProfLab_OnTransition_2
# 17 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case 2, Rogue_Hub_ProfLab_OnTransition_3
# 19 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case 3, Rogue_Hub_ProfLab_OnTransition_4
	return

Rogue_Hub_ProfLab_OnTransition_2:
# 16 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_1
	return

Rogue_Hub_ProfLab_OnTransition_3:
# 18 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_2
	return

Rogue_Hub_ProfLab_OnTransition_4:
# 20 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_3
	return


Rogue_Hub_ProfLab_SpeakProf::
# 26 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lockall
# 27 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	faceplayer
# 29 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	goto_if_set FLAG_ROGUE_RUN_ACTIVE, Rogue_Hub_ProfLab_SpeakProf_2
# 36 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_le Rogue_Hub_ProfLab_SpeakProf_8
# 42 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfExplain
# 43 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Hub_ProfLab_SpeakProf_11
Rogue_Hub_ProfLab_SpeakProf_1:
# 50 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Hub_ProfLab_SpeakProf_6
Rogue_Hub_ProfLab_SpeakProf_5:
# 55 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	releaseall
	return

Rogue_Hub_ProfLab_SpeakProf_2:
# 31 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_SpeakProf_Text_0
# 32 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfShowEvos
	goto Rogue_Hub_ProfLab_SpeakProf_1

Rogue_Hub_ProfLab_SpeakProf_6:
# 52 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_SpeakProf_Text_2, MSGBOX_DEFAULT
	goto Rogue_Hub_ProfLab_SpeakProf_5

Rogue_Hub_ProfLab_SpeakProf_8:
# 38 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_SpeakProf_Text_1, MSGBOX_DEFAULT
	goto Rogue_Hub_ProfLab_SpeakProf_1

Rogue_Hub_ProfLab_SpeakProf_11:
# 45 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfShowEvos
	goto Rogue_Hub_ProfLab_SpeakProf_1


Rogue_Hub_ProfLab_ProfExplain::
# 60 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfExplain_Text_0, MSGBOX_YESNO
# 62 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_ProfExplain_2
Rogue_Hub_ProfLab_ProfExplain_1:
	return

Rogue_Hub_ProfLab_ProfExplain_2:
# 64 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfExplain_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfExplain_Text_2, MSGBOX_DEFAULT
	goto Rogue_Hub_ProfLab_ProfExplain_1


Rogue_Hub_ProfLab_ProfCycleEvos::
Rogue_Hub_ProfLab_ProfCycleEvos_1:
# 73 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_0x8005, VAR_RESULT
	goto_if_lt Rogue_Hub_ProfLab_ProfCycleEvos_2
	return

Rogue_Hub_ProfLab_ProfCycleEvos_2:
# 75 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	special Rogue_GetMonEvoParams
# 76 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	addvar VAR_0x8005, 1
# 78 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8005
# 80 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	switch VAR_0x8006
# 82 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_FRIENDSHIP, Rogue_Hub_ProfLab_ProfCycleEvos_5
# 85 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_FRIENDSHIP_DAY, Rogue_Hub_ProfLab_ProfCycleEvos_6
# 88 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_FRIENDSHIP_NIGHT, Rogue_Hub_ProfLab_ProfCycleEvos_7
# 91 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL, Rogue_Hub_ProfLab_ProfCycleEvos_8
# 92 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_NINJASK, Rogue_Hub_ProfLab_ProfCycleEvos_8
# 96 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_TRADE, Rogue_Hub_ProfLab_ProfCycleEvos_9
# 99 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_TRADE_ITEM, Rogue_Hub_ProfLab_ProfCycleEvos_10
# 103 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_ITEM, Rogue_Hub_ProfLab_ProfCycleEvos_11
# 107 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_ATK_GT_DEF, Rogue_Hub_ProfLab_ProfCycleEvos_12
# 111 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_ATK_EQ_DEF, Rogue_Hub_ProfLab_ProfCycleEvos_13
# 115 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_ATK_LT_DEF, Rogue_Hub_ProfLab_ProfCycleEvos_14
# 119 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_SILCOON, Rogue_Hub_ProfLab_ProfCycleEvos_15
# 120 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_CASCOON, Rogue_Hub_ProfLab_ProfCycleEvos_15
# 124 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_SHEDINJA, Rogue_Hub_ProfLab_ProfCycleEvos_16
# 128 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_BEAUTY, Rogue_Hub_ProfLab_ProfCycleEvos_17
# 131 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_ITEM, Rogue_Hub_ProfLab_ProfCycleEvos_18
# 138 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_FEMALE, Rogue_Hub_ProfLab_ProfCycleEvos_19
# 142 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_MALE, Rogue_Hub_ProfLab_ProfCycleEvos_20
# 146 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_NIGHT, Rogue_Hub_ProfLab_ProfCycleEvos_21
# 150 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_DAY, Rogue_Hub_ProfLab_ProfCycleEvos_22
# 154 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_DUSK, Rogue_Hub_ProfLab_ProfCycleEvos_23
# 158 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_ITEM_HOLD_DAY, Rogue_Hub_ProfLab_ProfCycleEvos_24
# 162 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_ITEM_HOLD_NIGHT, Rogue_Hub_ProfLab_ProfCycleEvos_25
# 167 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_MOVE, Rogue_Hub_ProfLab_ProfCycleEvos_26
# 171 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_MOVE_TYPE, Rogue_Hub_ProfLab_ProfCycleEvos_27
# 174 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_MAPSEC, Rogue_Hub_ProfLab_ProfCycleEvos_28
# 175 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_SPECIFIC_MAP, Rogue_Hub_ProfLab_ProfCycleEvos_28
# 180 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_ITEM_MALE, Rogue_Hub_ProfLab_ProfCycleEvos_29
# 184 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_ITEM_FEMALE, Rogue_Hub_ProfLab_ProfCycleEvos_30
# 189 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_RAIN, Rogue_Hub_ProfLab_ProfCycleEvos_31
# 193 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_SPECIFIC_MON_IN_PARTY, Rogue_Hub_ProfLab_ProfCycleEvos_32
# 197 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_DARK_TYPE_MON_IN_PARTY, Rogue_Hub_ProfLab_ProfCycleEvos_33
# 201 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_TRADE_SPECIFIC_MON, Rogue_Hub_ProfLab_ProfCycleEvos_34
# 206 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_NATURE_AMPED, Rogue_Hub_ProfLab_ProfCycleEvos_35
# 207 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_LEVEL_NATURE_LOW_KEY, Rogue_Hub_ProfLab_ProfCycleEvos_35
# 211 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_CRITICAL_HITS, Rogue_Hub_ProfLab_ProfCycleEvos_36
# 215 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_SCRIPT_TRIGGER_DMG, Rogue_Hub_ProfLab_ProfCycleEvos_37
# 219 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_DARK_SCROLL, Rogue_Hub_ProfLab_ProfCycleEvos_38
# 220 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	case EVO_WATER_SCROLL, Rogue_Hub_ProfLab_ProfCycleEvos_38
# 224 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 225 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_34
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_5:
# 83 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_0
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_6:
# 86 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_1
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_7:
# 89 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_2
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_8:
# 93 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 94 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_3
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_9:
# 97 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_4
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_10:
# 100 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 101 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_5
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_11:
# 104 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 105 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_6
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_12:
# 108 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 109 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_7
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_13:
# 112 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 113 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_8
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_14:
# 116 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 117 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_9
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_15:
# 121 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 122 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_10
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_16:
# 125 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 126 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_11
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_17:
# 129 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_12
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_18:
# 132 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 133 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_13
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_19:
# 139 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 140 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_14
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_20:
# 143 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 144 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_15
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_21:
# 147 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 148 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_16
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_22:
# 151 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 152 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_17
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_23:
# 155 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 156 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_18
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_24:
# 159 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 160 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_19
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_25:
# 163 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 164 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_20
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_26:
# 168 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffermovename STR_VAR_3, VAR_0x8007
# 169 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_21
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_27:
# 172 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_22
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_28:
# 176 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 177 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_23
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_29:
# 181 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 182 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_24
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_30:
# 185 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8007
# 186 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_25
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_31:
# 190 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 191 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_26
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_32:
# 194 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_0x8007
# 195 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_27
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_33:
# 198 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 199 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_28
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_34:
# 202 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_0x8007
# 203 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_29
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_35:
# 208 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 209 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_30
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_36:
# 212 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 213 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_31
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_37:
# 216 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 217 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_32
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1

Rogue_Hub_ProfLab_ProfCycleEvos_38:
# 221 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfCycleEvos_Text_33
	goto Rogue_Hub_ProfLab_ProfCycleEvos_1


Rogue_Hub_ProfLab_ProfShowEvos::
# 232 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_0, MSGBOX_YESNO
# 234 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_ProfShowEvos_1
	return

Rogue_Hub_ProfLab_ProfShowEvos_1:
# 236 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_1
# 237 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	special ChoosePartyMon
# 238 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitstate
# 240 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Hub_ProfLab_ProfShowEvos_4
# 246 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	specialvar VAR_RESULT, Rogue_GetMonEvoCount
# 247 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	special BufferMonNickname
# 249 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_Hub_ProfLab_ProfShowEvos_7
# 253 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_Hub_ProfLab_ProfShowEvos_8
# 264 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_RESULT
# 265 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_6
# 267 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_0x8005, 0
# 268 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfCycleEvos
# 269 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_5, MSGBOX_DEFAULT
Rogue_Hub_ProfLab_ProfShowEvos_3:
# 273 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Hub_ProfLab_ProfShowEvos_4:
# 242 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_2, MSGBOX_DEFAULT
	goto Rogue_Hub_ProfLab_ProfShowEvos_3

Rogue_Hub_ProfLab_ProfShowEvos_7:
# 251 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_3
	goto Rogue_Hub_ProfLab_ProfShowEvos_3

Rogue_Hub_ProfLab_ProfShowEvos_8:
# 255 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_RESULT
# 256 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_4
# 258 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_0x8005, 0
# 259 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfCycleEvos
# 260 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_ProfShowEvos_Text_5, MSGBOX_DEFAULT
	goto Rogue_Hub_ProfLab_ProfShowEvos_3


Rogue_Hub_ProfLab_TriggerPC::
# 279 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lockall
# 280 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_TriggerPC_Text_0, MSGBOX_DEFAULT
# 281 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Hub_ProfLab_WalkBackwards
# 282 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
# 283 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	releaseall
	return


# 286 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkBackwards:
# 288 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
	step_end

Rogue_Hub_ProfLab_IntroCommon::
# 293 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroCommon_Text_0, MSGBOX_DEFAULT
# 294 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject 1, DIR_EAST
# 295 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroCommon_Text_1, MSGBOX_DEFAULT
	return


Rogue_Hub_ProfLab_IntroRunAwayCommon::
# 301 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 302 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	givemon SPECIES_SUNKERN, 7, ITEM_ORAN_BERRY
# 304 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 305 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	message Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_0
# 306 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmessage
# 307 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitfanfare
# 309 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_1, MSGBOX_YESNO
# 310 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_IntroRunAwayCommon_2
Rogue_Hub_ProfLab_IntroRunAwayCommon_1:
# 315 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_STARTER_MON, 4
# 317 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_PostStarterSelect
	return

Rogue_Hub_ProfLab_IntroRunAwayCommon_2:
# 312 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Rogue_Hub_ProfLab_IntroRunAwayCommon_1


Rogue_Hub_ProfLab_IntroTriggerL::
# 323 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lockall
# 324 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_TEMP_F, YES
	goto_if_ne Rogue_Hub_ProfLab_IntroTriggerL_2
# 335 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject 1, DIR_SOUTH
# 336 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 338 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroTriggerL_Text_0, MSGBOX_YESNO
# 340 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_IntroTriggerL_5
# 351 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Hub_ProfLab_WalkUpOne
# 352 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
Rogue_Hub_ProfLab_IntroTriggerL_1:
# 355 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	releaseall
	return

Rogue_Hub_ProfLab_IntroTriggerL_2:
# 326 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_TEMP_F, YES
# 328 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Hub_ProfLab_WalkToProfL
# 329 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
# 331 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_IntroCommon
	goto Rogue_Hub_ProfLab_IntroTriggerL_1

Rogue_Hub_ProfLab_IntroTriggerL_5:
# 342 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroTriggerL_Text_1, MSGBOX_DEFAULT
# 344 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement 1, Rogue_Hub_ProfLab_WalkFromProfL
# 345 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
# 347 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_IntroRunAwayCommon
	goto Rogue_Hub_ProfLab_IntroTriggerL_1


Rogue_Hub_ProfLab_IntroTriggerR::
# 360 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lockall
# 361 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_TEMP_F, YES
	goto_if_ne Rogue_Hub_ProfLab_IntroTriggerR_2
# 372 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject 1, DIR_SOUTH
# 373 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 375 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroTriggerR_Text_0, MSGBOX_YESNO
# 377 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_IntroTriggerR_5
# 388 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Hub_ProfLab_WalkUpOne
# 389 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
Rogue_Hub_ProfLab_IntroTriggerR_1:
# 392 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	releaseall
	return

Rogue_Hub_ProfLab_IntroTriggerR_2:
# 363 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_TEMP_F, YES
# 365 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Hub_ProfLab_WalkToProfR
# 366 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
# 368 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_IntroCommon
	goto Rogue_Hub_ProfLab_IntroTriggerR_1

Rogue_Hub_ProfLab_IntroTriggerR_5:
# 379 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroTriggerL_Text_1, MSGBOX_DEFAULT
# 381 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	applymovement 1, Rogue_Hub_ProfLab_WalkFromProfR
# 382 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmovement 0
# 384 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_IntroRunAwayCommon
	goto Rogue_Hub_ProfLab_IntroTriggerR_1


# 395 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkUpOne:
# 397 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
	step_end

# 400 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkToProfL:
# 402 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
# 402 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
# 402 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
	step_end

# 405 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkToProfR:
# 407 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_left
# 408 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
# 408 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
# 408 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_up
	step_end

# 411 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkFromProfL:
# 413 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
# 413 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
# 413 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
	step_end

# 416 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
Rogue_Hub_ProfLab_WalkFromProfR:
# 418 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_right
# 419 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
# 419 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
# 419 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	walk_down
	step_end

Rogue_Hub_ProfLab_PokeballCommon::
# 424 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_le Rogue_Hub_ProfLab_PokeballCommon_2
# 462 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8001
# 463 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_PokeballCommon_Text_1
Rogue_Hub_ProfLab_PokeballCommon_1:
# 466 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Hub_ProfLab_PokeballCommon_2:
# 426 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject 1, DIR_EAST
# 428 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	showmonpic VAR_0x8001, 10, 3
# 429 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	playmoncry VAR_0x8001, CRY_MODE_NORMAL
# 430 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmoncry
# 432 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8001
# 433 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_PokeballCommon_Text_0, MSGBOX_YESNO
# 434 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	hidemonpic
# 436 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_PokeballCommon_5
	goto Rogue_Hub_ProfLab_PokeballCommon_1

Rogue_Hub_ProfLab_PokeballCommon_5:
# 438 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 439 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	givemon VAR_0x8001, 7, ITEM_ORAN_BERRY
# 441 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 442 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	message Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_0
# 443 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitmessage
# 444 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	waitfanfare
# 446 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_1, MSGBOX_YESNO
# 447 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_PokeballCommon_8
Rogue_Hub_ProfLab_PokeballCommon_7:
# 453 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 454 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_PostStarterSelect
# 456 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Hub_ProfLab_PokeballCommon_8:
# 449 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 450 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Rogue_Hub_ProfLab_PokeballCommon_7


Rogue_Hub_ProfLab_PostStarterSelect::
# 472 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_PostStarterSelect_Text_0, MSGBOX_DEFAULT
# 474 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 475 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 477 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 478 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 479 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 481 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	msgbox Rogue_Hub_ProfLab_PostStarterSelect_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_ProfExplain
# 485 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	special Rogue_SetupFollowParterMonObjectEvent
	return


Rogue_Hub_ProfLab_Pokeball0::
# 491 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lock
# 492 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_STARTER0
# 493 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_PokeballCommon
# 495 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_Pokeball0_2
Rogue_Hub_ProfLab_Pokeball0_1:
# 501 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	release
	return

Rogue_Hub_ProfLab_Pokeball0_2:
# 497 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 498 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_Hub_ProfLab_Pokeball0_1


Rogue_Hub_ProfLab_Pokeball1::
# 506 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lock
# 507 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_STARTER1
# 508 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_PokeballCommon
# 510 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_Pokeball1_2
Rogue_Hub_ProfLab_Pokeball1_1:
# 516 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	release
	return

Rogue_Hub_ProfLab_Pokeball1_2:
# 512 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 513 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_Hub_ProfLab_Pokeball1_1


Rogue_Hub_ProfLab_Pokeball2::
# 521 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	lock
# 522 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_STARTER2
# 523 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	call Rogue_Hub_ProfLab_PokeballCommon
# 525 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Hub_ProfLab_Pokeball2_2
Rogue_Hub_ProfLab_Pokeball2_1:
# 531 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	release
	return

Rogue_Hub_ProfLab_Pokeball2_2:
# 527 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 528 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	setflag FLAG_TEMP_3
	goto Rogue_Hub_ProfLab_Pokeball2_1


Rogue_Hub_ProfLab_SpeakProf_Text_0:
# 31 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Hey {PLAYER}!\n"
	.string "Hope you're enjoying the adventure so\l"
	.string "far!$"

Rogue_Hub_ProfLab_SpeakProf_Text_1:
# 38 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Go ahead!\n"
	.string "Pick a PARTNER Pokémon!$"

Rogue_Hub_ProfLab_SpeakProf_Text_2:
# 52 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: OK then!\n"
	.string "If you ever need an explanation, you\l"
	.string "know where to find me.$"

Rogue_Hub_ProfLab_ProfExplain_Text_0:
# 60 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Would you like me to explain how\n"
	.string "adventures work?$"

Rogue_Hub_ProfLab_ProfExplain_Text_1:
# 64 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: You never know what you're\n"
	.string "gonna see on an adventure!\p"
	.string "The routes will swap around, the\n"
	.string "Pokémon and TRAINERS you encounter\l"
	.string "will also change!\p"
	.string "When you finish your adventure you'll\n"
	.string "be escorted back to the HUB and we'll\l"
	.string "restore your BAG and Pokémon back to\l"
	.string "their original states.\p"
	.string "So, for example, if you evolved your\n"
	.string "PARTNER Pokémon whilst on an\l"
	.string "adventure, it would unevolve when you\l"
	.string "come back to the HUB.$"

Rogue_Hub_ProfLab_ProfExplain_Text_2:
# 65 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "When you return from adventures, you'll\n"
	.string "get given reward money which you can\l"
	.string "then spend on anything you'd like in the\l"
	.string "HUB.\p"
	.string "Whatever you buy or use in the HUB will\n"
	.string "be permanent.\p"
	.string "So if you went and bought extra potions\n"
	.string "in the HUB but used them during an\l"
	.string "adventure, once you returned you'd find\l"
	.string "that they've been placed right back in\l"
	.string "to you BAG.\p"
	.string "The best way to learn about adventures\n"
	.string "is to go on many of them!\p"
	.string "So go ahead!\n"
	.string "Explore and have fun!$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_0:
# 83 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. get high friendship.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_1:
# 86 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. get high friendship\n"
	.string "during the day.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_2:
# 89 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. get high friendship\n"
	.string "during the night.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_3:
# 94 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl {STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_4:
# 97 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. trade.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_5:
# 101 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. trade whilst holding\n"
	.string "{STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_6:
# 105 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. use a {STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_7:
# 109 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} whilst attack is higher\l"
	.string "than defence.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_8:
# 113 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} whilst attack is equal\l"
	.string "to defence.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_9:
# 117 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} whilst attack is lower\l"
	.string "than defence.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_10:
# 122 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} with a specific\l"
	.string "personality.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_11:
# 126 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} with a spare slot in\l"
	.string "your party available.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_12:
# 129 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. get high beauty.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_13:
# 133 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "holding {STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_14:
# 140 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} when female.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_15:
# 144 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} when male.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_16:
# 148 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} during the night.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_17:
# 152 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} during the day.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_18:
# 156 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} during dusk.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_19:
# 160 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "holding {STR_VAR_3} during the day.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_20:
# 164 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "holding {STR_VAR_3} during the\l"
	.string "night.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_21:
# 169 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "knowing {STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_22:
# 172 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "knowing a FAIRY move.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_23:
# 177 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "holding {STR_VAR_3} when in ???\l"
	.string "location.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_24:
# 182 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. use a {STR_VAR_3}\n"
	.string "when male.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_25:
# 186 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. use a {STR_VAR_3}\n"
	.string "when female.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_26:
# 191 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} whilst it is raining.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_27:
# 195 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise by a lvl whilst\n"
	.string "{STR_VAR_3} is in the party.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_28:
# 199 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} whilst a DARK type\l"
	.string "Pokémon is in the party.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_29:
# 203 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. trade for a\n"
	.string "{STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_30:
# 209 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. raise to lvl\n"
	.string "{STR_VAR_3} with a specific nature.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_31:
# 213 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. deal {STR_VAR_3}\n"
	.string "critical hits in a single battle.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_32:
# 217 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. when hp less than\n"
	.string "{STR_VAR_3} interact with ???.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_33:
# 221 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. interact with ???.$"

Rogue_Hub_ProfLab_ProfCycleEvos_Text_34:
# 225 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_2}. UNKNOWN EVO TYPE,\n"
	.string "{STR_VAR_3}.$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_0:
# 232 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Would you like to check how a\n"
	.string "Pokémon evolves?$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_1:
# 236 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "Who would you like information on?$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_2:
# 242 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: OK then!\n"
	.string "If you ever need any help, you know\l"
	.string "where to find me.$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_3:
# 251 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_1} doesn't appear to\n"
	.string "currently have access to any\l"
	.string "evolutions.$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_4:
# 256 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_1} currently has access to\n"
	.string "{STR_VAR_2} evolution.$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_5:
# 260 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: If you ever need any more help,\n"
	.string "you know where to find me.$"

Rogue_Hub_ProfLab_ProfShowEvos_Text_6:
# 265 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{STR_VAR_1} currently has access to\n"
	.string "{STR_VAR_2} evolutions.$"

Rogue_Hub_ProfLab_TriggerPC_Text_0:
# 280 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "(I shouldn't use this now)$"

Rogue_Hub_ProfLab_IntroCommon_Text_0:
# 293 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: {PLAYER}!\n"
	.string "You finally made it!\p"
	.string "I assume you're itching to go on\n"
	.string "adventures, but before you start you\l"
	.string "need a Pokémon of your own.$"

Rogue_Hub_ProfLab_IntroCommon_Text_1:
# 295 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: I went out and caught a few for\n"
	.string "you to pick from this morning.\p"
	.string "Pick whichever you like!$"

Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_0:
# 305 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "{PLAYER} obtained a {STR_VAR_1}.$"

Rogue_Hub_ProfLab_IntroRunAwayCommon_Text_1:
# 309 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Would you like to give\n"
	.string "{STR_VAR_1} a nickname?$"

Rogue_Hub_ProfLab_IntroTriggerL_Text_0:
# 338 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Oh...\p"
	.string "Would you prefer some different\n"
	.string "Pokémon options?$"

Rogue_Hub_ProfLab_IntroTriggerL_Text_1:
# 342 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: OK, here you go!$"

Rogue_Hub_ProfLab_IntroTriggerR_Text_0:
# 375 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: Oh...\p"
	.string "Would you prefer a different Pokémon?$"

Rogue_Hub_ProfLab_PokeballCommon_Text_0:
# 433 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: You'd like to take\n"
	.string "{STR_VAR_1}?$"

Rogue_Hub_ProfLab_PokeballCommon_Text_1:
# 463 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "(Poor {STR_VAR_1}...)\p"
	.string "(Must be lonely...)$"

Rogue_Hub_ProfLab_PostStarterSelect_Text_0:
# 472 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "BIRCH: I also threw some items and a\n"
	.string "POKéDEX in there too!$"

Rogue_Hub_ProfLab_PostStarterSelect_Text_1:
# 481 "data/maps/Rogue_Hub_ProfLab/scripts.pory"
	.string "You're now ready to go on adventures!$"
