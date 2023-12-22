#include "src/game/dnvic_print.h"

void bhv_position_finder_loop(void) {
    // debug object
    char buffer[80];
    dnvic_print_set_default();
    sprintf(buffer, "%f", o->oPosX);
    dnvic_print_text(15, 10, buffer);
    sprintf(buffer, "%f", o->oPosY);
    dnvic_print_text(15, 20, buffer);
    sprintf(buffer, "%f", o->oPosZ);
    dnvic_print_text(15, 30, buffer);
}

