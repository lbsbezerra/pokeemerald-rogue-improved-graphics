Rogue_Area_Home_MapScripts::
# 29 "data/maps/Rogue_Area_Home/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_Home_OnTransition
	.byte 0


Rogue_Area_Home_OnTransition::
	return


Rogue_Area_Home_DecorateFromMenu::
# 38 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 40 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_DECORATING
	goto_if_eq Rogue_Area_Home_DecorateFromMenu_2
# 46 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_DECORATING
Rogue_Area_Home_DecorateFromMenu_1:
# 49 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
# 50 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	return

Rogue_Area_Home_DecorateFromMenu_2:
# 42 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_NONE
	goto Rogue_Area_Home_DecorateFromMenu_1


Rogue_Area_Home_InteractWithWorkbench::
# 56 "data/maps/Rogue_Area_Home/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 57 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne Rogue_Area_Home_InteractWithWorkbench_1
	return

Rogue_Area_Home_InteractWithWorkbench_1:
# 59 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 61 "data/maps/Rogue_Area_Home/scripts.pory"
	special Rogue_IsMultiplayerClient
# 62 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Home_InteractWithWorkbench_4
# 70 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 71 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_1, 0
# 73 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_DECORATING
	goto_if_eq Rogue_Area_Home_InteractWithWorkbench_8
# 79 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_3, 1
Rogue_Area_Home_InteractWithWorkbench_7:
# 82 "data/maps/Rogue_Area_Home/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_HOME_EDIT_STYLE
# 83 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Home_InteractWithWorkbench_12
Rogue_Area_Home_InteractWithWorkbench_11:
# 88 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_5, 3
# 89 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 92 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_InteractWithWorkbench_Text_7
# 93 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 94 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 97 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/Rogue_Area_Home/scripts.pory"
	case 0, Rogue_Area_Home_InteractWithWorkbench_15
# 102 "data/maps/Rogue_Area_Home/scripts.pory"
	case 1, Rogue_Area_Home_InteractWithWorkbench_16
# 114 "data/maps/Rogue_Area_Home/scripts.pory"
	case 2, Rogue_Area_Home_InteractWithWorkbench_17
# 117 "data/maps/Rogue_Area_Home/scripts.pory"
	case 3, Rogue_Area_Home_InteractWithWorkbench_18
Rogue_Area_Home_InteractWithWorkbench_3:
# 127 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	return

Rogue_Area_Home_InteractWithWorkbench_4:
# 64 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 65 "data/maps/Rogue_Area_Home/scripts.pory"
	msgbox Rogue_Area_Home_InteractWithWorkbench_Text_0
# 66 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	goto Rogue_Area_Home_InteractWithWorkbench_3

Rogue_Area_Home_InteractWithWorkbench_8:
# 75 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_2, 1
	goto Rogue_Area_Home_InteractWithWorkbench_7

Rogue_Area_Home_InteractWithWorkbench_12:
# 85 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_4, 2
	goto Rogue_Area_Home_InteractWithWorkbench_11

Rogue_Area_Home_InteractWithWorkbench_15:
# 100 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_WorkbenchOptions
	goto Rogue_Area_Home_InteractWithWorkbench_3

Rogue_Area_Home_InteractWithWorkbench_16:
# 103 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_DECORATING
	goto_if_eq Rogue_Area_Home_InteractWithWorkbench_20
# 109 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_DECORATING
Rogue_Area_Home_InteractWithWorkbench_19:
# 112 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_Home_InteractWithWorkbench_3

Rogue_Area_Home_InteractWithWorkbench_17:
# 115 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_EditStyles
	goto Rogue_Area_Home_InteractWithWorkbench_3

Rogue_Area_Home_InteractWithWorkbench_18:
# 118 "data/maps/Rogue_Area_Home/scripts.pory"
	msgbox Rogue_Area_Home_InteractWithWorkbench_Text_8, MSGBOX_YESNO
# 119 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Home_InteractWithWorkbench_23
	goto Rogue_Area_Home_InteractWithWorkbench_3

