#pragma bank 255
// SpriteSheet: karakter
  
#include "gbs_types.h"
#include "data/tileset_14.h"

BANKREF(spritesheet_5)

#define SPRITE_5_STATE_DEFAULT 0

const metasprite_t spritesheet_5_metasprite_0[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_2[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_3[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_4[]  = {
    { 0, 8, 20, 0 }, { 0, -8, 22, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_5[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_6[]  = {
    { 0, 8, 16, 0 }, { 0, -8, 18, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_7[]  = {
    { 0, 0, 12, 32 }, { 0, 8, 14, 32 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_5_metasprites[] = {
    spritesheet_5_metasprite_0,
    spritesheet_5_metasprite_1,
    spritesheet_5_metasprite_2,
    spritesheet_5_metasprite_3,
    spritesheet_5_metasprite_4,
    spritesheet_5_metasprite_0,
    spritesheet_5_metasprite_5,
    spritesheet_5_metasprite_1,
    spritesheet_5_metasprite_6,
    spritesheet_5_metasprite_2,
    spritesheet_5_metasprite_7,
    spritesheet_5_metasprite_3
};

const struct animation_t spritesheet_5_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 6,
        .end = 7
    },
    {
        .start = 8,
        .end = 9
    },
    {
        .start = 10,
        .end = 11
    }
};

const UWORD spritesheet_5_animations_lookup[] = {
    SPRITE_5_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_5 = {
    .n_metasprites = 12,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_5_metasprites,
    .animations = spritesheet_5_animations,
    .animations_lookup = spritesheet_5_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_14),
    .cgb_tileset = { NULL, NULL }
};
