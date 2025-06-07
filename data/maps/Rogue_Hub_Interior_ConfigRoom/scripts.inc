Rogue_Hub_Interior_ConfigRoom_MapScripts::
# 30 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_ConfigRoom_OnLoad
	.byte 0


Rogue_ConfigRoom_OnLoad::
# 35 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_DITTO
# 36 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_RedrawMap
	return


Rogue_ConfigRoom_TalkLanette::
# 41 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 42 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 43 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkLanette_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return


Rogue_ConfigRoom_TalkAssistant::
# 49 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 50 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 51 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_unset FLAG_SET_SEED_ENABLED, Rogue_ConfigRoom_TalkAssistant_2
Rogue_ConfigRoom_TalkAssistant_1:
# 56 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 57 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_TalkAssistantInternal
# 58 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_TalkAssistant_2:
# 53 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistant_Text_0, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_TalkAssistant_1


Rogue_ConfigRoom_SpeakSeedMode::
# 63 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 64 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 65 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_unset FLAG_SET_SEED_ENABLED, Rogue_ConfigRoom_SpeakSeedMode_2
Rogue_ConfigRoom_SpeakSeedMode_1:
# 70 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 71 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_TalkAssistantInternal
# 72 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_SpeakSeedMode_2:
# 67 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_SpeakSeedMode_Text_0, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_SpeakSeedMode_1


Rogue_ConfigRoom_TalkAssistantInternal::
# 77 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_ENABLED, Rogue_ConfigRoom_TalkAssistantInternal_1
# 95 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_2, MSGBOX_YESNO
# 96 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_TalkAssistantInternal_6
# 120 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_TalkAssistantInternal_14
	return

Rogue_ConfigRoom_TalkAssistantInternal_1:
# 79 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_0, MSGBOX_YESNO
# 80 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_TalkAssistantInternal_4
	return

Rogue_ConfigRoom_TalkAssistantInternal_4:
# 82 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_SET_SEED_ENABLED
# 85 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_TalkAssistantInternal_9
	return

Rogue_ConfigRoom_TalkAssistantInternal_6:
# 98 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_3, MSGBOX_DEFAULT
# 99 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_ROGUE_SEED
# 100 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Common_ShowEasyChatScreen
# 102 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_ConfigRoom_TalkAssistantInternal_11
# 109 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_5, MSGBOX_DEFAULT
# 110 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_TalkAssistantInternal_16
	return

Rogue_ConfigRoom_TalkAssistantInternal_9:
# 87 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConfigRoom_WalkLeft
# 88 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 1, ConfigRoom_LookLeft
# 89 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
	return

Rogue_ConfigRoom_TalkAssistantInternal_11:
# 104 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkAssistantInternal_Text_4, MSGBOX_DEFAULT
# 105 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_SET_SEED_ENABLED
	return

Rogue_ConfigRoom_TalkAssistantInternal_14:
# 122 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConfigRoom_WalkLeft
# 123 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 1, ConfigRoom_LookLeft
# 124 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
	return

Rogue_ConfigRoom_TalkAssistantInternal_16:
# 112 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConfigRoom_WalkLeft
# 113 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 1, ConfigRoom_LookLeft
# 114 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
	return


Rogue_ConfigRoom_Campaign_CampaignDescription::
# 132 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_ROGUE_DESIRED_CAMPAIGN
# 134 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_LOW_BST, Rogue_ConfigRoom_Campaign_CampaignDescription_2
# 138 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_CLASSIC, Rogue_ConfigRoom_Campaign_CampaignDescription_3
# 142 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_MINIBOSS_BATTLER, Rogue_ConfigRoom_Campaign_CampaignDescription_4
# 146 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_AUTO_BATTLER, Rogue_ConfigRoom_Campaign_CampaignDescription_5
# 150 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_LATERMANNER, Rogue_ConfigRoom_Campaign_CampaignDescription_6
# 154 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_POKEBALL_LIMIT, Rogue_ConfigRoom_Campaign_CampaignDescription_7
# 158 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case ROGUE_CAMPAIGN_ONE_HP, Rogue_ConfigRoom_Campaign_CampaignDescription_8
# 163 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_9
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_2:
# 135 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_0
# 136 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_3:
# 139 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_2
# 140 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_3, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_4:
# 143 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_4
# 144 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_5:
# 147 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_5
# 148 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_6:
# 151 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_6
# 152 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_7:
# 155 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_7
# 156 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_3, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_CampaignDescription_8:
# 159 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_8
# 160 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1, MSGBOX_DEFAULT
	return


Rogue_ConfigRoom_Campaign_Choice::
# 169 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_BufferCampaignName
# 170 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_GetCampaignHighScore
# 172 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_ConfigRoom_Campaign_Choice_2
# 178 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_RESULT
# 179 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_Campaign_Choice_Text_1
Rogue_ConfigRoom_Campaign_Choice_1:
# 182 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 183 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, YES
# 185 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Campaign_Choice_6
# 192 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_Campaign_Choice_7
# 196 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Campaign_Choice_8
# 197 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_Campaign_Choice_8
	return

Rogue_ConfigRoom_Campaign_Choice_2:
# 174 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_Campaign_Choice_Text_0
	goto Rogue_ConfigRoom_Campaign_Choice_1

Rogue_ConfigRoom_Campaign_Choice_6:
# 188 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 189 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 190 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_Choice_Text_2, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_Choice_7:
# 193 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_CampaignDescription
# 194 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_Choice
	return

Rogue_ConfigRoom_Campaign_Choice_8:
# 198 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	return


Rogue_ConfigRoom_Campaign_ReplayChoice::
# 204 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_BufferCampaignName
# 205 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_GetCampaignHighScore
# 207 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_ConfigRoom_Campaign_ReplayChoice_2
# 213 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_RESULT
# 214 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_Campaign_Choice_Text_1
Rogue_ConfigRoom_Campaign_ReplayChoice_1:
# 217 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 218 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 220 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Campaign_ReplayChoice_6
# 227 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_Campaign_ReplayChoice_7
# 231 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Campaign_ReplayChoice_8
# 232 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_Campaign_ReplayChoice_8
	return

Rogue_ConfigRoom_Campaign_ReplayChoice_2:
# 209 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_Campaign_ReplayChoice_Text_0
	goto Rogue_ConfigRoom_Campaign_ReplayChoice_1

Rogue_ConfigRoom_Campaign_ReplayChoice_6:
# 223 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 224 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_Choice_Text_2, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_ReplayChoice_7:
# 228 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_CampaignDescription
# 229 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_ReplayChoice
	return

Rogue_ConfigRoom_Campaign_ReplayChoice_8:
# 233 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	return


Rogue_ConfigRoom_Campaign_NewPhrase::
# 239 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_NewPhrase_Text_0
# 241 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_ROGUE_CAMPAIGN
# 242 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Common_ShowEasyChatScreen
# 244 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_ne Rogue_ConfigRoom_Campaign_NewPhrase_1
# 266 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_NewPhrase_Text_4, MSGBOX_DEFAULT
	return

Rogue_ConfigRoom_Campaign_NewPhrase_1:
# 246 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 249 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_BufferCampaignName
# 250 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_NewPhrase_Text_1, MSGBOX_DEFAULT
# 252 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_TEMP_F, YES
	goto_if_eq Rogue_ConfigRoom_Campaign_NewPhrase_5
Rogue_ConfigRoom_Campaign_NewPhrase_4:
# 257 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_Choice
# 259 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_eq Rogue_ConfigRoom_Campaign_NewPhrase_7
	return

Rogue_ConfigRoom_Campaign_NewPhrase_5:
# 254 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_NewPhrase_Text_2, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Campaign_NewPhrase_4

Rogue_ConfigRoom_Campaign_NewPhrase_7:
# 261 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_NewPhrase_Text_3, MSGBOX_DEFAULT
	return


Rogue_ConfigRoom_SelectCampaign_Loop::
# 272 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_GetNextUnlockedCampaign
# 273 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_0x8004, ROGUE_CAMPAIGN_NONE
	goto_if_ne Rogue_ConfigRoom_SelectCampaign_Loop_2
# 279 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
Rogue_ConfigRoom_SelectCampaign_Loop_1:
Rogue_ConfigRoom_SelectCampaign_Loop_6:
# 282 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_SelectCampaign_Loop_7
# 307 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_eq Rogue_ConfigRoom_SelectCampaign_Loop_9
	return

Rogue_ConfigRoom_SelectCampaign_Loop_2:
# 275 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_ConfigRoom_SelectCampaign_Loop_1

Rogue_ConfigRoom_SelectCampaign_Loop_7:
# 284 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	copyvar VAR_ROGUE_DESIRED_CAMPAIGN, VAR_0x8004
# 285 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_ReplayChoice
# 287 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_ne Rogue_ConfigRoom_SelectCampaign_Loop_11
# 293 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_GetNextUnlockedCampaign
# 294 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_0x8004, ROGUE_CAMPAIGN_NONE
	goto_if_eq Rogue_ConfigRoom_SelectCampaign_Loop_14
# 302 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_ConfigRoom_SelectCampaign_Loop_6

