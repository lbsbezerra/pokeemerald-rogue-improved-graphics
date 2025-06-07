# 1 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"

# 2 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"

# 4 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
Rogue_Hub_PokemonCentre_MapScripts::
# 5 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	.byte 0
# 6 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"

# 7 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
Rogue_Hub_PokemonCentre_EventScript_Nurse::
# 8 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 9 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	waitmessage
# 11 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	waitbuttonpress
# 12 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	release
# 13 "data/maps/Rogue_Hub_PokemonCentre/scripts.pory"
	end
