#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "tile_scroll.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif


#include "src/game/texscroll/ccm_texscroll.inc.c"
#include "src/game/texscroll/wmotr_texscroll.inc.c"
#include "src/game/texscroll/pss_texscroll.inc.c"
#include "src/game/texscroll/sa_texscroll.inc.c"
#include "src/game/texscroll/thi_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ccm_segment_7SegmentRomStart)) {
		scroll_textures_ccm();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wmotr_segment_7SegmentRomStart)) {
		scroll_textures_wmotr();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_pss_segment_7SegmentRomStart)) {
		scroll_textures_pss();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_sa_segment_7SegmentRomStart)) {
		scroll_textures_sa();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_thi_segment_7SegmentRomStart)) {
		scroll_textures_thi();
	}

}
