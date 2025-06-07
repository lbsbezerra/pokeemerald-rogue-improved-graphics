//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/wild_encounters.json and Inja template src/data/wild_encounters.json.txt
//


#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 20 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 + 20
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_11 ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_TOTAL (ENCOUNTER_CHANCE_LAND_MONS_SLOT_11)
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_4 ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_WATER_MONS_TOTAL (ENCOUNTER_CHANCE_WATER_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_TOTAL (ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 60 
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 70 
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1 ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 + 30
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1)
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 40 
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 + 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 + 15
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 + 4
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 + 1
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)



const struct WildPokemon gSafariZone_South_LandMons[] =
{
    { 25, 25, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 25, 25, SPECIES_GIRAFARIG },
    { 27, 27, SPECIES_GIRAFARIG },
    { 25, 25, SPECIES_NATU },
    { 25, 25, SPECIES_DODUO },
    { 25, 25, SPECIES_GLOOM },
    { 27, 27, SPECIES_WOBBUFFET },
    { 25, 25, SPECIES_PIKACHU },
    { 27, 27, SPECIES_WOBBUFFET },
    { 27, 27, SPECIES_PIKACHU },
    { 29, 29, SPECIES_WOBBUFFET },
};

const struct WildPokemonInfo gSafariZone_South_LandMonsInfo = { 25, gSafariZone_South_LandMons };
const struct WildPokemon gSafariZone_Southwest_LandMons[] =
{
    { 25, 25, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 25, 25, SPECIES_GIRAFARIG },
    { 27, 27, SPECIES_GIRAFARIG },
    { 25, 25, SPECIES_NATU },
    { 27, 27, SPECIES_DODUO },
    { 25, 25, SPECIES_GLOOM },
    { 27, 27, SPECIES_WOBBUFFET },
    { 25, 25, SPECIES_PIKACHU },
    { 27, 27, SPECIES_WOBBUFFET },
    { 27, 27, SPECIES_PIKACHU },
    { 29, 29, SPECIES_WOBBUFFET },
};

const struct WildPokemonInfo gSafariZone_Southwest_LandMonsInfo = { 25, gSafariZone_Southwest_LandMons };
const struct WildPokemon gSafariZone_Southwest_WaterMons[] =
{
    { 20, 30, SPECIES_PSYDUCK },
    { 20, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo gSafariZone_Southwest_WaterMonsInfo = { 9, gSafariZone_Southwest_WaterMons };
const struct WildPokemon gSafariZone_Southwest_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 25, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_SEAKING },
    { 35, 40, SPECIES_SEAKING },
    { 25, 30, SPECIES_SEAKING },
};

const struct WildPokemonInfo gSafariZone_Southwest_FishingMonsInfo = { 35, gSafariZone_Southwest_FishingMons };
const struct WildPokemon gSafariZone_North_LandMons[] =
{
    { 27, 27, SPECIES_PHANPY },
    { 27, 27, SPECIES_ODDISH },
    { 29, 29, SPECIES_PHANPY },
    { 29, 29, SPECIES_ODDISH },
    { 27, 27, SPECIES_NATU },
    { 29, 29, SPECIES_GLOOM },
    { 31, 31, SPECIES_GLOOM },
    { 29, 29, SPECIES_NATU },
    { 29, 29, SPECIES_XATU },
    { 27, 27, SPECIES_HERACROSS },
    { 31, 31, SPECIES_XATU },
    { 29, 29, SPECIES_HERACROSS },
};

const struct WildPokemonInfo gSafariZone_North_LandMonsInfo = { 25, gSafariZone_North_LandMons };
const struct WildPokemon gSafariZone_North_RockSmashMons[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 20, 25, SPECIES_GEODUDE },
    { 25, 30, SPECIES_GEODUDE },
};

const struct WildPokemonInfo gSafariZone_North_RockSmashMonsInfo = { 25, gSafariZone_North_RockSmashMons };
const struct WildPokemon gSafariZone_Northwest_LandMons[] =
{
    { 27, 27, SPECIES_RHYHORN },
    { 27, 27, SPECIES_ODDISH },
    { 29, 29, SPECIES_RHYHORN },
    { 29, 29, SPECIES_ODDISH },
    { 27, 27, SPECIES_DODUO },
    { 29, 29, SPECIES_GLOOM },
    { 31, 31, SPECIES_GLOOM },
    { 29, 29, SPECIES_DODUO },
    { 29, 29, SPECIES_DODRIO },
    { 27, 27, SPECIES_PINSIR },
    { 31, 31, SPECIES_DODRIO },
    { 29, 29, SPECIES_PINSIR },
};

