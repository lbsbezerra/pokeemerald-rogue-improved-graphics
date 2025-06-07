Rogue_Interior_School_MapScripts::
	.byte 0


Rogue_Interior_School_ShowSetRecommendation::
# 6 "data/maps/Rogue_Interior_School/scripts.pory"
	lock
# 7 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 9 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_ShowSetRecommendation_Text_0
# 11 "data/maps/Rogue_Interior_School/scripts.pory"
	setvar VAR_0x8004, 0
Rogue_Interior_School_ShowSetRecommendation_2:
# 13 "data/maps/Rogue_Interior_School/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ne Rogue_Interior_School_ShowSetRecommendation_3
# 25 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_ShowSetRecommendation_Text_2
# 27 "data/maps/Rogue_Interior_School/scripts.pory"
	release
	return

Rogue_Interior_School_ShowSetRecommendation_3:
# 15 "data/maps/Rogue_Interior_School/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 16 "data/maps/Rogue_Interior_School/scripts.pory"
	showmonpic VAR_RESULT, 2, 2
# 17 "data/maps/Rogue_Interior_School/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 19 "data/maps/Rogue_Interior_School/scripts.pory"
	callnative ScriptMenu_DisplayRecommendedMonSet
# 20 "data/maps/Rogue_Interior_School/scripts.pory"
	messageinstant Rogue_Interior_School_ShowSetRecommendation_Text_1
# 21 "data/maps/Rogue_Interior_School/scripts.pory"
	waitstate
# 22 "data/maps/Rogue_Interior_School/scripts.pory"
	hidemonpic
	goto Rogue_Interior_School_ShowSetRecommendation_2


Rogue_Interior_School_TalkRunningKid0::
# 32 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 33 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 35 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRunningKid0_Text_0
# 37 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return


Rogue_Interior_School_TalkRunningKid1::
# 42 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 43 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 45 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRunningKid1_Text_0
# 47 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return


Rogue_Interior_School_TalkRunningStatsHint::
# 52 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 53 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 55 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRunningStatsHint_Text_0
# 57 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return


Rogue_Interior_School_TalkPokeblock::
# 62 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 63 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 65 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkPokeblock_Text_0
# 67 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return


Rogue_Interior_School_TalkTeacher::
# 72 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 73 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 75 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkTeacher_Text_0
# 77 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return


Rogue_Interior_School_TalkRouteHint::
# 82 "data/maps/Rogue_Interior_School/scripts.pory"
	lockall
# 83 "data/maps/Rogue_Interior_School/scripts.pory"
	faceplayer
# 86 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_0
# 88 "data/maps/Rogue_Interior_School/scripts.pory"
	setvar VAR_RESULT, 0
Rogue_Interior_School_TalkRouteHint_2:
# 90 "data/maps/Rogue_Interior_School/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Rogue_Interior_School_TalkRouteHint_3
# 121 "data/maps/Rogue_Interior_School/scripts.pory"
	releaseall
	return

Rogue_Interior_School_TalkRouteHint_3:
# 92 "data/maps/Rogue_Interior_School/scripts.pory"
	begindynamicmultichoice
# 93 "data/maps/Rogue_Interior_School/scripts.pory"
	appenddynamicmultichoice Rogue_Interior_School_TalkRouteHint_Text_1, 0
# 94 "data/maps/Rogue_Interior_School/scripts.pory"
	appenddynamicmultichoice Rogue_Interior_School_TalkRouteHint_Text_2, 1
# 95 "data/maps/Rogue_Interior_School/scripts.pory"
	appenddynamicmultichoice Rogue_Interior_School_TalkRouteHint_Text_3, 2
# 96 "data/maps/Rogue_Interior_School/scripts.pory"
	appenddynamicmultichoice Rogue_Interior_School_TalkRouteHint_Text_4, 3
# 98 "data/maps/Rogue_Interior_School/scripts.pory"
	message Rogue_Interior_School_TalkRouteHint_Text_5
# 99 "data/maps/Rogue_Interior_School/scripts.pory"
	waitmessage
# 100 "data/maps/Rogue_Interior_School/scripts.pory"
	enddynamicmultichoice 20, 2, 5, TRUE
# 102 "data/maps/Rogue_Interior_School/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/Rogue_Interior_School/scripts.pory"
	case 0, Rogue_Interior_School_TalkRouteHint_6
# 107 "data/maps/Rogue_Interior_School/scripts.pory"
	case 1, Rogue_Interior_School_TalkRouteHint_7
