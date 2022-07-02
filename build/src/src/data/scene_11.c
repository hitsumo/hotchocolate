#pragma bank 255

// Scene: SAHNE 1_alt

#include "gbs_types.h"
#include "data/background_7.h"
#include "data/scene_11_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_5.h"
#include "data/scene_11_actors.h"
#include "data/scene_11_triggers.h"
#include "data/scene_11_sprites.h"
#include "data/script_s11_init.h"
#include "data/script_s11_p_hit1.h"

BANKREF(scene_11)

const struct scene_t scene_11 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(background_7),
    .collisions = TO_FAR_PTR_T(scene_11_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_5),
    .n_actors = 2,
    .n_triggers = 1,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_11_actors),
    .triggers = TO_FAR_PTR_T(scene_11_triggers),
    .sprites = TO_FAR_PTR_T(scene_11_sprites),
    .script_init = TO_FAR_PTR_T(script_s11_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s11_p_hit1)
};
