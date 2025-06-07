@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Shops/map.json
@

Rogue_Encounter_Shops_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CONTEST_JUDGE, 4, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_RestStop_RandomMan, FLAG_ROGUE_RANDOM_TRADE_DISABLED
	object_event 2, OBJ_EVENT_GFX_MART_EMPLOYEE, 2, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Balls, 0
	object_event 3, OBJ_EVENT_GFX_MART_EMPLOYEE, 12, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Medicine, 0
	object_event 4, OBJ_EVENT_GFX_MART_EMPLOYEE, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_TMs, 0
	object_event 5, OBJ_EVENT_GFX_WALLY, 7, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Battle_Rival, FLAG_ROGUE_RIVAL_DISABLED

Rogue_Encounter_Shops_MapWarps:
	warp_def 7, 10, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING
	warp_def 7, 1, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING

Rogue_Encounter_Shops_MapBGEvents:
	bg_sign_event 5, 2, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Encounter_Shops_TalkVendingMachine

Rogue_Encounter_Shops_MapEvents::
	map_events Rogue_Encounter_Shops_ObjectEvents, Rogue_Encounter_Shops_MapWarps, NULL, Rogue_Encounter_Shops_MapBGEvents