# 110 "data/maps/Rogue_Interior_School/scripts.pory"
	case 2, Rogue_Interior_School_TalkRouteHint_8
# 113 "data/maps/Rogue_Interior_School/scripts.pory"
	case 3, Rogue_Interior_School_TalkRouteHint_9
# 116 "data/maps/Rogue_Interior_School/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_School_TalkRouteHint_10
	goto Rogue_Interior_School_TalkRouteHint_2

Rogue_Interior_School_TalkRouteHint_6:
# 105 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_6
	goto Rogue_Interior_School_TalkRouteHint_2

Rogue_Interior_School_TalkRouteHint_7:
# 108 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_7
	goto Rogue_Interior_School_TalkRouteHint_2

Rogue_Interior_School_TalkRouteHint_8:
# 111 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_8
	goto Rogue_Interior_School_TalkRouteHint_2

Rogue_Interior_School_TalkRouteHint_9:
# 114 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_9
	goto Rogue_Interior_School_TalkRouteHint_2

Rogue_Interior_School_TalkRouteHint_10:
# 117 "data/maps/Rogue_Interior_School/scripts.pory"
	msgbox Rogue_Interior_School_TalkRouteHint_Text_10
	goto Rogue_Interior_School_TalkRouteHint_2


Rogue_Interior_School_ShowSetRecommendation_Text_0:
# 9 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Oh hey, you look like a Trainer.\p"
	.string "Here, let me give you my advice on how I\n"
	.string "would setup your Pokémon, if they were\l"
	.string "mine.$"

Rogue_Interior_School_ShowSetRecommendation_Text_1:
# 20 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "{DPAD_LEFTRIGHT} Cycle Party Pokémon\n{A_BUTTON} {B_BUTTON} Exit$"

Rogue_Interior_School_ShowSetRecommendation_Text_2:
# 25 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "If you need any more help, don't\n"
	.string "hesitate to ask!$"

Rogue_Interior_School_TalkRunningKid0_Text_0:
# 35 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "I'm double tapping B to run super fast!\p"
	.string "Same as if you want to escape from Wild\n"
	.string "Pokémon faster!\p"
	.string "So fast!$"

Rogue_Interior_School_TalkRunningKid1_Text_0:
# 45 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Get back here!\n"
	.string "B B B B B B!$"

Rogue_Interior_School_TalkRunningStatsHint_Text_0:
# 55 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Arrgghhh!\p"
	.string "It's so much harder to get my optimal EV\n"
	.string "spreads now!\p"
	.string "I use to just grind against Wild\n"
	.string "Pokémon, but now all your Pokémon gain\l"
	.string "EVs after Trainer battles instead.\p"
	.string "The EV spread they get is based on\n"
	.string "their Nature.\p"
	.string "So it' really important to have a good\n"
	.string "Nature as early as possible, if you want\l"
	.string "a good EV spread!\p"
	.string "At least you can check your EVs & IVs\n"
	.string "at any time!\p"
	.string "You can inspect them by pressing {A_BUTTON} on\n"
	.string "the Pokémon's Stats Summary.$"

Rogue_Interior_School_TalkPokeblock_Text_0:
# 65 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "My Pokémon love {POKEBLOCK}!\p"
	.string "Did you know, whenever you're on a\n"
	.string "Route, you can scatter some {POKEBLOCK} to\l"
	.string "try and attract new types of Pokémon.$"

Rogue_Interior_School_TalkTeacher_Text_0:
# 75 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Ah! Welcome!\p"
	.string "I've been making sure to teach my\n"
	.string "Students as much as possible about\l"
	.string "Adventuring!\p"
	.string "I'm sure they would be more than happy\n"
	.string "to share their knowledge with you, if\l"
	.string "you ask nicely!$"

Rogue_Interior_School_TalkRouteHint_Text_0:
# 86 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "I've been studying as much as I can\n"
	.string "about all the different types of\l"
	.string "encounters!\p"
	.string "I've still go plenty to learn.\p"
	.string "But I could tell you what I've learnt so\n"
	.string "far!$"

Rogue_Interior_School_TalkRouteHint_Text_1:
# 93 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Route Difficulty$"

Rogue_Interior_School_TalkRouteHint_Text_2:
# 94 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Route Types$"

Rogue_Interior_School_TalkRouteHint_Text_3:
# 95 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Trained Pokémon Habitats$"

