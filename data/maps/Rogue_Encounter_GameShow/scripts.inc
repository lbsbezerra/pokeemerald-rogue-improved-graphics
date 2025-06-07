Rogue_Encounter_GameShow_MapScripts::
# 29 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Encounter_GameShow_OnLoad
	.byte 0


Rogue_Encounter_GameShow_OnLoad::
# 34 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_RestartGameShow
# 36 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_2, 0
# 37 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_SelectRewardItem
# 39 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Rogue_Encounter_GameShow_TriggerIntro::
# 44 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	lockall
# 46 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	applymovement 1, GameShow_Host_Spin
# 50 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmovement 0
# 52 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setweather WEATHER_NONE
# 53 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	doweather
# 54 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_TRUCK_DOOR
# 55 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 30
# 57 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playbgm MUS_HG_GAME_CORNER, TRUE
# 59 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	closemessage
# 62 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_APPLAUSE
# 65 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_2, MSGBOX_YESNO
# 66 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_TriggerIntro_2
# 72 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_4, MSGBOX_DEFAULT
Rogue_Encounter_GameShow_TriggerIntro_1:
# 75 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_5, MSGBOX_DEFAULT
# 77 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_IsTeamTriviaRoundValid
# 78 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_TriggerIntro_6
# 84 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	random 4
Rogue_Encounter_GameShow_TriggerIntro_5:
# 87 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 0, Rogue_Encounter_GameShow_TriggerIntro_11
# 93 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 1, Rogue_Encounter_GameShow_TriggerIntro_12
# 94 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 2, Rogue_Encounter_GameShow_TriggerIntro_12
# 97 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 3, Rogue_Encounter_GameShow_TriggerIntro_13
# 100 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 4, Rogue_Encounter_GameShow_TriggerIntro_14
Rogue_Encounter_GameShow_TriggerIntro_9:
# 104 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	applymovement 1, GameShow_Host_Spin
# 105 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmovement 0
# 107 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_6, MSGBOX_DEFAULT
# 109 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_ne Rogue_Encounter_GameShow_TriggerIntro_16
# 119 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	hideobjectat 2, MAP_ROGUE_ENCOUNTER_GAME_SHOW
# 120 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setflag FLAG_ROGUE_HIDE_GAMESHOW_REWARD
# 121 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxy 2, 0, 0
# 122 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxyperm 2, 0, 0
Rogue_Encounter_GameShow_TriggerIntro_15:
# 125 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	applymovement 1, GameShow_Host_Exit
# 126 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmovement 0
# 128 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxy 1, 0, 0
# 129 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxyperm 1, 0, 0
# 130 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	hideobjectat 1, MAP_ROGUE_ENCOUNTER_GAME_SHOW
# 131 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setflag FLAG_TEMP_1
# 133 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	releaseall
	return

Rogue_Encounter_GameShow_TriggerIntro_2:
# 68 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TriggerIntro_Text_3, MSGBOX_DEFAULT
	goto Rogue_Encounter_GameShow_TriggerIntro_1

Rogue_Encounter_GameShow_TriggerIntro_6:
# 80 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	random 5
	goto Rogue_Encounter_GameShow_TriggerIntro_5

Rogue_Encounter_GameShow_TriggerIntro_11:
# 91 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_WhosThatPokemonFlow
	goto Rogue_Encounter_GameShow_TriggerIntro_9

Rogue_Encounter_GameShow_TriggerIntro_12:
# 95 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_WhosThatCryFlow
	goto Rogue_Encounter_GameShow_TriggerIntro_9

Rogue_Encounter_GameShow_TriggerIntro_13:
# 98 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_VoltorbFlip
	goto Rogue_Encounter_GameShow_TriggerIntro_9

Rogue_Encounter_GameShow_TriggerIntro_14:
# 101 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_TeamTrivia
	goto Rogue_Encounter_GameShow_TriggerIntro_9

Rogue_Encounter_GameShow_TriggerIntro_16:
# 112 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	clearflag FLAG_ROGUE_HIDE_GAMESHOW_REWARD
# 113 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxy 2, 7, 8
# 114 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setobjectxyperm 2, 7, 8
	goto Rogue_Encounter_GameShow_TriggerIntro_15


