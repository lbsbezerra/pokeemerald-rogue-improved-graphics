@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Boss_11/map.json
@

Rogue_Boss_11_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

Rogue_Boss_11_MapWarps:
	warp_def 6, 27, 3, 1, MAP_ROGUE_BOSS_8

Rogue_Boss_11_MapCoordEvents:
	coord_event 6, 19, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss11
	coord_event 7, 19, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss11
	coord_event 5, 19, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss11

Rogue_Boss_11_MapEvents::
	map_events Rogue_Boss_11_ObjectEvents, Rogue_Boss_11_MapWarps, Rogue_Boss_11_MapCoordEvents, NULL

