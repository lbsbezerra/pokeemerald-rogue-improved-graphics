Rogue_GiveItem_Internal::
# 12 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_DetermineItemPickupCount
# 13 "data/scripts/Rogue/Rogue_Manager.pory"
	finditem VAR_0x8001, VAR_0x8002
	return


Rogue_Common_DisplayPopups::
# 18 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 19 "data/scripts/Rogue/Rogue_Manager.pory"
	waitfanfare
# 20 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 21 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_DisplayPopupsFromScript
# 22 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
	return


Rogue_Common_DisplaySkippablePopups::
# 28 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 29 "data/scripts/Rogue/Rogue_Manager.pory"
	waitfanfare
# 30 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 31 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_DisplayPopupsFromScriptSkippable
# 32 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
	return


Rogue_Common_DisplayNewBadgePopup::
# 38 "data/scripts/Rogue/Rogue_Manager.pory"
	delay 10
# 39 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_Common_DisplaySkippablePopups
# 41 "data/scripts/Rogue/Rogue_Manager.pory"
	delay 10
# 42 "data/scripts/Rogue/Rogue_Manager.pory"
	special Popup_NewBadgeGet
# 43 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_Common_DisplayPopups
	return


Rogue_Common_WaitForRogueAssistant::
# 49 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_IsRogueAssistantConnected
# 50 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Common_WaitForRogueAssistant_2
Rogue_Common_WaitForRogueAssistant_1:
	return

Rogue_Common_WaitForRogueAssistant_2:
# 52 "data/scripts/Rogue/Rogue_Manager.pory"
	callnative ScriptMenu_ShowRogueAssistantNotice
# 54 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Common_WaitForRogueAssistant_Text_0
# 55 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 57 "data/scripts/Rogue/Rogue_Manager.pory"
	callnative Rogue_WaitForRogueAssistant
# 58 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 60 "data/scripts/Rogue/Rogue_Manager.pory"
	callnative ScriptMenu_HideRogueAssistantNotice
# 62 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_Common_DisplayPopups
	goto Rogue_Common_WaitForRogueAssistant_1


Rogue_QuickSaveRun::
# 70 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 72 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveRun_Text_0
# 74 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_IsMultiplayerActive
# 75 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_QuickSaveRun_2
Rogue_QuickSaveRun_1:
# 80 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_SaveGame
# 82 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_QuickSaveRun_5
Rogue_QuickSaveRun_4:
# 89 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return

Rogue_QuickSaveRun_2:
# 77 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveRun_Text_1
	goto Rogue_QuickSaveRun_1

Rogue_QuickSaveRun_5:
# 84 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/scripts/Rogue/Rogue_Manager.pory"
	delay 60
# 86 "data/scripts/Rogue/Rogue_Manager.pory"
	special DoSoftReset
	goto Rogue_QuickSaveRun_4


Rogue_QuickSaveLoad::
# 95 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 97 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq Rogue_QuickSaveLoad_2
# 105 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveLoad_Text_1
# 106 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ReturnToHub
Rogue_QuickSaveLoad_1:
# 109 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return

Rogue_QuickSaveLoad_2:
# 99 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveLoad_Text_0
# 101 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_ForceSaveGame
	goto Rogue_QuickSaveLoad_1


Rogue_QuickSaveVersionWarning::
# 114 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 116 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, YES
Rogue_QuickSaveVersionWarning_2:
# 117 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_QuickSaveVersionWarning_3
# 122 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return

Rogue_QuickSaveVersionWarning_3:
# 119 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveVersionWarning_Text_0
	goto Rogue_QuickSaveVersionWarning_2


Rogue_QuickSaveVersionUpdateMessage::
# 127 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferstring STR_VAR_1, gText_RogueVersion
# 128 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferstring STR_VAR_2, gText_RogueVersionPrefix
# 129 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferstring STR_VAR_3, gText_RogueVersionSuffix
# 131 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_PRE_RELEASE_COMPAT_WARNING, Rogue_QuickSaveVersionUpdateMessage_2
Rogue_QuickSaveVersionUpdateMessage_1:
# 136 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveVersionUpdateMessage_Text_1, MSGBOX_DEFAULT
# 137 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveVersionUpdateMessage_Text_2, MSGBOX_DEFAULT
	return

Rogue_QuickSaveVersionUpdateMessage_2:
# 133 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_QuickSaveVersionUpdateMessage_Text_0
	goto Rogue_QuickSaveVersionUpdateMessage_1


Rogue_Debug_SetWeather::
# 142 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 144 "data/scripts/Rogue/Rogue_Manager.pory"
	begindynamicmultichoice 24
# 145 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_0, WEATHER_NONE
# 146 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_1, WEATHER_SUNNY
# 147 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_2, WEATHER_DROUGHT
# 148 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_3, WEATHER_RAIN
# 149 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_4, WEATHER_RAIN_THUNDERSTORM
# 150 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_5, WEATHER_DOWNPOUR
# 151 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_6, WEATHER_SNOW
# 152 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_7, WEATHER_SANDSTORM
# 153 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_8, WEATHER_PSYCHIC_FOG
# 154 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_9, WEATHER_MISTY_FOG
# 155 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_10, WEATHER_LEAVES
# 157 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_11, WEATHER_SUNNY_CLOUDS
# 158 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_12, WEATHER_VOLCANIC_ASH
# 159 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_13, WEATHER_UNDERWATER
# 160 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_14, WEATHER_UNDERWATER_BUBBLES
# 161 "data/scripts/Rogue/Rogue_Manager.pory"
	appenddynamicmultichoice Rogue_Debug_SetWeather_Text_15, WEATHER_SHADE
# 163 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Debug_SetWeather_Text_16
# 164 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 165 "data/scripts/Rogue/Rogue_Manager.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 167 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Rogue_Debug_SetWeather_2
Rogue_Debug_SetWeather_1:
# 179 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Debug_SetWeather_2:
# 169 "data/scripts/Rogue/Rogue_Manager.pory"
	setweather VAR_RESULT
# 170 "data/scripts/Rogue/Rogue_Manager.pory"
	doweather
# 171 "data/scripts/Rogue/Rogue_Manager.pory"
	setweather VAR_RESULT
# 172 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ROGUE_DESIRED_WEATHER, WEATHER_NONE
	goto_if_ne Rogue_Debug_SetWeather_4
	goto Rogue_Debug_SetWeather_1

Rogue_Debug_SetWeather_4:
# 174 "data/scripts/Rogue/Rogue_Manager.pory"
	setweather VAR_RESULT
# 175 "data/scripts/Rogue/Rogue_Manager.pory"
	doweather
	goto Rogue_Debug_SetWeather_1


Rogue_Debug_ChangeOutfit::
# 184 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_Interior_Home_ChangeClothes
	return


Rogue_Debug_RandomTradeTeam::
# 189 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 190 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 255
# 191 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 192 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptHideFollower
# 193 "data/scripts/Rogue/Rogue_Manager.pory"
	playfanfare MUS_MOVE_DELETED
# 194 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_RandomisePartyMon
# 195 "data/scripts/Rogue/Rogue_Manager.pory"
	waitfanfare
# 196 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_FROM_BLACK
# 197 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptShowFollower
# 198 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_NewGameVersionUpdate::
# 204 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 206 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_QuickSaveVersionUpdateMessage
# 208 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return


Rogue_QuickSaveVersionUpdate::
# 213 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 215 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 216 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_QuickSaveVersionUpdateMessage
# 217 "data/scripts/Rogue/Rogue_Manager.pory"
	warp MAP_ROGUE_AREA_TOWN_SQUARE, 10
# 219 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_ForceNicknameMon::
# 224 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 225 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 0
# 226 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_NameReceivedPartyMon
# 227 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_AskNicknameMon::
# 232 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 234 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_SWAP_SPECIES
# 235 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_AskNicknameMon_Text_0, MSGBOX_YESNO
# 237 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_AskNicknameMon_2
Rogue_AskNicknameMon_1:
# 243 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_AskNicknameMon_2:
# 239 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 0
# 240 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Rogue_AskNicknameMon_1


Rogue_RetireFromRun::
# 248 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 249 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_RetireFromRun_Text_0, MSGBOX_YESNO
# 251 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_RetireFromRun_2
Rogue_RetireFromRun_1:
# 256 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return

Rogue_RetireFromRun_2:
# 253 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ReturnToHub
	goto Rogue_RetireFromRun_1


