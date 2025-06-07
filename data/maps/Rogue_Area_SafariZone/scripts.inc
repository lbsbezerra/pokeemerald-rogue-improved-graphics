Rogue_Area_SafariZone_MapScripts::
	.byte 0


Rogue_Area_SafariZone_TalkSign::
# 5 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	lock
# 7 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	msgbox Rogue_Area_SafariZone_TalkSign_Text_0
# 9 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	special RogueSafari_CompactEmptyEntries
# 10 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	special Special_SelectSafariMonInPokedex
# 11 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	waitstate
# 13 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	release
	return


Rogue_Area_SafariZone_TalkSign_Text_0:
# 7 "data/maps/Rogue_Area_SafariZone/scripts.pory"
	.string "It's a sign which lists all of the\n"
	.string "Pokémon that have been recently\l"
	.string "sighted in the Safari Area!$"
