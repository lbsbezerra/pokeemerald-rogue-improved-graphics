@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Hub_Interior_ClothesShop/map.json
@

Rogue_Hub_Interior_ClothesShop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BRENDAN_ALT, 4, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_MAY_ALT, 8, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_RED_ALT, 29, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_LEAF_ALT, 33, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_BEAUTY, 20, 23, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Hub_Clothes_TalkAssistant, 0
	object_event 6, OBJ_EVENT_GFX_MAN_2, 19, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_Clothes_ChangeStyle0, 0
	object_event 7, OBJ_EVENT_GFX_DEVON_EMPLOYEE, 21, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_Clothes_ChangeStyle1, 0
	object_event 8, OBJ_EVENT_GFX_MANIAC, 16, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_Clothes_ChangeName, 0
	object_event 9, OBJ_EVENT_GFX_ETHAN_ALT, 16, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 10, OBJ_EVENT_GFX_LYRA_ALT, 21, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

Rogue_Hub_Interior_ClothesShop_MapWarps:
	warp_def 18, 27, 0, 5, MAP_ROGUE_HUB
	warp_def 19, 27, 0, 5, MAP_ROGUE_HUB

Rogue_Hub_Interior_ClothesShop_MapBGEvents:
	bg_sign_event 4, 19, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_Brendan
	bg_sign_event 8, 19, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_May
	bg_sign_event 29, 19, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_Red
	bg_sign_event 33, 19, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_Leaf
	bg_sign_event 16, 3, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_Ethan
	bg_sign_event 21, 3, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Hub_Clothes_SetStyle_Lyra

Rogue_Hub_Interior_ClothesShop_MapEvents::
	map_events Rogue_Hub_Interior_ClothesShop_ObjectEvents, Rogue_Hub_Interior_ClothesShop_MapWarps, NULL, Rogue_Hub_Interior_ClothesShop_MapBGEvents

