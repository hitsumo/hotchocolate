#pragma bank 255

// Scene: SAHNE 1_alt
// Actors

#include "gbs_types.h"
#include "data/spritesheet_6.h"
#include "data/script_s11a0_interact.h"
#include "data/spritesheet_6.h"
#include "data/script_s11a1_interact.h"

BANKREF(scene_11_actors)

const struct actor_t scene_11_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 16 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_6),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s11a0_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 120 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_6),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s11a1_interact),
        .reserve_tiles = 0
    }
};
