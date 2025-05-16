#pragma once
#include <map>
#include <string>
#include "raylib.h"

extern std::map<std::string,Rectangle> assets;

/*
* Dans un seul fichier CPP faite:
* #define ASSETS_IMPLEMENTATION
* #include "assets.h"
* Dans les autres fichiers cpp que vous voulez acceder a la variable assets faite seulement include le .h
*/

#ifdef ASSETS_IMPLEMENTATION

std::map<std::string,Rectangle> assets = {
{"spaceAstronauts_002", CLITERAL(Rectangle){919,142, 37 ,44}},

{"spaceAstronauts_001", CLITERAL(Rectangle){998,847, 34 ,44}},

{"spaceAstronauts_003", CLITERAL(Rectangle){824,0, 50 ,44}},

{"spaceAstronauts_004", CLITERAL(Rectangle){392,632, 34 ,44}},

{"spaceAstronauts_005", CLITERAL(Rectangle){997,985, 37 ,44}},

{"spaceAstronauts_006", CLITERAL(Rectangle){824,44, 50 ,44}},

{"spaceAstronauts_007", CLITERAL(Rectangle){998,1073, 34 ,44}},

{"spaceAstronauts_008", CLITERAL(Rectangle){952,696, 37 ,44}},

{"spaceAstronauts_009", CLITERAL(Rectangle){822,372, 50 ,44}},

{"spaceAstronauts_010", CLITERAL(Rectangle){1064,667, 31 ,44}},

{"spaceAstronauts_011", CLITERAL(Rectangle){989,696, 37 ,44}},

{"spaceAstronauts_012", CLITERAL(Rectangle){822,276, 50 ,44}},

{"spaceAstronauts_013", CLITERAL(Rectangle){1064,1052, 31 ,44}},

{"spaceAstronauts_014", CLITERAL(Rectangle){991,796, 37 ,44}},

{"spaceAstronauts_015", CLITERAL(Rectangle){824,88, 50 ,44}},

{"spaceAstronauts_016", CLITERAL(Rectangle){998,507, 31 ,44}},

{"spaceAstronauts_017", CLITERAL(Rectangle){998,1029, 37 ,44}},

{"spaceAstronauts_018", CLITERAL(Rectangle){824,941, 50 ,44}},

{"spaceBuilding_001", CLITERAL(Rectangle){917,531, 42 ,42}},

{"spaceBuilding_002", CLITERAL(Rectangle){909,745, 42 ,84}},

{"spaceBuilding_003", CLITERAL(Rectangle){872,1031, 46 ,46}},

{"spaceBuilding_004", CLITERAL(Rectangle){1064,789, 28 ,28}},

{"spaceBuilding_005", CLITERAL(Rectangle){917,405, 42 ,84}},

{"spaceBuilding_006", CLITERAL(Rectangle){872,985, 46 ,46}},

{"spaceBuilding_007", CLITERAL(Rectangle){667,148, 84 ,84}},

{"spaceBuilding_008", CLITERAL(Rectangle){1064,817, 28 ,28}},

{"spaceBuilding_009", CLITERAL(Rectangle){674,1020, 84 ,84}},

{"spaceBuilding_010", CLITERAL(Rectangle){0,1111, 102 ,14}},

{"spaceBuilding_011", CLITERAL(Rectangle){383,780, 42 ,50}},

{"spaceBuilding_012", CLITERAL(Rectangle){802,884, 55 ,57}},

{"spaceBuilding_013", CLITERAL(Rectangle){818,1046, 54 ,55}},

{"spaceBuilding_014", CLITERAL(Rectangle){215,780, 168 ,40}},

{"spaceBuilding_015", CLITERAL(Rectangle){276,151, 168 ,40}},

{"spaceBuilding_016", CLITERAL(Rectangle){586,1020, 88 ,88}},

{"spaceBuilding_017", CLITERAL(Rectangle){758,961, 66 ,85}},

{"spaceBuilding_018", CLITERAL(Rectangle){905,829, 42 ,42}},

{"spaceBuilding_019", CLITERAL(Rectangle){1095,202, 17 ,38}},

{"spaceBuilding_020", CLITERAL(Rectangle){802,829, 55 ,55}},

{"spaceBuilding_021", CLITERAL(Rectangle){1066,325, 27 ,41}},

{"spaceBuilding_022", CLITERAL(Rectangle){1067,989, 26 ,41}},

{"spaceBuilding_023", CLITERAL(Rectangle){276,191, 165 ,66}},

{"spaceBuilding_024", CLITERAL(Rectangle){276,257, 165 ,66}},

{"spaceBuilding_025", CLITERAL(Rectangle){917,489, 42 ,42}},

{"spaceEffects_001", CLITERAL(Rectangle){537,299, 14 ,23}},

{"spaceEffects_002", CLITERAL(Rectangle){549,322, 13 ,30}},

{"spaceEffects_003", CLITERAL(Rectangle){377,374, 14 ,25}},

{"spaceEffects_004", CLITERAL(Rectangle){549,352, 13 ,32}},

{"spaceEffects_005", CLITERAL(Rectangle){1125,927, 6 ,12}},

{"spaceEffects_006", CLITERAL(Rectangle){1113,927, 12 ,12}},

{"spaceEffects_007", CLITERAL(Rectangle){1113,458, 16 ,12}},

{"spaceEffects_008", CLITERAL(Rectangle){282,1113, 21 ,21}},

{"spaceEffects_009", CLITERAL(Rectangle){477,299, 28 ,24}},

{"spaceEffects_010", CLITERAL(Rectangle){822,617, 30 ,28}},

{"spaceEffects_011", CLITERAL(Rectangle){1066,450, 26 ,26}},

{"spaceEffects_012", CLITERAL(Rectangle){919,942, 32 ,32}},

{"spaceEffects_013", CLITERAL(Rectangle){872,581, 37 ,36}},

{"spaceEffects_014", CLITERAL(Rectangle){959,1013, 35 ,36}},

{"spaceEffects_015", CLITERAL(Rectangle){874,194, 44 ,50}},

{"spaceEffects_016", CLITERAL(Rectangle){822,320, 50 ,52}},

{"spaceEffects_017", CLITERAL(Rectangle){377,323, 14 ,23}},

{"spaceEffects_018", CLITERAL(Rectangle){549,384, 13 ,30}},

{"spaceMeteors_001", CLITERAL(Rectangle){0,621, 215 ,21}},

{"spaceMeteors_002", CLITERAL(Rectangle){214,832, 212 ,21}},

{"spaceMeteors_003", CLITERAL(Rectangle){0,832, 214 ,22}},

{"spaceMeteors_004", CLITERAL(Rectangle){0,400, 220 ,22}},

{"spaceMissiles_001", CLITERAL(Rectangle){1093,995, 20 ,35}},

{"spaceMissiles_002", CLITERAL(Rectangle){1092,116, 20 ,35}},

{"spaceMissiles_003", CLITERAL(Rectangle){1095,1030, 18 ,51}},

{"spaceMissiles_004", CLITERAL(Rectangle){1095,844, 18 ,51}},

{"spaceMissiles_005", CLITERAL(Rectangle){1095,151, 18 ,51}},

{"spaceMissiles_006", CLITERAL(Rectangle){1093,711, 19 ,40}},

{"spaceMissiles_007", CLITERAL(Rectangle){1094,493, 19 ,40}},

{"spaceMissiles_008", CLITERAL(Rectangle){1094,533, 19 ,40}},

{"spaceMissiles_009", CLITERAL(Rectangle){1113,294, 12 ,48}},

{"spaceMissiles_010", CLITERAL(Rectangle){1112,246, 12 ,48}},

{"spaceMissiles_011", CLITERAL(Rectangle){549,533, 12 ,48}},

{"spaceMissiles_012", CLITERAL(Rectangle){505,299, 16 ,22}},

{"spaceMissiles_013", CLITERAL(Rectangle){521,299, 16 ,22}},

{"spaceMissiles_014", CLITERAL(Rectangle){156,1111, 16 ,22}},

{"spaceMissiles_015", CLITERAL(Rectangle){549,461, 12 ,25}},

{"spaceMissiles_016", CLITERAL(Rectangle){574,1020, 12 ,25}},

{"spaceMissiles_017", CLITERAL(Rectangle){562,1020, 12 ,25}},

{"spaceMissiles_018", CLITERAL(Rectangle){1092,46, 20 ,35}},

{"spaceMissiles_019", CLITERAL(Rectangle){1092,81, 20 ,35}},

{"spaceMissiles_020", CLITERAL(Rectangle){1093,325, 20 ,35}},

{"spaceMissiles_021", CLITERAL(Rectangle){1092,412, 22 ,46}},

{"spaceMissiles_022", CLITERAL(Rectangle){1092,366, 22 ,46}},

{"spaceMissiles_023", CLITERAL(Rectangle){1092,0, 22 ,46}},

{"spaceMissiles_024", CLITERAL(Rectangle){549,414, 12 ,47}},

{"spaceMissiles_025", CLITERAL(Rectangle){549,581, 12 ,47}},

{"spaceMissiles_026", CLITERAL(Rectangle){549,486, 12 ,47}},

{"spaceMissiles_027", CLITERAL(Rectangle){1124,844, 9 ,33}},

{"spaceMissiles_028", CLITERAL(Rectangle){854,1101, 18 ,33}},

{"spaceMissiles_029", CLITERAL(Rectangle){1112,696, 16 ,49}},

{"spaceMissiles_030", CLITERAL(Rectangle){1095,240, 17 ,38}},

{"spaceMissiles_031", CLITERAL(Rectangle){1114,342, 10 ,46}},

{"spaceMissiles_032", CLITERAL(Rectangle){324,1113, 14 ,20}},

{"spaceMissiles_033", CLITERAL(Rectangle){551,299, 10 ,23}},

{"spaceMissiles_034", CLITERAL(Rectangle){1095,663, 18 ,33}},

{"spaceMissiles_035", CLITERAL(Rectangle){1092,800, 20 ,44}},

{"spaceMissiles_036", CLITERAL(Rectangle){1114,388, 10 ,45}},

{"spaceMissiles_037", CLITERAL(Rectangle){1113,642, 11 ,35}},

{"spaceMissiles_038", CLITERAL(Rectangle){1113,830, 11 ,35}},

{"spaceMissiles_039", CLITERAL(Rectangle){1113,142, 11 ,35}},

{"spaceMissiles_040", CLITERAL(Rectangle){1092,458, 20 ,35}},

{"spaceParts_001", CLITERAL(Rectangle){959,276, 39 ,71}},

{"spaceParts_002", CLITERAL(Rectangle){919,71, 41 ,71}},

{"spaceParts_003", CLITERAL(Rectangle){961,197, 37 ,72}},

{"spaceParts_004", CLITERAL(Rectangle){1066,0, 26 ,84}},

{"spaceParts_005", CLITERAL(Rectangle){1028,768, 36 ,79}},

{"spaceParts_006", CLITERAL(Rectangle){909,581, 43 ,82}},

{"spaceParts_007", CLITERAL(Rectangle){1034,415, 32 ,86}},

{"spaceParts_008", CLITERAL(Rectangle){872,427, 45 ,77}},

{"spaceParts_009", CLITERAL(Rectangle){1028,692, 36 ,76}},

{"spaceParts_010", CLITERAL(Rectangle){960,63, 38 ,71}},

{"spaceParts_011", CLITERAL(Rectangle){960,842, 38 ,71}},

{"spaceParts_012", CLITERAL(Rectangle){861,749, 48 ,70}},

{"spaceParts_013", CLITERAL(Rectangle){861,679, 48 ,70}},

{"spaceParts_014", CLITERAL(Rectangle){822,416, 50 ,67}},

{"spaceParts_015", CLITERAL(Rectangle){822,483, 50 ,67}},

{"spaceParts_016", CLITERAL(Rectangle){959,347, 39 ,71}},

{"spaceParts_017", CLITERAL(Rectangle){387,688, 39 ,71}},

{"spaceParts_018", CLITERAL(Rectangle){919,0, 41 ,71}},

{"spaceParts_019", CLITERAL(Rectangle){919,871, 41 ,71}},

{"spaceParts_020", CLITERAL(Rectangle){992,564, 37 ,72}},

{"spaceParts_021", CLITERAL(Rectangle){997,913, 37 ,72}},

{"spaceParts_022", CLITERAL(Rectangle){1066,366, 26 ,84}},

{"spaceParts_023", CLITERAL(Rectangle){1069,845, 26 ,84}},

{"spaceParts_024", CLITERAL(Rectangle){998,428, 36 ,79}},

{"spaceParts_025", CLITERAL(Rectangle){998,349, 36 ,79}},

{"spaceParts_026", CLITERAL(Rectangle){909,663, 43 ,82}},

{"spaceParts_027", CLITERAL(Rectangle){918,194, 43 ,82}},

{"spaceParts_028", CLITERAL(Rectangle){1034,285, 32 ,86}},

{"spaceParts_029", CLITERAL(Rectangle){872,504, 45 ,77}},

{"spaceParts_030", CLITERAL(Rectangle){874,899, 45 ,77}},

{"spaceParts_031", CLITERAL(Rectangle){998,197, 36 ,76}},

{"spaceParts_032", CLITERAL(Rectangle){998,273, 36 ,76}},

{"spaceParts_033", CLITERAL(Rectangle){1034,155, 32 ,86}},

{"spaceParts_034", CLITERAL(Rectangle){992,636, 37 ,56}},

{"spaceParts_035", CLITERAL(Rectangle){1035,989, 32 ,63}},

{"spaceParts_036", CLITERAL(Rectangle){871,132, 48 ,62}},

{"spaceParts_037", CLITERAL(Rectangle){1034,847, 35 ,71}},

{"spaceParts_038", CLITERAL(Rectangle){952,573, 40 ,57}},

{"spaceParts_039", CLITERAL(Rectangle){960,0, 38 ,63}},

{"spaceParts_040", CLITERAL(Rectangle){874,0, 45 ,66}},

{"spaceParts_041", CLITERAL(Rectangle){802,645, 59 ,66}},

{"spaceParts_042", CLITERAL(Rectangle){822,209, 52 ,67}},

{"spaceParts_043", CLITERAL(Rectangle){1034,89, 34 ,66}},

{"spaceParts_044", CLITERAL(Rectangle){1064,711, 29 ,47}},

{"spaceParts_045", CLITERAL(Rectangle){874,66, 43 ,62}},

{"spaceParts_046", CLITERAL(Rectangle){952,630, 40 ,66}},

{"spaceParts_047", CLITERAL(Rectangle){991,740, 37 ,56}},

{"spaceParts_048", CLITERAL(Rectangle){999,133, 32 ,63}},

{"spaceParts_049", CLITERAL(Rectangle){861,617, 48 ,62}},

{"spaceParts_050", CLITERAL(Rectangle){1034,918, 35 ,71}},

{"spaceParts_051", CLITERAL(Rectangle){958,1056, 40 ,57}},

{"spaceParts_052", CLITERAL(Rectangle){961,134, 38 ,63}},

{"spaceParts_053", CLITERAL(Rectangle){872,361, 45 ,66}},

{"spaceParts_054", CLITERAL(Rectangle){857,925, 16 ,16}},

{"spaceParts_055", CLITERAL(Rectangle){802,763, 59 ,66}},

{"spaceParts_056", CLITERAL(Rectangle){819,142, 52 ,67}},

{"spaceParts_057", CLITERAL(Rectangle){652,148, 14 ,29}},

{"spaceParts_058", CLITERAL(Rectangle){548,1001, 14 ,29}},

{"spaceParts_059", CLITERAL(Rectangle){1112,800, 12 ,30}},

{"spaceParts_060", CLITERAL(Rectangle){742,1104, 12 ,30}},

{"spaceParts_061", CLITERAL(Rectangle){1094,604, 17 ,26}},

{"spaceParts_062", CLITERAL(Rectangle){857,899, 17 ,26}},

{"spaceParts_063", CLITERAL(Rectangle){377,346, 14 ,28}},

{"spaceParts_064", CLITERAL(Rectangle){905,871, 14 ,28}},

{"spaceParts_065", CLITERAL(Rectangle){1068,84, 24 ,29}},

{"spaceParts_066", CLITERAL(Rectangle){1068,113, 24 ,29}},

{"spaceParts_067", CLITERAL(Rectangle){1090,1096, 20 ,30}},

{"spaceParts_068", CLITERAL(Rectangle){1091,633, 20 ,30}},

{"spaceParts_069", CLITERAL(Rectangle){1095,895, 17 ,32}},

{"spaceParts_070", CLITERAL(Rectangle){1095,278, 17 ,32}},

{"spaceParts_071", CLITERAL(Rectangle){1123,0, 9 ,33}},

{"spaceParts_072", CLITERAL(Rectangle){1124,112, 9 ,33}},

{"spaceParts_073", CLITERAL(Rectangle){1124,342, 9 ,33}},

{"spaceParts_074", CLITERAL(Rectangle){1116,745, 9 ,33}},

{"spaceParts_075", CLITERAL(Rectangle){1124,145, 9 ,33}},

{"spaceParts_076", CLITERAL(Rectangle){1124,778, 9 ,33}},

{"spaceParts_077", CLITERAL(Rectangle){1114,0, 9 ,33}},

{"spaceParts_078", CLITERAL(Rectangle){1124,811, 9 ,33}},

{"spaceParts_079", CLITERAL(Rectangle){1065,633, 26 ,26}},

{"spaceParts_080", CLITERAL(Rectangle){1064,1096, 26 ,26}},

{"spaceParts_081", CLITERAL(Rectangle){410,759, 16 ,16}},

{"spaceParts_082", CLITERAL(Rectangle){1066,476, 17 ,25}},

{"spaceParts_083", CLITERAL(Rectangle){387,759, 23 ,21}},

{"spaceParts_084", CLITERAL(Rectangle){303,1113, 21 ,18}},

{"spaceParts_085", CLITERAL(Rectangle){1094,573, 19 ,31}},

{"spaceParts_086", CLITERAL(Rectangle){1064,758, 28 ,31}},

{"spaceParts_087", CLITERAL(Rectangle){441,299, 36 ,22}},

{"spaceParts_088", CLITERAL(Rectangle){172,1099, 58 ,28}},

{"spaceParts_089", CLITERAL(Rectangle){102,1111, 54 ,12}},

{"spaceParts_090", CLITERAL(Rectangle){655,1108, 47 ,26}},

{"spaceParts_091", CLITERAL(Rectangle){282,1099, 51 ,14}},

{"spaceParts_092", CLITERAL(Rectangle){1112,112, 11 ,30}},

{"spaceParts_093", CLITERAL(Rectangle){1111,604, 16 ,38}},

{"spaceParts_094", CLITERAL(Rectangle){1112,895, 14 ,32}},

{"spaceParts_095", CLITERAL(Rectangle){1110,1081, 16 ,42}},

{"spaceParts_096", CLITERAL(Rectangle){959,942, 38 ,71}},

{"spaceParts_097", CLITERAL(Rectangle){857,829, 48 ,70}},

{"spaceParts_098", CLITERAL(Rectangle){822,550, 50 ,67}},

{"spaceRocketParts_001", CLITERAL(Rectangle){756,0, 68 ,78}},

{"spaceRocketParts_002", CLITERAL(Rectangle){754,368, 68 ,78}},

{"spaceRocketParts_003", CLITERAL(Rectangle){586,1108, 69 ,26}},

{"spaceRocketParts_004", CLITERAL(Rectangle){754,510, 68 ,71}},

{"spaceRocketParts_005", CLITERAL(Rectangle){686,596, 68 ,40}},

{"spaceRocketParts_006", CLITERAL(Rectangle){686,450, 68 ,73}},

{"spaceRocketParts_007", CLITERAL(Rectangle){686,523, 68 ,73}},

{"spaceRocketParts_008", CLITERAL(Rectangle){686,345, 68 ,41}},

{"spaceRocketParts_009", CLITERAL(Rectangle){686,281, 68 ,64}},

{"spaceRocketParts_010", CLITERAL(Rectangle){686,386, 68 ,64}},

{"spaceRocketParts_011", CLITERAL(Rectangle){667,232, 82 ,49}},

{"spaceRocketParts_012", CLITERAL(Rectangle){872,1077, 44 ,44}},

{"spaceRocketParts_013", CLITERAL(Rectangle){919,316, 38 ,36}},

{"spaceRocketParts_014", CLITERAL(Rectangle){802,711, 59 ,52}},

{"spaceRocketParts_015", CLITERAL(Rectangle){960,913, 28 ,28}},

{"spaceRocketParts_016", CLITERAL(Rectangle){754,226, 68 ,64}},

{"spaceRocketParts_017", CLITERAL(Rectangle){754,446, 68 ,64}},

{"spaceRocketParts_018", CLITERAL(Rectangle){756,78, 68 ,64}},

{"spaceRocketParts_019", CLITERAL(Rectangle){754,581, 68 ,64}},

{"spaceRocketParts_020", CLITERAL(Rectangle){1066,155, 29 ,17}},

{"spaceRocketParts_021", CLITERAL(Rectangle){1065,501, 29 ,13}},

{"spaceRocketParts_022", CLITERAL(Rectangle){1029,507, 36 ,16}},

{"spaceRocketParts_023", CLITERAL(Rectangle){959,418, 39 ,14}},

{"spaceRocketParts_024", CLITERAL(Rectangle){918,976, 41 ,80}},

{"spaceRocketParts_025", CLITERAL(Rectangle){951,745, 40 ,97}},

{"spaceRocketParts_026", CLITERAL(Rectangle){998,0, 37 ,89}},

{"spaceRocketParts_027", CLITERAL(Rectangle){872,276, 47 ,85}},

{"spaceRocketParts_028", CLITERAL(Rectangle){1035,0, 31 ,83}},

{"spaceRocketParts_029", CLITERAL(Rectangle){754,290, 68 ,78}},

{"spaceRocketParts_030", CLITERAL(Rectangle){751,148, 68 ,78}},

{"spaceRocketParts_031", CLITERAL(Rectangle){684,961, 74 ,45}},

{"spaceRockets_001", CLITERAL(Rectangle){562,646, 122 ,37}},

{"spaceRockets_002", CLITERAL(Rectangle){392,323, 157 ,30}},

{"spaceRockets_003", CLITERAL(Rectangle){684,646, 118 ,31}},

{"spaceRockets_004", CLITERAL(Rectangle){426,632, 136 ,36}},

{"spaceShips_001", CLITERAL(Rectangle){480,1045, 106 ,80}},

{"spaceShips_002", CLITERAL(Rectangle){276,323, 101 ,74}},

{"spaceShips_003", CLITERAL(Rectangle){567,191, 100 ,94}},

{"spaceShips_004", CLITERAL(Rectangle){441,191, 126 ,10}},

{"spaceShips_005", CLITERAL(Rectangle){344,1050, 136 ,84}},

{"spaceShips_006", CLITERAL(Rectangle){662,0, 94 ,14}},

{"spaceShips_007", CLITERAL(Rectangle){276,0, 172 ,15}},

{"spaceShips_008", CLITERAL(Rectangle){562,58, 100 ,82}},

{"spaceShips_009", CLITERAL(Rectangle){448,58, 114 ,82}},

{"spaceStation_001", CLITERAL(Rectangle){444,151, 124 ,40}},

{"spaceStation_002", CLITERAL(Rectangle){874,244, 40 ,28}},

{"spaceStation_003", CLITERAL(Rectangle){702,1104, 40 ,28}},

{"spaceStation_004", CLITERAL(Rectangle){814,1101, 40 ,28}},

{"spaceStation_005", CLITERAL(Rectangle){917,361, 42 ,44}},

{"spaceStation_006", CLITERAL(Rectangle){998,89, 36 ,44}},

{"spaceStation_007", CLITERAL(Rectangle){1034,241, 32 ,44}},

{"spaceStation_008", CLITERAL(Rectangle){1034,371, 32 ,44}},

{"spaceStation_009", CLITERAL(Rectangle){1112,202, 16 ,44}},

{"spaceStation_010", CLITERAL(Rectangle){1069,929, 24 ,44}},

{"spaceStation_011", CLITERAL(Rectangle){824,985, 48 ,44}},

{"spaceStation_012", CLITERAL(Rectangle){1032,1073, 32 ,44}},

{"spaceStation_013", CLITERAL(Rectangle){758,1084, 56 ,44}},

{"spaceStation_014", CLITERAL(Rectangle){916,1077, 42 ,44}},

{"spaceStation_015", CLITERAL(Rectangle){426,1001, 122 ,44}},

{"spaceStation_016", CLITERAL(Rectangle){919,276, 40 ,40}},

{"spaceStation_017", CLITERAL(Rectangle){572,0, 82 ,44}},

{"spaceStation_018", CLITERAL(Rectangle){0,1059, 172 ,52}},

{"spaceStation_019", CLITERAL(Rectangle){215,688, 172 ,52}},

{"spaceStation_020", CLITERAL(Rectangle){562,299, 124 ,34}},

{"spaceStation_021", CLITERAL(Rectangle){220,400, 172 ,28}},

{"spaceStation_022", CLITERAL(Rectangle){215,740, 172 ,40}},

{"spaceStation_023", CLITERAL(Rectangle){172,1059, 172 ,40}},

{"spaceStation_024", CLITERAL(Rectangle){0,0, 276 ,40}},

{"spaceStation_025", CLITERAL(Rectangle){1112,46, 16 ,66}},

{"spaceStation_026", CLITERAL(Rectangle){1092,758, 24 ,42}},

{"spaceStation_027", CLITERAL(Rectangle){1093,929, 20 ,66}},

{"spaceStation_028", CLITERAL(Rectangle){448,0, 124 ,58}},

{"spaceStation_029", CLITERAL(Rectangle){568,148, 84 ,36}},

{"spaceStation_030", CLITERAL(Rectangle){230,1099, 52 ,34}},

{"spaceStation_031", CLITERAL(Rectangle){758,1046, 60 ,38}}
};
#endif