@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_HomeUpper/map.json
@

Rogue_Interior_HomeUpper_MapWarps:
	warp_def 8, 1, 0, 2, MAP_ROGUE_INTERIOR_HOME

Rogue_Interior_HomeUpper_MapCoordEvents:
	coord_event 1, 7, 0, VAR_TEMP_0, 0, Rogue_Interior_Home_EnterBed

Rogue_Interior_HomeUpper_MapBGEvents:
	bg_sign_event 1, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Interior_Home_TurnOnPC
	bg_sign_event 3, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Interior_Home_NoteBook
	bg_sign_event 5, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Interior_Home_ChangeClothes

Rogue_Interior_HomeUpper_MapEvents::
	map_events NULL, Rogue_Interior_HomeUpper_MapWarps, Rogue_Interior_HomeUpper_MapCoordEvents, Rogue_Interior_HomeUpper_MapBGEvents