Rogue_ReturnToHub::
# 261 "data/scripts/Rogue/Rogue_Manager.pory"
	warprespawn
# 262 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
	return


Rogue_InteractWithQuestBoard::
# 268 "data/scripts/Rogue/Rogue_Manager.pory"
	lockall
# 270 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_COLLECT_QUEST_LOG
	goto_if_le Rogue_InteractWithQuestBoard_2
# 276 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 277 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Rogue_InteractWithQuestBoard_5
# 283 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoard_Text_1
Rogue_InteractWithQuestBoard_1:
# 287 "data/scripts/Rogue/Rogue_Manager.pory"
	releaseall
	return

Rogue_InteractWithQuestBoard_2:
# 272 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoard_Text_0
	goto Rogue_InteractWithQuestBoard_1

Rogue_InteractWithQuestBoard_5:
# 279 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_InteractWithQuestBoardInternal
	goto Rogue_InteractWithQuestBoard_1


Rogue_InteractWithQuestBoardInternal::
# 292 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_HasPendingQuestRewards
# 294 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_InteractWithQuestBoardInternal_1
# 347 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_4
	return

Rogue_InteractWithQuestBoardInternal_1:
# 296 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_0
# 301 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 0
# 302 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, 1
Rogue_InteractWithQuestBoardInternal_5:
# 304 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_InteractWithQuestBoardInternal_6
# 321 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_Common_DisplaySkippablePopups
# 326 "data/scripts/Rogue/Rogue_Manager.pory"
	waitfanfare
# 327 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 329 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_HasAnyNewQuests
# 330 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_InteractWithQuestBoardInternal_8
# 336 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 1
	goto_if_eq Rogue_InteractWithQuestBoardInternal_9
# 342 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_4
	return

Rogue_InteractWithQuestBoardInternal_6:
# 306 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_QuestCollectNextReward
# 308 "data/scripts/Rogue/Rogue_Manager.pory"
	switch VAR_RESULT
# 313 "data/scripts/Rogue/Rogue_Manager.pory"
	case 1, Rogue_InteractWithQuestBoardInternal_14
# 316 "data/scripts/Rogue/Rogue_Manager.pory"
	case 2, Rogue_InteractWithQuestBoardInternal_15
	goto Rogue_InteractWithQuestBoardInternal_5

Rogue_InteractWithQuestBoardInternal_8:
# 332 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_2
# 333 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_ShowNewQuests
# 334 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
	return

Rogue_InteractWithQuestBoardInternal_9:
# 338 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_3
	return

Rogue_InteractWithQuestBoardInternal_14:
# 314 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 1
	goto Rogue_InteractWithQuestBoardInternal_5

Rogue_InteractWithQuestBoardInternal_15:
# 317 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithQuestBoardInternal_Text_1
	goto Rogue_InteractWithQuestBoardInternal_5


Rogue_InteractWithPC::
# 353 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Rogue_InteractWithPC_1
# 369 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 370 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithPC_Text_1
# 371 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_InteractWithPC_1:
# 355 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 356 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Rogue_InteractWithPC_4
# 362 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 363 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_InteractWithPC_Text_0
# 364 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_InteractWithPC_4:
# 358 "data/scripts/Rogue/Rogue_Manager.pory"
	goto EventScript_PC
	return


Rogue_EventScript_ItemUseHealingFlask::
# 377 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 379 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_RUN_ACTIVE, Rogue_EventScript_ItemUseHealingFlask_2
# 411 "data/scripts/Rogue/Rogue_Manager.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_FLASK_HEALS_MAX
# 412 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ItemUseHealingFlask_Text_2, MSGBOX_DEFAULT
Rogue_EventScript_ItemUseHealingFlask_1:
# 415 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_EventScript_ItemUseHealingFlask_2:
# 381 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8004, VAR_ROGUE_FLASK_HEALS_MAX
# 382 "data/scripts/Rogue/Rogue_Manager.pory"
	subvar VAR_0x8004, VAR_ROGUE_FLASK_HEALS_USED
# 384 "data/scripts/Rogue/Rogue_Manager.pory"
	buffernumberstring STR_VAR_1, VAR_0x8004
# 386 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ROGUE_FLASK_HEALS_USED, VAR_ROGUE_FLASK_HEALS_MAX
	goto_if_lt Rogue_EventScript_ItemUseHealingFlask_5
# 406 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ItemUseHealingFlask_Text_1, MSGBOX_DEFAULT
	goto Rogue_EventScript_ItemUseHealingFlask_1

Rogue_EventScript_ItemUseHealingFlask_5:
# 388 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ItemUseHealingFlask_Text_0, MSGBOX_YESNO
# 390 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_ItemUseHealingFlask_8
	goto Rogue_EventScript_ItemUseHealingFlask_1

Rogue_EventScript_ItemUseHealingFlask_8:
# 394 "data/scripts/Rogue/Rogue_Manager.pory"
	addvar VAR_ROGUE_FLASK_HEALS_USED, 1
# 395 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 397 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8004, VAR_ROGUE_FLASK_HEALS_MAX
# 398 "data/scripts/Rogue/Rogue_Manager.pory"
	subvar VAR_0x8004, VAR_ROGUE_FLASK_HEALS_USED
# 400 "data/scripts/Rogue/Rogue_Manager.pory"
	buffernumberstring STR_VAR_1, VAR_0x8004
# 401 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ItemUseHealingFlask_Text_1, MSGBOX_DEFAULT
	goto Rogue_EventScript_ItemUseHealingFlask_1


Rogue_EventScript_ScatterPokeblockItem::
# 420 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 421 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_ROGUE_ACTIVE_POKEBLOCK, VAR_ITEM_ID
# 423 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_IsNearHoneyTree
# 425 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_ScatterPokeblockItem_1
# 462 "data/scripts/Rogue/Rogue_Manager.pory"
	removeitem VAR_ITEM_ID
# 464 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_REPEL
# 465 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_ScatterPokeblockItem
# 466 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 468 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_ScatterPokeblockItem_9
# 474 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ScatterPokeblockItem_Text_4
	return

Rogue_EventScript_ScatterPokeblockItem_1:
# 427 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_TryScatterPokeblockNearHoneyTree
# 429 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rogue_EventScript_ScatterPokeblockItem_4
# 433 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_EventScript_ScatterPokeblockItem_5
# 457 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ScatterPokeblockItem_Text_2
	return

Rogue_EventScript_ScatterPokeblockItem_4:
# 431 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ScatterPokeblockItem_Text_0
	return

Rogue_EventScript_ScatterPokeblockItem_5:
# 437 "data/scripts/Rogue/Rogue_Manager.pory"
	removeitem VAR_ITEM_ID
# 438 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_REPEL
# 439 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 441 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ScatterPokeblockItem_Text_1
	return

Rogue_EventScript_ScatterPokeblockItem_9:
# 470 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_ScatterPokeblockItem_Text_3
	return


Rogue_EventScript_UsePokeblockItem::
# 481 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 482 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_EventScript_ScatterPokeblockItem
# 483 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_EventScript_UseDayCarePhoneItem::
# 488 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 490 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_unset FLAG_ROGUE_RUN_ACTIVE, Rogue_EventScript_UseDayCarePhoneItem_2
Rogue_EventScript_UseDayCarePhoneItem_1:
# 496 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_DAYCARE_PHONE_CHARGED, Rogue_EventScript_UseDayCarePhoneItem_5
# 534 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_Text_4
Rogue_EventScript_UseDayCarePhoneItem_4:
# 537 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_EventScript_UseDayCarePhoneItem_2:
# 493 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_ROGUE_DAYCARE_PHONE_CHARGED
	goto Rogue_EventScript_UseDayCarePhoneItem_1

Rogue_EventScript_UseDayCarePhoneItem_5:
# 498 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_POKENAV_CALL
# 499 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_EventScript_UseDayCarePhoneItem_Text_0
# 500 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 501 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 502 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 505 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_unset FLAG_ROGUE_RUN_ACTIVE, Rogue_EventScript_UseDayCarePhoneItem_9
# 511 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_Text_2
Rogue_EventScript_UseDayCarePhoneItem_8:
# 514 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_EventScript_UseDayCarePhoneItem_Text_3
# 515 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 517 "data/scripts/Rogue/Rogue_Manager.pory"
	multichoice 1, 1, MULTI_ROGUE_DAYCARE, NO
