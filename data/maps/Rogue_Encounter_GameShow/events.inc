@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_GameShow/map.json
@

Rogue_Encounter_GameShow_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CONTEST_JUDGE, 7, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_1
	object_event 2, OBJ_EVENT_GFX_ITEM_POKE_BALL, 8, 4, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interact_GiveReward, FLAG_ROGUE_HIDE_GAMESHOW_REWARD
	object_event 3, OBJ_EVENT_GFX_FAT_MAN, 12, 7, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_EXPERT_F, 2, 10, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_GIRL_1, 12, 6, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 6, OBJ_EVENT_GFX_BUG_CATCHER, 4, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 7, OBJ_EVENT_GFX_GIRL_3, 2, 7, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 8, OBJ_EVENT_GFX_CAMERAMAN, 12, 9, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 9, OBJ_EVENT_GFX_GIRL_2, 2, 8, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 10, OBJ_EVENT_GFX_WALLY, 7, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Battle_Rival, FLAG_ROGUE_RIVAL_DISABLED

Rogue_Encounter_GameShow_MapWarps:
	warp_def 7, 15, 0, 0, MAP_ROGUE_ENCOUNTER_GAME_SHOW
	warp_def 7, 3, 0, 0, MAP_ROGUE_ENCOUNTER_GAME_SHOW

Rogue_Encounter_GameShow_MapCoordEvents:
	coord_event 6, 10, 0, VAR_TEMP_1, 0, Rogue_Encounter_GameShow_TriggerIntro
	coord_event 7, 10, 0, VAR_TEMP_1, 0, Rogue_Encounter_GameShow_TriggerIntro
	coord_event 8, 10, 0, VAR_TEMP_1, 0, Rogue_Encounter_GameShow_TriggerIntro

Rogue_Encounter_GameShow_MapEvents::
	map_events Rogue_Encounter_GameShow_ObjectEvents, Rogue_Encounter_GameShow_MapWarps, Rogue_Encounter_GameShow_MapCoordEvents, NULL

