void warp_special(s32 whatever);

void bhv_ending_warp_init(void) {
    
}

void bhv_ending_warp_loop(void) {
    if (save_file_get_course_star_count(gCurrSaveFileNum - 1, COURSE_NUM_TO_INDEX(gCurrCourseNum)) >= 7) {
        warp_special(-1);
    }
}

