@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_Market/map.json
@

Rogue_Area_Market_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN, 8, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_TalkBerryBlender, FLAG_TEMP_3
	object_event 2, OBJ_EVENT_GFX_POKEBLOCK_MIXER, 9, 6, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_BlendPokeblockMaster, FLAG_TEMP_3
	object_event 3, OBJ_EVENT_GFX_POKEBLOCK_MIXER, 12, 6, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_BlendPokeblockNovice, 0
	object_event 4, OBJ_EVENT_GFX_GIRL_1, 13, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_TalkBerryBlender, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_4, 13, 20, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Treats, FLAG_TEMP_2
	object_event 6, OBJ_EVENT_GFX_OLD_MAN_2, 26, 7, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_ShopBank, FLAG_TEMP_1
	object_event 7, OBJ_EVENT_GFX_WORK_TABLE, 14, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, 0
	object_event 8, OBJ_EVENT_GFX_LINK_RECEPTIONIST, 13, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Market_TalkPokeblockHelper, 0

Rogue_Area_Market_MapWarps:
	warp_def 17, 0, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 18, 0, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 33, 13, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 33, 14, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 17, 23, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 18, 23, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 0, 13, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 0, 14, 0, 0, MAP_ROGUE_AREA_MARKET
	warp_def 4, 5, 0, 0, MAP_ROGUE_INTERIOR_RESTAURANT
	warp_def 14, 12, 0, 0, MAP_ROGUE_AREA_MARKET

Rogue_Area_Market_MapBGEvents:
	bg_sign_event 23, 11, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Area_Market_BankSign

Rogue_Area_Market_MapEvents::
	map_events Rogue_Area_Market_ObjectEvents, Rogue_Area_Market_MapWarps, NULL, Rogue_Area_Market_MapBGEvents

