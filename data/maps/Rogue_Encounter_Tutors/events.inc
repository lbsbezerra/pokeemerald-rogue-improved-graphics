@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Tutors/map.json
@

Rogue_Encounter_Tutors_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CONTEST_JUDGE, 16, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_RestStop_RandomMan, FLAG_ROGUE_RANDOM_TRADE_DISABLED
	object_event 2, OBJ_EVENT_GFX_BLACK_BELT, 10, 13, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Tutor_TutorMoveLearn, 0
	object_event 3, OBJ_EVENT_GFX_SPENSER, 8, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Tutor_MoveDelete, 0
	object_event 4, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 16, 10, 4, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_HeldItems, 0
	object_event 5, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 16, 9, 4, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_BattleEnhancers, 0
	object_event 6, OBJ_EVENT_GFX_MISC_NPC_MYSTERY_GIFT, 18, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_RareHeldItems, FLAG_ROGUE_RARE_ITEM_MART_DISABLED
	object_event 7, OBJ_EVENT_GFX_TRUCK, 18, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 8, OBJ_EVENT_GFX_WALLY, 14, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Battle_Rival, FLAG_ROGUE_RIVAL_DISABLED
	object_event 9, OBJ_EVENT_GFX_MISC_NPC_TUTOR, 11, 10, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_ShowSetRecommendation, 0

Rogue_Encounter_Tutors_MapWarps:
	warp_def 14, 19, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING
	warp_def 14, 7, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING

Rogue_Encounter_Tutors_MapEvents::
	map_events Rogue_Encounter_Tutors_ObjectEvents, Rogue_Encounter_Tutors_MapWarps, NULL, NULL