# 519 "data/scripts/Rogue/Rogue_Manager.pory"
	switch VAR_RESULT
# 521 "data/scripts/Rogue/Rogue_Manager.pory"
	case MULTI_B_PRESSED, Rogue_EventScript_UseDayCarePhoneItem_14
# 525 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 526 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon
Rogue_EventScript_UseDayCarePhoneItem_12:
# 529 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_POKENAV_HANG_UP
# 530 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
	goto Rogue_EventScript_UseDayCarePhoneItem_4

Rogue_EventScript_UseDayCarePhoneItem_9:
# 507 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_Text_1
	goto Rogue_EventScript_UseDayCarePhoneItem_8

Rogue_EventScript_UseDayCarePhoneItem_14:
# 522 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, NO
	goto Rogue_EventScript_UseDayCarePhoneItem_12


Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon::
# 542 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_IsDaycareSlotEmpty
# 543 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_1
# 585 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
# 586 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_1, Rogue_CalcMaxPartySize
# 588 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_TEMP_0, VAR_TEMP_1
	goto_if_ge Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_7
# 621 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_4, MSGBOX_YESNO
# 623 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_14
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_1:
# 545 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
# 547 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_4
# 553 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_1, MSGBOX_DEFAULT
# 554 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 555 "data/scripts/Rogue/Rogue_Manager.pory"
	special ChooseSendDaycareMon
# 556 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 558 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_10
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_4:
# 549 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_0, MSGBOX_DEFAULT
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_7:
# 590 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_3
# 591 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 592 "data/scripts/Rogue/Rogue_Manager.pory"
	special ChooseSendDaycareMon
# 593 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 595 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_12
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_10:
# 560 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_17
Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_16:
# 565 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 567 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_23
Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_22:
# 571 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_2, MSGBOX_DEFAULT
# 573 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 574 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_WARP_OUT
# 575 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 577 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 578 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_FROM_BLACK
# 579 "data/scripts/Rogue/Rogue_Manager.pory"
	clearflag FLAG_ROGUE_DAYCARE_PHONE_CHARGED
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_12:
# 597 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_20
Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_19:
# 602 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 604 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_26
Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_25:
# 608 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_2, MSGBOX_DEFAULT
# 610 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 611 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_WARP_OUT
# 612 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 614 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 615 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_FROM_BLACK
# 616 "data/scripts/Rogue/Rogue_Manager.pory"
	clearflag FLAG_ROGUE_DAYCARE_PHONE_CHARGED
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_14:
# 625 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 5
# 626 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 627 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_5, MSGBOX_DEFAULT
# 629 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 630 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_WARP_OUT
# 631 "data/scripts/Rogue/Rogue_Manager.pory"
	waitse
# 633 "data/scripts/Rogue/Rogue_Manager.pory"
	closemessage
# 634 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_FROM_BLACK
# 635 "data/scripts/Rogue/Rogue_Manager.pory"
	clearflag FLAG_ROGUE_DAYCARE_PHONE_CHARGED
	return

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_17:
# 562 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptHideFollower
	goto Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_16

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_20:
# 599 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptHideFollower
	goto Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_19

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_23:
# 569 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptShowFollower
	goto Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_22

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_26:
# 606 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptShowFollower
	goto Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_25


Rogue_EventScript_UseGoldenSeedItem::
# 643 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 645 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_RUN_ACTIVE, Rogue_EventScript_UseGoldenSeedItem_2
# 651 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseGoldenSeedItem_Text_0
Rogue_EventScript_UseGoldenSeedItem_1:
# 654 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_EventScript_UseGoldenSeedItem_2:
	goto Rogue_EventScript_UseGoldenSeedItem_1


Rogue_EventScript_AttemptSnagBattle::
# 659 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 661 "data/scripts/Rogue/Rogue_Manager.pory"
	clearflag FLAG_ROGUE_IN_SNAG_BATTLE
# 662 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_AttemptSnagBattle_Text_0, MSGBOX_YESNO
# 664 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_EventScript_AttemptSnagBattle_2
Rogue_EventScript_AttemptSnagBattle_1:
# 677 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_EventScript_AttemptSnagBattle_2:
# 666 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_ROGUE_IN_SNAG_BATTLE
# 668 "data/scripts/Rogue/Rogue_Manager.pory"
	playmoncry VAR_0x800B, CRY_MODE_ENCOUNTER
# 669 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmoncry
# 671 "data/scripts/Rogue/Rogue_Manager.pory"
	seteventmon VAR_0x800B, 1, ITEMS_COUNT
# 673 "data/scripts/Rogue/Rogue_Manager.pory"
	special BattleSetup_StartLegendaryBattle
# 674 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
	goto Rogue_EventScript_AttemptSnagBattle_1


Rogue_EventScript_AttemptPostGymHeal::
# 683 "data/scripts/Rogue/Rogue_Manager.pory"
	checkitem ITEM_HEALING_FLASK
# 684 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_EventScript_AttemptPostGymHeal_1
	return

Rogue_EventScript_AttemptPostGymHeal_1:
# 686 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_HealAlivePlayerParty
	return


Rogue_EventScript_AttemptPostRivalHeal::
# 693 "data/scripts/Rogue/Rogue_Manager.pory"
	checkitem ITEM_HEALING_FLASK
# 694 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_EventScript_AttemptPostRivalHeal_1
	return

Rogue_EventScript_AttemptPostRivalHeal_1:
# 696 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_HealAlivePlayerParty
	return


Rogue_EventScript_AttemptTeamBossHeal::
# 703 "data/scripts/Rogue/Rogue_Manager.pory"
	checkitem ITEM_HEALING_FLASK
# 704 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_EventScript_AttemptTeamBossHeal_1
	return

Rogue_EventScript_AttemptTeamBossHeal_1:
# 706 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_HealAlivePlayerParty
	return


Rogue_EventScript_AttemptNurseHeal::
# 712 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 713 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_ROGUE_FLASK_HEALS_USED, 0
	return


Rogue_SetDesiredWeather::
# 718 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ROGUE_DESIRED_WEATHER, WEATHER_NONE
	goto_if_ne Rogue_SetDesiredWeather_1
	return

Rogue_SetDesiredWeather_1:
# 720 "data/scripts/Rogue/Rogue_Manager.pory"
	setweather VAR_ROGUE_DESIRED_WEATHER
# 721 "data/scripts/Rogue/Rogue_Manager.pory"
	doweather
	return


Rogue_ClearWeather::
# 727 "data/scripts/Rogue/Rogue_Manager.pory"
	setweather WEATHER_NONE
# 728 "data/scripts/Rogue/Rogue_Manager.pory"
	doweather
	return


Rogue_Common_TurnPlayerNorth::
# 735 "data/scripts/Rogue/Rogue_Manager.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


Rogue_Common_TurnPlayerSouth::
# 740 "data/scripts/Rogue/Rogue_Manager.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	end


Rogue_Common_TurnPlayerEast::
# 745 "data/scripts/Rogue/Rogue_Manager.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end


Rogue_Common_TurnPlayerWest::
# 750 "data/scripts/Rogue/Rogue_Manager.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	end


Rogue_Shop_GetRandomIndex::
# 759 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq Rogue_Shop_GetRandomIndex_1
# 767 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_RESULT, VAR_TEMP_F
	return

Rogue_Shop_GetRandomIndex_1:
# 761 "data/scripts/Rogue/Rogue_Manager.pory"
	random 5
# 762 "data/scripts/Rogue/Rogue_Manager.pory"
	addvar VAR_RESULT, 1
# 763 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
	return