Rogue_Area_Home_InteractWithWorkbench_20:
# 105 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_ROGUE_SPECIAL_MODE, ROGUE_SPECIAL_MODE_NONE
	goto Rogue_Area_Home_InteractWithWorkbench_19

Rogue_Area_Home_InteractWithWorkbench_23:
# 121 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_ClearAllDecorations
# 122 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_Home_InteractWithWorkbench_3


Rogue_Area_Home_EditStyles::
# 133 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 135 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_EditStyles_Text_0, 0
# 136 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_EditStyles_Text_1, 1
# 137 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_EditStyles_Text_2, 2
# 138 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 140 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EditStyles_Text_3
# 141 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 142 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 144 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/Rogue_Area_Home/scripts.pory"
	case 0, Rogue_Area_Home_EditStyles_2
# 149 "data/maps/Rogue_Area_Home/scripts.pory"
	case 1, Rogue_Area_Home_EditStyles_3
# 152 "data/maps/Rogue_Area_Home/scripts.pory"
	case 2, Rogue_Area_Home_EditStyles_4
	return

Rogue_Area_Home_EditStyles_2:
# 147 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_EditPathStyles
	return

Rogue_Area_Home_EditStyles_3:
# 150 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_EditExteriorStyles
	return

Rogue_Area_Home_EditStyles_4:
# 153 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_EditInteriorStyles
	return


Rogue_Area_Home_EditPathStyles::
# 159 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 160 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_AppendChangeStyle_Paths
# 161 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 163 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EditPathStyles_Text_0
# 164 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 165 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 167 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/Rogue_Area_Home/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Area_Home_EditPathStyles_3
# 170 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_HandleChangeStyle_Paths
# 171 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	return

Rogue_Area_Home_EditPathStyles_3:
	return


Rogue_Area_Home_EditExteriorStyles::
# 180 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 181 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_AppendChangeStyle_Exterior
# 182 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 184 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EditPathStyles_Text_0
# 185 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 186 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 188 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/Rogue_Area_Home/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Area_Home_EditExteriorStyles_3
# 191 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_HandleChangeStyle_Exterior
# 192 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	return

Rogue_Area_Home_EditExteriorStyles_3:
	return


Rogue_Area_Home_EditInteriorStyles::
# 202 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 203 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_AppendChangeStyle_Interior
# 204 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 206 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EditPathStyles_Text_0
# 207 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 208 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 1, 0, 6, TRUE
# 210 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/Rogue_Area_Home/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Area_Home_EditInteriorStyles_3
# 213 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_HandleChangeStyle_Interior
# 214 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	return

Rogue_Area_Home_EditInteriorStyles_3:
	return


Rogue_Area_Home_ChooseDecoration::
# 223 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 227 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_ChooseDecoration_Internal
# 229 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	return


Rogue_Area_Home_ChooseDecoration_Internal::
# 234 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Area_Home_ChooseDecoration_Internal_1:
# 236 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Home_ChooseDecoration_Internal_2
	return

Rogue_Area_Home_ChooseDecoration_Internal_2:
# 238 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq Rogue_Area_Home_ChooseDecoration_Internal_4
# 244 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_ChooseDecoration_Internal_Text_0
# 245 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 247 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice 48
# 248 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_SetupDecorationMultichoice
# 249 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 20, 2, 5, TRUE
# 251 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_HandleDecorationMultichoiceResult
	goto Rogue_Area_Home_ChooseDecoration_Internal_1

Rogue_Area_Home_ChooseDecoration_Internal_4:
# 240 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Area_Home_PlaceDecoration
	goto Rogue_Area_Home_ChooseDecoration_Internal_1


Rogue_Area_Home_PlaceDecoration::
# 258 "data/maps/Rogue_Area_Home/scripts.pory"
	specialvar VAR_TEMP_B, RogueHub_PlaceHomeDecor
# 260 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_CODE_NO_ROOM
	goto_if_eq Rogue_Area_Home_PlaceDecoration_1
# 266 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_TOO_MANY_OBJECTS_NEAR
	goto_if_eq Rogue_Area_Home_PlaceDecoration_2
