Rogue_Template_Homes_MapScripts::
	.byte 0


Rogue_Template_Homes_CommonFormChange::
# 7 "data/maps/Rogue_Template_Homes/scripts.pory"
	lock
# 9 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8004, 0
# 10 "data/maps/Rogue_Template_Homes/scripts.pory"
	special BufferMonNickname
# 12 "data/maps/Rogue_Template_Homes/scripts.pory"
	special Rogue_TryInteractFormChange
# 14 "data/maps/Rogue_Template_Homes/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Template_Homes_CommonFormChange_2
# 21 "data/maps/Rogue_Template_Homes/scripts.pory"
	msgbox Rogue_Template_Homes_CommonFormChange_Text_1
Rogue_Template_Homes_CommonFormChange_1:
# 24 "data/maps/Rogue_Template_Homes/scripts.pory"
	release
	return

Rogue_Template_Homes_CommonFormChange_2:
# 16 "data/maps/Rogue_Template_Homes/scripts.pory"
	msgbox Rogue_Template_Homes_CommonFormChange_Text_0
# 17 "data/maps/Rogue_Template_Homes/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Template_Homes_CommonFormChange_1


Rogue_Template_Homes_TalkRotomFan::
# 36 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8005, SPECIES_ROTOM_FAN
# 37 "data/maps/Rogue_Template_Homes/scripts.pory"
	call Rogue_Template_Homes_CommonFormChange
	return


Rogue_Template_Homes_TalkRotomFrost::
# 51 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8005, SPECIES_ROTOM_FROST
# 52 "data/maps/Rogue_Template_Homes/scripts.pory"
	call Rogue_Template_Homes_CommonFormChange
	return


Rogue_Template_Homes_TalkRotomHeat::
# 66 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8005, SPECIES_ROTOM_HEAT
# 67 "data/maps/Rogue_Template_Homes/scripts.pory"
	call Rogue_Template_Homes_CommonFormChange
	return


Rogue_Template_Homes_TalkRotomMow::
# 81 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8005, SPECIES_ROTOM_MOW
# 82 "data/maps/Rogue_Template_Homes/scripts.pory"
	call Rogue_Template_Homes_CommonFormChange
	return


Rogue_Template_Homes_TalkRotomWash::
# 96 "data/maps/Rogue_Template_Homes/scripts.pory"
	setvar VAR_0x8005, SPECIES_ROTOM_WASH
# 97 "data/maps/Rogue_Template_Homes/scripts.pory"
	call Rogue_Template_Homes_CommonFormChange
	return


Rogue_Template_Homes_CommonFormChange_Text_0:
# 16 "data/maps/Rogue_Template_Homes/scripts.pory"
	.string "{STR_VAR_1} is reacting!$"

Rogue_Template_Homes_CommonFormChange_Text_1:
# 21 "data/maps/Rogue_Template_Homes/scripts.pory"
	.string "{STR_VAR_1} doesn't seem\n"
	.string "interested in it.$"