Rogue_Shop_Balls::
# 773 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 774 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 775 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Balls_Text_0
# 776 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 778 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_BALLS
# 780 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 781 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_Medicine::
# 786 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 787 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 788 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Medicine_Text_0
# 789 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 791 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_GENERAL
# 793 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 794 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_TMs::
# 799 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 800 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 801 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_TMs_Text_0
# 802 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 804 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_TMS
# 806 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 807 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_BattleEnhancers::
# 812 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 813 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 814 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_BattleEnhancers_Text_0
# 815 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 817 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_BATTLE_ENHANCERS
# 819 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 820 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_HeldItems::
# 825 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 826 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 827 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_HeldItems_Text_0
# 828 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 830 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_HELD_ITEMS
# 832 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 833 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_RareHeldItems::
# 838 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 839 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 840 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_RareHeldItems_Text_0
# 841 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 843 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_RARE_HELD_ITEMS
# 845 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 846 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_RarePlates::
# 851 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 852 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 853 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_RarePlates_Text_0
# 854 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 856 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_QUEST_REWARDS
# 858 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Balls_Text_1
# 859 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_Curses::
# 864 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 865 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 867 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Curses_Text_0, MSGBOX_DEFAULT
# 869 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Curses_Text_1, MSGBOX_YESNO
# 870 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Shop_Curses_2
Rogue_Shop_Curses_1:
# 876 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Curses_Text_2
# 877 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 879 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_CURSES
# 881 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Curses_Text_3, MSGBOX_DEFAULT
# 883 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Shop_Curses_2:
# 872 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_SHOP
# 873 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_ClearCurses
	goto Rogue_Shop_Curses_1


Rogue_Shop_Charms::
# 888 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 889 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 891 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Charms_Text_0, MSGBOX_DEFAULT
# 893 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Charms_Text_1, MSGBOX_YESNO
# 894 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Shop_Charms_2
Rogue_Shop_Charms_1:
# 900 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Charms_Text_2
# 901 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 903 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_CHARMS
# 905 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Charms_Text_3, MSGBOX_DEFAULT
# 907 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Shop_Charms_2:
# 896 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_SHOP
# 897 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_ClearCharms
	goto Rogue_Shop_Charms_1


Rogue_Shop_Berries::
# 912 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 913 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 914 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Berries_Text_0
# 915 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 917 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_BERRIES
# 918 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 920 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Berries_Text_1
# 921 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Shop_Treats::
# 926 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 927 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 928 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_Shop_Treats_Text_0
# 929 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 931 "data/scripts/Rogue/Rogue_Manager.pory"
	rogue_dynamicpokemart ROGUE_SHOP_TREATS
# 933 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Shop_Berries_Text_1
# 934 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


RogueSafari_Sign_South::
# 939 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, RogueSafari_Sign_South_1
# 945 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_South_Text_1, MSGBOX_SIGN
	return

RogueSafari_Sign_South_1:
# 941 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_South_Text_0, MSGBOX_SIGN
	return


RogueSafari_Sign_SouthWest::
# 951 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_SouthWest_Text_0, MSGBOX_SIGN
	return


RogueSafari_Sign_NorthWest::
# 956 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_NorthWest_Text_0, MSGBOX_SIGN
	return


RogueSafari_Sign_North::
# 961 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_North_Text_0, MSGBOX_SIGN
	return


RogueSafari_Sign_NorthEast::
# 966 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_NorthEast_Text_0, MSGBOX_SIGN
	return


RogueSafari_Sign_SouthEast::
# 971 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox RogueSafari_Sign_SouthEast_Text_0, MSGBOX_SIGN
	return


Rogue_Tutor_MoveRelearn::
# 979 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 980 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 981 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_MoveRelearn_Text_0, MSGBOX_DEFAULT
# 982 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Tutor_EggMoveLearn::
# 987 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 988 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 989 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_EggMoveLearn_Text_0, MSGBOX_DEFAULT
# 990 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Tutor_TutorMoveLearn::
# 995 "data/scripts/Rogue/Rogue_Manager.pory"
	special TeachMoveSetContextTutorMove
# 996 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 997 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 998 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_TutorMoveLearn_Text_0, MSGBOX_DEFAULT
# 1000 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 0
# 1001 "data/scripts/Rogue/Rogue_Manager.pory"
	special TeachMoveFromContext
# 1002 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 1004 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Tutor_MoveDelete::
# 1009 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1010 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1011 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_MoveDelete_Text_0, MSGBOX_YESNO
# 1013 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Tutor_MoveDelete_2
Rogue_Tutor_MoveDelete_1:
# 1018 "data/scripts/Rogue/Rogue_Manager.pory"
	special ChoosePartyMon
# 1019 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 1020 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Tutor_MoveDelete_5
Rogue_Tutor_MoveDelete_4:
# 1025 "data/scripts/Rogue/Rogue_Manager.pory"
	special IsSelectedMonEgg
# 1026 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Tutor_MoveDelete_8
Rogue_Tutor_MoveDelete_7:
# 1031 "data/scripts/Rogue/Rogue_Manager.pory"
	special GetNumMovesSelectedMonHas
# 1032 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, 1
	goto_if_le Rogue_Tutor_MoveDelete_11
Rogue_Tutor_MoveDelete_10:
# 1037 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 1038 "data/scripts/Rogue/Rogue_Manager.pory"
	special MoveDeleterChooseMoveToForget
# 1039 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_FROM_BLACK
# 1041 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq Rogue_Tutor_MoveDelete_14
Rogue_Tutor_MoveDelete_13:
# 1046 "data/scripts/Rogue/Rogue_Manager.pory"
	special MoveDeleterForgetMove
# 1047 "data/scripts/Rogue/Rogue_Manager.pory"
	playfanfare MUS_MOVE_DELETED
# 1048 "data/scripts/Rogue/Rogue_Manager.pory"
	waitfanfare
# 1050 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Tutor_MoveDelete_2:
# 1015 "data/scripts/Rogue/Rogue_Manager.pory"
	goto Rogue_Tutor_MoveDeleteCancel
	goto Rogue_Tutor_MoveDelete_1

Rogue_Tutor_MoveDelete_5:
# 1022 "data/scripts/Rogue/Rogue_Manager.pory"
	goto Rogue_Tutor_MoveDeleteCancel
	goto Rogue_Tutor_MoveDelete_4

Rogue_Tutor_MoveDelete_8:
# 1028 "data/scripts/Rogue/Rogue_Manager.pory"
	goto Rogue_Tutor_MoveDeleteEgg
	goto Rogue_Tutor_MoveDelete_7

Rogue_Tutor_MoveDelete_11:
# 1034 "data/scripts/Rogue/Rogue_Manager.pory"
	goto Rogue_Tutor_MoveDeleteNoMoves
	goto Rogue_Tutor_MoveDelete_10

Rogue_Tutor_MoveDelete_14:
# 1043 "data/scripts/Rogue/Rogue_Manager.pory"
	goto Rogue_Tutor_MoveDeleteCancel
	goto Rogue_Tutor_MoveDelete_13


Rogue_SpeakDaycareLady::
# 1055 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1056 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1057 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_Text_0, MSGBOX_DEFAULT
# 1059 "data/scripts/Rogue/Rogue_Manager.pory"
	message Rogue_EventScript_UseDayCarePhoneItem_Text_3
# 1060 "data/scripts/Rogue/Rogue_Manager.pory"
	waitmessage
# 1062 "data/scripts/Rogue/Rogue_Manager.pory"
	multichoice 1, 1, MULTI_ROGUE_DAYCARE, NO
# 1064 "data/scripts/Rogue/Rogue_Manager.pory"
	switch VAR_RESULT
# 1066 "data/scripts/Rogue/Rogue_Manager.pory"
	case MULTI_B_PRESSED, Rogue_SpeakDaycareLady_3
# 1070 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1071 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_SpeakDaycareLady_TrySwapMon
Rogue_SpeakDaycareLady_1:
# 1074 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_SpeakDaycareLady_3:
# 1067 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, NO
	goto Rogue_SpeakDaycareLady_1


Rogue_SpeakDaycareLady_TrySwapMon::
# 1079 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_IsDaycareSlotEmpty
# 1080 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_1
# 1116 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, NO
# 1118 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
# 1119 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_1, Rogue_CalcMaxPartySize
# 1121 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_TEMP_0, VAR_TEMP_1
	goto_if_ge Rogue_SpeakDaycareLady_TrySwapMon_7
# 1147 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_4, MSGBOX_YESNO
# 1149 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_14
	return

Rogue_SpeakDaycareLady_TrySwapMon_1:
# 1082 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, NO
# 1083 "data/scripts/Rogue/Rogue_Manager.pory"
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
# 1085 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_4
# 1091 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_TrySwapMon_Text_1, MSGBOX_DEFAULT
# 1092 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 1093 "data/scripts/Rogue/Rogue_Manager.pory"
	special ChooseSendDaycareMon
# 1094 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 1096 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_SpeakDaycareLady_TrySwapMon_10
	return

Rogue_SpeakDaycareLady_TrySwapMon_4:
# 1087 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_TrySwapMon_Text_0, MSGBOX_DEFAULT
	return

