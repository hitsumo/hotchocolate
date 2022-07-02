#pragma bank 255

// Scene: SAHNE 7

#include "gbs_types.h"
#include "data/background_3.h"
#include "data/scene_8_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_0.h"
#include "data/script_s8_init.h"

BANKREF(scene_8)

const struct scene_t scene_8 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_3),
    .collisions = TO_FAR_PTR_T(scene_8_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_0),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s8_init)
};
