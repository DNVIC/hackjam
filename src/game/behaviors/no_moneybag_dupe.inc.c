#include "src/game/dnvic_print.h"

void bhv_no_moneybag_dupe_loop(void) {
    u8 onOff = (o->oTimer/30) % 2;
    if(gMarioState->numCoins >= 170 && onOff) {
        dnvic_print_set_default();
        dnvic_print_set_color(255, 0, 0);
        dnvic_print_text(50, 50, "STOP DUPING MONEYBAGS!\n YOU CHEATER");
    }
    
}