Rogue_SpeakDaycareLady_TrySwapMon_7:
# 1123 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_3
# 1124 "data/scripts/Rogue/Rogue_Manager.pory"
	fadescreen FADE_TO_BLACK
# 1125 "data/scripts/Rogue/Rogue_Manager.pory"
	special ChooseSendDaycareMon
# 1126 "data/scripts/Rogue/Rogue_Manager.pory"
	waitstate
# 1128 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_SpeakDaycareLady_TrySwapMon_12
	return

Rogue_SpeakDaycareLady_TrySwapMon_10:
# 1098 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_17
Rogue_SpeakDaycareLady_TrySwapMon_16:
# 1103 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 1105 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_23
Rogue_SpeakDaycareLady_TrySwapMon_22:
# 1109 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_TrySwapMon_Text_2, MSGBOX_DEFAULT
# 1110 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, YES
	return

Rogue_SpeakDaycareLady_TrySwapMon_12:
# 1130 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_20
Rogue_SpeakDaycareLady_TrySwapMon_19:
# 1135 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 1137 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rogue_SpeakDaycareLady_TrySwapMon_26
Rogue_SpeakDaycareLady_TrySwapMon_25:
# 1141 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_TrySwapMon_Text_2, MSGBOX_DEFAULT
# 1142 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, YES
	return

Rogue_SpeakDaycareLady_TrySwapMon_14:
# 1151 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8004, 5
# 1152 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_SwapDaycareMon
# 1153 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_SpeakDaycareLady_TrySwapMon_Text_3, MSGBOX_DEFAULT
	return

Rogue_SpeakDaycareLady_TrySwapMon_17:
# 1100 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptHideFollower
	goto Rogue_SpeakDaycareLady_TrySwapMon_16

Rogue_SpeakDaycareLady_TrySwapMon_20:
# 1132 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptHideFollower
	goto Rogue_SpeakDaycareLady_TrySwapMon_19

Rogue_SpeakDaycareLady_TrySwapMon_23:
# 1107 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptShowFollower
	goto Rogue_SpeakDaycareLady_TrySwapMon_22

Rogue_SpeakDaycareLady_TrySwapMon_26:
# 1139 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ScriptShowFollower
	goto Rogue_SpeakDaycareLady_TrySwapMon_25


Rogue_Tutor_MoveDeleteNoMoves::
# 1161 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_MoveDeleteNoMoves_Text_0, MSGBOX_DEFAULT
# 1162 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Tutor_MoveDeleteEgg::
# 1167 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_MoveDeleteEgg_Text_0, MSGBOX_DEFAULT
# 1168 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Tutor_MoveDeleteCancel::
# 1173 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Tutor_MoveDeleteCancel_Text_0, MSGBOX_DEFAULT
# 1174 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_BerryTree_CheckSoil::
# 1179 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_CanPlantBerries
# 1181 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_BerryTree_CheckSoil_2
Rogue_BerryTree_CheckSoil_1:
	return

Rogue_BerryTree_CheckSoil_2:
# 1183 "data/scripts/Rogue/Rogue_Manager.pory"
	goto BerryTree_EventScript_CheckSoil
	goto Rogue_BerryTree_CheckSoil_1


Rogue_BerryTree_WantToPlant::
# 1191 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_PLANTING
	goto_if_eq Rogue_BerryTree_WantToPlant_2
Rogue_BerryTree_WantToPlant_1:
# 1214 "data/scripts/Rogue/Rogue_Manager.pory"
	goto BerryTree_EventScript_WantToPlant
	end

Rogue_BerryTree_WantToPlant_2:
# 1193 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ITEM_ID, FIRST_BERRY_INDEX
	goto_if_ge Rogue_BerryTree_WantToPlant_6
Rogue_BerryTree_WantToPlant_4:
# 1211 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_NONE
	goto Rogue_BerryTree_WantToPlant_1

Rogue_BerryTree_WantToPlant_5:
# 1195 "data/scripts/Rogue/Rogue_Manager.pory"
	checkitem VAR_ITEM_ID
# 1196 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BerryTree_WantToPlant_9
	goto Rogue_BerryTree_WantToPlant_4

Rogue_BerryTree_WantToPlant_6:
# 1193 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_ITEM_ID, LAST_BERRY_INDEX
	goto_if_le Rogue_BerryTree_WantToPlant_5
	goto Rogue_BerryTree_WantToPlant_4

Rogue_BerryTree_WantToPlant_9:
# 1198 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 1199 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_BerryTree_WantToPlant_Text_0, MSGBOX_YESNO
# 1201 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BerryTree_WantToPlant_11
	goto Rogue_BerryTree_WantToPlant_4

Rogue_BerryTree_WantToPlant_11:
# 1203 "data/scripts/Rogue/Rogue_Manager.pory"
	removeitem VAR_ITEM_ID
# 1204 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_BerryTree_PlantBerry
# 1205 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	end


Rogue_BerryTree_PlantBerry::
# 1220 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_PLANTING
# 1222 "data/scripts/Rogue/Rogue_Manager.pory"
	goto BerryTree_EventScript_PlantBerry
	return


Rogue_BerryTree_PickedUpBerry::
	return


Rogue_Battle_PreBoss::
# 1239 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1240 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1242 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_CanOverLevel
# 1243 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_PreBoss_2
Rogue_Battle_PreBoss_1:
# 1248 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_TEMP_1A, Rogue_Battle_PreBoss_5
# 1254 "data/scripts/Rogue/Rogue_Manager.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_CURRENT_LEVEL_CAP
# 1255 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Battle_PreBoss_Text_1, MSGBOX_YESNO
# 1257 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_PreBoss_8
# 1264 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Battle_PreBoss_Text_2, MSGBOX_DEFAULT
Rogue_Battle_PreBoss_4:
# 1268 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Battle_PreBoss_2:
# 1245 "data/scripts/Rogue/Rogue_Manager.pory"
	clearflag FLAG_TEMP_1A
	goto Rogue_Battle_PreBoss_1

Rogue_Battle_PreBoss_5:
# 1250 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Battle_PreBoss_Text_0, MSGBOX_DEFAULT
	goto Rogue_Battle_PreBoss_4

Rogue_Battle_PreBoss_8:
# 1259 "data/scripts/Rogue/Rogue_Manager.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ROGUE_DYNAMIC, 0, gPlaceholder_Trainer_PostBattleTaunt
# 1260 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_TEMP_1A
	goto Rogue_Battle_PreBoss_4


Rogue_Heal_PreBoss::
# 1273 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1274 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1276 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_0, MSGBOX_DEFAULT
# 1278 "data/scripts/Rogue/Rogue_Manager.pory"
	goto_if_set FLAG_ROGUE_FREE_HEAL_USED, Rogue_Heal_PreBoss_2
# 1349 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_3, MSGBOX_DEFAULT
# 1350 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_4, MSGBOX_YESNO
# 1352 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Heal_PreBoss_19
Rogue_Heal_PreBoss_1:
# 1360 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Heal_PreBoss_6
# 1366 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_6, MSGBOX_DEFAULT
Rogue_Heal_PreBoss_5:
# 1369 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return

Rogue_Heal_PreBoss_2:
# 1280 "data/scripts/Rogue/Rogue_Manager.pory"
	showmoneybox 0, 0
# 1282 "data/scripts/Rogue/Rogue_Manager.pory"
	switch VAR_ROGUE_DIFFICULTY
# 1284 "data/scripts/Rogue/Rogue_Manager.pory"
	case 0, Rogue_Heal_PreBoss_11
# 1287 "data/scripts/Rogue/Rogue_Manager.pory"
	case 1, Rogue_Heal_PreBoss_12
# 1290 "data/scripts/Rogue/Rogue_Manager.pory"
	case 2, Rogue_Heal_PreBoss_13
# 1293 "data/scripts/Rogue/Rogue_Manager.pory"
	case 3, Rogue_Heal_PreBoss_14
# 1296 "data/scripts/Rogue/Rogue_Manager.pory"
	case 4, Rogue_Heal_PreBoss_15
# 1299 "data/scripts/Rogue/Rogue_Manager.pory"
	case 5, Rogue_Heal_PreBoss_16
# 1302 "data/scripts/Rogue/Rogue_Manager.pory"
	case 6, Rogue_Heal_PreBoss_17
