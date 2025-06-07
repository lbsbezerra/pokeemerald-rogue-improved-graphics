Rogue_Interior_PokeConnect_MapScripts::
# 5 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_PokeConnect_OnMapLoad
	.byte 0


Rogue_Interior_PokeConnect_OnMapLoad::
# 10 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	goto_if_set FLAG_ROGUE_ASSISTANT_TUTORIAL, Rogue_Interior_PokeConnect_OnMapLoad_1
# 16 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

Rogue_Interior_PokeConnect_OnMapLoad_1:
# 12 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Rogue_Interior_PokeConnect_TalkMultiplayer::
# 22 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	lock
# 24 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Rogue_IsMultiplayerActive
# 25 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_2
# 47 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_4, MSGBOX_DEFAULT
# 49 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_5
# 51 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Rogue_Common_WaitForRogueAssistant
# 53 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_10
Rogue_Interior_PokeConnect_TalkMultiplayer_9:
# 96 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_14
Rogue_Interior_PokeConnect_TalkMultiplayer_1:
# 102 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	release
	return

Rogue_Interior_PokeConnect_TalkMultiplayer_2:
# 27 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Rogue_IsMultiplayerHost
# 30 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_6
# 36 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_2, MSGBOX_YESNO
Rogue_Interior_PokeConnect_TalkMultiplayer_5:
# 39 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_12
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_1

Rogue_Interior_PokeConnect_TalkMultiplayer_6:
# 32 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_1, MSGBOX_YESNO
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_5

Rogue_Interior_PokeConnect_TalkMultiplayer_10:
# 55 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Common_EventScript_SaveGame
# 56 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_16
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_12:
# 41 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Rogue_CloseMultiplayer
# 42 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_3, MSGBOX_DEFAULT
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_1

Rogue_Interior_PokeConnect_TalkMultiplayer_14:
# 98 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_10
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_1

Rogue_Interior_PokeConnect_TalkMultiplayer_16:
# 58 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	message Rogue_Interior_PokeConnect_TalkMultiplayer_Text_6
# 59 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitmessage
# 61 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	multichoice 16, 6, MULTI_LINK_HOST_JOIN, FALSE
# 63 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	switch VAR_RESULT
# 65 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 0, Rogue_Interior_PokeConnect_TalkMultiplayer_19
# 77 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 1, Rogue_Interior_PokeConnect_TalkMultiplayer_20
# 89 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 2, Rogue_Interior_PokeConnect_TalkMultiplayer_21
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_19:
# 66 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	message Rogue_Interior_PokeConnect_TalkMultiplayer_Text_7
# 67 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitmessage
# 69 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Rogue_JoinMultiplayer
# 70 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitstate
# 72 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_22
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_20:
# 78 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	message Rogue_Interior_PokeConnect_TalkMultiplayer_Text_7
# 79 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitmessage
# 81 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Rogue_HostMultiplayer
# 82 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitstate
# 84 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_TalkMultiplayer_24
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_21:
# 90 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_RESULT, FALSE
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_22:
# 74 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_8
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9

Rogue_Interior_PokeConnect_TalkMultiplayer_24:
# 86 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkMultiplayer_Text_9
	goto Rogue_Interior_PokeConnect_TalkMultiplayer_9


Rogue_Interior_PokeConnect_TalkNurseBox::
# 107 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	lock
# 109 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkNurseBox_Text_0
# 111 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_RESULT, 1
Rogue_Interior_PokeConnect_TalkNurseBox_2:
# 113 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rogue_Interior_PokeConnect_TalkNurseBox_3
# 136 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkNurseBox_Text_3
# 137 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	release
	return

Rogue_Interior_PokeConnect_TalkNurseBox_3:
# 115 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	message Rogue_Interior_PokeConnect_TalkNurseBox_Text_1
# 116 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitmessage
# 118 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 120 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 0, Rogue_Interior_PokeConnect_TalkNurseBox_6
# 126 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 1, Rogue_Interior_PokeConnect_TalkNurseBox_7
# 127 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_PokeConnect_TalkNurseBox_7
# 130 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	case 2, Rogue_Interior_PokeConnect_TalkNurseBox_8
	goto Rogue_Interior_PokeConnect_TalkNurseBox_2

Rogue_Interior_PokeConnect_TalkNurseBox_6:
# 123 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Rogue_Interior_PokeConnect_ConnectHomeBox
# 124 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_RESULT, 0
	goto Rogue_Interior_PokeConnect_TalkNurseBox_2

