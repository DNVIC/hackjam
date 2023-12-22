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
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		OBJECT(MODEL_NONE, 1412, -24, 7407, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 11718, -1860, -860, 0, 90, 0, 0x00100000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 7675, 5750, 530, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5864, 5866, -1329, 0, -88, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5861, 6015, 556, 0, -88, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 15248, 4283, 2583, 0, -139, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6068, 5624, 2676, 0, -88, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 13188, 2187, 6731, 0, -88, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 16209, 3066, 7544, 0, -88, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 20658, -438, -7629, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 21893, -492, -6246, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_RED_COIN, 15417, -1153, 1395, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4084, 5369, -2386, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 21485, -320, -5959, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 157, -366, -1608, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 15738, 277, 2855, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 12929, 5342, -323, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 21328, 1127, 7522, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5510, 892, 6233, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 20025, -329, -6748, 0, 0, 0, 0x00128000, bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 19820, -365, -6566, 0, 0, 0, 0x00000000, bhvMoneybagHidden),
		OBJECT(MODEL_RED_COIN, 13179, 44, -6748, 0, 0, 0, 0x00000000, bhvMoneybagHidden),
		OBJECT(MODEL_RED_COIN, 19475, -166, -4252, 0, 0, 0, 0x00000000, bhvMoneybagHidden),
		OBJECT(MODEL_RED_COIN, 18000, -400, 1600, 0, 0, 0, 0x00000000, bhvMoneybagHidden),
		OBJECT(MODEL_RED_COIN, 735, 74, 5717, 0, 0, 0, 0x00000000, bhvMoneybagHidden),
		OBJECT(MODEL_SPINDRIFT, 12275, -914, -719, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_SPINDRIFT, 18078, -914, -638, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_SPINDRIFT, 10612, 1067, 7139, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_SPINDRIFT, 4224, -51, 1644, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_SPINDRIFT, 15223, 2906, 6672, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 13584, 4755, 1810, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 8121, 5651, 993, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 9412, 5226, -1169, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 7000, 5838, -1285, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 10594, 5117, 1140, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 6565, 5716, 2442, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 4433, 5507, -1568, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 3211, 376, -6418, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 8288, 102, -6072, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 15180, -58, -6809, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 18451, -158, 2415, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 20540, 992, 6404, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_PENGUIN, 5861, 6015, 556, 0, 0, 0, (3 << 24) | (2 << 16), bhvTuxiesMother),
		OBJECT(MODEL_STAR, 21499, 403, -5913, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_BIG_CHILL_BULLY, -1534, 498, 2300, 0, 0, 0, (4 << 24), bhvBigChillBully),
		OBJECT(MODEL_LEVEL_GATE, 20870, -648, 2074, 0, 0, 0, (7 << 16), bhvLevelGate),
		OBJECT(MODEL_NONE, 19820, -365, -6566, 0, 0, 0, 0x00000000, bhvNoMoneybagDupe),
		OBJECT(MODEL_PENGUIN, 21833, -438, -7622, 0, 0, 0, (2 << 16), bhvSmallPenguin),
		OBJECT(MODEL_PENGUIN, 549, -24, 7107, 0, 0, 0, (2 << 16), bhvSmallPenguin),
		OBJECT(MODEL_NONE, -1785, 1201, -6545, 0, 0, 0, (2 << 24) | (8 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 17532, -41, -452, 0, 0, 0, (5 << 24), bhvJetStreamRingSpawner),
		OBJECT(MODEL_WATER_RING, 14810, 4825, -547, 0, 0, -90, (5 << 24), bhvJetStreamWaterRing),
		OBJECT(MODEL_WATER_RING, 15584, 4328, -547, 0, 0, -137, (5 << 24), bhvJetStreamWaterRing),
		OBJECT(MODEL_WATER_RING, 16101, 3383, -547, 0, 0, -166, (5 << 24), bhvJetStreamWaterRing),
		OBJECT(MODEL_WATER_RING, 16336, 2419, -547, 0, 0, 180, (5 << 24), bhvJetStreamWaterRing),
		OBJECT(MODEL_WATER_RING, 16358, 389, -547, 0, 0, 180, (5 << 24), bhvJetStreamWaterRing),
		OBJECT(MODEL_STAR, 12718, -1770, -941, 0, 0, 0, (1 << 24) | (0 << 16), bhvStar),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_AE1_HOT_SPRINGS),
		TERRAIN_TYPE(TERRAIN_SNOW),
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
