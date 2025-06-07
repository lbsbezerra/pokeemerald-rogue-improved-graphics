RogueMP_Common_ExtractYesNoAnswer::
# 8 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueMP_Common_ExtractYesNoAnswer_2
RogueMP_Common_ExtractYesNoAnswer_1:
	return

RogueMP_Common_ExtractYesNoAnswer_2:
# 10 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_0x8000, 1
	goto_if_ne RogueMP_Common_ExtractYesNoAnswer_4
	goto RogueMP_Common_ExtractYesNoAnswer_1

RogueMP_Common_ExtractYesNoAnswer_4:
# 12 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	setvar VAR_RESULT, NO
	goto RogueMP_Common_ExtractYesNoAnswer_1


RogueMP_Common_GrabRemoteMon::
# 20 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	copyvar VAR_0x8004, VAR_0x800B
# 21 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_MultiplayerRequestMon
# 23 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message RogueMP_Common_GrabRemoteMon_Text_0
# 24 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_WaitForRemoteResponse
# 25 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 26 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	closemessage
	return


Rogue_InteractMultiplayerPlayer::
# 31 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	lock
# 33 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message RogueMP_Common_GrabRemoteMon_Text_0
# 34 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	multiplayerpushstatusawait MP_PLAYER_STATUS_TALK_TO_PLAYER, TRUE
# 35 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 37 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_InteractMultiplayerPlayer_2
Rogue_InteractMultiplayerPlayer_1:
# 78 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_InteractMultiplayerPlayer_5
Rogue_InteractMultiplayerPlayer_4:
# 83 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	multiplayerpushstatus MP_PLAYER_STATUS_NONE
# 84 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	release
	return

Rogue_InteractMultiplayerPlayer_2:
# 39 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_InteractMultiplayerPlayer_Text_0
# 41 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_InteractMultiplayerPlayer_Text_1, MSGBOX_YESNO
# 42 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_InteractMultiplayerPlayer_7
	goto Rogue_InteractMultiplayerPlayer_1

Rogue_InteractMultiplayerPlayer_5:
# 80 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_InteractMultiplayerPlayer_Text_3
	goto Rogue_InteractMultiplayerPlayer_4

Rogue_InteractMultiplayerPlayer_7:
# 44 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message RogueMP_Common_GrabRemoteMon_Text_0
# 45 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	multiplayerpushstatusawait MP_PLAYER_STATUS_BEGIN_TRADE, TRUE
# 46 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 48 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_InteractMultiplayerPlayer_9
	goto Rogue_InteractMultiplayerPlayer_1

Rogue_InteractMultiplayerPlayer_9:
# 50 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_InteractMultiplayerPlayer_Text_2
# 51 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special ChoosePartyMon
# 52 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 54 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 56 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message RogueMP_Common_GrabRemoteMon_Text_0
# 57 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	callnative RogueMP_WaitTradeSlotResponse
# 58 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 60 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_0x800A, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_InteractMultiplayerPlayer_11
# 60 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_0x800B, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_InteractMultiplayerPlayer_11
# 66 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	call RogueMP_Common_GrabRemoteMon
# 68 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_PrepareForTrade
# 69 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special DoInGameTradeScene
# 70 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 72 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	setvar VAR_RESULT, YES
	goto Rogue_InteractMultiplayerPlayer_1

Rogue_InteractMultiplayerPlayer_11:
# 62 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	setvar VAR_RESULT, NO
	goto Rogue_InteractMultiplayerPlayer_1


Rogue_BeginRemoteInteractMultiplayerPlayer::
# 89 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	lock
# 91 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message Rogue_BeginRemoteInteractMultiplayerPlayer_Text_0
# 92 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_WaitForNextPlayerStatusCancellable
# 93 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 95 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BeginRemoteInteractMultiplayerPlayer_2
Rogue_BeginRemoteInteractMultiplayerPlayer_1:
# 124 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_BeginRemoteInteractMultiplayerPlayer_5
Rogue_BeginRemoteInteractMultiplayerPlayer_4:
# 129 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	multiplayerpushstatus MP_PLAYER_STATUS_NONE
# 130 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	release
	return

Rogue_BeginRemoteInteractMultiplayerPlayer_2:
# 98 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_BeginRemoteInteractMultiplayerPlayer_Text_1
# 99 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special ChoosePartyMon
# 100 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 102 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 104 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	message RogueMP_Common_GrabRemoteMon_Text_0
# 105 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	callnative RogueMP_WaitTradeSlotResponse
# 106 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 108 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_0x800A, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_BeginRemoteInteractMultiplayerPlayer_7
# 108 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	compare VAR_0x800B, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_BeginRemoteInteractMultiplayerPlayer_7
# 114 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	call RogueMP_Common_GrabRemoteMon
# 116 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_PrepareForTrade
# 117 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special DoInGameTradeScene
# 118 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	waitstate
# 120 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	setvar VAR_RESULT, YES
	goto Rogue_BeginRemoteInteractMultiplayerPlayer_1

Rogue_BeginRemoteInteractMultiplayerPlayer_5:
# 126 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	msgbox Rogue_BeginRemoteInteractMultiplayerPlayer_Text_2
	goto Rogue_BeginRemoteInteractMultiplayerPlayer_4

Rogue_BeginRemoteInteractMultiplayerPlayer_7:
# 110 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	setvar VAR_RESULT, NO
	goto Rogue_BeginRemoteInteractMultiplayerPlayer_1


Rogue_InteractMultiplayerFollowMon::
# 135 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	lock
# 137 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	special Rogue_GetFollowMonSpecies
# 138 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
# 140 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	release
	return


RogueMP_Common_GrabRemoteMon_Text_0:
# 23 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "Waiting for other player…\n"
	.string "… … B Button: Cancel$"

Rogue_InteractMultiplayerPlayer_Text_0:
# 39 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "{RIVAL}: Hi, I'm {RIVAL}!$"

Rogue_InteractMultiplayerPlayer_Text_1:
# 41 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "Would you like to trade Pokémon?$"

Rogue_InteractMultiplayerPlayer_Text_2:
# 50 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "Which Pokémon would you like to trade?$"

Rogue_InteractMultiplayerPlayer_Text_3:
# 80 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "Maybe some other time.$"

Rogue_BeginRemoteInteractMultiplayerPlayer_Text_0:
# 91 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "{RIVAL}: Hi, Let's talk!\n"
	.string "… … B Button: Cancel$"

Rogue_BeginRemoteInteractMultiplayerPlayer_Text_1:
# 98 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "Let's trade Pokémon!\n"
	.string "Which Pokémon would you like to Trade?$"

Rogue_BeginRemoteInteractMultiplayerPlayer_Text_2:
# 126 "data/scripts/Rogue/Rogue_Multiplayer.pory"
	.string "{RIVAL}: Bye for now!$"