Rogue_ConfigRoom_SelectCampaign_Loop_9:
# 309 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_SelectCampaign_Loop_Text_0
	return

Rogue_ConfigRoom_SelectCampaign_Loop_11:
# 289 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_ConfigRoom_SelectCampaign_Loop_6

Rogue_ConfigRoom_SelectCampaign_Loop_14:
# 297 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_ConfigRoom_SelectCampaign_Loop_6


Rogue_ConfigRoom_Campaign::
# 315 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 317 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special Rogue_GetUnlockedCampaignCount
# 318 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_ConfigRoom_Campaign_2
# 325 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 326 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_Text_0
# 331 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_ne Rogue_ConfigRoom_Campaign_5
# 343 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_Campaign_Text_2
# 344 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 346 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_CAMPAIGN_EXT_OPT, NO
# 348 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 350 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Campaign_11
# 354 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Campaign_12
Rogue_ConfigRoom_Campaign_1:
# 364 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_Campaign_2:
# 320 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_F, YES
# 321 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_NewPhrase
	goto Rogue_ConfigRoom_Campaign_1

Rogue_ConfigRoom_Campaign_5:
# 333 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_Choice
# 335 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_eq Rogue_ConfigRoom_Campaign_8
	goto Rogue_ConfigRoom_Campaign_1

Rogue_ConfigRoom_Campaign_8:
# 337 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Campaign_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Campaign_1

Rogue_ConfigRoom_Campaign_11:
# 351 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8004, ROGUE_CAMPAIGN_NONE
# 352 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_SelectCampaign_Loop
	goto Rogue_ConfigRoom_Campaign_1

Rogue_ConfigRoom_Campaign_12:
# 355 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_F, NO
# 356 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_Campaign_NewPhrase
	goto Rogue_ConfigRoom_Campaign_1


Rogue_ConfigRoom_WalkAboveAssistant::
# 369 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 371 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_unset FLAG_SET_SEED_ENABLED, Rogue_ConfigRoom_WalkAboveAssistant_2
Rogue_ConfigRoom_WalkAboveAssistant_1:
# 382 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	releaseall
	return

Rogue_ConfigRoom_WalkAboveAssistant_2:
# 373 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 374 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 1, ConfigRoom_LookUp
# 375 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConfigRoom_LookDown
# 376 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 378 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 379 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_TalkAssistantInternal
	goto Rogue_ConfigRoom_WalkAboveAssistant_1


Rogue_ConfigRoom_WalkBelowAssistant::
# 387 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 389 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_unset FLAG_SET_SEED_ENABLED, Rogue_ConfigRoom_WalkBelowAssistant_2
Rogue_ConfigRoom_WalkBelowAssistant_1:
# 399 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	releaseall
	return

Rogue_ConfigRoom_WalkBelowAssistant_2:
# 391 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 1, ConfigRoom_LookDown
# 392 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConfigRoom_LookUp
# 393 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 395 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 396 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_TalkAssistantInternal
	goto Rogue_ConfigRoom_WalkBelowAssistant_1


# 402 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_LookUp:
# 403 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_up
	step_end

# 406 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_LookDown:
# 407 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_down
	step_end

# 410 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_LookLeft:
# 411 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_left
	step_end

# 414 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_WalkLeft:
# 415 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	walk_left
	step_end

Rogue_ConfigRoom_TalkHiddenEnterance::
# 420 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_unset FLAG_ROGUE_UNCOVERRED_POKABBIE, Rogue_ConfigRoom_TalkHiddenEnterance_1
	return

Rogue_ConfigRoom_TalkHiddenEnterance_1:
# 422 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 424 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkHiddenEnterance_Text_0, MSGBOX_YESNO
# 426 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_TalkHiddenEnterance_4
Rogue_ConfigRoom_TalkHiddenEnterance_3:
# 440 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_TalkHiddenEnterance_4:
# 428 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkHiddenEnterance_Text_1, MSGBOX_YESNO
# 430 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_TalkHiddenEnterance_6
	goto Rogue_ConfigRoom_TalkHiddenEnterance_3

Rogue_ConfigRoom_TalkHiddenEnterance_6:
# 432 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_ROGUE_UNCOVERRED_POKABBIE
# 434 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 435 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_TRUCK_DOOR
# 436 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_RedrawMap
	goto Rogue_ConfigRoom_TalkHiddenEnterance_3


Rogue_ConfigRoom_MeetPokabbie::
# 446 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 448 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 449 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 4, ConfigRoom_Pokabbie_NoticePlayer
# 450 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 452 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Rogue_ConfigRoom_MeetPokabbie_2
# 459 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_2
# 461 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 4, ConfigRoom_Pokabbie_FaceUp
# 462 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 464 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_3
# 466 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 4, ConfigRoom_Pokabbie_FaceDown
# 467 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 469 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_4
# 471 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 4, ConfigRoom_Pokabbie_Spin
# 472 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 474 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_5
# 476 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_6
# 477 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_1
Rogue_ConfigRoom_MeetPokabbie_1:
# 481 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_ROGUE_MET_POKABBIE
# 482 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 484 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	releaseall
	return

Rogue_ConfigRoom_MeetPokabbie_2:
# 454 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_0
# 455 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MeetPokabbie_Text_1
	goto Rogue_ConfigRoom_MeetPokabbie_1


Rogue_ConfigRoom_TalkPokabbie::
# 489 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 491 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 492 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkPokabbie_Text_0, MSGBOX_DEFAULT
# 494 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	applymovement 4, ConfigRoom_Pokabbie_Spin
# 495 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmovement 0
# 497 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	releaseall
	return


Rogue_ConfigRoom_TalkDitto::
# 502 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 504 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
# 505 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_TalkDitto_Text_0, MSGBOX_DEFAULT
# 507 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return


# 510 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_Pokabbie_FaceDown:
# 512 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_down
	step_end

# 515 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_Pokabbie_FaceUp:
# 517 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_up
	step_end

# 520 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_Pokabbie_NoticePlayer:
# 522 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_down
# 523 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	emote_exclamation_mark
	step_end

# 526 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
ConfigRoom_Pokabbie_Spin:
# 528 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_right
# 529 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 531 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_up
# 532 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 534 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_left
# 535 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 537 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_down
# 538 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 540 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_right
# 541 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 543 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_up
# 544 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 546 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_left
# 547 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
# 549 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	face_down
# 550 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	delay_1
	step_end

Rogue_ConfigRoom_MegaBag::
# 555 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 565 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MEGA_RING
# 566 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	checkitem ITEM_MEGA_RING
# 568 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_MegaBag_2
# 578 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_1, MSGBOX_YESNO
# 579 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_MegaBag_7
Rogue_ConfigRoom_MegaBag_1:
# 588 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_MegaBag_2:
# 570 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_0, MSGBOX_YESNO
# 571 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_MegaBag_5
	goto Rogue_ConfigRoom_MegaBag_1

Rogue_ConfigRoom_MegaBag_5:
# 573 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	giveitem ITEM_MEGA_RING
	goto Rogue_ConfigRoom_MegaBag_1

Rogue_ConfigRoom_MegaBag_7:
# 581 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_2, MSGBOX_DEFAULT
# 582 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	removeitem ITEM_MEGA_RING
	goto Rogue_ConfigRoom_MegaBag_1


Rogue_ConfigRoom_ZMoveBag::
# 593 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 603 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_Z_POWER_RING
# 604 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	checkitem ITEM_Z_POWER_RING
# 606 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_ZMoveBag_2
# 616 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_1, MSGBOX_YESNO
# 617 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_ZMoveBag_7
Rogue_ConfigRoom_ZMoveBag_1:
# 626 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_ZMoveBag_2:
# 608 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_0, MSGBOX_YESNO
# 609 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_ZMoveBag_5
	goto Rogue_ConfigRoom_ZMoveBag_1

Rogue_ConfigRoom_ZMoveBag_5:
# 611 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	giveitem ITEM_Z_POWER_RING
	goto Rogue_ConfigRoom_ZMoveBag_1

Rogue_ConfigRoom_ZMoveBag_7:
# 619 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_2, MSGBOX_DEFAULT
# 620 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	removeitem ITEM_Z_POWER_RING
	goto Rogue_ConfigRoom_ZMoveBag_1


Rogue_ConfigRoom_DynamaxBag::
# 631 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 641 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DYNAMAX_BAND
# 642 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	checkitem ITEM_DYNAMAX_BAND
# 644 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_DynamaxBag_2
# 654 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_1, MSGBOX_YESNO
# 655 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_DynamaxBag_7
Rogue_ConfigRoom_DynamaxBag_1:
# 664 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_DynamaxBag_2:
# 646 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_0, MSGBOX_YESNO
# 647 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_DynamaxBag_5
	goto Rogue_ConfigRoom_DynamaxBag_1

Rogue_ConfigRoom_DynamaxBag_5:
# 649 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	giveitem ITEM_DYNAMAX_BAND
	goto Rogue_ConfigRoom_DynamaxBag_1

Rogue_ConfigRoom_DynamaxBag_7:
# 657 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_MegaBag_Text_2, MSGBOX_DEFAULT
# 658 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	removeitem ITEM_DYNAMAX_BAND
	goto Rogue_ConfigRoom_DynamaxBag_1