# 266 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_TOO_MANY_OF_TYPE
	goto_if_eq Rogue_Area_Home_PlaceDecoration_2
# 266 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_CODE_NOT_HERE
	goto_if_eq Rogue_Area_Home_PlaceDecoration_2
# 305 "data/maps/Rogue_Area_Home/scripts.pory"
	special DrawWholeMapView
# 306 "data/maps/Rogue_Area_Home/scripts.pory"
	specialvar VAR_0x8000, RogueHub_IsRemovingDecor
# 308 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 309 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_0x8000, YES
	goto_if_eq Rogue_Area_Home_PlaceDecoration_17
# 335 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_8, 0
# 336 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_1, 1
# 337 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 339 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_9
# 340 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 342 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 20, 6, 3, TRUE
Rogue_Area_Home_PlaceDecoration_16:
# 345 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/Rogue_Area_Home/scripts.pory"
	case 0, Rogue_Area_Home_PlaceDecoration_25
# 350 "data/maps/Rogue_Area_Home/scripts.pory"
	case 1, Rogue_Area_Home_PlaceDecoration_26
# 356 "data/maps/Rogue_Area_Home/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Area_Home_PlaceDecoration_27
	return

Rogue_Area_Home_PlaceDecoration_1:
# 262 "data/maps/Rogue_Area_Home/scripts.pory"
	msgbox Rogue_Area_Home_PlaceDecoration_Text_0
# 263 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_TEMP_F, 0
# 264 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Home_PlaceDecoration_2:
# 268 "data/maps/Rogue_Area_Home/scripts.pory"
	begindynamicmultichoice
# 269 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_1, 1
# 270 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 272 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_TOO_MANY_OF_TYPE
	goto_if_eq Rogue_Area_Home_PlaceDecoration_11
# 276 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_CODE_NOT_HERE
	goto_if_eq Rogue_Area_Home_PlaceDecoration_12
# 282 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_4
Rogue_Area_Home_PlaceDecoration_10:
# 285 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 287 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 20, 6, 2, TRUE
# 289 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/Rogue_Area_Home/scripts.pory"
	case 0, Rogue_Area_Home_PlaceDecoration_21
# 294 "data/maps/Rogue_Area_Home/scripts.pory"
	case 1, Rogue_Area_Home_PlaceDecoration_22
# 298 "data/maps/Rogue_Area_Home/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Area_Home_PlaceDecoration_23
	return

Rogue_Area_Home_PlaceDecoration_11:
# 274 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_2
	goto Rogue_Area_Home_PlaceDecoration_10

Rogue_Area_Home_PlaceDecoration_12:
# 278 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_3
	goto Rogue_Area_Home_PlaceDecoration_10

Rogue_Area_Home_PlaceDecoration_17:
# 311 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_TEMP_B, HOME_DECOR_CANNOT_REMOVE
	goto_if_eq Rogue_Area_Home_PlaceDecoration_28
# 323 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_6, 0
# 324 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_1, 1
# 325 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 327 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_7
# 328 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 330 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 20, 6, 3, TRUE
	goto Rogue_Area_Home_PlaceDecoration_16

Rogue_Area_Home_PlaceDecoration_21:
# 292 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Home_PlaceDecoration_22:
# 295 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_TEMP_F, 2
# 296 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Area_Home_PlaceDecoration_23:
# 300 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Home_PlaceDecoration_25:
# 348 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Home_PlaceDecoration_26:
# 351 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_RemoveHomeDecor
# 352 "data/maps/Rogue_Area_Home/scripts.pory"
	special DrawWholeMapView
# 353 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_TEMP_F, 2
# 354 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Area_Home_PlaceDecoration_27:
# 358 "data/maps/Rogue_Area_Home/scripts.pory"
	special RogueHub_RemoveHomeDecor
# 359 "data/maps/Rogue_Area_Home/scripts.pory"
	special DrawWholeMapView
# 360 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Area_Home_PlaceDecoration_28:
# 313 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_PlaceDecoration_Text_1, 1
# 314 "data/maps/Rogue_Area_Home/scripts.pory"
	appenddynamicmultichoice Rogue_Area_Home_InteractWithWorkbench_Text_6, MULTI_B_PRESSED
