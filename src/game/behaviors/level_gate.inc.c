#include "src/game/save_file.h"

static struct SpawnParticlesInfo sLevelGateParticles = {
    /* behParam:        */ 3,
    /* count:           */ 20,
    /* model:           */ MODEL_MIST,
    /* offsetY:         */ 60,
    /* forwardVelBase:  */ 30,
    /* forwardVelRange: */ 10,
    /* velYBase:        */ 4,
    /* velYRange:       */ 2,
    /* gravity:         */ 0,
    /* dragStrength:    */ 30,
    /* sizeBase:        */ 30.0f,
    /* sizeRange:       */ 1.5f,
};

void bhv_level_gate_init(void) {
    
}

void bhv_level_gate_loop(void) {
    switch (o->oAction) {
        case 0:
            if (save_file_get_course_star_count(gCurrSaveFileNum - 1, COURSE_NUM_TO_INDEX(gCurrCourseNum)) >= o->oBehParams2ndByte) {
                if (o->oTimer >= 90) {
                    o->oAction++;
                }
            }
            else {
                o->oTimer = 0;
            }
        break;
        case 1:
        case 2:
            gCamera->cutscene = 1;
            f32 approachSpeed = 0.05f;
            gLakituState.goalPos[0] = approach_f32_asymptotic(gLakituState.goalPos[0], o->oHomeX, approachSpeed);
            gLakituState.goalPos[1] = approach_f32_asymptotic(gLakituState.goalPos[1], o->oHomeY + 1500, approachSpeed);
            gLakituState.goalPos[2] = approach_f32_asymptotic(gLakituState.goalPos[2], o->oHomeZ + 100, approachSpeed);
            gLakituState.goalFocus[0] = approach_f32_asymptotic(gLakituState.goalFocus[0], o->oHomeX, approachSpeed);
            gLakituState.goalFocus[1] = approach_f32_asymptotic(gLakituState.goalFocus[1], o->oHomeY, approachSpeed);
            gLakituState.goalFocus[2] = approach_f32_asymptotic(gLakituState.goalFocus[2], o->oHomeZ, approachSpeed);
            gMarioState->action = ACT_WAITING_FOR_DIALOG;

            if (o->oAction == 1 && o->oTimer == 45) {
                o->oAction = 2;
                cur_obj_spawn_particles(&sLevelGateParticles);
                cur_obj_play_sound_1(SOUND_GENERAL_GRINDEL_ROLL);
            }

            if (o->oAction == 2) {

                if (o->oTimer > 3) {
                    cur_obj_play_sound_1(SOUND_ENV_METAL_BOX_PUSH);
                }

                o->oPosX += 20.0f;

                if (o->oTimer == 60) {
                    o->oAction = 3;
                    gCamera->cutscene = 0;
                    gMarioState->action = ACT_IDLE;
                    cur_obj_become_intangible();
                    cur_obj_hide();
                }
            }
        break;
    }

    if (o->oAction != 3) {
        load_object_collision_model();
    }
}