Rogue_ConfigRoom_BufferRegionName::
# 669 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_ROGUE_REGION_DEX_LIMIT
# 671 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_BufferRegionName_2
# 673 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_BufferRegionName_3
# 675 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 3, Rogue_ConfigRoom_BufferRegionName_4
# 677 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 4, Rogue_ConfigRoom_BufferRegionName_5
# 679 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 5, Rogue_ConfigRoom_BufferRegionName_6
# 681 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 6, Rogue_ConfigRoom_BufferRegionName_7
# 683 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 7, Rogue_ConfigRoom_BufferRegionName_8
# 685 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 8, Rogue_ConfigRoom_BufferRegionName_9
# 688 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Campaign_CampaignDescription_Text_9
	return

Rogue_ConfigRoom_BufferRegionName_2:
# 672 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_0
	return

Rogue_ConfigRoom_BufferRegionName_3:
# 674 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_1
	return

Rogue_ConfigRoom_BufferRegionName_4:
# 676 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_2
	return

Rogue_ConfigRoom_BufferRegionName_5:
# 678 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_3
	return

Rogue_ConfigRoom_BufferRegionName_6:
# 680 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_4
	return

Rogue_ConfigRoom_BufferRegionName_7:
# 682 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_5
	return

Rogue_ConfigRoom_BufferRegionName_8:
# 684 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_6
	return

Rogue_ConfigRoom_BufferRegionName_9:
# 686 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_BufferRegionName_Text_7
	return


Rogue_ConfigRoom_AdjustWildGens_Regional::
# 694 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_AdjustWildGens_Regional_Text_0
# 695 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 697 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, Rogue_ConfigRoom_AdjustWildGens_Regional_2
# 703 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_REGION_UPTO_HOENN, NO
Rogue_ConfigRoom_AdjustWildGens_Regional_1:
# 706 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 708 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 709 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 710 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 711 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 3, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 712 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 4, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 713 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 5, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 714 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 6, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 715 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 7, Rogue_ConfigRoom_AdjustWildGens_Regional_6
# 727 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_AdjustWildGens_Regional_7
	return

Rogue_ConfigRoom_AdjustWildGens_Regional_2:
# 699 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 0, MULTI_REGION_FULL, NO
	goto Rogue_ConfigRoom_AdjustWildGens_Regional_1

Rogue_ConfigRoom_AdjustWildGens_Regional_6:
# 716 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 717 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 719 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 720 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	copyvar VAR_ROGUE_REGION_DEX_LIMIT, VAR_RESULT
# 721 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	copyvar VAR_ROGUE_ENABLED_GEN_LIMIT, VAR_RESULT
# 723 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_BufferRegionName
# 724 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_Regional_Text_1, MSGBOX_DEFAULT
# 725 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_AdjustWildGens_Regional_7:
# 728 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	return


Rogue_ConfigRoom_AdjustWildGens_National::
# 734 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_AdjustWildGens_National_Text_0
# 735 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 737 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, Rogue_ConfigRoom_AdjustWildGens_National_2
# 743 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_GENERATIONS_UPTO3, NO
Rogue_ConfigRoom_AdjustWildGens_National_1:
# 746 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 748 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_AdjustWildGens_National_6
# 749 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_AdjustWildGens_National_6
# 750 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_AdjustWildGens_National_6
# 751 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 3, Rogue_ConfigRoom_AdjustWildGens_National_6
# 752 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 4, Rogue_ConfigRoom_AdjustWildGens_National_6
# 753 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 5, Rogue_ConfigRoom_AdjustWildGens_National_6
# 754 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 6, Rogue_ConfigRoom_AdjustWildGens_National_6
# 755 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 7, Rogue_ConfigRoom_AdjustWildGens_National_6
# 767 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_AdjustWildGens_National_7
	return

Rogue_ConfigRoom_AdjustWildGens_National_2:
# 739 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 0, MULTI_GENERATIONS_UPTO9, NO
	goto Rogue_ConfigRoom_AdjustWildGens_National_1

Rogue_ConfigRoom_AdjustWildGens_National_6:
# 756 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 757 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 759 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 760 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	copyvar VAR_ROGUE_ENABLED_GEN_LIMIT, VAR_RESULT
# 761 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_ROGUE_REGION_DEX_LIMIT, 0
# 763 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_ENABLED_GEN_LIMIT
# 764 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_National_Text_1, MSGBOX_DEFAULT
# 765 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_AdjustWildGens_National_7:
# 768 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	return


Rogue_ConfigRoom_AdjustWildGens::
# 774 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lock
# 775 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	faceplayer
# 776 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_Text_0, MSGBOX_DEFAULT
# 778 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_ENABLED_GEN_LIMIT
# 779 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_ROGUE_REGION_DEX_LIMIT, 0
	goto_if_eq Rogue_ConfigRoom_AdjustWildGens_2
# 786 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_BufferRegionName
# 787 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_Text_2, MSGBOX_YESNO
Rogue_ConfigRoom_AdjustWildGens_1:
# 790 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_AdjustWildGens_6
Rogue_ConfigRoom_AdjustWildGens_5:
# 810 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_AdjustWildGens_9
Rogue_ConfigRoom_AdjustWildGens_8:
# 815 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	release
	return

Rogue_ConfigRoom_AdjustWildGens_2:
# 781 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_ENABLED_GEN_LIMIT
# 782 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_Text_1, MSGBOX_YESNO
	goto Rogue_ConfigRoom_AdjustWildGens_1

Rogue_ConfigRoom_AdjustWildGens_6:
# 792 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_AdjustWildGens_Text_3
# 793 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 794 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 8, MULTI_REGION_OR_NATIONAL, NO
# 796 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 798 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_AdjustWildGens_12
# 801 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_AdjustWildGens_13
# 804 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_AdjustWildGens_14
	goto Rogue_ConfigRoom_AdjustWildGens_5

Rogue_ConfigRoom_AdjustWildGens_9:
# 812 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_AdjustWildGens_Text_4, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_AdjustWildGens_8

Rogue_ConfigRoom_AdjustWildGens_12:
# 799 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_AdjustWildGens_National
	goto Rogue_ConfigRoom_AdjustWildGens_5

Rogue_ConfigRoom_AdjustWildGens_13:
# 802 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_AdjustWildGens_Regional
	goto Rogue_ConfigRoom_AdjustWildGens_5

Rogue_ConfigRoom_AdjustWildGens_14:
# 805 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_ConfigRoom_AdjustWildGens_5


Rogue_ConfigRoom_PreButtonInternal::
# 821 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 823 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 825 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_PreButtonInternal_3
# 827 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_PreButtonInternal_4
# 830 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_Campaign_CampaignDescription_Text_9
Rogue_ConfigRoom_PreButtonInternal_1:
# 833 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_PreButtonInternal_Text_2
# 834 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 835 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO_2, NO
# 837 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 839 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_PreButtonInternal_7
# 845 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_PreButtonInternal_8
# 851 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_PreButtonInternal_9
# 854 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_PreButtonInternal_10
	return

Rogue_ConfigRoom_PreButtonInternal_3:
# 826 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_PreButtonInternal_Text_0
	goto Rogue_ConfigRoom_PreButtonInternal_1

Rogue_ConfigRoom_PreButtonInternal_4:
# 828 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_PreButtonInternal_Text_1
	goto Rogue_ConfigRoom_PreButtonInternal_1

Rogue_ConfigRoom_PreButtonInternal_7:
# 840 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 841 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 842 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 0
# 843 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_PreButtonInternal_8:
# 846 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 847 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 848 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 1
# 849 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_PreButtonInternal_9:
# 852 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_ConfigRoom_PreButtonInternal_10:
# 855 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_ConfigRoom_PreEAHButtonInternal::
# 861 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	lockall
# 863 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 865 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_PreEAHButtonInternal_3
# 867 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_PreEAHButtonInternal_4
# 869 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_PreEAHButtonInternal_5
# 872 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_Campaign_CampaignDescription_Text_9
Rogue_ConfigRoom_PreEAHButtonInternal_1:
# 875 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	message Rogue_ConfigRoom_PreButtonInternal_Text_2
# 876 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitmessage
# 877 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	multichoice 20, 4, MULTI_EASY_AVERAGE_HARD_INFO, NO
# 879 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_RESULT
# 881 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_PreEAHButtonInternal_8
# 887 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_PreEAHButtonInternal_9
# 893 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_PreEAHButtonInternal_10
# 899 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 3, Rogue_ConfigRoom_PreEAHButtonInternal_11
# 902 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case MULTI_B_PRESSED, Rogue_ConfigRoom_PreEAHButtonInternal_12
	return

Rogue_ConfigRoom_PreEAHButtonInternal_3:
# 866 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_PreEAHButtonInternal_Text_0
	goto Rogue_ConfigRoom_PreEAHButtonInternal_1

Rogue_ConfigRoom_PreEAHButtonInternal_4:
# 868 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_PreEAHButtonInternal_Text_1
	goto Rogue_ConfigRoom_PreEAHButtonInternal_1

Rogue_ConfigRoom_PreEAHButtonInternal_5:
# 870 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_2, Rogue_ConfigRoom_PreEAHButtonInternal_Text_2
	goto Rogue_ConfigRoom_PreEAHButtonInternal_1