Rogue_Interact_GiveReward::
# 138 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	lock
# 140 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_3, ITEM_NONE
	goto_if_eq Rogue_Interact_GiveReward_2
# 156 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	checkitemspace VAR_TEMP_3, VAR_TEMP_4
# 157 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interact_GiveReward_5
# 165 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	finditem VAR_TEMP_3, VAR_TEMP_4
Rogue_Interact_GiveReward_1:
# 169 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	release
	return

Rogue_Interact_GiveReward_2:
# 142 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Interact_GiveReward_Text_0
# 144 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 145 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmoncry
# 147 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	removeobject VAR_LAST_TALKED
# 149 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	seteventmon SPECIES_ELECTRODE, 1
# 151 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 152 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitstate
	goto Rogue_Interact_GiveReward_1

Rogue_Interact_GiveReward_5:
# 159 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	finditem VAR_TEMP_3, VAR_TEMP_4
# 160 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Rogue_Interact_GiveReward_1


Rogue_Encounter_GameShow_WhosThatPokemonFlow::
# 174 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_0, MSGBOX_DEFAULT
Rogue_Encounter_GameShow_WhosThatPokemonFlow_1:
# 176 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_le Rogue_Encounter_GameShow_WhosThatPokemonFlow_2
	return

Rogue_Encounter_GameShow_WhosThatPokemonFlow_2:
# 178 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 179 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_1
# 181 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_SelectRandomSpecies
# 182 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	specialvar VAR_TEMP_A, GameShow_BufferSpecies
# 185 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_2
# 186 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	showmonpic VAR_TEMP_A, 10, 3, TRUE
# 187 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 20
# 188 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmessage
# 189 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitbuttonpress
# 190 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	hidemonpic
# 193 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_3
# 194 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmessage
# 196 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	begindynamicmultichoice
# 197 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_AppendSpeciesMultichoiceOptions
# 198 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	enddynamicmultichoice 19, 4, 4, FALSE
# 200 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_4
# 202 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_WhosThatPokemonFlow_4
# 215 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_BOO
# 216 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 218 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_A
# 220 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_6
# 221 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto Rogue_Encounter_GameShow_WhosThatPokemonFlow_1

Rogue_Encounter_GameShow_WhosThatPokemonFlow_4:
# 204 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_DING_DONG
# 205 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 207 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_5
# 208 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 209 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_2, 1
# 211 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_DisplayReward
	goto Rogue_Encounter_GameShow_WhosThatPokemonFlow_1


Rogue_Encounter_GameShow_WhosThatCryFlow::
# 228 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatCryFlow_Text_0, MSGBOX_DEFAULT
Rogue_Encounter_GameShow_WhosThatCryFlow_1:
# 230 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_le Rogue_Encounter_GameShow_WhosThatCryFlow_2
	return

Rogue_Encounter_GameShow_WhosThatCryFlow_2:
# 232 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 233 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_1
# 235 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_SelectRandomSpecies
# 236 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	specialvar VAR_TEMP_A, GameShow_BufferSpecies
# 239 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_WhosThatCryFlow_Text_1
# 240 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmessage
# 241 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 30
# 243 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_NORMAL
# 244 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmoncry
# 245 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 90
# 247 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_NORMAL
# 248 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmoncry
# 249 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 90
# 251 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_NORMAL
# 252 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmoncry
# 253 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay 90
# 256 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_WhosThatCryFlow_Text_2
# 257 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmessage
# 259 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	begindynamicmultichoice
# 260 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_AppendSpeciesMultichoiceOptions
# 261 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	enddynamicmultichoice 19, 4, 4, FALSE
# 263 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_4
# 265 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_WhosThatCryFlow_4
# 278 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_BOO
# 279 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 281 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_A
# 283 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_6
# 284 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto Rogue_Encounter_GameShow_WhosThatCryFlow_1

Rogue_Encounter_GameShow_WhosThatCryFlow_4:
# 267 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_DING_DONG
# 268 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 270 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_5
# 271 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 272 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_2, 1
# 274 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_DisplayReward
	goto Rogue_Encounter_GameShow_WhosThatCryFlow_1