const struct WildPokemonInfo gSafariZone_Northwest_LandMonsInfo = { 25, gSafariZone_Northwest_LandMons };
const struct WildPokemon gSafariZone_Northwest_WaterMons[] =
{
    { 20, 30, SPECIES_PSYDUCK },
    { 20, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_GOLDUCK },
    { 25, 40, SPECIES_GOLDUCK },
};

const struct WildPokemonInfo gSafariZone_Northwest_WaterMonsInfo = { 9, gSafariZone_Northwest_WaterMons };
const struct WildPokemon gSafariZone_Northwest_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 25, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_SEAKING },
    { 35, 40, SPECIES_SEAKING },
    { 25, 30, SPECIES_SEAKING },
};

const struct WildPokemonInfo gSafariZone_Northwest_FishingMonsInfo = { 35, gSafariZone_Northwest_FishingMons };
const struct WildPokemon gSafariZone_Southeast_LandMons[] =
{
    { 33, 33, SPECIES_SUNKERN },
    { 34, 34, SPECIES_MAREEP },
    { 35, 35, SPECIES_SUNKERN },
    { 36, 36, SPECIES_MAREEP },
    { 34, 34, SPECIES_AIPOM },
    { 33, 33, SPECIES_SPINARAK },
    { 35, 35, SPECIES_HOOTHOOT },
    { 34, 34, SPECIES_SNUBBULL },
    { 36, 36, SPECIES_STANTLER },
    { 37, 37, SPECIES_GLIGAR },
    { 39, 39, SPECIES_STANTLER },
    { 40, 40, SPECIES_GLIGAR },
};

const struct WildPokemonInfo gSafariZone_Southeast_LandMonsInfo = { 25, gSafariZone_Southeast_LandMons };
const struct WildPokemon gSafariZone_Southeast_WaterMons[] =
{
    { 25, 30, SPECIES_WOOPER },
    { 25, 30, SPECIES_MARILL },
    { 25, 30, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 35, 40, SPECIES_QUAGSIRE },
};

const struct WildPokemonInfo gSafariZone_Southeast_WaterMonsInfo = { 9, gSafariZone_Southeast_WaterMons };
const struct WildPokemon gSafariZone_Southeast_FishingMons[] =
{
    { 25, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_REMORAID },
    { 25, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_REMORAID },
    { 30, 35, SPECIES_REMORAID },
    { 30, 35, SPECIES_REMORAID },
    { 35, 40, SPECIES_OCTILLERY },
};

const struct WildPokemonInfo gSafariZone_Southeast_FishingMonsInfo = { 35, gSafariZone_Southeast_FishingMons };
const struct WildPokemon gSafariZone_Northeast_LandMons[] =
{
    { 33, 33, SPECIES_AIPOM },
    { 34, 34, SPECIES_TEDDIURSA },
    { 35, 35, SPECIES_AIPOM },
    { 36, 36, SPECIES_TEDDIURSA },
    { 34, 34, SPECIES_SUNKERN },
    { 33, 33, SPECIES_LEDYBA },
    { 35, 35, SPECIES_HOOTHOOT },
    { 34, 34, SPECIES_PINECO },
    { 36, 36, SPECIES_HOUNDOUR },
    { 37, 37, SPECIES_MILTANK },
    { 39, 39, SPECIES_HOUNDOUR },
    { 40, 40, SPECIES_MILTANK },
};

const struct WildPokemonInfo gSafariZone_Northeast_LandMonsInfo = { 25, gSafariZone_Northeast_LandMons };
const struct WildPokemon gSafariZone_Northeast_RockSmashMons[] =
{
    { 25, 30, SPECIES_SHUCKLE },
    { 20, 25, SPECIES_SHUCKLE },
    { 30, 35, SPECIES_SHUCKLE },
    { 30, 35, SPECIES_SHUCKLE },
    { 35, 40, SPECIES_SHUCKLE },
};

