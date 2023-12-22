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
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_BLUE_ROTATING_PLATFORM, blue_rotating_platform_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 2898, 0, 0, 0, (85 << 24) | (182 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 2898, 0, 0, 0, (0 << 24) | (0 << 16) | (7 << 8) | (180), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 0, -1374, 6437, 0, 0, 0, (85 << 24) | (54 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 3491, -1374, 5661, 0, -60, 0, (85 << 24) | (54 << 16) | (7 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 2268, 2375, 5518, 0, -60, 0, (85 << 24) | (54 << 16) | (7 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 8841, -411, 5407, 10, 7, 6, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 9308, 128, 6809, 0, 0, 0, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, 7438, 527, 4878, 12, 6, 7, (0 << 24) | (0 << 16) | (1 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -3691, 513, 4639, 0, 0, 0, (0 << 24) | (0 << 16) | (7 << 8) | (180), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -1220, 1501, 5637, 0, 105, 0, (85 << 24) | (54 << 16) | (7 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4137, 2905, 5565, 0, 0, 0, (0 << 24) | (0 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 3290, 7292, 0, 0, 0, (45 << 24) | (168 << 16) | (3 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 4154, 7292, 0, 180, 0, (45 << 24) | (40 << 16) | (3 << 8) | (0), bhvBlueRotatingPlatform),
		OBJECT(MODEL_BLUE_ROTATING_PLATFORM, -4217, 4854, 7292, 0, 0, 0, (45 << 24) | (168 << 16) | (3 << 8) | (128), bhvBlueRotatingPlatform),
		OBJECT(MODEL_LEVEL_GATE, 0, -1111, -892, 90, 0, 0, (3 << 16), bhvLevelGate),
		OBJECT(MODEL_STAR, -3691, 1016, 4639, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 9316, 1016, 6828, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, -3602, 5666, 10002, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_NONE, 6133, 814, 4743, 0, -60, 0, (0 << 24) | (17 << 16) | (0 << 8) | (0), bhvCoinFormation),
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
