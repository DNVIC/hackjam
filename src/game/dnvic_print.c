#include "src/game/memory.h"
#include "src/game/dnvic_print.h"
#include "string.h"
#include "segment2.h"
#include "game_init.h"

struct DnvicLabel {
    s32 x;
    s32 y;
    s32 align;
    s32 r;
    s32 g;
    s32 b;
    s32 a;
    u8 font;
    char buffer[50];
};

struct DnvicTexture { // never go textures to work well
    s32 x;
    s32 y;
    s32 width;
    s32 height;
    s32 r;
    s32 g;
    s32 b;
    s32 a;
    s32 mode;
    Texture* texture;
};



// properties that can be set (note: will stay until changed again. be careful. should probably use dnvic_print_set_default at the start of whatever it is thats printing.)
// another note: don't mix texture and text rendering. they use the same variables ( + dnvic_print_set_all_text sets the texture specific vars to default and vice versa)
// you should instead either do text then texture, or texture then text.
s32 _align = PRINT_TEXT_ALIGN_LEFT;
s32 _r = 0xFF;
s32 _g = 0xFF;
s32 _b = 0xFF;
s32 _a = 0xFF;
u8 _font = FONT_DEFAULT;

// properties for multi image
s32 _mode = G_CYC_COPY;


struct DnvicLabel *sDnvicLabels[52];
s16 sDnvicLabelsCount = 0;

struct DnvicTexture *sDnvicTextures[52];
s16 sDnvicTexturesCount = 0;



void dnvic_print_set_color(s32 r, s32 g, s32 b) {
    _r = r;
    _g = g;
    _b = b;
}

void dnvic_print_set_alpha(s32 a) {
    _a = a;
}

void dnvic_print_set_align(s32 align) {
    _align = align;
}

void dnvic_print_set_font(u8 font) {
    _font = font;
}

void dnvic_print_set_mode(s32 mode) {
    _mode = mode;
}

void dnvic_print_set_all(s32 r, s32 g, s32 b, s32 a, s32 align, u8 font, s32 mode) {
    _r = r;
    _g = g;
    _b = b;
    _a = a;
    _align = align;
    _font = font;
    _mode = mode;
}


void dnvic_print_text(s32 x, s32 y, const char *str) {
    s32 srcIndex = 0;
    char c = 1;

    // Don't continue if there is no memory to do so
    if ((sDnvicLabels[sDnvicLabelsCount] = mem_pool_alloc(gEffectsMemoryPool,
                                                        sizeof(struct DnvicLabel))) == NULL) {
        return;
    }

    

    while (c != 0) {
        c = str[srcIndex];
        sDnvicLabels[sDnvicLabelsCount]->buffer[srcIndex] = c;
        srcIndex++;
    }

    sDnvicLabels[sDnvicLabelsCount]->x = x;
    sDnvicLabels[sDnvicLabelsCount]->y = y;
    sDnvicLabels[sDnvicLabelsCount]->align = _align;
    sDnvicLabels[sDnvicLabelsCount]->r = _r;
    sDnvicLabels[sDnvicLabelsCount]->g = _g;
    sDnvicLabels[sDnvicLabelsCount]->b = _b;
    sDnvicLabels[sDnvicLabelsCount]->a = _a;
    sDnvicLabels[sDnvicLabelsCount]->font = _font;
    sDnvicLabelsCount++;
}


void dnvic_render_texture(s32 x, s32 y, s32 w, s32 h, Texture *texture) {

    // Don't continue if there is no memory to do so
    if ((sDnvicTextures[sDnvicTexturesCount] = mem_pool_alloc(gEffectsMemoryPool,
                                                        sizeof(struct DnvicLabel))) == NULL) {
        return;
    }

    sDnvicTextures[sDnvicTexturesCount]->x = x;
    sDnvicTextures[sDnvicTexturesCount]->y = y;
    sDnvicTextures[sDnvicTexturesCount]->width = w;
    sDnvicTextures[sDnvicTexturesCount]->height = h;
    sDnvicTextures[sDnvicTexturesCount]->r = _r;
    sDnvicTextures[sDnvicTexturesCount]->g = _g;
    sDnvicTextures[sDnvicTexturesCount]->b = _b;
    sDnvicTextures[sDnvicTexturesCount]->a = _a;
    sDnvicTextures[sDnvicTexturesCount]->mode = _mode;
    sDnvicTextures[sDnvicTexturesCount]->texture = texture;
    sDnvicTexturesCount++;
}



void render_dnvic_labels() {
    s32 i;

    
    //Mtx *mtx;

    if (sDnvicLabelsCount == 0) {
        return;
    }

    /*mtx = alloc_display_list(sizeof(*mtx));

    if (mtx == NULL) {
        sDnvicLabelsCount = 0;
        return;
    }*/

    for(i = 0; i < sDnvicLabelsCount; i++) {
        


        print_set_envcolour(sDnvicLabels[i]->r, sDnvicLabels[i]->g, sDnvicLabels[i]->b, sDnvicLabels[i]->a);
        print_small_text_light(sDnvicLabels[i]->x, sDnvicLabels[i]->y, sDnvicLabels[i]->buffer, sDnvicLabels[i]->align, PRINT_ALL /*lets be honest, you almost always want to print everything*/, sDnvicLabels[i]->font);
        mem_pool_free(gEffectsMemoryPool, sDnvicLabels[i]);
    }
    sDnvicLabelsCount = 0;
}

void render_dnvic_textures() {
    s32 i;
    //render_multi_image(&wario_texture, 0, 0, 128, 128, 0, 0, G_CYC_COPY);
    //Mtx *mtx;

    if (sDnvicTexturesCount == 0) {
        return;
    }

    /*mtx = alloc_display_list(sizeof(*mtx));

    if (mtx == NULL) {
        sDnvicLabelsCount = 0;
        return;
    }*/

    for(i = 0; i < sDnvicTexturesCount; i++) {
        //char buffer[50];
        //sprintf(buffer, "thingy: %d", sDnvicTextures[i]->height);
        //dnvic_print_text(0,100,buffer);
        //print_set_envcolour(sDnvicTextures[i]->r, sDnvicTextures[i]->g, sDnvicTextures[i]->b, sDnvicTextures[i]->a);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(sDnvicTextures[i]->texture, sDnvicTextures[i]->x, sDnvicTextures[i]->y, sDnvicTextures[i]->width, sDnvicTextures[i]->height, 0, 0, sDnvicTextures[i]->mode);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end); 
        mem_pool_free(gEffectsMemoryPool, sDnvicTextures[i]);
    }
    sDnvicTexturesCount = 0;
}