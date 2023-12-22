
void bhv_blue_rotating_platform_init(void) {
    o->oFloatF4 = angle_to_degrees(o->oFaceAngleYaw);
    o->oF8 = o->oPosX;
    o->oFC = o->oPosZ;
}


void bhv_blue_rotating_platform_loop(void) {

    o->oFaceAngleYaw += (((o->oBehParams >> 8 & 0x00000080)) ? -1 : 1) * DEGREES(0.5f*(o->oBehParams >> 8 & 0x0000FF) + 0.05f * (o->oBehParams & 0x0000007F));
    if(o->oBehParams >> 24) {
        f32 dist = 20.0f * (o->oBehParams >> 24);
        o->oFloatF4 += (o->oBehParams2ndByte & 0x80 ? -1 : 1) * 0.025f * (o->oBehParams2ndByte & 0x7F);
        if(o->oFloatF4 > 360) {
            o->oFloatF4 -= 360;
        } else if(o->oFloatF4 < -360) {
            o->oFloatF4 += 360;
        }
        o->oPosX = o->oF8 + (sins(DEGREES(o->oFloatF4)) * dist);
        o->oPosZ = o->oFC + (coss(DEGREES(o->oFloatF4)) * dist);
    }
}