# 1306 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 24000
# 1307 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 24000
Rogue_Heal_PreBoss_9:
# 1310 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Heal_PreBoss_22
# 1342 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_2, MSGBOX_DEFAULT
Rogue_Heal_PreBoss_21:
# 1345 "data/scripts/Rogue/Rogue_Manager.pory"
	hidemoneybox
	goto Rogue_Heal_PreBoss_1

Rogue_Heal_PreBoss_6:
# 1362 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_5, MSGBOX_DEFAULT
	goto Rogue_Heal_PreBoss_5

Rogue_Heal_PreBoss_11:
# 1285 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 1000
# 1286 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 1000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_12:
# 1288 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 2000
# 1289 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 2000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_13:
# 1291 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 4000
# 1292 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 4000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_14:
# 1294 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 8000
# 1295 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 8000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_15:
# 1297 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 12000
# 1298 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 12000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_16:
# 1300 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 16000
# 1301 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 16000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_17:
# 1303 "data/scripts/Rogue/Rogue_Manager.pory"
	checkconstantmoney 20000
# 1304 "data/scripts/Rogue/Rogue_Manager.pory"
	bufferconstantnumberstring STR_VAR_1, 20000
	goto Rogue_Heal_PreBoss_9

Rogue_Heal_PreBoss_19:
# 1354 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 1355 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_ROGUE_FREE_HEAL_USED
# 1356 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_OnHealWithNurse
	goto Rogue_Heal_PreBoss_1

Rogue_Heal_PreBoss_22:
# 1312 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox Rogue_Heal_PreBoss_Text_1, MSGBOX_YESNO
# 1313 "data/scripts/Rogue/Rogue_Manager.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Heal_PreBoss_25
	goto Rogue_Heal_PreBoss_21

Rogue_Heal_PreBoss_25:
# 1315 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_VEND
# 1316 "data/scripts/Rogue/Rogue_Manager.pory"
	switch VAR_ROGUE_DIFFICULTY
# 1318 "data/scripts/Rogue/Rogue_Manager.pory"
	case 0, Rogue_Heal_PreBoss_29
# 1320 "data/scripts/Rogue/Rogue_Manager.pory"
	case 1, Rogue_Heal_PreBoss_30
# 1322 "data/scripts/Rogue/Rogue_Manager.pory"
	case 2, Rogue_Heal_PreBoss_31
# 1324 "data/scripts/Rogue/Rogue_Manager.pory"
	case 3, Rogue_Heal_PreBoss_32
# 1326 "data/scripts/Rogue/Rogue_Manager.pory"
	case 4, Rogue_Heal_PreBoss_33
# 1328 "data/scripts/Rogue/Rogue_Manager.pory"
	case 5, Rogue_Heal_PreBoss_34
# 1330 "data/scripts/Rogue/Rogue_Manager.pory"
	case 6, Rogue_Heal_PreBoss_35
# 1333 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 24000
Rogue_Heal_PreBoss_27:
# 1336 "data/scripts/Rogue/Rogue_Manager.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 1337 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_OnHealWithNurse
	goto Rogue_Heal_PreBoss_21

Rogue_Heal_PreBoss_29:
# 1319 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 1000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_30:
# 1321 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 2000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_31:
# 1323 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 4000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_32:
# 1325 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 8000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_33:
# 1327 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 12000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_34:
# 1329 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 16000
	goto Rogue_Heal_PreBoss_27

Rogue_Heal_PreBoss_35:
# 1331 "data/scripts/Rogue/Rogue_Manager.pory"
	removeconstantmoney 20000
	goto Rogue_Heal_PreBoss_27


Rogue_IsGlitchModeGymLeadersActive::
# 1375 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_RESULT, NO
	return


Rogue_Battle_Trainer::
# 1382 "data/scripts/Rogue/Rogue_Manager.pory"
	trainerbattle_single TRAINER_ROGUE_DYNAMIC, gPlaceholder_Trainer_PreBattleTaunt, gPlaceholder_Trainer_PostBattleTaunt
# 1383 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PostBattleCloser, MSGBOX_AUTOCLOSE
	return


Rogue_Battle_Rival::
# 1388 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1389 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1391 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_PlayRivalTrainerEncounterBGM
# 1393 "data/scripts/Rogue/Rogue_Manager.pory"
	buffertrainername STR_VAR_1, TRAINER_ROGUE_DYNAMIC
# 1396 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PreBattleTaunt
# 1397 "data/scripts/Rogue/Rogue_Manager.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ROGUE_DYNAMIC, 0, gPlaceholder_Trainer_PostBattleTaunt
# 1399 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_PlayRivalTrainerEncounterBGM
# 1400 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PostBattleCloser
# 1402 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_EXIT
# 1403 "data/scripts/Rogue/Rogue_Manager.pory"
	removeobject VAR_LAST_TALKED
# 1404 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_ROGUE_RIVAL_DISABLED
# 1406 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_EventScript_AttemptPostRivalHeal
# 1407 "data/scripts/Rogue/Rogue_Manager.pory"
	fadedefaultbgm
# 1409 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Battle_TeamBoss::
# 1414 "data/scripts/Rogue/Rogue_Manager.pory"
	lock
# 1415 "data/scripts/Rogue/Rogue_Manager.pory"
	faceplayer
# 1417 "data/scripts/Rogue/Rogue_Manager.pory"
	buffertrainername STR_VAR_1, TRAINER_ROGUE_DYNAMIC
# 1418 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PreBattleOpenning
# 1420 "data/scripts/Rogue/Rogue_Manager.pory"
	special Rogue_PlayTeamBossTrainerEncounterBGM
# 1421 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_SetDesiredWeather
# 1423 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PreBattleTaunt
# 1424 "data/scripts/Rogue/Rogue_Manager.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ROGUE_DYNAMIC, 0, gPlaceholder_Trainer_PostBattleTaunt
# 1426 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_ClearWeather
# 1427 "data/scripts/Rogue/Rogue_Manager.pory"
	msgbox gPlaceholder_Trainer_PostBattleCloser
# 1429 "data/scripts/Rogue/Rogue_Manager.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
# 1431 "data/scripts/Rogue/Rogue_Manager.pory"
	playse SE_EXIT
# 1432 "data/scripts/Rogue/Rogue_Manager.pory"
	removeobject VAR_LAST_TALKED
# 1433 "data/scripts/Rogue/Rogue_Manager.pory"
	setflag FLAG_ROGUE_TEAM_BOSS_DISABLED
# 1435 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_EventScript_AttemptTeamBossHeal
# 1436 "data/scripts/Rogue/Rogue_Manager.pory"
	fadedefaultbgm
# 1438 "data/scripts/Rogue/Rogue_Manager.pory"
	release
	return


Rogue_Give_RareCandy::
# 1446 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8001, ITEM_RARE_CANDY
# 1447 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_MasterBall::
# 1452 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8001, ITEM_MASTER_BALL
# 1453 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item0::
# 1458 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 0
# 1459 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM0
# 1460 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item1::
# 1465 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 1
# 1466 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM1
# 1467 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item2::
# 1472 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 2
# 1473 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM2
# 1474 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item3::
# 1479 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 3
# 1480 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM3
# 1481 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item4::
# 1486 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 4
# 1487 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM4
# 1488 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item5::
# 1493 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 5
# 1494 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM5
# 1495 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item6::
# 1500 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 6
# 1501 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM6
# 1502 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item7::
# 1507 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 7
# 1508 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM7
# 1509 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item8::
# 1514 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 8
# 1515 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM8
# 1516 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item9::
# 1521 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 9
# 1522 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM9
# 1523 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item10::
# 1528 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 10
# 1529 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM10
# 1530 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item11::
# 1535 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 11
# 1536 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM11
# 1537 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item12::
# 1542 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 12
# 1543 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM12
# 1544 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item13::
# 1549 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 13
# 1550 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM13
# 1551 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item14::
# 1556 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 14
# 1557 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM14
# 1558 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item15::
# 1563 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 15
# 1564 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM15
# 1565 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item16::
# 1570 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 16
# 1571 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM16
# 1572 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item17::
# 1577 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 17
# 1578 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM17
# 1579 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Give_Item18::
# 1584 "data/scripts/Rogue/Rogue_Manager.pory"
	setvar VAR_0x8000, 18
# 1585 "data/scripts/Rogue/Rogue_Manager.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM18
# 1586 "data/scripts/Rogue/Rogue_Manager.pory"
	call Rogue_GiveItem_Internal
	return


