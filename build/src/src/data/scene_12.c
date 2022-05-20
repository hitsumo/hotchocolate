#pragma bank 255

// Scene: SAHNE 2

#include "gbs_types.h"
#include "data/background_5.h"
#include "data/scene_12_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_5.h"
#include "data/scene_12_triggers.h"
#include "data/script_s12_init.h"

BANKREF(scene_12)

const struct scene_t scene_12 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_5),
    .collisions = TO_FAR_PTR_T(scene_12_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_5),
    .n_actors = 0,
    .n_triggers = 3,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_12_triggers),
    .script_init = TO_FAR_PTR_T(script_s12_init)
};