# 316 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_PlaceDecoration_Text_5
# 317 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 319 "data/maps/Rogue_Area_Home/scripts.pory"
	enddynamicmultichoice 20, 6, 2, TRUE
	goto Rogue_Area_Home_PlaceDecoration_16


Rogue_Area_Home_ChangeClothes::
# 367 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 369 "data/maps/Rogue_Area_Home/scripts.pory"
	specialvar VAR_RESULT, RoguePlayer_HandleEasterEggOutfitUnlocks
# 371 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Home_ChangeClothes_2
Rogue_Area_Home_ChangeClothes_1:
# 376 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_InteractWithWorkbench_Text_7
# 377 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 379 "data/maps/Rogue_Area_Home/scripts.pory"
	multichoice 20, 6, MULTI_CHANGE_CLOTHES, NO
# 381 "data/maps/Rogue_Area_Home/scripts.pory"
	switch VAR_RESULT
# 383 "data/maps/Rogue_Area_Home/scripts.pory"
	case 0, Rogue_Area_Home_ChangeClothes_6
# 388 "data/maps/Rogue_Area_Home/scripts.pory"
	case 1, Rogue_Area_Home_ChangeClothes_7
Rogue_Area_Home_ChangeClothes_4:
# 396 "data/maps/Rogue_Area_Home/scripts.pory"
	special Rogue_FixPartyMonDetails
# 397 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	return

Rogue_Area_Home_ChangeClothes_2:
# 373 "data/maps/Rogue_Area_Home/scripts.pory"
	call Rogue_Common_DisplayPopups
	goto Rogue_Area_Home_ChangeClothes_1

Rogue_Area_Home_ChangeClothes_6:
# 384 "data/maps/Rogue_Area_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 385 "data/maps/Rogue_Area_Home/scripts.pory"
	special Special_ViewPlayerCustomisationMenu
# 386 "data/maps/Rogue_Area_Home/scripts.pory"
	waitstate
	goto Rogue_Area_Home_ChangeClothes_4

Rogue_Area_Home_ChangeClothes_7:
# 389 "data/maps/Rogue_Area_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 390 "data/maps/Rogue_Area_Home/scripts.pory"
	special ChangePlayerNickname
# 391 "data/maps/Rogue_Area_Home/scripts.pory"
	waitstate
	goto Rogue_Area_Home_ChangeClothes_4


Rogue_Area_Home_EnterBed::
# 402 "data/maps/Rogue_Area_Home/scripts.pory"
	lock
# 404 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EnterBed_Text_0
# 405 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 407 "data/maps/Rogue_Area_Home/scripts.pory"
	multichoice 21, 4, MULTI_SELECT_TIME, NO
# 410 "data/maps/Rogue_Area_Home/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 411 "data/maps/Rogue_Area_Home/scripts.pory"
	setvar VAR_0x8005, MULTI_B_PRESSED
# 413 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Rogue_Area_Home_EnterBed_2
Rogue_Area_Home_EnterBed_1:
# 423 "data/maps/Rogue_Area_Home/scripts.pory"
	special Rogue_SetTimeAndSeason
# 425 "data/maps/Rogue_Area_Home/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_Home_EnterBed_5
Rogue_Area_Home_EnterBed_4:
# 444 "data/maps/Rogue_Area_Home/scripts.pory"
	release
	return

Rogue_Area_Home_EnterBed_2:
# 415 "data/maps/Rogue_Area_Home/scripts.pory"
	message Rogue_Area_Home_EnterBed_Text_1
# 416 "data/maps/Rogue_Area_Home/scripts.pory"
	waitmessage
# 418 "data/maps/Rogue_Area_Home/scripts.pory"
	multichoice 21, 4, MULTI_SELECT_SEASON, NO
# 420 "data/maps/Rogue_Area_Home/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
	goto Rogue_Area_Home_EnterBed_1

Rogue_Area_Home_EnterBed_5:
# 427 "data/maps/Rogue_Area_Home/scripts.pory"
	closemessage