Rogue_Common_WaitForRogueAssistant_Text_0:
# 54 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Please connect Rogue Assistant… …\n"
	.string "{B_BUTTON} Cancel$"

Rogue_QuickSaveRun_Text_0:
# 72 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{COLOR RED}WARNING!\n"
	.string "{COLOR DARK_GRAY}You can only reload Quicksaves once.\p"
	.string "When the game next reloads, this\n"
	.string "Quicksave will be wiped.$"

Rogue_QuickSaveRun_Text_1:
# 77 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{COLOR RED}MULTIPLAYER WARNING!\n"
	.string "{COLOR DARK_GRAY}There is currently no method avaliable\l"
	.string "to rejoin a Multiplayer Adventure\l"
	.string "outside of {POKEMON_HUB}.\p"
	.string "If you Quicksave now, you will have to\n"
	.string "play the remainder of this Adventure\l"
	.string "single player.$"

Rogue_QuickSaveLoad_Text_0:
# 99 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Adventure has been reloaded.\p"
	.string "Clearing temporary save entry…$"

Rogue_QuickSaveLoad_Text_1:
# 105 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "This save has already been reloaded.\p"
	.string "Retiring from Adventure…$"

Rogue_QuickSaveVersionWarning_Text_0:
# 119 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{COLOR RED}WARNING!\n"
	.string "{COLOR DARK_GRAY}Invalid Save Location Detected!\p"
	.string "When upgrading to a new patch, make\n"
	.string "sure to save in {POKEMON_HUB}, outside\l"
	.string "of an Adventure.\p"
	.string "Please revert to the older patch and\n"
	.string "re-save in a valid location.$"

Rogue_QuickSaveVersionUpdateMessage_Text_0:
# 133 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "WARNING!\p"
	.string "This save game was detected to have\n"
	.string "come from a pre-release patch version.\p"
	.string "It is not recommended to continue\n"
	.string "using this save, as you may lock\l"
	.string "yourself out of new content.\p"
	.string "Please restore a backup if possible.$"

Rogue_QuickSaveVersionUpdateMessage_Text_1:
# 136 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to...\n"
	.string "Emerald Rogue {STR_VAR_2}!\p"
	.string "{STR_VAR_1} {STR_VAR_3}\p"
	.string "Always remember to download from the\n"
	.string "official sources:\p"
	.string "PokeCommunity (posted by Pokabbie) or\n"
	.string "Discord\p"
	.string "For guides, bug reporting and previews,\n"
	.string "feel free to join the official Discord:\p"
	.string "https://rogue.discord.pokabbie.com$"

Rogue_QuickSaveVersionUpdateMessage_Text_2:
# 137 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I hope you enjoy Emerald Rogue!$"

Rogue_Debug_SetWeather_Text_0:
# 145 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "None$"

Rogue_Debug_SetWeather_Text_1:
# 146 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Sunny$"

Rogue_Debug_SetWeather_Text_2:
# 147 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Drought$"

Rogue_Debug_SetWeather_Text_3:
# 148 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Rain$"

Rogue_Debug_SetWeather_Text_4:
# 149 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Rain Thunder$"

Rogue_Debug_SetWeather_Text_5:
# 150 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Downpour$"

Rogue_Debug_SetWeather_Text_6:
# 151 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Snow$"

Rogue_Debug_SetWeather_Text_7:
# 152 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Sandstorm$"

Rogue_Debug_SetWeather_Text_8:
# 153 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Psychic Fog$"

Rogue_Debug_SetWeather_Text_9:
# 154 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Misty Fog$"

Rogue_Debug_SetWeather_Text_10:
# 155 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Leaves$"

Rogue_Debug_SetWeather_Text_11:
# 157 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Sunny Clouds$"

Rogue_Debug_SetWeather_Text_12:
# 158 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Volcanic Ash$"

Rogue_Debug_SetWeather_Text_13:
# 159 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Under Water$"

Rogue_Debug_SetWeather_Text_14:
# 160 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Under Water Bubbles$"

Rogue_Debug_SetWeather_Text_15:
# 161 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Shade$"

Rogue_Debug_SetWeather_Text_16:
# 163 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which Weather?$"

Rogue_AskNicknameMon_Text_0:
# 235 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Give {STR_VAR_1} a nickname?$"

Rogue_RetireFromRun_Text_0:
# 249 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Are you sure you'd like to abandon the\n"
	.string "Adventure and return to\l"
	.string "{POKEMON_HUB}?$"

Rogue_InteractWithQuestBoard_Text_0:
# 272 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's a board filled with all sort of\n"
	.string "requests!$"

Rogue_InteractWithQuestBoard_Text_1:
# 283 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's the Quest Board!\p"
	.string "Shame you can't read the postings from\n"
	.string "this side…$"

Rogue_InteractWithQuestBoardInternal_Text_0:
# 296 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "There's Quest rewards to collect!$"

Rogue_InteractWithQuestBoardInternal_Text_1:
# 317 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Unable to collect the remaining\n"
	.string "rewards.$"

Rogue_InteractWithQuestBoardInternal_Text_2:
# 332 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "New Quests have been posted!$"

Rogue_InteractWithQuestBoardInternal_Text_3:
# 338 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "All rewards have been collected!$"

Rogue_InteractWithQuestBoardInternal_Text_4:
# 342 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "There are no New Quests or Rewards to\n"
	.string "collect.$"

Rogue_InteractWithPC_Text_0:
# 363 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's a PC!\p"
	.string "Shame you can't see the screen from\n"
	.string "this side…$"

Rogue_InteractWithPC_Text_1:
# 370 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's a PC!\p"
	.string "Probably best not to touch it for now…$"

Rogue_EventScript_ItemUseHealingFlask_Text_0:
# 388 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The flask has {STR_VAR_1} uses remaining.\nWould you like to heal?$"

Rogue_EventScript_ItemUseHealingFlask_Text_1:
# 401 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The flask has {STR_VAR_1} uses remaining.$"

Rogue_EventScript_ItemUseHealingFlask_Text_2:
# 412 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The flask has {STR_VAR_1} total uses.$"

Rogue_EventScript_ScatterPokeblockItem_Text_0:
# 431 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{STR_VAR_1} was already scattered\n"
	.string "by the Honey Tree…$"

Rogue_EventScript_ScatterPokeblockItem_Text_1:
# 441 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The {STR_VAR_1} was scattered by\n"
	.string "the Honey Tree…$"

Rogue_EventScript_ScatterPokeblockItem_Text_2:
# 457 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The {STR_VAR_1} can't be scattered\n"
	.string "by the Honey Tree…$"

Rogue_EventScript_ScatterPokeblockItem_Text_3:
# 470 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The {STR_VAR_1} was scattered…\p"
	.string "The Pokémon seem to enjoy it!$"

Rogue_EventScript_ScatterPokeblockItem_Text_4:
# 474 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The {STR_VAR_1} was scattered…\p"
	.string "The Pokémon don't seem interested in\n"
	.string "it…$"

Rogue_EventScript_UseDayCarePhoneItem_Text_0:
# 499 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{PAUSE 20}… {PAUSE 20}… {PAUSE 20}… {PAUSE 20}$"

Rogue_EventScript_UseDayCarePhoneItem_Text_1:
# 507 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{PLAYER}? Is that you?\p"
	.string "The signal is so good in {POKEMON_HUB}!\p"
	.string "You'd like to swap out one of your\n"
	.string "Pokémon, would you?$"

Rogue_EventScript_UseDayCarePhoneItem_Text_2:
# 511 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "{PLAYER}? Is that you?\p"
	.string "You'd like to swap out one of your\n"
	.string "Pokémon, would you?$"

Rogue_EventScript_UseDayCarePhoneItem_Text_3:
# 514 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which {PKMN} slot are you interested in?$"

Rogue_EventScript_UseDayCarePhoneItem_Text_4:
# 534 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "The Pokégear is out of charge.\p"
	.string "Entering any Rest Stop will recharge\n"
	.string "the Pokégear.$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_0:
# 549 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I'm afraid you can't leave any more\n"
	.string "Pokémon with the Day Care at the\l"
	.string "moment.\p"
	.string "If you did, you'd be left with no\n"
	.string "Pokémon in your party!$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_1:
# 553 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which Pokémon would you like to leave\n"
	.string "with us?$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_2:
