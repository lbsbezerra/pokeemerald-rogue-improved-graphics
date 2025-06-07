@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_DayCare/map.json
@

Rogue_Area_DayCare_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORK_TABLE, 16, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, 0
	object_event 2, OBJ_EVENT_GFX_VAR_0, 27, 10, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_DayCare_SwapMonGender, FLAG_TEMP_4
	object_event 3, OBJ_EVENT_GFX_OLD_WOMAN, 6, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_DayCare_SpeakDaycareLady, 0
	object_event 4, OBJ_EVENT_GFX_OLD_MAN_2, 10, 10, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_DayCare_TalkEggBreeder, FLAG_TEMP_1
	object_event 5, OBJ_EVENT_GFX_FOLLOW_MON_0, 15, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, FLAG_TEMP_5
	object_event 6, OBJ_EVENT_GFX_FOLLOW_MON_2, 9, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, FLAG_TEMP_7
	object_event 7, OBJ_EVENT_GFX_FOLLOW_MON_1, 10, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, FLAG_TEMP_6
	object_event 8, OBJ_EVENT_GFX_PHONE_BOOTH, 2, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_DayCare_InteractWithPhoneBooth, FLAG_TEMP_2
	object_event 9, OBJ_EVENT_GFX_PC_STAND, 4, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithPC, 0

Rogue_Area_DayCare_MapWarps:
	warp_def 19, 0, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 20, 0, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 31, 13, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 31, 14, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 20, 17, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 19, 17, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 0, 14, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 0, 13, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 16, 10, 0, 0, MAP_ROGUE_AREA_LABS

Rogue_Area_DayCare_MapEvents::
	map_events Rogue_Area_DayCare_ObjectEvents, Rogue_Area_DayCare_MapWarps, NULL, NULL