Rogue_ConfigRoom_PreEAHButtonInternal_8:
# 882 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 883 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 884 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 0
# 885 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_PreEAHButtonInternal_9:
# 888 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 889 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 890 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 1
# 891 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_PreEAHButtonInternal_10:
# 894 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	waitse
# 895 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	playse SE_PIN
# 896 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 2
# 897 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_ConfigRoom_PreEAHButtonInternal_11:
# 900 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_ConfigRoom_PreEAHButtonInternal_12:
# 903 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_ConfigRoom_PostButtonInternal::
# 909 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ConfigRoom_PostButtonInternal_2
Rogue_ConfigRoom_PostButtonInternal_1:
# 913 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	releaseall
	return

Rogue_ConfigRoom_PostButtonInternal_2:
# 911 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_RedrawMap
	goto Rogue_ConfigRoom_PostButtonInternal_1


Rogue_ConfigRoom_RedrawMap::
# 919 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_ROGUE_UNCOVERRED_POKABBIE, Rogue_ConfigRoom_RedrawMap_2
Rogue_ConfigRoom_RedrawMap_1:
# 931 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, Rogue_ConfigRoom_RedrawMap_5
# 938 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 939 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
Rogue_ConfigRoom_RedrawMap_4:
# 942 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_POKABBIE, Rogue_ConfigRoom_RedrawMap_9
# 948 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_1, 0
Rogue_ConfigRoom_RedrawMap_8:
# 953 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_RedrawMap_13
# 959 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER0
Rogue_ConfigRoom_RedrawMap_12:
# 963 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_17
# 969 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 1, 3, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_16:
# 972 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_21
# 978 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 3, 3, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_20:
# 981 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_25
# 987 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 5, 3, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_24:
# 990 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_29
# 996 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 7, 3, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_28:
# 999 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_33
# 1005 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 9, 3, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_32:
# 1009 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_37
# 1013 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_38
# 1019 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 1, 5, METATILE_BikeShop_Button_Green, FALSE
Rogue_ConfigRoom_RedrawMap_36:
# 1035 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_RedrawMap_43
# 1039 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_44
# 1045 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 5, 5, METATILE_BikeShop_Button_Green, FALSE
Rogue_ConfigRoom_RedrawMap_42:
# 1051 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_ITEMS, Rogue_ConfigRoom_RedrawMap_49
# 1057 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 14, 6, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_48:
# 1060 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_WILDMONS, Rogue_ConfigRoom_RedrawMap_53
# 1066 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 16, 6, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_52:
# 1069 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_TRAINERS, Rogue_ConfigRoom_RedrawMap_57
# 1075 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 14, 8, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_56:
# 1078 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_BOSSES, Rogue_ConfigRoom_RedrawMap_61
# 1084 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 16, 8, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_60:
# 1089 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_65
# 1095 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 15, 20, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_64:
# 1097 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_69
# 1103 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 15, 22, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_68:
# 1106 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_73
# 1112 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 17, 20, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_72:
# 1114 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_77
# 1120 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 17, 22, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_76:
# 1123 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_81
# 1129 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 19, 20, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_80:
# 1131 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_RedrawMap_85
# 1137 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 19, 22, METATILE_BikeShop_Button_Pressed, FALSE
Rogue_ConfigRoom_RedrawMap_84:
# 1140 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	special DrawWholeMapView
	return

Rogue_ConfigRoom_RedrawMap_2:
# 921 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 8, 0, 0x25C, TRUE
# 922 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 8, 1, 0x293, TRUE
# 924 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 9, 0, 0x26E, TRUE
# 925 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 9, 1, 0x276, FALSE
# 927 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 10, 0, 0x25D, TRUE
# 928 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 10, 1, 0x294, TRUE
	goto Rogue_ConfigRoom_RedrawMap_1

Rogue_ConfigRoom_RedrawMap_5:
# 933 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 934 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_RedrawMap_4

Rogue_ConfigRoom_RedrawMap_9:
# 944 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Rogue_ConfigRoom_RedrawMap_8

Rogue_ConfigRoom_RedrawMap_13:
# 955 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_ROGUE_TRAINER0
	goto Rogue_ConfigRoom_RedrawMap_12

Rogue_ConfigRoom_RedrawMap_17:
# 965 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 1, 3, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_16

Rogue_ConfigRoom_RedrawMap_21:
# 974 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 3, 3, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_20

Rogue_ConfigRoom_RedrawMap_25:
# 983 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 5, 3, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_24

Rogue_ConfigRoom_RedrawMap_29:
# 992 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 7, 3, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_28

Rogue_ConfigRoom_RedrawMap_33:
# 1001 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 9, 3, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_32

Rogue_ConfigRoom_RedrawMap_37:
# 1011 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 1, 5, 0x23E, FALSE
	goto Rogue_ConfigRoom_RedrawMap_36

Rogue_ConfigRoom_RedrawMap_38:
# 1015 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 1, 5, METATILE_BikeShop_Button_Blue, FALSE
	goto Rogue_ConfigRoom_RedrawMap_36

Rogue_ConfigRoom_RedrawMap_43:
# 1037 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 5, 5, 0x23E, FALSE
	goto Rogue_ConfigRoom_RedrawMap_42

Rogue_ConfigRoom_RedrawMap_44:
# 1041 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 5, 5, METATILE_BikeShop_Button_Blue, FALSE
	goto Rogue_ConfigRoom_RedrawMap_42

Rogue_ConfigRoom_RedrawMap_49:
# 1053 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 14, 6, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_48

Rogue_ConfigRoom_RedrawMap_53:
# 1062 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 16, 6, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_52

Rogue_ConfigRoom_RedrawMap_57:
# 1071 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 14, 8, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_56

Rogue_ConfigRoom_RedrawMap_61:
# 1080 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 16, 8, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_60

Rogue_ConfigRoom_RedrawMap_65:
# 1091 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 15, 20, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_64

Rogue_ConfigRoom_RedrawMap_69:
# 1099 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 15, 22, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_68

Rogue_ConfigRoom_RedrawMap_73:
# 1108 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 17, 20, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_72

Rogue_ConfigRoom_RedrawMap_77:
# 1116 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 17, 22, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_76

Rogue_ConfigRoom_RedrawMap_81:
# 1125 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 19, 20, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_80

Rogue_ConfigRoom_RedrawMap_85:
# 1133 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setmetatile 19, 22, METATILE_BikeShop_Button_Green, FALSE
	goto Rogue_ConfigRoom_RedrawMap_84


Rogue_ConfigRoom_Button_ExpAll::
# 1149 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_ExpAll_Text_0
# 1151 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_ExpAll_2
# 1157 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_ExpAll_1:
# 1160 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1162 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1164 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_ExpAll_7
# 1166 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_ExpAll_8
Rogue_ConfigRoom_Button_ExpAll_5:
# 1170 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_ExpAll_10
Rogue_ConfigRoom_Button_ExpAll_9:
# 1176 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_ExpAll_2:
# 1153 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_ExpAll_1

Rogue_ConfigRoom_Button_ExpAll_7:
# 1165 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_ExpAll_5

Rogue_ConfigRoom_Button_ExpAll_8:
# 1167 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_ExpAll_5

Rogue_ConfigRoom_Button_ExpAll_10:
# 1173 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_ExpAll_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_ExpAll_9


Rogue_ConfigRoom_Button_CanOverLvl::
# 1181 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_CanOverLvl_Text_0
# 1183 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_CanOverLvl_2
# 1189 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_CanOverLvl_1:
# 1192 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1194 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1196 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_CanOverLvl_7
# 1198 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_CanOverLvl_8
Rogue_ConfigRoom_Button_CanOverLvl_5:
# 1202 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_CanOverLvl_10
Rogue_ConfigRoom_Button_CanOverLvl_9:
# 1208 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_CanOverLvl_2:
# 1185 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_CanOverLvl_1

Rogue_ConfigRoom_Button_CanOverLvl_7:
# 1197 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_CanOverLvl_5

Rogue_ConfigRoom_Button_CanOverLvl_8:
# 1199 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_CanOverLvl_5

Rogue_ConfigRoom_Button_CanOverLvl_10:
# 1205 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_CanOverLvl_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_CanOverLvl_9


Rogue_ConfigRoom_Button_EVGainEnabled::
# 1213 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_EVGainEnabled_Text_0
# 1215 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_EVGainEnabled_2
# 1221 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_EVGainEnabled_1:
# 1224 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1226 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1228 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_EVGainEnabled_7
# 1230 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_EVGainEnabled_8
Rogue_ConfigRoom_Button_EVGainEnabled_5:
# 1234 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_EVGainEnabled_10
Rogue_ConfigRoom_Button_EVGainEnabled_9:
# 1240 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_EVGainEnabled_2:
# 1217 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_EVGainEnabled_1

Rogue_ConfigRoom_Button_EVGainEnabled_7:
# 1229 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_EVGainEnabled_5

Rogue_ConfigRoom_Button_EVGainEnabled_8:
# 1231 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_EVGainEnabled_5