Rogue_Interior_School_TalkRouteHint_Text_4:
# 96 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Honey Trees$"

Rogue_Interior_School_TalkRouteHint_Text_5:
# 98 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Is there anything I can tell you about?$"

Rogue_Interior_School_TalkRouteHint_Text_6:
# 105 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "SO!\n"
	.string "The Routes are always described by 2\l"
	.string "hints.\p"
	.string "Firstly, a Difficulty.\n"
	.string "Secondly, a Type.\p"
	.string "There are 3 different Difficulties:\n"
	.string "Calm, Average and Tough.\p"
	.string "On Calm Routes, you'll find more Wild\n"
	.string "Pokémon but fewer Items and Trainers.\p"
	.string "On Tough Routes, you'll find few Wild\n"
	.string "Pokémon but you'll find there are more\l"
	.string "Items and Trainers.\p"
	.string "The Items you find on these routes will\n"
	.string "typically be more valuable too.\p"
	.string "But in turn, the Trainers who explore\n"
	.string "these Routes also tend to be way\l"
	.string "stronger too!\p"
	.string "The Average Difficulty, is the middle\n"
	.string "ground between those 2.\p"
	.string "It's usually a good safe choice, if\n"
	.string "you're not desparate to catch new\l"
	.string "Pokémon!$"

Rogue_Interior_School_TalkRouteHint_Text_7:
# 108 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "SO!\n"
	.string "The Routes are always described by 2\l"
	.string "hints.\p"
	.string "Firstly, a Difficulty.\n"
	.string "Secondly, a Type.\p"
	.string "The Type hint is quite simple, each hint\n"
	.string "refers to a specific Pokémon Type. For\l"
	.string "example, Warm refers to Fire Type\l"
	.string "Pokémon, Confusing refers to Psychic\l"
	.string "Type Pokémon etc.\p"
	.string "The Type Hint means that we know that\n"
	.string "at least 1 Pokémon of that Type will\l"
	.string "appear on the Route.\p"
	.string "It's usually a safe bet that there will\n"
	.string "be more than 1 Pokémon that matches\l"
	.string "the Type Hint, in Calm Routes too.$"

Rogue_Interior_School_TalkRouteHint_Text_8:
# 111 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "SO!\n"
	.string "The Pokémon that appear at these\l"
	.string "encounters are very odd!\p"
	.string "It's almost as if they've already been\n"
	.string "Trained to battle!\p"
	.string "They'll usually already have a good\n"
	.string "nature, ability and moves. They often\l"
	.string "tend to have at least 1 perfect IV too!\p"
	.string "Because they're so strong, they prefer\n"
	.string "to live by themselves though AND\l"
	.string "there's no knowing what Pokémon it is\l"
	.string "before entering.\p"
	.string "It could be a Charizard!\n"
	.string "Or a Magikarp…\p"
	.string "So it can be a bit of a gamble at times.$"

Rogue_Interior_School_TalkRouteHint_Text_9:
# 114 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "SO!\n"
	.string "Honey Trees are only really useful to\l"
	.string "you, if you have some {POKEBLOCK}.\p"
	.string "They're a location that Wild Pokémon\n"
	.string "like to go to eat and relax, so you'll\l"
	.string "usually always find a random Pokémon\l"
	.string "hanging around near it, but the Honey\l"
	.string "Tree really becomes useful when you\l"
	.string "Scatter {POKEBLOCK} by it!\p"
	.string "It's pretty much a guarantee that the\n"
	.string "next time you visit the Honey Tree,\l"
	.string "you'll find a Pokémon chowing down on\l"
	.string "the {POKEBLOCK} you scattered.\p"
	.string "So lets say I wanted a Bulbasaur, I\n"
	.string "could scatter some Grass and Poison\l"
	.string "{POKEBLOCK} by the Honey Tree and then the\l"
	.string "next time I visit it, there could be a\l"
	.string "Bulbasaur there!\p"
	.string "There could also be an Oddish…\n"
	.string "Or a Bellsprout…\p"
	.string "The effectiveness really depends on\n"
	.string "how unique the Pokémon's Type\l"
	.string "combination is, provided you have the\l"
	.string "necessary {POKEBLOCK} to hand.$"

Rogue_Interior_School_TalkRouteHint_Text_10:
# 117 "data/maps/Rogue_Interior_School/scripts.pory"
	.string "Oh, OK…\n"
	.string "I've got plenty more to share, if you\l"
	.string "wanna know!$"
