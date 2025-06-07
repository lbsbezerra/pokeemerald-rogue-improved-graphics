@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_ChallengeFrontier/map.json
@

Rogue_Interior_ChallengeFrontier_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCOTT, 19, 7, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_TalkScott, 0
	object_event 2, OBJ_EVENT_GFX_MISC_HEX_MANIAC, 4, 4, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Curses, 0
	object_event 3, OBJ_EVENT_GFX_MISC_NPC_MYSTERY_GIFT, 33, 4, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_TalkMasteries, 0
	object_event 4, OBJ_EVENT_GFX_MISC_CHANNELER, 6, 4, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Charms, 0
	object_event 5, OBJ_EVENT_GFX_UNION_ROOM_NURSE, 35, 26, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 6, OBJ_EVENT_GFX_VAR_0, 18, 3, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 7, OBJ_EVENT_GFX_VAR_0, 36, 26, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 8, OBJ_EVENT_GFX_VAR_0, 37, 26, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 9, OBJ_EVENT_GFX_VAR_0, 30, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 10, OBJ_EVENT_GFX_VAR_0, 36, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 11, OBJ_EVENT_GFX_VAR_0, 20, 3, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 12, OBJ_EVENT_GFX_MISC_LOOKER, 34, 26, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 13, OBJ_EVENT_GFX_ITEM_MEGA_STONE, 3, 21, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_MegaStone, FLAG_TEMP_1
	object_event 14, OBJ_EVENT_GFX_ITEM_Z_CRYSTAL, 1, 22, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_ZCrystal, FLAG_TEMP_2
	object_event 15, OBJ_EVENT_GFX_ITEM_DYNAMAX_BALL, 7, 21, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_Dynamax, FLAG_TEMP_3
	object_event 16, OBJ_EVENT_GFX_ITEM_HEALING, 5, 21, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_HealingFlask, FLAG_TEMP_4
	object_event 17, OBJ_EVENT_GFX_ITEM_TERA_ORB, 9, 22, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_Tera, FLAG_TEMP_5
	object_event 18, OBJ_EVENT_GFX_MISC_VETERAN, 37, 7, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ChallengeFrontier_TalkChallenges, 0

Rogue_Interior_ChallengeFrontier_MapWarps:
	warp_def 19, 11, 0, 8, MAP_ROGUE_AREA_CHALLENGE_FRONTIER
	warp_def 19, 2, 0, 2, MAP_ROGUE_INTERIOR_CHALLENGE_FRONTIER
	warp_def 5, 28, 0, 1, MAP_ROGUE_INTERIOR_CHALLENGE_FRONTIER

Rogue_Interior_ChallengeFrontier_MapCoordEvents:
	coord_event 19, 10, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 0, Rogue_Interior_ChallengeFrontier_ScottIntroCentre
	coord_event 18, 11, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 0, Rogue_Interior_ChallengeFrontier_ScottIntroLeft
	coord_event 20, 11, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 0, Rogue_Interior_ChallengeFrontier_ScottIntroRight
	coord_event 19, 11, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 1, Rogue_Interior_ChallengeFrontier_ScottBlockExit
	coord_event 5, 27, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 1, Rogue_Interior_ChallengeFrontier_VisitedGimicRoom
	coord_event 6, 28, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 1, Rogue_Interior_ChallengeFrontier_VisitedGimicRoom
	coord_event 4, 28, 0, VAR_ROGUE_POST_GAME_TUTORIAL, 1, Rogue_Interior_ChallengeFrontier_VisitedGimicRoom

Rogue_Interior_ChallengeFrontier_MapBGEvents:
	bg_sign_event 3, 21, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ChallengeFrontier_MegaStone
	bg_sign_event 1, 22, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ChallengeFrontier_ZCrystal
	bg_sign_event 7, 21, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ChallengeFrontier_Dynamax
	bg_sign_event 5, 21, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ChallengeFrontier_HealingFlask
	bg_sign_event 9, 22, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ChallengeFrontier_Tera

Rogue_Interior_ChallengeFrontier_MapEvents::
	map_events Rogue_Interior_ChallengeFrontier_ObjectEvents, Rogue_Interior_ChallengeFrontier_MapWarps, Rogue_Interior_ChallengeFrontier_MapCoordEvents, Rogue_Interior_ChallengeFrontier_MapBGEvents