Rogue_Encounter_GameShow_VoltorbFlip::
# 291 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_VoltorbFlip_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_0x8004, 0
Rogue_Encounter_GameShow_VoltorbFlip_1:
# 295 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_le Rogue_Encounter_GameShow_VoltorbFlip_2
	return

Rogue_Encounter_GameShow_VoltorbFlip_2:
# 297 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 298 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_1
# 300 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special Special_ViewVoltorbFlip
# 301 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitstate
# 303 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_VoltorbFlip_4
# 317 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_BOO
# 318 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 320 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_VoltorbFlip_Text_2
# 321 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto Rogue_Encounter_GameShow_VoltorbFlip_1

Rogue_Encounter_GameShow_VoltorbFlip_4:
# 305 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_DING_DONG
# 306 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 308 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_VoltorbFlip_Text_1
# 309 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 310 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_2, 2
# 311 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_0x8004, 2
# 313 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_DisplayReward
	goto Rogue_Encounter_GameShow_VoltorbFlip_1


Rogue_Encounter_GameShow_TeamTrivia::
# 328 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TeamTrivia_Text_0, MSGBOX_DEFAULT
Rogue_Encounter_GameShow_TeamTrivia_1:
# 330 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_0, 50
	goto_if_le Rogue_Encounter_GameShow_TeamTrivia_2
	return

Rogue_Encounter_GameShow_TeamTrivia_2:
# 332 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 333 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_1
# 335 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Encounter_GameShow_TeamTrivia_Text_1
# 336 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferstring STR_VAR_2, Rogue_Encounter_GameShow_TeamTrivia_Text_2
# 337 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferstring STR_VAR_3, Rogue_Encounter_GameShow_TeamTrivia_Text_3
# 338 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_A, 0
# 341 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_NextTriviaQuestion
# 343 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	switch VAR_RESULT
# 345 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 0, Rogue_Encounter_GameShow_TeamTrivia_6
# 349 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_TeamTrivia_Text_5
Rogue_Encounter_GameShow_TeamTrivia_4:
# 351 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_TeamTrivia_GetResult
# 353 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_GameShow_TeamTrivia_8
# 366 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_BOO
# 367 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 369 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	switch VAR_TEMP_A
# 371 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 0, Rogue_Encounter_GameShow_TeamTrivia_13
# 373 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 1, Rogue_Encounter_GameShow_TeamTrivia_14
# 375 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 2, Rogue_Encounter_GameShow_TeamTrivia_15
Rogue_Encounter_GameShow_TeamTrivia_11:
# 379 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 100
	goto Rogue_Encounter_GameShow_TeamTrivia_1

Rogue_Encounter_GameShow_TeamTrivia_6:
# 346 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	message Rogue_Encounter_GameShow_TeamTrivia_Text_4
	goto Rogue_Encounter_GameShow_TeamTrivia_4

Rogue_Encounter_GameShow_TeamTrivia_8:
# 355 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	playse SE_DING_DONG
# 356 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitse
# 358 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_5
# 359 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 360 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	addvar VAR_TEMP_2, 1
# 362 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	call Rogue_Encounter_GameShow_DisplayReward
	goto Rogue_Encounter_GameShow_TeamTrivia_1

Rogue_Encounter_GameShow_TeamTrivia_13:
# 372 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_6
	goto Rogue_Encounter_GameShow_TeamTrivia_11

Rogue_Encounter_GameShow_TeamTrivia_14:
# 374 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TeamTrivia_Text_6
	goto Rogue_Encounter_GameShow_TeamTrivia_11

Rogue_Encounter_GameShow_TeamTrivia_15:
# 376 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_TeamTrivia_Text_7
	goto Rogue_Encounter_GameShow_TeamTrivia_11


Rogue_Encounter_GameShow_TeamTrivia_GetResult::
# 386 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	waitmessage
# 387 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	multichoice 20, 6, MULTI_EXPAND3, NO
# 389 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 0, Rogue_Encounter_GameShow_TeamTrivia_GetResult_3
# 392 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 1, Rogue_Encounter_GameShow_TeamTrivia_GetResult_3
# 393 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case 2, Rogue_Encounter_GameShow_TeamTrivia_GetResult_3
# 402 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_GameShow_TeamTrivia_GetResult_4
Rogue_Encounter_GameShow_TeamTrivia_GetResult_1:
# 406 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_4
	return

