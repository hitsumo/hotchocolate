#pragma bank 255

// Scene: SAHNE 3

#include "gbs_types.h"
#include "data/background_0.h"
#include "data/scene_4_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_2.h"
#include "data/script_s4_init.h"

BANKREF(scene_4)

const struct scene_t scene_4 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_0),
    .collisions = TO_FAR_PTR_T(scene_4_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_2),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s4_init)
};
