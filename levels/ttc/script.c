#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ttc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _machine_yay0SegmentRomStart, _machine_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0xd, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BLUE_ROTATING_PLATFORM, blue_rotating_platform_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 3654, 0, 0, 0, (85 << 24) | (182 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 3654, 0, 0, 0, (0 << 24) | (0 << 16) | (7 << 8) | (180), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 7193, 0, 0, 0, (85 << 24) | (54 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 3491, -1374, 6418, 0, -60, 0, (85 << 24) | (54 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 2268, 2375, 6274, 0, -60, 0, (85 << 24) | (54 << 16) | (7 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 8841, -411, 6163, 10, 7, 6, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 9308, 128, 7565, 0, 0, 0, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 7438, 527, 5635, 12, 6, 7, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -3691, 513, 5395, 0, 0, 0, (0 << 24) | (0 << 16) | (7 << 8) | (180), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -1220, 1501, 6394, 0, 105, 0, (85 << 24) | (54 << 16) | (7 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4137, 2905, 6321, 0, 0, 0, (0 << 24) | (0 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 3290, 8048, 0, 0, 0, (45 << 24) | (168 << 16) | (3 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 4154, 8048, 0, 180, 0, (45 << 24) | (40 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 4854, 8048, 0, 0, 0, (45 << 24) | (168 << 16) | (3 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 306, -1411, -8047, 0, 0, 0, (215 << 24) | (20 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 306, -1411, -8047, 0, -180, 0, (215 << 24) | (20 << 16) | (3 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 7525, -802, -8104, 90, 0, -180, (0 << 24) | (0 << 16) | (0 << 8) | (88), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -8071, -2282, -8719, 0, -180, 0, (20 << 24) | (40 << 16) | (0 << 8) | (12), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -5818, -1213, -8117, 0, 0, 0, (0 << 24) | (0 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 5825, -1213, -8117, 0, 0, 0, (0 << 24) | (0 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -8071, -1652, -7532, 0, -180, 0, (20 << 24) | (40 << 16) | (0 << 8) | (12), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -24, -1652, -18199, 0, -180, 0, (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_LEVEL_GATE, 0, -1111, -135, 90, 0, 0, (3 << 16), bhvLevelGate),
		OBJECT(MODEL_LEVEL_GATE, 0, -1111, -14603, 90, 0, 0, (1 << 16), bhvLevelGate),
		OBJECT(MODEL_LEVEL_GATE, 0, -1111, 11493, 90, 0, 0, (6 << 16), bhvLevelGate),
		OBJECT(MODEL_WHOMP, 0, -1356, 16745, 0, -180, 0, 0x00000000, bhvWhompKingBoss),
		OBJECT(MODEL_NONE, 0, -433, 14809, 0, 0, 0, 0x00000000, bhvEndingWarp),
		OBJECT(MODEL_STAR, -3691, 1016, 5395, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 9316, 1016, 7584, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, -3602, 5666, 10759, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, 8236, -802, -8104, 0, 0, 0, (3 << 16), bhvStar),
		OBJECT(MODEL_STAR, -10770, -2202, -8104, 0, -180, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_STAR, 0, -669, -16650, 0, -180, 0, (5 << 24), bhvStar),
		OBJECT(MODEL_NONE, 6133, 814, 5499, 0, -60, 0, (0 << 24) | (17 << 16) | (0 << 8) | (0), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, -724, 13561, 0, 0, 0, (10 << 16), bhvSpinAirborneWarp),
		TERRAIN(ttc_area_1_collision),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_AE1_SUSHI_TEMPLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
