#pragma bank 255
// SpriteSheet: tost2
  
#include "gbs_types.h"
#include "data/tileset_16.h"

BANKREF(spritesheet_7)

#define SPRITE_7_STATE_DEFAULT 0

const metasprite_t spritesheet_7_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 0, 32 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_7_metasprites[] = {
    spritesheet_7_metasprite_0
};

const struct animation_t spritesheet_7_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD spritesheet_7_animations_lookup[] = {
    SPRITE_7_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_7 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_7_metasprites,
    .animations = spritesheet_7_animations,
    .animations_lookup = spritesheet_7_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_16),
    .cgb_tileset = { NULL, NULL }
};
