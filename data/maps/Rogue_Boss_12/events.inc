@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Boss_12/map.json
@

Rogue_Boss_12_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

Rogue_Boss_12_MapWarps:
	warp_def 6, 28, 3, 1, MAP_ROGUE_BOSS_8

Rogue_Boss_12_MapCoordEvents:
	coord_event 5, 20, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_EnterBattle
	coord_event 6, 20, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_EnterBattle
	coord_event 7, 20, 0, VAR_ROGUE_ALWAYS_ZERO, 0, Rogue_EnterBattle

Rogue_Boss_12_MapEvents::
	map_events Rogue_Boss_12_ObjectEvents, Rogue_Boss_12_MapWarps, Rogue_Boss_12_MapCoordEvents, NULL

