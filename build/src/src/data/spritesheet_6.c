#pragma bank 255
// SpriteSheet: tabela
  
#include "gbs_types.h"
#include "data/tileset_15.h"

BANKREF(spritesheet_6)

#define SPRITE_6_STATE_DEFAULT 0

const metasprite_t spritesheet_6_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 0, 32 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_6_metasprites[] = {
    spritesheet_6_metasprite_0
};

const struct animation_t spritesheet_6_animations[] = {
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

const UWORD spritesheet_6_animations_lookup[] = {
    SPRITE_6_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_6 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_6_metasprites,
    .animations = spritesheet_6_animations,
    .animations_lookup = spritesheet_6_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_15),
    .cgb_tileset = { NULL, NULL }
};