# 571 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I'll make sure to take good care of\n"
	.string "them!\p"
	.string "See you in a moment.$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_3:
# 590 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "So you would like to withdraw your\n"
	.string "Pokémon?\p"
	.string "It looks like your party is full!\p"
	.string "You'll need to leave a member of your\n"
	.string "party with me, in order to withdraw any\l"
	.string "Pokémon.$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_4:
# 621 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "So you would like to withdraw your\n"
	.string "Pokémon?$"

Rogue_EventScript_UseDayCarePhoneItem_TrySwapMon_Text_5:
# 627 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "See you in a moment.$"

Rogue_EventScript_UseGoldenSeedItem_Text_0:
# 651 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It has have no effect, outside of\n"
	.string "Adventures.$"

Rogue_EventScript_AttemptSnagBattle_Text_0:
# 662 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Would you like to try to snag the\n"
	.string "{STR_VAR_1}?$"

Rogue_Shop_Balls_Text_0:
# 775 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the Poké Ball Shop!$"

Rogue_Shop_Balls_Text_1:
# 780 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Come again soon!$"

Rogue_Shop_Medicine_Text_0:
# 788 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the General Shop!$"

Rogue_Shop_TMs_Text_0:
# 801 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the TM Shop!$"

Rogue_Shop_BattleEnhancers_Text_0:
# 814 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the Travelling Battle Shop!\nI stock Enhancement Items.$"

Rogue_Shop_HeldItems_Text_0:
# 827 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the Travelling Battle Shop!\nI stock Held Items.$"

Rogue_Shop_RareHeldItems_Text_0:
# 840 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the Travelling Battle Shop!\nI stock Special Items.$"

Rogue_Shop_RarePlates_Text_0:
# 853 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome to the Travelling Battle Shop!\nI stock Quest Reward Items.$"

Rogue_Shop_Curses_Text_0:
# 867 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Good day, {PLAYER}.\p"
	.string "I can offer you some Curses to add some\n"
	.string "extra challenge in your future\l"
	.string "Adventures, if you'd like.$"

Rogue_Shop_Curses_Text_1:
# 869 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Would you like me to remove any active\n"
	.string "Curses?$"

Rogue_Shop_Curses_Text_2:
# 876 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which Curses would you like to take with\n"
	.string "you?$"

Rogue_Shop_Curses_Text_3:
# 881 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Good luck child, {PLAYER}!$"

Rogue_Shop_Charms_Text_0:
# 891 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Greetings, {PLAYER}.\p"
	.string "I can offer you some Charms to\n"
	.string "customise your Adventures, if you'd\l"
	.string "like.\p"
	.string "However, starting an Adventure with\n"
	.string "any of these Charms will enter a sort of\l"
	.string "'Sandbox' mode.\p"
	.string "As a result, all Quests will be disabled.$"

Rogue_Shop_Charms_Text_1:
# 893 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Would you like me to remove any active\n"
	.string "Charms?$"

Rogue_Shop_Charms_Text_2:
# 900 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which Charms would you like to take with\n"
	.string "you?$"

Rogue_Shop_Charms_Text_3:
# 905 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Have fun, {PLAYER}!$"

Rogue_Shop_Berries_Text_0:
# 914 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Welcome!\nWould you like to buy some berries?$"

Rogue_Shop_Berries_Text_1:
# 920 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Please come again!$"

Rogue_Shop_Treats_Text_0:
# 928 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Hi there!\nWould you like to buy some treats?$"

RogueSafari_Sign_South_Text_0:
# 941 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "SOUTH AREA home to:\n"
	.string "NORMAL, FIGHTING, FAIRY Pokémon$"

RogueSafari_Sign_South_Text_1:
# 945 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "SOUTH AREA home to:\n"
	.string "NORMAL, FIGHTING Pokémon$"

RogueSafari_Sign_SouthWest_Text_0:
# 951 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "SOUTH WEST AREA home to:\n"
	.string "GRASS, POISON, DARK Pokémon$"

RogueSafari_Sign_NorthWest_Text_0:
# 956 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "NORTH WEST AREA home to:\n"
	.string "DRAGON, STEEL, PSYCHIC Pokémon$"

RogueSafari_Sign_North_Text_0:
# 961 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "NORTH AREA home to:\n"
	.string "FLYING, GHOST, FIRE Pokémon$"

RogueSafari_Sign_NorthEast_Text_0:
# 966 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "NORTH EAST AREA home to:\n"
	.string "ROCK, GROUND, ELECTRIC Pokémon$"

RogueSafari_Sign_SouthEast_Text_0:
# 971 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "SOUTH EAST AREA home to:\n"
	.string "WATER, BUG, ICE Pokémon$"

Rogue_Tutor_MoveRelearn_Text_0:
# 981 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Lvl Move tutor deprecated$"

Rogue_Tutor_EggMoveLearn_Text_0:
# 989 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Egg tutor deprecated$"

Rogue_Tutor_TutorMoveLearn_Text_0:
# 998 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "HYAH!\p"
	.string "I'm a Move Tutor!\p"
	.string "I can teach Pokémon moves some radical\n"
	.string "moves!\p"
	.string "So, what do you want me to teach?$"

Rogue_Tutor_MoveDelete_Text_0:
# 1011 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Uh..\n"
	.string "Oh, yes, I'm the Move Deleter.\p"
	.string "I can make Pokémon forget their moves,\n"
	.string "if you'd like?$"

Rogue_SpeakDaycareLady_Text_0:
# 1057 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Why hello dear!\n"
	.string "I'm the Day Care Lady.\p"
	.string "I can hold onto Pokémon for you, if\n"
	.string "you'd like.$"

Rogue_SpeakDaycareLady_TrySwapMon_Text_0:
# 1087 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I'm afraid you can't leave any more\n"
	.string "Pokémon with me at the moment.\p"
	.string "If you did, you'd be left with no\n"
	.string "Pokémon in your party!$"

Rogue_SpeakDaycareLady_TrySwapMon_Text_1:
# 1091 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Which Pokémon would you like to leave\n"
	.string "with me?$"

Rogue_SpeakDaycareLady_TrySwapMon_Text_2:
# 1109 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I'll make sure to take good care of\n"
	.string "them!\p"
	.string "Take care!$"

Rogue_SpeakDaycareLady_TrySwapMon_Text_3:
# 1153 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "There you are!\p"
	.string "Take care!$"

Rogue_Tutor_MoveDeleteNoMoves_Text_0:
# 1161 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "This Pokémon needs move moves before I\n"
	.string "can make it forget any.$"

Rogue_Tutor_MoveDeleteEgg_Text_0:
# 1167 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "As much as wish I could..\n"
	.string "I can't unteach an EGG.$"

Rogue_Tutor_MoveDeleteCancel_Text_0:
# 1173 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Oh.. OK then.$"

Rogue_BerryTree_WantToPlant_Text_0:
# 1199 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Plant {STR_VAR_1}?$"

Rogue_Battle_PreBoss_Text_0:
# 1250 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Good luck with your Adventure!$"

Rogue_Battle_PreBoss_Text_1:
# 1255 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "I can help you level up if you'd like.\p"
	.string "{LV}{STR_VAR_1} is the current cap.\n"
	.string "Would you like to battle?$"

Rogue_Battle_PreBoss_Text_2:
# 1264 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Let me know if you change your mind.$"

Rogue_Heal_PreBoss_Text_0:
# 1276 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Urgh...\n"
	.string "You want me to heal you or something?$"

Rogue_Heal_PreBoss_Text_1:
# 1312 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's gonna cost you ¥{STR_VAR_1}.$"

Rogue_Heal_PreBoss_Text_2:
# 1342 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "It's gonna cost you ¥{STR_VAR_1}.\n"
	.string "But you don't even have enough money...$"

Rogue_Heal_PreBoss_Text_3:
# 1349 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "Look kid...\n"
	.string "I'll give you a single free heal. After\l"
	.string "that you're gonna have to pay.$"

Rogue_Heal_PreBoss_Text_4:
# 1350 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "You wanna use your free heal now?$"

Rogue_Heal_PreBoss_Text_5:
# 1362 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "What...\n"
	.string "You're still here?$"

Rogue_Heal_PreBoss_Text_6:
# 1366 "data/scripts/Rogue/Rogue_Manager.pory"
	.string "So thanks for wasting my time I guess...$"
