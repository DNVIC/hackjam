#ifndef DNVIC_PRINT_H
#define DNVIC_PRINT_H

#include "puppyprint.h"

void dnvic_print_text(s32 x, s32 y, const char *str);
void dnvic_render_texture(s32 x, s32 y, s32 w, s32 h, Texture *texture);
void dnvic_print_set_color(s32 r, s32 g, s32 b);
void dnvic_print_set_alpha(s32 a);
void dnvic_print_set_align(s32 align);
void dnvic_print_set_font(u8 font);
void dnvic_print_set_mode(s32 mode);
void dnvic_print_set_all(s32 r, s32 g, s32 b, s32 a, s32 align, u8 font, s32 mode);
static ALWAYS_INLINE void dnvic_print_set_default() {
    dnvic_print_set_all(0xFF, 0xFF, 0xFF, 0xFF, PRINT_TEXT_ALIGN_LEFT, FONT_DEFAULT, G_CYC_COPY);
}
static ALWAYS_INLINE void dnvic_print_set_all_text(s32 r,s32 g,s32 b,s32 a,s32 align,u8 font) {
    dnvic_print_set_all(r, g, b, a, align, font, G_CYC_1CYCLE);
}
static ALWAYS_INLINE void dnvic_print_set_all_texture(s32 r, s32 g, s32 b, s32 a, s32 mode) {
    dnvic_print_set_all(r, g, b, a, PRINT_TEXT_ALIGN_LEFT, FONT_DEFAULT, mode);
}
void render_dnvic_labels();
void render_dnvic_textures();
#endif