Rogue_ConfigRoom_Button_EVGainEnabled_10:
# 1237 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_EVGainEnabled_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_EVGainEnabled_9


Rogue_ConfigRoom_Button_BasicBag::
# 1245 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_BasicBag_Text_0
# 1247 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_BasicBag_2
# 1253 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_BasicBag_1:
# 1256 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1258 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1260 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_BasicBag_7
# 1262 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_BasicBag_8
Rogue_ConfigRoom_Button_BasicBag_5:
# 1266 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_BasicBag_10
Rogue_ConfigRoom_Button_BasicBag_9:
# 1272 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_BasicBag_2:
# 1249 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_BasicBag_1

Rogue_ConfigRoom_Button_BasicBag_7:
# 1261 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_BasicBag_5

Rogue_ConfigRoom_Button_BasicBag_8:
# 1263 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_BasicBag_5

Rogue_ConfigRoom_Button_BasicBag_10:
# 1269 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_BasicBag_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_BasicBag_9


Rogue_ConfigRoom_Button_WildMons::
# 1277 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_WildMons_Text_0
# 1279 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_WildMons_2
# 1285 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_WildMons_1:
# 1288 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1290 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1292 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_WildMons_7
# 1294 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_WildMons_8
Rogue_ConfigRoom_Button_WildMons_5:
# 1298 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_WildMons_10
Rogue_ConfigRoom_Button_WildMons_9:
# 1304 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_WildMons_2:
# 1281 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_WildMons_1

Rogue_ConfigRoom_Button_WildMons_7:
# 1293 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_WildMons_5

Rogue_ConfigRoom_Button_WildMons_8:
# 1295 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_WildMons_5

Rogue_ConfigRoom_Button_WildMons_10:
# 1301 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_WildMons_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_WildMons_9


Rogue_ConfigRoom_Button_TrainerDifficulty::
# 1309 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_TrainerDifficulty_Text_0
# 1311 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_TrainerDifficulty_2
# 1315 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_TrainerDifficulty_3
# 1321 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 1
Rogue_ConfigRoom_Button_TrainerDifficulty_1:
# 1324 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreEAHButtonInternal
# 1326 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1328 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_TrainerDifficulty_9
# 1331 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_TrainerDifficulty_10
# 1334 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_Button_TrainerDifficulty_11
Rogue_ConfigRoom_Button_TrainerDifficulty_7:
# 1339 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_TrainerDifficulty_13
Rogue_ConfigRoom_Button_TrainerDifficulty_12:
# 1344 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_TrainerDifficulty_2:
# 1313 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 0
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_1

Rogue_ConfigRoom_Button_TrainerDifficulty_3:
# 1317 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 2
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_1

Rogue_ConfigRoom_Button_TrainerDifficulty_9:
# 1329 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 1330 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_7

Rogue_ConfigRoom_Button_TrainerDifficulty_10:
# 1332 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 1333 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_7

Rogue_ConfigRoom_Button_TrainerDifficulty_11:
# 1335 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 1336 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_7

Rogue_ConfigRoom_Button_TrainerDifficulty_13:
# 1342 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_TrainerDifficulty_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_TrainerDifficulty_12


Rogue_ConfigRoom_Button_ItemDifficulty::
	return


Rogue_ConfigRoom_Button_LegendaryDifficulty::
# 1389 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_LegendaryDifficulty_Text_0
# 1391 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_LegendaryDifficulty_2
# 1395 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_ConfigRoom_Button_LegendaryDifficulty_3
# 1401 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 1
Rogue_ConfigRoom_Button_LegendaryDifficulty_1:
# 1404 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreEAHButtonInternal
# 1406 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1408 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_LegendaryDifficulty_9
# 1411 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_LegendaryDifficulty_10
# 1414 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 2, Rogue_ConfigRoom_Button_LegendaryDifficulty_11
Rogue_ConfigRoom_Button_LegendaryDifficulty_7:
# 1419 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_LegendaryDifficulty_13
Rogue_ConfigRoom_Button_LegendaryDifficulty_12:
# 1424 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_LegendaryDifficulty_2:
# 1393 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 0
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_1

Rogue_ConfigRoom_Button_LegendaryDifficulty_3:
# 1397 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, 2
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_1

Rogue_ConfigRoom_Button_LegendaryDifficulty_9:
# 1409 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 1410 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_7

Rogue_ConfigRoom_Button_LegendaryDifficulty_10:
# 1412 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 1413 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_7

Rogue_ConfigRoom_Button_LegendaryDifficulty_11:
# 1415 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 1416 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_7

Rogue_ConfigRoom_Button_LegendaryDifficulty_13:
# 1422 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_LegendaryDifficulty_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_LegendaryDifficulty_12


Rogue_ConfigRoom_Button_SeedItems::
# 1429 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_SeedItems_Text_0
# 1431 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_ITEMS, Rogue_ConfigRoom_Button_SeedItems_2
# 1437 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_SeedItems_1:
# 1440 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1442 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1444 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_SeedItems_7
# 1446 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_SeedItems_8
Rogue_ConfigRoom_Button_SeedItems_5:
# 1450 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_SeedItems_10
Rogue_ConfigRoom_Button_SeedItems_9:
# 1456 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_SeedItems_2:
# 1433 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_SeedItems_1

Rogue_ConfigRoom_Button_SeedItems_7:
# 1445 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_SET_SEED_ITEMS
	goto Rogue_ConfigRoom_Button_SeedItems_5

Rogue_ConfigRoom_Button_SeedItems_8:
# 1447 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_SET_SEED_ITEMS
	goto Rogue_ConfigRoom_Button_SeedItems_5

Rogue_ConfigRoom_Button_SeedItems_10:
# 1453 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_SeedItems_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_SeedItems_9


Rogue_ConfigRoom_Button_SeedWildMons::
# 1461 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_SeedWildMons_Text_0
# 1463 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_WILDMONS, Rogue_ConfigRoom_Button_SeedWildMons_2
# 1469 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_SeedWildMons_1:
# 1472 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1474 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1476 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_SeedWildMons_7
# 1478 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_SeedWildMons_8
Rogue_ConfigRoom_Button_SeedWildMons_5:
# 1482 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_SeedWildMons_10
Rogue_ConfigRoom_Button_SeedWildMons_9:
# 1488 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_SeedWildMons_2:
# 1465 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_SeedWildMons_1

Rogue_ConfigRoom_Button_SeedWildMons_7:
# 1477 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_SET_SEED_WILDMONS
	goto Rogue_ConfigRoom_Button_SeedWildMons_5

Rogue_ConfigRoom_Button_SeedWildMons_8:
# 1479 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_SET_SEED_WILDMONS
	goto Rogue_ConfigRoom_Button_SeedWildMons_5

Rogue_ConfigRoom_Button_SeedWildMons_10:
# 1485 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_SeedWildMons_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_SeedWildMons_9


Rogue_ConfigRoom_Button_SeedTrainers::
# 1493 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_SeedTrainers_Text_0
# 1495 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_TRAINERS, Rogue_ConfigRoom_Button_SeedTrainers_2
# 1501 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_SeedTrainers_1:
# 1504 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1506 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1508 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_SeedTrainers_7
# 1510 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_SeedTrainers_8
Rogue_ConfigRoom_Button_SeedTrainers_5:
# 1514 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_SeedTrainers_10
Rogue_ConfigRoom_Button_SeedTrainers_9:
# 1520 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_SeedTrainers_2:
# 1497 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_SeedTrainers_1

Rogue_ConfigRoom_Button_SeedTrainers_7:
# 1509 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_SET_SEED_TRAINERS
	goto Rogue_ConfigRoom_Button_SeedTrainers_5

Rogue_ConfigRoom_Button_SeedTrainers_8:
# 1511 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_SET_SEED_TRAINERS
	goto Rogue_ConfigRoom_Button_SeedTrainers_5

Rogue_ConfigRoom_Button_SeedTrainers_10:
# 1517 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_SeedTrainers_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_SeedTrainers_9


Rogue_ConfigRoom_Button_SeedBosses::
# 1525 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_SeedBosses_Text_0
# 1527 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_SET_SEED_BOSSES, Rogue_ConfigRoom_Button_SeedBosses_2
# 1533 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_SeedBosses_1:
# 1536 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1538 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1540 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_SeedBosses_7
# 1542 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_SeedBosses_8
Rogue_ConfigRoom_Button_SeedBosses_5:
# 1546 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_SeedBosses_10
Rogue_ConfigRoom_Button_SeedBosses_9:
# 1552 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_SeedBosses_2:
# 1529 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_SeedBosses_1

Rogue_ConfigRoom_Button_SeedBosses_7:
# 1541 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_SET_SEED_BOSSES
	goto Rogue_ConfigRoom_Button_SeedBosses_5

Rogue_ConfigRoom_Button_SeedBosses_8:
# 1543 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_SET_SEED_BOSSES
	goto Rogue_ConfigRoom_Button_SeedBosses_5

Rogue_ConfigRoom_Button_SeedBosses_10:
# 1549 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_SeedBosses_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_SeedBosses_9


