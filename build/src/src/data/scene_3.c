#pragma bank 255

// Scene: SAHNE 9

#include "gbs_types.h"
#include "data/background_8.h"
#include "data/scene_3_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_1.h"
#include "data/script_s3_init.h"

BANKREF(scene_3)

const struct scene_t scene_3 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_8),
    .collisions = TO_FAR_PTR_T(scene_3_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_1),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s3_init)
};
