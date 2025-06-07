@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_SafariZone/map.json
@

Rogue_Area_SafariZone_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORK_TABLE, 4, 14, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, FLAG_ROGUE_HIDE_WORKBENCHES
	object_event 2, OBJ_EVENT_GFX_WORK_TABLE, 34, 14, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, FLAG_ROGUE_HIDE_WORKBENCHES

Rogue_Area_SafariZone_MapWarps:
	warp_def 0, 15, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 0, 16, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 17, 31, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 18, 31, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 37, 15, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 37, 16, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE
	warp_def 18, 5, 0, 0, MAP_ROGUE_INTERIOR_SAFARI_CAVE
	warp_def 18, 19, 0, 0, MAP_ROGUE_INTERIOR_SAFARI_CAVE

Rogue_Area_SafariZone_MapBGEvents:
	bg_sign_event 20, 11, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Area_SafariZone_TalkSign

Rogue_Area_SafariZone_MapEvents::
	map_events Rogue_Area_SafariZone_ObjectEvents, Rogue_Area_SafariZone_MapWarps, NULL, Rogue_Area_SafariZone_MapBGEvents