Rogue_ConfigRoom_Button_KantoRoutes::
# 1558 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_KantoRoutes_Text_0
# 1560 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_KantoRoutes_2
# 1566 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_KantoRoutes_1:
# 1569 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1571 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1573 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_KantoRoutes_7
# 1575 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_KantoRoutes_8
Rogue_ConfigRoom_Button_KantoRoutes_5:
# 1579 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_KantoRoutes_10
Rogue_ConfigRoom_Button_KantoRoutes_9:
# 1585 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_KantoRoutes_2:
# 1562 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_KantoRoutes_1

Rogue_ConfigRoom_Button_KantoRoutes_7:
# 1574 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_KantoRoutes_5

Rogue_ConfigRoom_Button_KantoRoutes_8:
# 1576 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_KantoRoutes_5

Rogue_ConfigRoom_Button_KantoRoutes_10:
# 1582 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_KantoRoutes_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_KantoRoutes_9


Rogue_ConfigRoom_Button_KantoBosses::
# 1590 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_KantoBosses_Text_0
# 1592 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_KantoBosses_2
# 1598 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_KantoBosses_1:
# 1601 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1603 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1605 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_KantoBosses_7
# 1607 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_KantoBosses_8
Rogue_ConfigRoom_Button_KantoBosses_5:
# 1611 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_KantoBosses_10
Rogue_ConfigRoom_Button_KantoBosses_9:
# 1617 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_KantoBosses_2:
# 1594 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_KantoBosses_1

Rogue_ConfigRoom_Button_KantoBosses_7:
# 1606 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_KantoBosses_5

Rogue_ConfigRoom_Button_KantoBosses_8:
# 1608 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_KantoBosses_5

Rogue_ConfigRoom_Button_KantoBosses_10:
# 1614 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_KantoBosses_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_KantoBosses_9


Rogue_ConfigRoom_Button_JohtoRoutes::
# 1623 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_JohtoRoutes_Text_0
# 1625 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_JohtoRoutes_2
# 1631 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_JohtoRoutes_1:
# 1634 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1636 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1638 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_JohtoRoutes_7
# 1640 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_JohtoRoutes_8
Rogue_ConfigRoom_Button_JohtoRoutes_5:
# 1644 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_JohtoRoutes_10
Rogue_ConfigRoom_Button_JohtoRoutes_9:
# 1650 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_JohtoRoutes_2:
# 1627 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_JohtoRoutes_1

Rogue_ConfigRoom_Button_JohtoRoutes_7:
# 1639 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_JohtoRoutes_5

Rogue_ConfigRoom_Button_JohtoRoutes_8:
# 1641 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_JohtoRoutes_5

Rogue_ConfigRoom_Button_JohtoRoutes_10:
# 1647 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_JohtoRoutes_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_JohtoRoutes_9


Rogue_ConfigRoom_Button_JohtoBosses::
# 1655 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_JohtoBosses_Text_0
# 1657 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_JohtoBosses_2
# 1663 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_JohtoBosses_1:
# 1666 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1668 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1670 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_JohtoBosses_7
# 1672 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_JohtoBosses_8
Rogue_ConfigRoom_Button_JohtoBosses_5:
# 1676 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_JohtoBosses_10
Rogue_ConfigRoom_Button_JohtoBosses_9:
# 1682 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_JohtoBosses_2:
# 1659 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_JohtoBosses_1

Rogue_ConfigRoom_Button_JohtoBosses_7:
# 1671 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_JohtoBosses_5

Rogue_ConfigRoom_Button_JohtoBosses_8:
# 1673 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_JohtoBosses_5

Rogue_ConfigRoom_Button_JohtoBosses_10:
# 1679 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_JohtoBosses_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_JohtoBosses_9


Rogue_ConfigRoom_Button_HoennRoutes::
# 1687 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_HoennRoutes_Text_0
# 1689 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_HoennRoutes_2
# 1695 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_HoennRoutes_1:
# 1698 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1700 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1702 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_HoennRoutes_7
# 1704 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_HoennRoutes_8
Rogue_ConfigRoom_Button_HoennRoutes_5:
# 1708 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_HoennRoutes_10
Rogue_ConfigRoom_Button_HoennRoutes_9:
# 1714 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_HoennRoutes_2:
# 1691 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_HoennRoutes_1

Rogue_ConfigRoom_Button_HoennRoutes_7:
# 1703 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_HoennRoutes_5

Rogue_ConfigRoom_Button_HoennRoutes_8:
# 1705 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_HoennRoutes_5

Rogue_ConfigRoom_Button_HoennRoutes_10:
# 1711 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_HoennRoutes_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_HoennRoutes_9


Rogue_ConfigRoom_Button_HoennBosses::
# 1719 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	bufferstring STR_VAR_1, Rogue_ConfigRoom_Button_HoennBosses_Text_0
# 1721 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_ConfigRoom_Button_HoennBosses_2
# 1727 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, NO
Rogue_ConfigRoom_Button_HoennBosses_1:
# 1730 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PreButtonInternal
# 1732 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	switch VAR_0x8000
# 1734 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 0, Rogue_ConfigRoom_Button_HoennBosses_7
# 1736 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	case 1, Rogue_ConfigRoom_Button_HoennBosses_8
Rogue_ConfigRoom_Button_HoennBosses_5:
# 1740 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_ConfigRoom_Button_HoennBosses_10
Rogue_ConfigRoom_Button_HoennBosses_9:
# 1746 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	call Rogue_ConfigRoom_PostButtonInternal
	return

Rogue_ConfigRoom_Button_HoennBosses_2:
# 1723 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setvar VAR_0x8000, YES
	goto Rogue_ConfigRoom_Button_HoennBosses_1

Rogue_ConfigRoom_Button_HoennBosses_7:
# 1735 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_HoennBosses_5

Rogue_ConfigRoom_Button_HoennBosses_8:
# 1737 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_ConfigRoom_Button_HoennBosses_5

Rogue_ConfigRoom_Button_HoennBosses_10:
# 1743 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	msgbox Rogue_ConfigRoom_Button_HoennBosses_Text_1, MSGBOX_DEFAULT
	goto Rogue_ConfigRoom_Button_HoennBosses_9


Rogue_ConfigRoom_TalkLanette_Text_0:
# 43 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "LANETTE: Hi {PLAYER}!\p"
	.string "This is the CONFIG LAB!\p"
	.string "In here you can change settings for\n"
	.string "the next time you go on an adventure.\p"
	.string "Just step onto a switch to adjust the\n"
	.string "setting.$"

Rogue_ConfigRoom_TalkAssistant_Text_0:
# 53 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: The settings back here are\n"
	.string "for SEEDED mode!\p"
	.string "In SEEDED mode you will always\n"
	.string "encounter the same ROUTES, TRAINERS\l"
	.string "and Pokémon.\p"
	.string "I can enabled SEEDED mode for your\n"
	.string "next adventure, if you'd like?$"

Rogue_ConfigRoom_SpeakSeedMode_Text_0:
# 67 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: I can enabled SEEDED mode\n"
	.string "for your next adventure, if you'd like?$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_0:
# 79 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: Do you want to disable\n"
	.string "SEEDED mode?$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_1:
# 82 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: OK.\n"
	.string "I'll disable SEEDED mode$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_2:
# 95 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: Do you want to enable\n"
	.string "SEEDED mode for your next adventure?$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_3:
# 98 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: Please select the SEED\n"
	.string "phrases$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_4:
# 104 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: OK.\n"
	.string "I'll enable SEEDED mode using that\l"
	.string "phrase!$"

Rogue_ConfigRoom_TalkAssistantInternal_Text_5:
# 109 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ASSISTANT: Oh.\n"
	.string "Speak to me if you ever want to enable\l"
	.string "SEEDED mode$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_0:
# 135 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "The BST CUP is short for Base Stat\n"
	.string "Total Cup.\p"
	.string "The jist of it, is that you want to try\n"
	.string "and complete a full run using the\l"
	.string "weakest Pokémon you can find (The\l"
	.string "Pokémon with the lowest BST).\p"
	.string "Every Pokémon you have in your party\n"
	.string "will be considered for the score.\p"
	.string "For this Campaign, you'll have to enter\n"
	.string "a Standard Battle Adventure.\p"
	.string "Gauntlet and Rainbow mode ain't\n"
	.string "allowed!\p"
	.string "Finally, this campaign will adjust\n"
	.string "Config Lab settings and TM TOXIC is\l"
	.string "banned.\p"
	.string "(Note the score will update when\n"
	.string "starting a battle, to give you a chance\l"
	.string "to catch and release mons)$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_1:
# 136 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You'll know if the Campaign is active;\n"
	.string "it'll be announced to you at the start\l"
	.string "of the Adventure and you'll be able to\l"
	.string "view your current score in the pause\l"
	.string "menu.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_2:
# 139 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Classic Mode makes the Adventures more\n"
	.string "similar to how they use to be 'back in\l"
	.string "the ol' days'.\p"
	.string "The main feature is that you no longer\n"
	.string "get any options for encounter.\p"
	.string "You'll always have to take a specific\n"
	.string "path.\p"
	.string "This can be played in any adventure\n"
	.string "type and doesn't adjust any of the\l"
	.string "settings in the Config Lab.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_3:
# 140 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You'll know if the Campaign is active;\n"
	.string "it'll be announced to you at the start\l"
	.string "of the Adventure.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_4:
