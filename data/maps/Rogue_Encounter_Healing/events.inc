@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Healing/map.json
@

Rogue_Encounter_Healing_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CONTEST_JUDGE, 10, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_RestStop_RandomMan, FLAG_ROGUE_RANDOM_TRADE_DISABLED
	object_event 2, OBJ_EVENT_GFX_NURSE, 8, 6, 4, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_RestStop_Heal, 0
	object_event 3, OBJ_EVENT_GFX_WALLY, 8, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Battle_Rival, FLAG_ROGUE_RIVAL_DISABLED

Rogue_Encounter_Healing_MapWarps:
	warp_def 8, 9, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING
	warp_def 8, 3, 0, 0, MAP_ROGUE_ENCOUNTER_HEALING

Rogue_Encounter_Healing_MapEvents::
	map_events Rogue_Encounter_Healing_ObjectEvents, Rogue_Encounter_Healing_MapWarps, NULL, NULL

