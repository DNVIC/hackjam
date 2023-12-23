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
#include "levels/thi/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_thi_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, thi_geo_0005F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, thi_area_1),
		WARP_NODE(0x0A, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_THI, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 1719, 1634, 24),
		OBJECT(MODEL_THI_WARP_PIPE, -7, 6667, -2012, 0, 0, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1579, 757, -1373, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1457, 929, -1600, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 809, 1903, -3686, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1050, 1963, -2847, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3291, 1866, -3827, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3086, 2106, -3527, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1234, 705, 221, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 1719, 1634, 24, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(thi_area_1_collision),
		MACRO_OBJECTS(thi_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_QUAGMIRE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, thi_area_3),
		WARP_NODE(0xF0, LEVEL_THI, 0x03, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_THI, 0x03, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_THI, 0x04, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_THI, 0x02, 0x03, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 360, 5957, -2348, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_NONE, 360, 6723, -2348, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_NONE, -392, 6319, -2348, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_THI_WARP_PIPE, 254, 3013, -2012, 0, 0, 0, 0x00040000, bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 242, 7871, -2026, 0, 0, 0, 0x00050000, bhvWarpPipe),
		TERRAIN(thi_area_3_collision),
		MACRO_OBJECTS(thi_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_QUAGMIRE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, thi_area_4),
		WARP_NODE(0xF0, LEVEL_THI, 0x04, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_THI, 0x04, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_THI, 0x03, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LEVEL_GATE , 2, -528, -476, 0, -90, 0, (1 << 16), bhvLevelGate),
		OBJECT(MODEL_NONE, 2, -1498, -476, 0, -90, 0, (55 << 24) | (5 << 16), bhvWarp),
		OBJECT(MODEL_THI_WARP_PIPE, 1742, 1120, 1029, 0, 0, 0, 0x00060000, bhvWarpPipe),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1579, 757, -1373, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1457, 929, -1600, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 809, 1903, -3686, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1050, 1963, -2847, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3291, 1866, -3827, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3086, 2106, -3527, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1234, 705, 221, 0, 0, 0, 0x00000000, bhvTree),
		TERRAIN(thi_area_4_collision),
		MACRO_OBJECTS(thi_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_QUAGMIRE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, thi_area_2),
		WARP_NODE(0xF0, LEVEL_THI, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_THI, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_THI, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_THI, 0x03, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_THI_WARP_PIPE, 1836, 1103, 706, 0, 0, 0, 0x00020000, bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 76, 6673, -2026, 0, 0, 0, 0x00030000, bhvWarpPipe),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1579, 757, -1373, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1457, 929, -1600, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 809, 1903, -3686, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1050, 1963, -2847, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3291, 1866, -3827, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3086, 2106, -3527, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1234, 705, 221, 0, 0, 0, 0x00000000, bhvTree),
		TERRAIN(thi_area_2_collision),
		MACRO_OBJECTS(thi_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EQUINOX_QUAGMIRE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 1719, 1634, 24),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