# 143 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Battle Addict makes the Adventures\n"
	.string "never create 'Route' encounters.\p"
	.string "Instead you have Strong Trainer\n"
	.string "encounters.\p"
	.string "This can be played in any adventure\n"
	.string "type and doesn't adjust any of the\l"
	.string "settings in the Config Lab.\p"
	.string "Your score is based on how many\n"
	.string "Pokémon faint during the run.\p"
	.string "The aim is to get the lowest score\n"
	.string "possible.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_5:
# 147 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Auto Battler makes it so in battles,\n"
	.string "both you and the opponent will always\l"
	.string "pick random moves.\p"
	.string "This can be played in any adventure\n"
	.string "type and doesn't adjust any of the\l"
	.string "settings in the Config Lab.\p"
	.string "Your score is based on how many\n"
	.string "Pokémon faint during the run.\p"
	.string "The aim is to get the lowest score\n"
	.string "possible.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_6:
# 151 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "LaterManner Mode was made for the\n"
	.string "streamer himself!\p"
	.string "It's..!\p"
	.string "Err...\p"
	.string "Well it is a mode...\p"
	.string "You gain score if a Pokémon faints...\p"
	.string "And well... You'll figure out the rest.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_7:
# 155 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Limited Capture Mode will provide you a\n"
	.string "limited number of POKé BALLs and your\l"
	.string "goal is simply to complete an Adventure.\p"
	.string "You will not be able to purchase or find\n"
	.string "new POKé BALLs during the Adventure\l"
	.string "and encounters which give you Pokémon,\l"
	.string "such as the Pokémon LAB, will no longer\l"
	.string "appear.\p"
	.string "This can be played in any adventure\n"
	.string "type and will force Bag Wipe in Config\l"
	.string "Lab.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_8:
# 159 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "One Hit Mode will cause all of your\n"
	.string "Pokémon to take enough damage to faint\l"
	.string "from every hit.\p"
	.string "Battles with wild Pokémon will still\n"
	.string "behave normally.\p"
	.string "Damage over time and status effects,\n"
	.string "such as poison or hail damage, will act\l"
	.string "as normal.\p"
	.string "This can be played in any adventure\n"
	.string "type and doesn't adjust any of the\l"
	.string "settings in the Config Lab.\p"
	.string "Your score is based on how many\n"
	.string "Pokémon faint during the run.\p"
	.string "The aim is to get the lowest score\n"
	.string "possible.$"

Rogue_ConfigRoom_Campaign_CampaignDescription_Text_9:
# 163 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "???$"

Rogue_ConfigRoom_Campaign_Choice_Text_0:
# 174 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You wanna give the {STR_VAR_1}\n"
	.string "Campaign a go?$"

Rogue_ConfigRoom_Campaign_Choice_Text_1:
# 179 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Play the {STR_VAR_1} Campaign?\n"
	.string "(Best Score: {STR_VAR_2})$"

Rogue_ConfigRoom_Campaign_Choice_Text_2:
# 190 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Good luck, kid!$"

Rogue_ConfigRoom_Campaign_ReplayChoice_Text_0:
# 209 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Play the {STR_VAR_1} Campaign?$"

Rogue_ConfigRoom_Campaign_NewPhrase_Text_0:
# 239 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "...\p"
	.string "What was that?$"

Rogue_ConfigRoom_Campaign_NewPhrase_Text_1:
# 250 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Whoa!\p"
	.string "That there's the secret phrase for the\n"
	.string "{STR_VAR_1} Campaign!$"

Rogue_ConfigRoom_Campaign_NewPhrase_Text_2:
# 254 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When you take part in a Campaign\n"
	.string "settings will be changed to give a\l"
	.string "unique challenge.\p"
	.string "I may swap out your Pokémon and change\n"
	.string "some of the items in your bag.\p"
	.string "I may also edit your settings in the\n"
	.string "Config Lab.\p"
	.string "Each Campaign has a specific setup,\n"
	.string "rules and restrictions.$"

Rogue_ConfigRoom_Campaign_NewPhrase_Text_3:
# 261 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You let me know, if you wanna have a go\n"
	.string "of it.$"

Rogue_ConfigRoom_Campaign_NewPhrase_Text_4:
# 266 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Nah...\n"
	.string "That ain't no mode I know about...$"

Rogue_ConfigRoom_SelectCampaign_Loop_Text_0:
# 309 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "That's all I've got I'm afraid...$"

Rogue_ConfigRoom_Campaign_Text_0:
# 326 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Hiya kid!$"

Rogue_ConfigRoom_Campaign_Text_1:
# 337 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You let me know, if you wanna give it\n"
	.string "another go.$"

Rogue_ConfigRoom_Campaign_Text_2:
# 343 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "How can I help?$"

Rogue_ConfigRoom_TalkHiddenEnterance_Text_0:
# 424 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "What's this?\p"
	.string "A hidden switch!\p"
	.string "Press the switch?$"

Rogue_ConfigRoom_TalkHiddenEnterance_Text_1:
# 428 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "WARNING!\n"
	.string "Pressing this switch will skip ahead and\l"
	.string "activate post-game content.\p"
	.string "You're recommended to complete a run\n"
	.string "normally before pressing this switch.\p"
	.string "Press the switch?$"

Rogue_ConfigRoom_MeetPokabbie_Text_0:
# 454 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "POKABBIE: Ah {PLAYER}!\p"
	.string "Welcome to my LAB!\n"
	.string "Or what I like to dub...\p"
	.string "The EXPANSION ROOM!$"

Rogue_ConfigRoom_MeetPokabbie_Text_1:
# 455 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You can use this ROOM to enable\n"
	.string "SPECIAL MODES and although there's not\l"
	.string "too many now, I'll be sure to add more in\l"
	.string "future!\p"
	.string "Feel free to look around!$"

Rogue_ConfigRoom_MeetPokabbie_Text_2:
# 459 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "???: What are you doing here!\p"
	.string "You discovered my SECRET LAB already!$"

Rogue_ConfigRoom_MeetPokabbie_Text_3:
# 464 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "I was gonna wait until you had beat the\n"
	.string "CHAMPION at least...$"

Rogue_ConfigRoom_MeetPokabbie_Text_4:
# 469 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Anyway!\p"
	.string "Where are my manners!\n"
	.string "Allow me to introduce myself!$"

Rogue_ConfigRoom_MeetPokabbie_Text_5:
# 474 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "The name's Abbie!\n"
	.string "But you can call me Pokabbie!$"

Rogue_ConfigRoom_MeetPokabbie_Text_6:
# 476 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "POKABBIE: I'm the DEV behind EMERALD\n"
	.string "ROGUE!\p"
	.string "Welcome to my LAB!\n"
	.string "Or what I like to dub...\p"
	.string "The EXPANSION ROOM!$"

Rogue_ConfigRoom_TalkPokabbie_Text_0:
# 492 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "POKABBIE: I hope you're enjoying\n"
	.string "EMERALD ROGUE!\p"
	.string "Feel free to enable any SPECIAL MODES\n"
	.string "from this room!\p"
	.string "I'll be sure to add some more in future!$"

Rogue_ConfigRoom_TalkDitto_Text_0:
# 505 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "A Ditto!\p"
	.string "Why is it here?$"

Rogue_ConfigRoom_MegaBag_Text_0:
# 570 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Would you like to take the\n"
	.string "{STR_VAR_1}?$"

Rogue_ConfigRoom_MegaBag_Text_1:
# 578 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Would you like to put back the\n"
	.string "{STR_VAR_1}?$"

Rogue_ConfigRoom_MegaBag_Text_2:
# 581 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "The {STR_VAR_1} was placed back\n"
	.string "into the bag.$"

Rogue_ConfigRoom_BufferRegionName_Text_0:
# 672 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "KANTO$"

Rogue_ConfigRoom_BufferRegionName_Text_1:
# 674 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "JOHTO$"

Rogue_ConfigRoom_BufferRegionName_Text_2:
# 676 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "HOENN$"

Rogue_ConfigRoom_BufferRegionName_Text_3:
# 678 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "SINNOH$"

Rogue_ConfigRoom_BufferRegionName_Text_4:
# 680 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "UNOVA$"

Rogue_ConfigRoom_BufferRegionName_Text_5:
# 682 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "KALOS$"

Rogue_ConfigRoom_BufferRegionName_Text_6:
# 684 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ALOLA$"

Rogue_ConfigRoom_BufferRegionName_Text_7:
# 686 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "GALAR$"

Rogue_ConfigRoom_AdjustWildGens_Regional_Text_0:
# 694 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Which REGION's DEX would you like to\n"
	.string "use?$"

Rogue_ConfigRoom_AdjustWildGens_Regional_Text_1:
# 724 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Now you will encounter Pokémon from the\n"
	.string "{STR_VAR_1} REGIONAL DEX.$"

Rogue_ConfigRoom_AdjustWildGens_National_Text_0:
# 734 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "What generation limit would you like to\n"
	.string "use?$"

Rogue_ConfigRoom_AdjustWildGens_National_Text_1:
# 764 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Now you will encounter Pokémon upto\n"
	.string "GENERATION {STR_VAR_1}.$"

