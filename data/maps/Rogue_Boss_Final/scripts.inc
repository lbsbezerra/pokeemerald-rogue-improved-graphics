Rogue_Boss_Final_MapScripts::
# 34 "data/maps/Rogue_Boss_Final/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Boss_Final_OnLoad
# 35 "data/maps/Rogue_Boss_Final/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Boss_Final_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Boss_Final_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 37 "data/maps/Rogue_Boss_Final/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Boss_Final_LoadFrame_0
	.2byte 0


Rogue_Boss_Final_OnLoad::
# 43 "data/maps/Rogue_Boss_Final/scripts.pory"
	special Rogue_SetupFollowMonFromParty
	return


Rogue_Boss_Final_LoadFrame_0::
# 48 "data/maps/Rogue_Boss_Final/scripts.pory"
	lock
# 49 "data/maps/Rogue_Boss_Final/scripts.pory"
	setvar VAR_TEMP_0, 1
# 50 "data/maps/Rogue_Boss_Final/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 54 "data/maps/Rogue_Boss_Final/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 60
# 56 "data/maps/Rogue_Boss_Final/scripts.pory"
	closemessage
# 60 "data/maps/Rogue_Boss_Final/scripts.pory"
	playbgm MUS_DP_HALL_OF_ORIGIN, FALSE
# 61 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 1, 9, 5
# 63 "data/maps/Rogue_Boss_Final/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 300
# 70 "data/maps/Rogue_Boss_Final/scripts.pory"
	message Rogue_Boss_Final_LoadFrame_0_Text_0
# 71 "data/maps/Rogue_Boss_Final/scripts.pory"
	waitmessage
# 72 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 180
# 73 "data/maps/Rogue_Boss_Final/scripts.pory"
	closemessage
# 77 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 2, 9, 5
# 78 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 1, 0, 0
# 80 "data/maps/Rogue_Boss_Final/scripts.pory"
	applymovement 2, Rogue_Boss_Final_RandomanSpin
# 81 "data/maps/Rogue_Boss_Final/scripts.pory"
	waitmovement 0
# 83 "data/maps/Rogue_Boss_Final/scripts.pory"
	msgbox Rogue_Boss_Final_LoadFrame_0_Text_1
# 84 "data/maps/Rogue_Boss_Final/scripts.pory"
	closemessage
# 88 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_0, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_2
Rogue_Boss_Final_LoadFrame_0_1:
# 95 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_1, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_5
Rogue_Boss_Final_LoadFrame_0_4:
# 102 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_2, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_8
Rogue_Boss_Final_LoadFrame_0_7:
# 109 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_3, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_11
Rogue_Boss_Final_LoadFrame_0_10:
# 116 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_4, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_14
Rogue_Boss_Final_LoadFrame_0_13:
# 123 "data/maps/Rogue_Boss_Final/scripts.pory"
	compare VAR_FOLLOW_MON_5, SPECIES_NONE
	goto_if_ne Rogue_Boss_Final_LoadFrame_0_17
Rogue_Boss_Final_LoadFrame_0_16:
# 132 "data/maps/Rogue_Boss_Final/scripts.pory"
	message Rogue_Boss_Final_LoadFrame_0_Text_2
# 133 "data/maps/Rogue_Boss_Final/scripts.pory"
	waitmessage
# 134 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 180
# 136 "data/maps/Rogue_Boss_Final/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 10
# 139 "data/maps/Rogue_Boss_Final/scripts.pory"
	fadeoutbgm 1
# 141 "data/maps/Rogue_Boss_Final/scripts.pory"
	playbgm MUS_MOVE_DELETED_SLOW, FALSE
# 142 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 270
# 145 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 2, 0, 0
# 146 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 3, 0, 0
# 147 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 4, 0, 0
# 148 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 5, 0, 0
# 149 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 6, 0, 0
# 150 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 7, 0, 0
# 151 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 8, 0, 0
# 154 "data/maps/Rogue_Boss_Final/scripts.pory"
	call Rogue_SetDesiredWeather
