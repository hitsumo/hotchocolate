#pragma bank 255

// Scene: SAHNE 8

#include "gbs_types.h"
#include "data/background_10.h"
#include "data/scene_9_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_4.h"
#include "data/script_s9_init.h"

BANKREF(scene_9)

const struct scene_t scene_9 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_10),
    .collisions = TO_FAR_PTR_T(scene_9_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_4),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s9_init)
};
