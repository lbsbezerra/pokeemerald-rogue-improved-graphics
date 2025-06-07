@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_BillsLab/map.json
@

Rogue_Interior_BillsLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PC_STAND, 8, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_BillsLab_TalkPC, 0
	object_event 2, OBJ_EVENT_GFX_MOVING_BOX, 11, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_BATTLE_STATUE, 9, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_BATTLE_STATUE, 7, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_BILL, 3, 6, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_BillsLab_TalkBill, 0
	object_event 6, OBJ_EVENT_GFX_FOLLOW_MON_0, 11, 8, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, 0

Rogue_Interior_BillsLab_MapWarps:
	warp_def 8, 13, 0, 14, MAP_ROGUE_AREA_LABS
	warp_def 9, 13, 0, 14, MAP_ROGUE_AREA_LABS

Rogue_Interior_BillsLab_MapCoordEvents:
	coord_event 7, 10, 0, VAR_TEMP_0, 1, Rogue_Interior_BillsLab_MeetBillLeft
	coord_event 8, 10, 0, VAR_TEMP_0, 1, Rogue_Interior_BillsLab_MeetBillCentre
	coord_event 9, 10, 0, VAR_TEMP_0, 1, Rogue_Interior_BillsLab_MeetBillRight

Rogue_Interior_BillsLab_MapEvents::
	map_events Rogue_Interior_BillsLab_ObjectEvents, Rogue_Interior_BillsLab_MapWarps, Rogue_Interior_BillsLab_MapCoordEvents, NULL