Rogue_ConfigRoom_AdjustWildGens_Text_0:
# 776 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Hi there {PLAYER}!\p"
	.string "I can adjust the enabled GENERATIONs\n"
	.string "if you'd like to expand or shrink the\l"
	.string "types of Pokémon you'll encounter.$"

Rogue_ConfigRoom_AdjustWildGens_Text_1:
# 782 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You're currently using NATIONAL mode\n"
	.string "up to GEN {STR_VAR_1}.\p"
	.string "Would you like to change it?$"

Rogue_ConfigRoom_AdjustWildGens_Text_2:
# 787 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "You're currently using {STR_VAR_1}\n"
	.string "REGIONAL mode.\p"
	.string "Would you like to change it?$"

Rogue_ConfigRoom_AdjustWildGens_Text_3:
# 792 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Which mode would you like to use?$"

Rogue_ConfigRoom_AdjustWildGens_Text_4:
# 812 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "No worries!\n"
	.string "Come chat to me if you ever change your\l"
	.string "mind.$"

Rogue_ConfigRoom_PreButtonInternal_Text_0:
# 826 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "OFF$"

Rogue_ConfigRoom_PreButtonInternal_Text_1:
# 828 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ON$"

Rogue_ConfigRoom_PreButtonInternal_Text_2:
# 833 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "{STR_VAR_1} is currently\n"
	.string "'{STR_VAR_2}'$"

Rogue_ConfigRoom_PreEAHButtonInternal_Text_0:
# 866 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "EASY$"

Rogue_ConfigRoom_PreEAHButtonInternal_Text_1:
# 868 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "AVERAGE$"

Rogue_ConfigRoom_PreEAHButtonInternal_Text_2:
# 870 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "HARD$"

Rogue_ConfigRoom_Button_ExpAll_Text_0:
# 1149 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "EXP. ALL$"

Rogue_ConfigRoom_Button_ExpAll_Text_1:
# 1173 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled all Pokémon in the party\n"
	.string "will gain EXP.\n"
	.string "It is heavily recommended that you\l"
	.string "keep this ON as the game has been\l"
	.string "balanced around it.$"

Rogue_ConfigRoom_Button_CanOverLvl_Text_0:
# 1181 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ALLOW OVERLEVLING$"

Rogue_ConfigRoom_Button_CanOverLvl_Text_1:
# 1205 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When disabled will prevent Pokémon from\n"
	.string "levelling past the hight level Pokémon\l"
	.string "of the next GYM LEADER/BOSS.$"

Rogue_ConfigRoom_Button_EVGainEnabled_Text_0:
# 1213 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "ENABLE REWARD EVs$"

Rogue_ConfigRoom_Button_EVGainEnabled_Text_1:
# 1237 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled, Pokémon will gain EVs at\n"
	.string "the very end of Trainer battles.\p"
	.string "These REWARD EVs will be given based on\n"
	.string "the nature of the Pokémon gaining them.\p"
	.string "This features is intended to be a\n"
	.string "reward mechanic for not having Pokémon\l"
	.string "faint.\p"
	.string "When disabled Pokémon will always have\n"
	.string "0 EVs.\p"
	.string "This control will only affect you, the\n"
	.string "player; trainers will never have EVs,\l"
	.string "regardless of whether this is enabled\l"
	.string "or disabled.$"

Rogue_ConfigRoom_Button_BasicBag_Text_0:
# 1245 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "BAG WIPE$"

Rogue_ConfigRoom_Button_BasicBag_Text_1:
# 1269 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If enabled, when embarking on an\n"
	.string "Adventure the contents of your bag will\l"
	.string "be wiped and you will be given the\l"
	.string "starter items instead.\p"
	.string "Key items are the only pocket which will\n"
	.string "remain untouched.$"

Rogue_ConfigRoom_Button_WildMons_Text_0:
# 1277 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "OVERWORLD WILD SPAWNS$"

Rogue_ConfigRoom_Button_WildMons_Text_1:
# 1301 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If enabled, WILD Pokémon will spawn in\n"
	.string "the overworld and roam around.\p"
	.string "If disabled, WILD Pokémon will appear\n"
	.string "randomly when walking around in tall\l"
	.string "grass in the same fashion they do in\l"
	.string "older games.\p"
	.string "It is recommended to keep this setting\n"
	.string "enabled.$"

Rogue_ConfigRoom_Button_TrainerDifficulty_Text_0:
# 1309 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "TRAINER DIFFICULTY$"

Rogue_ConfigRoom_Button_TrainerDifficulty_Text_1:
# 1342 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Adjust teams/moves from very casual to\n"
	.string "very competitive.\p"
	.string "Average mode will start casual but get\n"
	.string "more competitive as you progress.\p"
	.string "The higher this difficulty the more\n"
	.string "rewards you get when returning from an\l"
	.string "adventure.$"

Rogue_ConfigRoom_Button_LegendaryDifficulty_Text_0:
# 1389 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "LEGENDARY ENCOUNTERS$"

Rogue_ConfigRoom_Button_LegendaryDifficulty_Text_1:
# 1422 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "Adjust the rate and quality of\n"
	.string "Legendary encounters may appear.\p"
	.string "Easy makes sure any Legendaries may\n"
	.string "appear fairly frequently.\p"
	.string "Average will result in few Legendary\n"
	.string "encounters and the quality of those\l"
	.string "Legendaries will get stronger the\l"
	.string "further into a run you are.\p"
	.string "Hard will result in few encounters and\n"
	.string "stronger Legendaries will not appear.$"

Rogue_ConfigRoom_Button_SeedItems_Text_0:
# 1429 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "SEED ITEMS$"

Rogue_ConfigRoom_Button_SeedItems_Text_1:
# 1453 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If disabled items will be completely\n"
	.string "RANDOM and not linked to the SEED.$"

Rogue_ConfigRoom_Button_SeedWildMons_Text_0:
# 1461 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "SEED WILD Pokémon$"

Rogue_ConfigRoom_Button_SeedWildMons_Text_1:
# 1485 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If disabled WILD Pokémon encounters\n"
	.string "will be completely RANDOM and not linked\l"
	.string "to the SEED.\p"
	.string "Note this does not affect LEGENDARY\n"
	.string "encounters.$"

Rogue_ConfigRoom_Button_SeedTrainers_Text_0:
# 1493 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "SEED TRAINERS$"

Rogue_ConfigRoom_Button_SeedTrainers_Text_1:
# 1517 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If disabled TRAINER spawns and teams\n"
	.string "will be completely RANDOM and not linked\l"
	.string "to the SEED.$"

Rogue_ConfigRoom_Button_SeedBosses_Text_0:
# 1525 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "SEED BOSSES$"

Rogue_ConfigRoom_Button_SeedBosses_Text_1:
# 1549 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "If disabled GYM LEADER teams will be\n"
	.string "completely RANDOM and not linked to the\l"
	.string "SEED.$"

Rogue_ConfigRoom_Button_KantoRoutes_Text_0:
# 1558 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "KANTO ROUTES$"

Rogue_ConfigRoom_Button_KantoRoutes_Text_1:
# 1582 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled you may start to\n"
	.string "encounter routes from the Kanto region\l"
	.string "during adventures.$"

Rogue_ConfigRoom_Button_KantoBosses_Text_0:
# 1590 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "KANTO LEADERS$"

Rogue_ConfigRoom_Button_KantoBosses_Text_1:
# 1614 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled, leaders from the Kanto\n"
	.string "region may start appearing for Mighty\l"
	.string "trainer battles.\p"
	.string "(This setting is ignored for Rainbow\n"
	.string "mode)$"

Rogue_ConfigRoom_Button_JohtoRoutes_Text_0:
# 1623 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "JOHTO ROUTES$"

Rogue_ConfigRoom_Button_JohtoRoutes_Text_1:
# 1647 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled you may start to\n"
	.string "encounter routes from the Johto region\l"
	.string "during adventures.$"

Rogue_ConfigRoom_Button_JohtoBosses_Text_0:
# 1655 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "JOHTO LEADERS$"

Rogue_ConfigRoom_Button_JohtoBosses_Text_1:
# 1679 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled, leaders from the Johto\n"
	.string "region may start appearing for Mighty\l"
	.string "trainer battles.\p"
	.string "(This setting is ignored for Rainbow\n"
	.string "mode)$"

Rogue_ConfigRoom_Button_HoennRoutes_Text_0:
# 1687 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "HOENN ROUTES$"

Rogue_ConfigRoom_Button_HoennRoutes_Text_1:
# 1711 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled you may start to\n"
	.string "encounter routes from the Hoenn region\l"
	.string "during adventures.$"

Rogue_ConfigRoom_Button_HoennBosses_Text_0:
# 1719 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "HOENN LEADERS$"

Rogue_ConfigRoom_Button_HoennBosses_Text_1:
# 1743 "data/maps/Rogue_Hub_Interior_ConfigRoom/scripts.pory"
	.string "When enabled, leaders from the Hoenn\n"
	.string "region may start appearing for Mighty\l"
	.string "trainer battles.\p"
	.string "(This setting is ignored for Rainbow\n"
	.string "mode)$"
