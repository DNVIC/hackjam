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
#include "levels/rr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_rr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0xd, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, rr_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, rr_geo_000678), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, rr_geo_000690), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, rr_geo_0006A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, rr_geo_0006C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, rr_geo_0006D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, rr_geo_0006F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, rr_geo_000708), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, rr_geo_000720), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, rr_geo_000738), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, rr_geo_000758), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, rr_geo_000770), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, rr_geo_000788), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, rr_geo_0007A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, rr_geo_0007B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, rr_geo_0007D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, rr_geo_0007E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, rr_geo_000800), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, rr_geo_000818), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16, rr_geo_000830), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM, rr_geo_0008C0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET, rr_geo_000848), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM, rr_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM, rr_geo_0008D8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING, rr_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM, rr_geo_000908), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM, rr_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM, rr_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM, rr_geo_000920), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM, rr_geo_0008F0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES, rr_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1, rr_geo_000970), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2, rr_geo_000988), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3, rr_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4, rr_geo_0009B8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, rr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_RR, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_RR, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2341, 1806, -4623, 0, -64, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -574, 1433, -4653, 35, -102, -36, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3348, 162, -1895, 0, -83, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 594, 2110, 719, 0, 179, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1501, 2224, 4100, 0, 98, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 791, 1433, -4076, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4135, 2863, 1903, 0, 98, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1338, 141, 2225, 0, 98, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6459, -435, -2701, 0, 98, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1830, -280, -5997, 0, 98, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1829, 181, 4515, 0, 98, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2225, -124, 2233, 0, -1, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1816, 134, 4599, 0, -102, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_RED_COIN, -6401, 502, -3103, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5687, 502, -6720, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2281, 2064, -2795, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4850, -113, 4180, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -420, 1794, -1134, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2381, -229, -628, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1545, -17, -4327, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4266, 237, -1763, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PIRANHA_PLANT, -5565, -230, 2062, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 234, 631, -2695, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -3714, -47, -5516, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_NONE, -1618, -248, 453, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 871, 217, 4930, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -3995, -221, 4630, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 693, 1954, -193, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -2514, 1876, -2516, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -4321, -109, -4921, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -873, -257, -6043, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -1223, 630, -2309, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -207, 1339, -2554, 0, 0, 0, (10 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_LEVEL_GATE, 1855, -630, 778, 0, 0, 0, (7 << 16), bhvLevelGate),
		OBJECT(MODEL_NONE, 1855, -808, 778, 0, 0, 0, (55 << 24) | (5 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -133, 1255, -2582, 0, 0, 0, (5 << 24) | (8 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, -2489, 3831, 676, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1427, 3534, -5526, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -7861, 1606, -2609, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_KING_BOBOMB, -1328, 135, 2263, 0, 0, 0, (4 << 24), bhvKingBobomb),
		OBJECT(MODEL_NONE, -5833, 277, 2196, 0, 0, 0, (1), bhvBlueGoombaStar),
		OBJECT(MODEL_GOOMBA, 752, 237, 4627, 0, 0, 0, (1), bhvFloomba),
		OBJECT(MODEL_GOOMBA, -2703, 2182, 4633, 0, 0, 0, (1), bhvFloomba),
		OBJECT(MODEL_GOOMBA, -1727, 1549, -5015, 0, 0, 0, (1), bhvFloomba),
		OBJECT(MODEL_GOOMBA, 1852, -13, -1245, 0, 0, 0, (1), bhvFloomba),
		OBJECT(MODEL_GOOMBA, -5507, -231, 3010, 0, 0, 0, (1), bhvFloomba),
		TERRAIN(rr_area_1_collision),
		MACRO_OBJECTS(rr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_AE1_PRIMORDIAL_OOZE),
		TERRAIN_TYPE(TERRAIN_GRASS),
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
