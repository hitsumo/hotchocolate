#pragma bank 255

// Scene: SAHNE 2

#include "gbs_types.h"
#include "data/background_6.h"
#include "data/scene_10_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_5.h"
#include "data/scene_10_actors.h"
#include "data/scene_10_triggers.h"
#include "data/scene_10_sprites.h"
#include "data/script_s10_init.h"

BANKREF(scene_10)

const struct scene_t scene_10 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_6),
    .collisions = TO_FAR_PTR_T(scene_10_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_5),
    .n_actors = 3,
    .n_triggers = 3,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_10_actors),
    .triggers = TO_FAR_PTR_T(scene_10_triggers),
    .sprites = TO_FAR_PTR_T(scene_10_sprites),
    .script_init = TO_FAR_PTR_T(script_s10_init)
};