const struct WildPokemonInfo gSafariZone_Northeast_RockSmashMonsInfo = { 25, gSafariZone_Northeast_RockSmashMons };
const struct WildPokemon gRogue_Route_Field00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field00_LandMonsInfo = { 20, gRogue_Route_Field00_LandMons };
const struct WildPokemon gRogue_Route_Field00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field00_WaterMonsInfo = { 5, gRogue_Route_Field00_WaterMons };
const struct WildPokemon gRogue_Route_Field00_RockSmashMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field00_RockSmashMonsInfo = { 20, gRogue_Route_Field00_RockSmashMons };
const struct WildPokemon gRogue_Route_Field00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field00_FishingMonsInfo = { 20, gRogue_Route_Field00_FishingMons };
const struct WildPokemon gRogue_Route_Field10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field10_LandMonsInfo = { 20, gRogue_Route_Field10_LandMons };
const struct WildPokemon gRogue_Route_Field10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field10_WaterMonsInfo = { 5, gRogue_Route_Field10_WaterMons };
const struct WildPokemon gRogue_Route_Field10_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Field10_FishingMonsInfo = { 20, gRogue_Route_Field10_FishingMons };
const struct WildPokemon gRogue_Route_Forest00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Forest00_LandMonsInfo = { 20, gRogue_Route_Forest00_LandMons };
const struct WildPokemon gRogue_Route_Cave00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Cave00_LandMonsInfo = { 3, gRogue_Route_Cave00_LandMons };
const struct WildPokemon gRogue_Route_Mountain00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain00_LandMonsInfo = { 20, gRogue_Route_Mountain00_LandMons };
const struct WildPokemon gRogue_Route_Mountain00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain00_WaterMonsInfo = { 5, gRogue_Route_Mountain00_WaterMons };
const struct WildPokemon gRogue_Route_Mountain00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain00_FishingMonsInfo = { 20, gRogue_Route_Mountain00_FishingMons };
const struct WildPokemon gRogue_Route_WaterFront0_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront0_LandMonsInfo = { 20, gRogue_Route_WaterFront0_LandMons };
const struct WildPokemon gRogue_Route_WaterFront0_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront0_WaterMonsInfo = { 5, gRogue_Route_WaterFront0_WaterMons };
const struct WildPokemon gRogue_Route_WaterFront0_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront0_FishingMonsInfo = { 20, gRogue_Route_WaterFront0_FishingMons };
const struct WildPokemon gRogue_Route_Urban00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban00_LandMonsInfo = { 20, gRogue_Route_Urban00_LandMons };
const struct WildPokemon gRogue_Route_Urban00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban00_WaterMonsInfo = { 5, gRogue_Route_Urban00_WaterMons };
const struct WildPokemon gRogue_Route_Urban00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban00_FishingMonsInfo = { 20, gRogue_Route_Urban00_FishingMons };
const struct WildPokemon gRogue_Route_Mountain10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain10_LandMonsInfo = { 20, gRogue_Route_Mountain10_LandMons };
const struct WildPokemon gRogue_Route_Mountain10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain10_WaterMonsInfo = { 5, gRogue_Route_Mountain10_WaterMons };
const struct WildPokemon gRogue_Route_Mountain10_FishingMons[] =
{
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain10_FishingMonsInfo = { 20, gRogue_Route_Mountain10_FishingMons };
const struct WildPokemon gRogue_Route_Mountain20_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain20_LandMonsInfo = { 20, gRogue_Route_Mountain20_LandMons };
const struct WildPokemon gRogue_Route_WaterFront10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront10_LandMonsInfo = { 5, gRogue_Route_WaterFront10_LandMons };
const struct WildPokemon gRogue_Route_WaterFront10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront10_WaterMonsInfo = { 5, gRogue_Route_WaterFront10_WaterMons };
const struct WildPokemon gRogue_Route_WaterFront10_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_WaterFront10_FishingMonsInfo = { 20, gRogue_Route_WaterFront10_FishingMons };
const struct WildPokemon gRogue_Route_Mountain30_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Mountain30_LandMonsInfo = { 20, gRogue_Route_Mountain30_LandMons };
const struct WildPokemon gRogue_Route_Urban10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban10_LandMonsInfo = { 20, gRogue_Route_Urban10_LandMons };
const struct WildPokemon gRogue_Route_Urban10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban10_WaterMonsInfo = { 5, gRogue_Route_Urban10_WaterMons };
const struct WildPokemon gRogue_Route_Urban10_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Urban10_FishingMonsInfo = { 20, gRogue_Route_Urban10_FishingMons };
const struct WildPokemon gRogue_Route_Kanto_Mountain00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Mountain00_LandMonsInfo = { 20, gRogue_Route_Kanto_Mountain00_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Mountain00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Mountain00_WaterMonsInfo = { 5, gRogue_Route_Kanto_Mountain00_WaterMons };
const struct WildPokemon gRogue_Route_Kanto_Mountain00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Mountain00_FishingMonsInfo = { 20, gRogue_Route_Kanto_Mountain00_FishingMons };
const struct WildPokemon gRogue_Route_Kanto_Field00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Field00_LandMonsInfo = { 20, gRogue_Route_Kanto_Field00_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Urban00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban00_LandMonsInfo = { 20, gRogue_Route_Kanto_Urban00_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Urban00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban00_WaterMonsInfo = { 5, gRogue_Route_Kanto_Urban00_WaterMons };
const struct WildPokemon gRogue_Route_Kanto_Urban00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban00_FishingMonsInfo = { 20, gRogue_Route_Kanto_Urban00_FishingMons };
const struct WildPokemon gRogue_Route_Chaos00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Chaos00_LandMonsInfo = { 10, gRogue_Route_Chaos00_LandMons };
const struct WildPokemon gRogue_Route_Chaos00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Chaos00_WaterMonsInfo = { 5, gRogue_Route_Chaos00_WaterMons };
const struct WildPokemon gRogue_Route_Chaos00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Chaos00_FishingMonsInfo = { 20, gRogue_Route_Chaos00_FishingMons };
const struct WildPokemon gRogue_Route_Johto_Field00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field00_LandMonsInfo = { 20, gRogue_Route_Johto_Field00_LandMons };
const struct WildPokemon gRogue_Route_Johto_Field00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field00_WaterMonsInfo = { 5, gRogue_Route_Johto_Field00_WaterMons };
const struct WildPokemon gRogue_Route_Johto_Field00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field00_FishingMonsInfo = { 20, gRogue_Route_Johto_Field00_FishingMons };
const struct WildPokemon gRogue_Route_Kanto_Forest00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Forest00_LandMonsInfo = { 20, gRogue_Route_Kanto_Forest00_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Cave00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Cave00_LandMonsInfo = { 3, gRogue_Route_Kanto_Cave00_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Urban10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban10_LandMonsInfo = { 20, gRogue_Route_Kanto_Urban10_LandMons };
const struct WildPokemon gRogue_Route_Kanto_Urban10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban10_WaterMonsInfo = { 5, gRogue_Route_Kanto_Urban10_WaterMons };
const struct WildPokemon gRogue_Route_Kanto_Urban10_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Kanto_Urban10_FishingMonsInfo = { 20, gRogue_Route_Kanto_Urban10_FishingMons };
const struct WildPokemon gRogue_Route_Johto_Field10_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field10_LandMonsInfo = { 20, gRogue_Route_Johto_Field10_LandMons };
const struct WildPokemon gRogue_Route_Johto_Field10_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field10_WaterMonsInfo = { 5, gRogue_Route_Johto_Field10_WaterMons };
const struct WildPokemon gRogue_Route_Johto_Field10_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Field10_FishingMonsInfo = { 20, gRogue_Route_Johto_Field10_FishingMons };
const struct WildPokemon gRogue_Route_Johto_Cave00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Cave00_LandMonsInfo = { 4, gRogue_Route_Johto_Cave00_LandMons };
const struct WildPokemon gRogue_Route_Johto_WaterFront00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_WaterFront00_LandMonsInfo = { 20, gRogue_Route_Johto_WaterFront00_LandMons };
const struct WildPokemon gRogue_Route_Johto_WaterFront00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_WaterFront00_WaterMonsInfo = { 5, gRogue_Route_Johto_WaterFront00_WaterMons };
const struct WildPokemon gRogue_Route_Johto_WaterFront00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_WaterFront00_FishingMonsInfo = { 20, gRogue_Route_Johto_WaterFront00_FishingMons };
const struct WildPokemon gRogue_Route_Johto_Urban00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Urban00_LandMonsInfo = { 20, gRogue_Route_Johto_Urban00_LandMons };
const struct WildPokemon gRogue_Route_Johto_Mountain00_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Mountain00_LandMonsInfo = { 20, gRogue_Route_Johto_Mountain00_LandMons };
const struct WildPokemon gRogue_Route_Johto_Mountain00_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Mountain00_WaterMonsInfo = { 5, gRogue_Route_Johto_Mountain00_WaterMons };
const struct WildPokemon gRogue_Route_Johto_Mountain00_FishingMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Johto_Mountain00_FishingMonsInfo = { 20, gRogue_Route_Johto_Mountain00_FishingMons };
const struct WildPokemon gRogue_Route_Sinnoh_2050_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2050_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2050_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2050_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2050_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2050_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_EternaForest0_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_EternaForest0_LandMonsInfo = { 20, gRogue_Route_Sinnoh_EternaForest0_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2070_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2070_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2070_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2070_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2070_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2070_WaterMons };
const struct WildPokemon gRogue_Encounter_CatchingContest0_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Encounter_CatchingContest0_LandMonsInfo = { 20, gRogue_Encounter_CatchingContest0_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2150_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2150_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2150_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2170_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2170_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2170_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2120_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2120_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2120_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2120_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2120_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2120_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_2100_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2100_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2100_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2100_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2100_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2100_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_2010_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2010_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2010_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2140_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2140_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2140_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2140_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2140_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2140_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_2090_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2090_LandMonsInfo = { 20, gRogue_Route_Sinnoh_2090_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_2090_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_2090_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_2090_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_MtCoronet0_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_MtCoronet0_LandMonsInfo = { 3, gRogue_Route_Sinnoh_MtCoronet0_LandMons };
const struct WildPokemon gRogue_Route_Sinnoh_MtCoronet0_WaterMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_MtCoronet0_WaterMonsInfo = { 5, gRogue_Route_Sinnoh_MtCoronet0_WaterMons };
const struct WildPokemon gRogue_Route_Sinnoh_IronIsland0_LandMons[] =
{
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
    { 5, 5, SPECIES_ABRA },
};

const struct WildPokemonInfo gRogue_Route_Sinnoh_IronIsland0_LandMonsInfo = { 3, gRogue_Route_Sinnoh_IronIsland0_LandMons };

const struct WildPokemonHeader gWildMonHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTH),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTH),
        .landMonsInfo = &gSafariZone_South_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHWEST),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTHWEST),
        .landMonsInfo = &gSafariZone_Southwest_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Southwest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Southwest_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
        .landMonsInfo = &gSafariZone_North_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &gSafariZone_North_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHWEST),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTHWEST),
        .landMonsInfo = &gSafariZone_Northwest_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Northwest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Northwest_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHEAST),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTHEAST),
        .landMonsInfo = &gSafariZone_Southeast_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Southeast_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Southeast_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHEAST),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTHEAST),
        .landMonsInfo = &gSafariZone_Northeast_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &gSafariZone_Northeast_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_FIELD0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_FIELD0),
        .landMonsInfo = &gRogue_Route_Field00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Field00_WaterMonsInfo,
        .rockSmashMonsInfo = &gRogue_Route_Field00_RockSmashMonsInfo,
        .fishingMonsInfo = &gRogue_Route_Field00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_FIELD1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_FIELD1),
        .landMonsInfo = &gRogue_Route_Field10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Field10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Field10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_FOREST0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_FOREST0),
        .landMonsInfo = &gRogue_Route_Forest00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_CAVE0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_CAVE0),
        .landMonsInfo = &gRogue_Route_Cave00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_MOUNTAIN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_MOUNTAIN0),
        .landMonsInfo = &gRogue_Route_Mountain00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Mountain00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Mountain00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_WATER_FRONT0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_WATER_FRONT0),
        .landMonsInfo = &gRogue_Route_WaterFront0_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_WaterFront0_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_WaterFront0_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_URBAN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_URBAN0),
        .landMonsInfo = &gRogue_Route_Urban00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Urban00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Urban00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_MOUNTAIN1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_MOUNTAIN1),
        .landMonsInfo = &gRogue_Route_Mountain10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Mountain10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Mountain10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_MOUNTAIN2),
        .mapNum = MAP_NUM(ROGUE_ROUTE_MOUNTAIN2),
        .landMonsInfo = &gRogue_Route_Mountain20_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_WATER_FRONT1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_WATER_FRONT1),
        .landMonsInfo = &gRogue_Route_WaterFront10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_WaterFront10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_WaterFront10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_MOUNTAIN3),
        .mapNum = MAP_NUM(ROGUE_ROUTE_MOUNTAIN3),
        .landMonsInfo = &gRogue_Route_Mountain30_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_URBAN1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_URBAN1),
        .landMonsInfo = &gRogue_Route_Urban10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Urban10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Urban10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_MOUNTAIN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_MOUNTAIN0),
        .landMonsInfo = &gRogue_Route_Kanto_Mountain00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Kanto_Mountain00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Kanto_Mountain00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_FIELD0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_FIELD0),
        .landMonsInfo = &gRogue_Route_Kanto_Field00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_URBAN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_URBAN0),
        .landMonsInfo = &gRogue_Route_Kanto_Urban00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Kanto_Urban00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Kanto_Urban00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_CHAOS0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_CHAOS0),
        .landMonsInfo = &gRogue_Route_Chaos00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Chaos00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Chaos00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_FIELD0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_FIELD0),
        .landMonsInfo = &gRogue_Route_Johto_Field00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Johto_Field00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Johto_Field00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_FOREST0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_FOREST0),
        .landMonsInfo = &gRogue_Route_Kanto_Forest00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_CAVE0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_CAVE0),
        .landMonsInfo = &gRogue_Route_Kanto_Cave00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_KANTO_URBAN1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_KANTO_URBAN1),
        .landMonsInfo = &gRogue_Route_Kanto_Urban10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Kanto_Urban10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Kanto_Urban10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_FIELD1),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_FIELD1),
        .landMonsInfo = &gRogue_Route_Johto_Field10_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Johto_Field10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Johto_Field10_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_CAVE0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_CAVE0),
        .landMonsInfo = &gRogue_Route_Johto_Cave00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_WATER_FRONT0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_WATER_FRONT0),
        .landMonsInfo = &gRogue_Route_Johto_WaterFront00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Johto_WaterFront00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Johto_WaterFront00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_URBAN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_URBAN0),
        .landMonsInfo = &gRogue_Route_Johto_Urban00_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_JOHTO_MOUNTAIN0),
        .mapNum = MAP_NUM(ROGUE_ROUTE_JOHTO_MOUNTAIN0),
        .landMonsInfo = &gRogue_Route_Johto_Mountain00_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Johto_Mountain00_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRogue_Route_Johto_Mountain00_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_205),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_205),
        .landMonsInfo = &gRogue_Route_Sinnoh_2050_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2050_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_ETERNA_FOREST),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_ETERNA_FOREST),
        .landMonsInfo = &gRogue_Route_Sinnoh_EternaForest0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_207),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_207),
        .landMonsInfo = &gRogue_Route_Sinnoh_2070_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2070_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ENCOUNTER_CATCHING_CONTEST),
        .mapNum = MAP_NUM(ROGUE_ENCOUNTER_CATCHING_CONTEST),
        .landMonsInfo = &gRogue_Encounter_CatchingContest0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_215),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_215),
        .landMonsInfo = &gRogue_Route_Sinnoh_2150_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_217),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_217),
        .landMonsInfo = &gRogue_Route_Sinnoh_2170_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_212),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_212),
        .landMonsInfo = &gRogue_Route_Sinnoh_2120_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2120_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_210),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_210),
        .landMonsInfo = &gRogue_Route_Sinnoh_2100_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2100_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_201),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_201),
        .landMonsInfo = &gRogue_Route_Sinnoh_2010_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_214),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_214),
        .landMonsInfo = &gRogue_Route_Sinnoh_2140_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2140_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_209),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_209),
        .landMonsInfo = &gRogue_Route_Sinnoh_2090_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_2090_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_MT_CORONET),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_MT_CORONET),
        .landMonsInfo = &gRogue_Route_Sinnoh_MtCoronet0_LandMonsInfo,
        .waterMonsInfo = &gRogue_Route_Sinnoh_MtCoronet0_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROGUE_ROUTE_SINNOH_IRON_ISLAND),
        .mapNum = MAP_NUM(ROGUE_ROUTE_SINNOH_IRON_ISLAND),
        .landMonsInfo = &gRogue_Route_Sinnoh_IronIsland0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};



const struct WildPokemon gBattlePike_1_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_1_LandMonsInfo = { 10, gBattlePike_1_LandMons };
const struct WildPokemon gBattlePike_2_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_2_LandMonsInfo = { 10, gBattlePike_2_LandMons };
const struct WildPokemon gBattlePike_3_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_3_LandMonsInfo = { 10, gBattlePike_3_LandMons };
const struct WildPokemon gBattlePike_4_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_4_LandMonsInfo = { 10, gBattlePike_4_LandMons };

const struct WildPokemonHeader gBattlePikeWildMonHeaders[] =
{
    {
        .mapGroup = 0,
        .mapNum = 1,
        .landMonsInfo = &gBattlePike_1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 2,
        .landMonsInfo = &gBattlePike_2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 3,
        .landMonsInfo = &gBattlePike_3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 4,
        .landMonsInfo = &gBattlePike_4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};
