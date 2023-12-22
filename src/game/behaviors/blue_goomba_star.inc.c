void bhv_blue_goomba_star_init(void) {
    o->oAction = 1;
}

void bhv_blue_goomba_star_loop(void) {
    switch(o->oAction) {
        case 1:
            if (o->oF4 == 5) {
                spawn_mist_particles();
                spawn_default_star(o->oPosX, o->oPosY, o->oPosZ);
                o->oAction = 2;
            }
            break;
        case 2:
            break;
    }
}

