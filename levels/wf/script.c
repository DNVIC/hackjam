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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x02, 0x02, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -4000, -800, 9700, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -400, 8900, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -1100, 3200, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -900, 2000, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -800, -2000, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -1000, -5000, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, -900, -6300, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 2100, -5100, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 2400, -4200, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 2700, -3400, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 4000, 3100, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 4300, 4000, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 4600, 4700, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 7400, 3900, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -4000, 7500, 2800, 0, 0, 0, 0x00000000, bhvBalloon),
		MARIO_POS(0x01, -180, 0, -900, 11000),
		OBJECT(MODEL_NONE, -4000, 8100, 0, 0, 0, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 0, -900, 11000, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_ATLENA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_WF, 0x03, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3972, -1000, 2037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, -900, 1037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, -800, 37, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, -600, -963, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, -500, -1963, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 3300, -1963, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 3600, -963, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 3900, 37, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 4300, 1037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 4600, 2037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 7700, 2037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 8000, 1037, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 8300, 37, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 8500, -1063, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, 8700, -1963, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, 3972, -100, 5037, 0, 0, 0, 0x00020000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 3972, 9000, -4463, 0, 0, 0, 0x00030000, bhvWarp),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_ATLENA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_STAR, 11972, -500, 37, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 11972, -1546, -2043, 0, 0, 0, (55 << 24) | (5 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 11972, -100, 2037, 0, 0, 0, 0x00040000, bhvFadingWarp),
		OBJECT(MODEL_LEVEL_GATE, 11972, -1225, -2043, 0, 0, 0, (1 << 16), bhvLevelGate),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_ATLENA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, -900, 11000),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
