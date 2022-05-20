#pragma bank 255
// SpriteSheet: hc_sp_4
  
#include "gbs_types.h"
#include "data/tileset_7.h"

BANKREF(spritesheet_0)

#define SPRITE_0_STATE_DEFAULT 0

const metasprite_t spritesheet_0_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 0, 0 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_0_metasprites[] = {
    spritesheet_0_metasprite_0
};

const struct animation_t spritesheet_0_animations[] = {
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

const UWORD spritesheet_0_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_0 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_0_metasprites,
    .animations = spritesheet_0_animations,
    .animations_lookup = spritesheet_0_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_7),
    .cgb_tileset = { NULL, NULL }
};
