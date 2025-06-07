@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Boss_13/map.json
@

Rogue_Boss_13_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 8, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_DITTO_DOLL, 8, 3, 4, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

Rogue_Boss_13_MapWarps:
	warp_def 8, 22, 3, 1, MAP_ROGUE_BOSS_8

Rogue_Boss_13_MapCoordEvents:
	coord_event 7, 12, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss13
	coord_event 8, 12, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss13
	coord_event 9, 12, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_Battle_Boss13

Rogue_Boss_13_MapEvents::
	map_events Rogue_Boss_13_ObjectEvents, Rogue_Boss_13_MapWarps, Rogue_Boss_13_MapCoordEvents, NULL