Rogue_Encounter_GameShow_TeamTrivia_GetResult_3:
# 394 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_A
	goto_if_eq Rogue_Encounter_GameShow_TeamTrivia_GetResult_5
# 400 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_GameShow_TeamTrivia_GetResult_1

Rogue_Encounter_GameShow_TeamTrivia_GetResult_4:
# 403 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_GameShow_TeamTrivia_GetResult_1

Rogue_Encounter_GameShow_TeamTrivia_GetResult_5:
# 396 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_GameShow_TeamTrivia_GetResult_1


Rogue_Encounter_GameShow_DisplayReward::
# 411 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_3
# 412 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_4
# 413 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	special GameShow_SelectRewardItem
# 414 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferitemnameplural STR_VAR_1, VAR_0x8004, VAR_0x8005
# 415 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	bufferitemnameplural STR_VAR_2, VAR_TEMP_3, VAR_TEMP_4
# 417 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_3, ITEM_NONE
	goto_if_eq Rogue_Encounter_GameShow_DisplayReward_1
# 430 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_ge Rogue_Encounter_GameShow_DisplayReward_6
# 442 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_DisplayReward_Text_2, MSGBOX_YESNO
# 444 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_GameShow_DisplayReward_9
	return

Rogue_Encounter_GameShow_DisplayReward_1:
# 419 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_DisplayReward_Text_0, MSGBOX_YESNO
# 421 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_GameShow_DisplayReward_4
	return

Rogue_Encounter_GameShow_DisplayReward_4:
# 423 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 424 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_4, VAR_0x8005
# 425 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 99
	return

Rogue_Encounter_GameShow_DisplayReward_6:
# 432 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	msgbox Rogue_Encounter_GameShow_DisplayReward_Text_1
# 433 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_RESULT, NO
# 434 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 435 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_4, VAR_0x8005
# 436 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 99
# 438 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
	return

Rogue_Encounter_GameShow_DisplayReward_9:
# 446 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 447 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	copyvar VAR_TEMP_4, VAR_0x8005
# 448 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	setvar VAR_TEMP_0, 99
	return


# 455 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
GameShow_Host_Spin:
# 457 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_right
# 458 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 460 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_up
# 461 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 463 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_left
# 464 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 466 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_down
# 467 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 469 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_right
# 470 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 472 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_up
# 473 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 475 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_left
# 476 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 478 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	face_down
# 479 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	delay_1
# 481 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	jump_in_place_down
	step_end

# 484 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
GameShow_Host_Exit:
# 485 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	jump_2_up
# 485 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	jump_2_up
	step_end

Rogue_Encounter_GameShow_TriggerIntro_Text_0:
# 47 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "WAHEY!$"

Rogue_Encounter_GameShow_TriggerIntro_Text_1:
# 59 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Welcome to my ever so lovingly setup\n"
	.string "Game Show!$"

Rogue_Encounter_GameShow_TriggerIntro_Text_2:
# 65 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Now, contestant!\n"
	.string "Are you aware how this Game Show runs?$"

Rogue_Encounter_GameShow_TriggerIntro_Text_3:
# 68 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Wonderful!\n"
	.string "Let's get straight into the action!$"

Rogue_Encounter_GameShow_TriggerIntro_Text_4:
# 72 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "In each Game Show, we will have a\n"
	.string "specific game we will play.\p"
	.string "Each game will consist of several\n"
	.string "rounds.\p"
	.string "Once you complete a round, you will earn\n"
	.string "a reward, you may then choose to finish\l"
	.string "the Game Show or try to push further to\l"
	.string "get an even better reward!\p"
	.string "It's all or nothing!$"

Rogue_Encounter_GameShow_TriggerIntro_Text_5:
# 75 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "For our show today, the game will be… … …$"

Rogue_Encounter_GameShow_TriggerIntro_Text_6:
# 107 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "That's all for now folks!\n"
	.string "Ke ke ke$"

