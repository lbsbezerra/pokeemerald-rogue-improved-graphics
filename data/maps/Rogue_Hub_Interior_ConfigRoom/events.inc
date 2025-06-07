@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Hub_Interior_ConfigRoom/map.json
@

Rogue_Hub_Interior_ConfigRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST_1, 11, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_TalkAssistant, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 4, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 4, 4, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_TalkLanette, 0
	object_event 3, OBJ_EVENT_GFX_FOLLOW_MON_0, 9, 20, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_TalkDitto, 0
	object_event 4, OBJ_EVENT_GFX_GIRL_2, 8, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_TalkPokabbie, 0
	object_event 5, OBJ_EVENT_GFX_BIRCHS_BAG, 5, 20, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_MegaBag, 0
	object_event 6, OBJ_EVENT_GFX_BIRCHS_BAG, 6, 20, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_ZMoveBag, FLAG_TEMP_1
	object_event 7, OBJ_EVENT_GFX_BIRCHS_BAG, -9, 12, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_DynamaxBag, FLAG_TEMP_1
	object_event 8, OBJ_EVENT_GFX_SCIENTIST_1, 13, 21, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_AdjustWildGens, 0
	object_event 9, OBJ_EVENT_GFX_HEX_MANIAC, 11, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Charms, FLAG_ROGUE_TRAINER0

Rogue_Hub_Interior_ConfigRoom_MapWarps:
	warp_def 2, 9, 0, 3, MAP_ROGUE_HUB
	warp_def 1, 9, 0, 3, MAP_ROGUE_HUB
	warp_def 9, 1, 0, 3, MAP_ROGUE_HUB_INTERIOR_CONFIG_ROOM
	warp_def 8, 24, 0, 2, MAP_ROGUE_HUB_INTERIOR_CONFIG_ROOM
	warp_def 9, 24, 0, 2, MAP_ROGUE_HUB_INTERIOR_CONFIG_ROOM

Rogue_Hub_Interior_ConfigRoom_MapCoordEvents:
	coord_event 1, 3, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_ExpAll
	coord_event 11, 5, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_WalkAboveAssistant
	coord_event 11, 6, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_WalkAboveAssistant
	coord_event 11, 8, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_WalkBelowAssistant
	coord_event 11, 9, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_WalkBelowAssistant
	coord_event 14, 6, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_SeedItems
	coord_event 16, 6, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_SeedWildMons
	coord_event 14, 8, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_SeedTrainers
	coord_event 16, 8, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_SeedBosses
	coord_event 3, 3, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_CanOverLvl
	coord_event 1, 5, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_TrainerDifficulty
	coord_event 3, 5, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_ItemDifficulty
	coord_event 5, 3, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_EVGainEnabled
	coord_event 7, 23, 0, VAR_TEMP_1, 0, Rogue_ConfigRoom_MeetPokabbie
	coord_event 8, 23, 0, VAR_TEMP_1, 0, Rogue_ConfigRoom_MeetPokabbie
	coord_event 9, 23, 0, VAR_TEMP_1, 0, Rogue_ConfigRoom_MeetPokabbie
	coord_event 10, 23, 0, VAR_TEMP_1, 0, Rogue_ConfigRoom_MeetPokabbie
	coord_event 15, 20, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_KantoRoutes
	coord_event 15, 22, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_KantoBosses
	coord_event 19, 20, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_HoennRoutes
	coord_event 19, 22, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_HoennBosses
	coord_event 17, 20, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_JohtoRoutes
	coord_event 17, 22, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_JohtoBosses
	coord_event 5, 5, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_LegendaryDifficulty
	coord_event 7, 3, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_WildMons
	coord_event 9, 3, 0, VAR_TEMP_0, 0, Rogue_ConfigRoom_Button_BasicBag

Rogue_Hub_Interior_ConfigRoom_MapBGEvents:
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_ConfigRoom_TalkHiddenEnterance

Rogue_Hub_Interior_ConfigRoom_MapEvents::
	map_events Rogue_Hub_Interior_ConfigRoom_ObjectEvents, Rogue_Hub_Interior_ConfigRoom_MapWarps, Rogue_Hub_Interior_ConfigRoom_MapCoordEvents, Rogue_Hub_Interior_ConfigRoom_MapBGEvents

