@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_PokeConnect/map.json
@

Rogue_Interior_PokeConnect_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 25, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_PokeConnect_TalkMultiplayer, 0
	object_event 2, OBJ_EVENT_GFX_TEALA, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_PokeConnect_TalkNurseBox, 0

Rogue_Interior_PokeConnect_MapWarps:
	warp_def 6, 8, 0, 9, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 7, 8, 0, 9, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 1, 5, 0, 3, MAP_ROGUE_INTERIOR_POKE_CONNECT
	warp_def 23, 6, 0, 2, MAP_ROGUE_INTERIOR_POKE_CONNECT

Rogue_Interior_PokeConnect_MapCoordEvents:
	coord_event 6, 7, 0, VAR_TEMP_0, 0, Rogue_Interior_PokeConnect_Tutorial
	coord_event 7, 7, 0, VAR_TEMP_0, 0, Rogue_Interior_PokeConnect_Tutorial
	coord_event 5, 8, 0, VAR_TEMP_0, 0, Rogue_Interior_PokeConnect_Tutorial
	coord_event 8, 8, 0, VAR_TEMP_0, 0, Rogue_Interior_PokeConnect_Tutorial

Rogue_Interior_PokeConnect_MapEvents::
	map_events Rogue_Interior_PokeConnect_ObjectEvents, Rogue_Interior_PokeConnect_MapWarps, Rogue_Interior_PokeConnect_MapCoordEvents, NULL