Rogue_Interior_PokeConnect_TalkNurseBox_7:
# 128 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_RESULT, 0
	goto Rogue_Interior_PokeConnect_TalkNurseBox_2

Rogue_Interior_PokeConnect_TalkNurseBox_8:
# 131 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_TalkNurseBox_Text_2, MSGBOX_DEFAULT
# 132 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_RESULT, 1
	goto Rogue_Interior_PokeConnect_TalkNurseBox_2


Rogue_Interior_PokeConnect_ConnectHomeBox::
# 142 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Rogue_Common_WaitForRogueAssistant
# 144 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_PokeConnect_ConnectHomeBox_1
	return

Rogue_Interior_PokeConnect_ConnectHomeBox_1:
# 146 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Common_EventScript_SaveGame
# 147 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_PokeConnect_ConnectHomeBox_3
	return

Rogue_Interior_PokeConnect_ConnectHomeBox_3:
# 149 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	special Special_ViewAssistantBox
# 150 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	waitstate
# 152 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	call Common_EventScript_ForceSaveGame
	return


Rogue_Interior_PokeConnect_Tutorial::
# 159 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setflag FLAG_ROGUE_ASSISTANT_TUTORIAL
# 160 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	setvar VAR_TEMP_0, 1
# 162 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	lock
# 163 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	msgbox Rogue_Interior_PokeConnect_Tutorial_Text_0
# 164 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	release
	return


Rogue_Interior_PokeConnect_TalkMultiplayer_Text_0:
# 27 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Hello {PLAYER}!\p"
	.string "I hope you've been enjoying your\n"
	.string "Multiplayer Adventure!$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_1:
# 32 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Would you like to stop Hosting?$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_2:
# 36 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Would you like to Disconnect and return\n"
	.string "to home?$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_3:
# 42 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "There you are!\p"
	.string "I hope you enjoyed your Multiplayer\n"
	.string "Adventures!$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_4:
# 47 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Hello {PLAYER}!\p"
	.string "I can help you to setup Multiplayer\n"
	.string "Adventures for you and a friend!$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_5:
# 49 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "{COLOR RED}WARNING!\n"
	.string "{COLOR DARK_GRAY}This feature is still in Alpha.\p"
	.string "It is still in active development, as a\n"
	.string "result, some features may not work\l"
	.string "correctly/be missing.\p"
	.string "Please regularly save your game and\n"
	.string "make save backups, while using this\l"
	.string "feature.$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_6:
# 58 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Please decide which of you will become\n"
	.string "the Group Host.\p"
	.string "The other players must then choose\n"
	.string "Join Group.$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_7:
# 66 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Please setup in Rogue Assistant now\n"
	.string "… … B Button: Cancel$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_8:
# 74 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "All set!\n"
	.string "Have fun on your Adventures!$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_9:
# 86 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "All set!\n"
	.string "A friend should now be able to join you\l"
	.string "for Adventures!$"

Rogue_Interior_PokeConnect_TalkMultiplayer_Text_10:
# 98 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "If you change your mind, please feel\n"
	.string "free to speak with me again.$"

Rogue_Interior_PokeConnect_TalkNurseBox_Text_0:
# 109 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Hello {PLAYER}!$"

Rogue_Interior_PokeConnect_TalkNurseBox_Text_1:
# 115 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Would you like to access the Extended\n"
	.string "Pokémon Storage?$"

Rogue_Interior_PokeConnect_TalkNurseBox_Text_2:
# 131 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "By connecting to RogueAssistant, you\n"
	.string "may access an extended Pokémon\l"
	.string "Storage similar to Pokémon Home,\l"
	.string "allowing you to store many more\l"
	.string "Pokémon!$"

Rogue_Interior_PokeConnect_TalkNurseBox_Text_3:
# 136 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "Take care!$"

Rogue_Interior_PokeConnect_Tutorial_Text_0:
# 163 "data/maps/Rogue_Interior_PokeConnect/scripts.pory"
	.string "This building grants access to external\n"
	.string "features such as Extended Storage and\l"
	.string "Multiplayer.\p"
	.string "Currently, these features are only\n"
	.string "supported when playing using mGBA on\l"
	.string "Windows PC.\p"
	.string "In order to make use of these features,\n"
	.string "you will need to download a helper\l"
	.string "program called Rogue Assistant and\l"
	.string "connect it to your emulator.\p"
	.string "Downloaded from:\n"
	.string "{COLOR BLUE}https://rogue.assist.pokabbie.com\p"
	.string "{COLOR RED}Never download from other links,\n"
	.string "otherwise you may open yourself up to\l"
	.string "installing viruses!$"