Rogue_Interact_GiveReward_Text_0:
# 142 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Oh.\p"
	.string "It has a note attached:\p"
	.string "'Cheaters never prosper ke ke ke -\n"
	.string "Randoman'$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_0:
# 174 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Who's that Pokémon?!\p"
	.string "There will be 6 rounds, you will have to\n"
	.string "guess the specific Pokémon based on\l"
	.string "our prompt.\p"
	.string "Now…$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_1:
# 179 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Round {STR_VAR_1}!$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_2:
# 185 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Which Pokémon does this silhouette\n"
	.string "belong to?$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_3:
# 193 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Which Pokémon was that?$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_4:
# 200 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "That answer is…$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_5:
# 207 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Correct!$"

Rogue_Encounter_GameShow_WhosThatPokemonFlow_Text_6:
# 220 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Incorrect!\n"
	.string "The answer was {STR_VAR_1}.$"

Rogue_Encounter_GameShow_WhosThatCryFlow_Text_0:
# 228 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "What's that Cry?!\p"
	.string "There will be 6 rounds, you will have to\n"
	.string "guess the specific Pokémon based on\l"
	.string "their Cry.\p"
	.string "Now…$"

Rogue_Encounter_GameShow_WhosThatCryFlow_Text_1:
# 239 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Which Pokémon does this cry belong to?$"

Rogue_Encounter_GameShow_WhosThatCryFlow_Text_2:
# 256 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Which Pokémon did that Cry belong to?$"

Rogue_Encounter_GameShow_VoltorbFlip_Text_0:
# 291 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Voltorb Flip!\p"
	.string "There will be 3 rounds, you will have to\n"
	.string "collect all of the 2 and 3 cards on the\l"
	.string "board without flipping any Voltorbs.\p"
	.string "Now…$"

Rogue_Encounter_GameShow_VoltorbFlip_Text_1:
# 308 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Congratulations!$"

Rogue_Encounter_GameShow_VoltorbFlip_Text_2:
# 320 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Oh no!$"

Rogue_Encounter_GameShow_TeamTrivia_Text_0:
# 328 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Team Trivia!\p"
	.string "There will be 6 rounds, you will asked a\n"
	.string "question about your Pokémon teams and\l"
	.string "you just have to give the correct\l"
	.string "answer.\p"
	.string "It's that simple!\p"
	.string "Now…$"

Rogue_Encounter_GameShow_TeamTrivia_Text_1:
# 335 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "1$"

Rogue_Encounter_GameShow_TeamTrivia_Text_2:
# 336 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "2$"

Rogue_Encounter_GameShow_TeamTrivia_Text_3:
# 337 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "3$"

Rogue_Encounter_GameShow_TeamTrivia_Text_4:
# 346 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "So, what would you like to wager?$"

Rogue_Encounter_GameShow_TeamTrivia_Text_5:
# 349 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "???$"

Rogue_Encounter_GameShow_TeamTrivia_Text_6:
# 374 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Incorrect!\n"
	.string "The answer was {STR_VAR_2}.$"

Rogue_Encounter_GameShow_TeamTrivia_Text_7:
# 376 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "Incorrect!\n"
	.string "The answer was {STR_VAR_3}.$"

Rogue_Encounter_GameShow_DisplayReward_Text_0:
# 419 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "If you stop now, you can win yourself…\p"
	.string "{STR_VAR_1}!\p"
	.string "Or you can risk it to upgrade your prize\n"
	.string "to…\p"
	.string "{STR_VAR_2}!\n"
	.string "Or even better!\n"
	.string "All or nothing!\p"
	.string "So, do you want to risk it and play\n"
	.string "another round?$"

Rogue_Encounter_GameShow_DisplayReward_Text_1:
# 432 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "You just won yourself…\p"
	.string "{STR_VAR_1}!$"

Rogue_Encounter_GameShow_DisplayReward_Text_2:
# 442 "data/maps/Rogue_Encounter_GameShow/scripts.pory"
	.string "You just won yourself…\p"
	.string "{STR_VAR_1}!\p"
	.string "Next round you could upgrade your prize\n"
	.string "to…\p"
	.string "{STR_VAR_2}!\p"
	.string "Do you want to risk it and play another\n"
	.string "round?$"
