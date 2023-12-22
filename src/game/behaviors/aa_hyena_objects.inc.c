// bouncy balloons
void bhv_balloon(void){
    cur_obj_become_tangible();
    cur_obj_set_model(MODEL_BALLOON);
    cur_obj_set_hitbox_radius_and_height(125.0f, 150.0f);
    cur_obj_set_hurtbox_radius_and_height(10.0f, 10.0f);
    o->oInteractType = INTERACT_BOUNCE_TOP;
    if(o->oInteractStatus & INT_STATUS_INTERACTED){
        set_anim_to_frame(gMarioState, 0);
        set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
        gMarioState->vel[1] = 60.0f;
        o->oInteractStatus = INT_STATUS_NONE;
    }
}