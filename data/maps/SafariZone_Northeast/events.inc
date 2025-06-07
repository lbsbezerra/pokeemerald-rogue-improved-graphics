@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_Northeast/map.json
@

SafariZone_Northeast_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BREAKABLE_ROCK, 12, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 2, OBJ_EVENT_GFX_BREAKABLE_ROCK, 8, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 3, OBJ_EVENT_GFX_BREAKABLE_ROCK, 9, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_11
	object_event 4, OBJ_EVENT_GFX_BREAKABLE_ROCK, 8, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13

SafariZone_Northeast_MapBGEvents:
	bg_hidden_item_event 21, 5, 3, ITEM_ZINC, FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC
	bg_sign_event 19, 24, 0, BG_EVENT_PLAYER_FACING_ANY, RogueSafari_Sign_NorthEast

SafariZone_Northeast_MapEvents::
	map_events SafariZone_Northeast_ObjectEvents, NULL, NULL, SafariZone_Northeast_MapBGEvents