# 155 "data/maps/Rogue_Boss_Final/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ROGUE_DYNAMIC, 0, gPlaceholder_Gym_PostBattleTaunt
# 157 "data/maps/Rogue_Boss_Final/scripts.pory"
	call Rogue_Boss_Final_BattleDefeated
	return

Rogue_Boss_Final_LoadFrame_0_2:
# 90 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 3, 7, 4
# 91 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_0, CRY_MODE_NORMAL
# 92 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_1

Rogue_Boss_Final_LoadFrame_0_5:
# 97 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 4, 11, 4
# 98 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_1, CRY_MODE_NORMAL
# 99 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_4

Rogue_Boss_Final_LoadFrame_0_8:
# 104 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 5, 8, 2
# 105 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_2, CRY_MODE_NORMAL
# 106 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_7

Rogue_Boss_Final_LoadFrame_0_11:
# 111 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 6, 10, 2
# 112 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_3, CRY_MODE_NORMAL
# 113 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_10

Rogue_Boss_Final_LoadFrame_0_14:
# 118 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 7, 6, 2
# 119 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_4, CRY_MODE_NORMAL
# 120 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_13

Rogue_Boss_Final_LoadFrame_0_17:
# 125 "data/maps/Rogue_Boss_Final/scripts.pory"
	setobjectxy 8, 12, 2
# 126 "data/maps/Rogue_Boss_Final/scripts.pory"
	playmoncry VAR_FOLLOW_MON_5, CRY_MODE_NORMAL
# 127 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay 120
	goto Rogue_Boss_Final_LoadFrame_0_16


Rogue_Boss_Final_BattleDefeated::
# 163 "data/maps/Rogue_Boss_Final/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/Rogue_Boss_Final/scripts.pory"
	special GameClear
# 165 "data/maps/Rogue_Boss_Final/scripts.pory"
	waitstate
# 166 "data/maps/Rogue_Boss_Final/scripts.pory"
	releaseall
	return


# 169 "data/maps/Rogue_Boss_Final/scripts.pory"
Rogue_Boss_Final_RandomanSpin:
# 171 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 172 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 174 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 175 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 177 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 178 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 180 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 181 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 183 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 184 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 186 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 187 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 189 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 190 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 192 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 193 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_1
# 196 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 197 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 199 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 200 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 202 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 203 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 205 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 206 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 208 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 209 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 211 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 212 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 214 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 215 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 217 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 218 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_2
# 221 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 222 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 224 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 225 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 227 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 228 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 230 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 231 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 233 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 234 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 236 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 237 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 239 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 240 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 242 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 243 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_4
# 246 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 247 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 249 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 250 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 252 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 253 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 255 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 256 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 258 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 259 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 261 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 262 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 264 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 265 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 267 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 268 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_8
# 271 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 272 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 274 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 275 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 277 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 278 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 280 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 281 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 283 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 284 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 286 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 287 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 289 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 290 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 292 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 293 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 296 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_right
# 297 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 297 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 299 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_up
# 300 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 300 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 302 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_left
# 303 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 303 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 305 "data/maps/Rogue_Boss_Final/scripts.pory"
	face_down
# 306 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
# 306 "data/maps/Rogue_Boss_Final/scripts.pory"
	delay_16
	step_end

Rogue_Boss_Final_LoadFrame_0_Text_0:
# 70 "data/maps/Rogue_Boss_Final/scripts.pory"
	.string "Wahey…$"

Rogue_Boss_Final_LoadFrame_0_Text_1:
# 83 "data/maps/Rogue_Boss_Final/scripts.pory"
	.string "Welcome!\p"
	.string "To my EVER so lovingly setup finale!\p"
	.string "So… … …$"

Rogue_Boss_Final_LoadFrame_0_Text_2:
# 132 "data/maps/Rogue_Boss_Final/scripts.pory"
	.string "Would you like to add a bit of\n"
	.string "randomness to your life?$"
