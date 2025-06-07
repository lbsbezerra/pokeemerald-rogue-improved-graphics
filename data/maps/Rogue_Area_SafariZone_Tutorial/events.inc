@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_SafariZone_Tutorial/map.json
@

Rogue_Area_SafariZone_Tutorial_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FOLLOW_MON_0, 12, 16, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Area_SafariZone_Tutorial_InteractWildFollowMon, FLAG_TEMP_1
	object_event 2, OBJ_EVENT_GFX_FOLLOW_MON_1, 24, 17, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Area_SafariZone_Tutorial_InteractWildFollowMon, FLAG_TEMP_1
	object_event 3, OBJ_EVENT_GFX_FOLLOW_MON_2, 16, 23, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Area_SafariZone_Tutorial_InteractWildFollowMon, FLAG_TEMP_1
	object_event 4, OBJ_EVENT_GFX_MISC_PROFESSOR_ELM, 18, 13, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_SafariZone_Tutorial_TalkBirch, 0
	object_event 5, OBJ_EVENT_GFX_MISC_BACKPACKER_F, 16, 19, 3, MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT, 3, 3, TRAINER_TYPE_NONE, 0, Rogue_Area_SafariZone_Tutorial_TalkRuinManiac, FLAG_TEMP_1

Rogue_Area_SafariZone_Tutorial_MapWarps:
	warp_def 1, 15, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL
	warp_def 1, 16, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL
	warp_def 17, 30, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL
	warp_def 18, 30, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL
	warp_def 36, 15, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL
	warp_def 36, 16, 0, 0, MAP_ROGUE_AREA_SAFARI_ZONE_TUTORIAL

Rogue_Area_SafariZone_Tutorial_MapCoordEvents:
	coord_event 0, 15, 0, VAR_TEMP_0, 2, Rogue_Area_SafariZone_TryExitWest
	coord_event 0, 16, 0, VAR_TEMP_0, 2, Rogue_Area_SafariZone_TryExitWest
	coord_event 17, 31, 0, VAR_TEMP_0, 0, Rogue_Area_SafariZone_TryExitSouth
	coord_event 18, 31, 0, VAR_TEMP_0, 0, Rogue_Area_SafariZone_TryExitSouth
	coord_event 37, 15, 0, VAR_TEMP_0, 3, Rogue_Area_SafariZone_TryExitEast
	coord_event 37, 16, 0, VAR_TEMP_0, 3, Rogue_Area_SafariZone_TryExitEast

Rogue_Area_SafariZone_Tutorial_MapEvents::
	map_events Rogue_Area_SafariZone_Tutorial_ObjectEvents, Rogue_Area_SafariZone_Tutorial_MapWarps, Rogue_Area_SafariZone_Tutorial_MapCoordEvents, NULL