# 429 "data/maps/Rogue_Area_Home/scripts.pory"
	fadescreen FADE_TO_BLACK
# 431 "data/maps/Rogue_Area_Home/scripts.pory"
	fadeoutbgm 1
# 432 "data/maps/Rogue_Area_Home/scripts.pory"
	playbgm MUS_NONE, FALSE
# 433 "data/maps/Rogue_Area_Home/scripts.pory"
	delay 30
# 437 "data/maps/Rogue_Area_Home/scripts.pory"
	playse SE_M_SNORE
# 438 "data/maps/Rogue_Area_Home/scripts.pory"
	waitse
# 439 "data/maps/Rogue_Area_Home/scripts.pory"
	delay 50
# 441 "data/maps/Rogue_Area_Home/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_Home_EnterBed_4


Rogue_Area_Home_InteractWithWorkbench_Text_0:
# 65 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "It's a workbench!\p"
	.string "It's has a bunch of complicated designs\n"
	.string "and tools on top.$"

Rogue_Area_Home_InteractWithWorkbench_Text_1:
# 71 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Build / Upgrade$"

Rogue_Area_Home_InteractWithWorkbench_Text_2:
# 75 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Stop Decorating$"

Rogue_Area_Home_InteractWithWorkbench_Text_3:
# 79 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Start Decorating$"

Rogue_Area_Home_InteractWithWorkbench_Text_4:
# 85 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Edit Styles$"

Rogue_Area_Home_InteractWithWorkbench_Text_5:
# 88 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Clear Decorations$"

Rogue_Area_Home_InteractWithWorkbench_Text_6:
# 89 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Exit$"

Rogue_Area_Home_InteractWithWorkbench_Text_7:
# 92 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "What would you like to do?$"

Rogue_Area_Home_InteractWithWorkbench_Text_8:
# 118 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "This will clear all currently placed\n"
	.string "decorations.\n"
	.string "There is no way to undo this.\p"
	.string "Are you sure you want to clear all\n"
	.string "decorations?$"

Rogue_Area_Home_EditStyles_Text_0:
# 135 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Paths$"

Rogue_Area_Home_EditStyles_Text_1:
# 136 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Base Exterior$"

Rogue_Area_Home_EditStyles_Text_2:
# 137 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Base Interior$"

Rogue_Area_Home_EditStyles_Text_3:
# 140 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "What style would you like to change?$"

Rogue_Area_Home_EditPathStyles_Text_0:
# 163 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "What style would you like to use?$"

Rogue_Area_Home_ChooseDecoration_Internal_Text_0:
# 244 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "What would you like to place?$"

Rogue_Area_Home_PlaceDecoration_Text_0:
# 262 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "The area cannot be decorated any more.$"

Rogue_Area_Home_PlaceDecoration_Text_1:
# 269 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Change Decor$"

Rogue_Area_Home_PlaceDecoration_Text_2:
# 274 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Reached limit for this type of Decor.\n"
	.string "Cannot place any more in this area.$"

Rogue_Area_Home_PlaceDecoration_Text_3:
# 278 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Decor can't be placed here.$"

Rogue_Area_Home_PlaceDecoration_Text_4:
# 282 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Too many other Objects nearby.\n"
	.string "Try placing elsewhere.$"

Rogue_Area_Home_PlaceDecoration_Text_5:
# 316 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "There's nothing to remove here.\n"
	.string "What would you like to do?$"

Rogue_Area_Home_PlaceDecoration_Text_6:
# 323 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Remove This$"

Rogue_Area_Home_PlaceDecoration_Text_7:
# 327 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Would you like to remove this decor?$"

Rogue_Area_Home_PlaceDecoration_Text_8:
# 335 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Place Here$"

Rogue_Area_Home_PlaceDecoration_Text_9:
# 339 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Would you like to place this here?$"

Rogue_Area_Home_EnterBed_Text_0:
# 404 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "What time would you like to wake up?$"

Rogue_Area_Home_EnterBed_Text_1:
# 415 "data/maps/Rogue_Area_Home/scripts.pory"
	.string "Which season would you like to wake up\n"
	.string "in?$"
