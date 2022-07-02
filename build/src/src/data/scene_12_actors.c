#pragma bank 255

// Scene: SAHNE 11
// Actors

#include "gbs_types.h"
#include "data/spritesheet_7.h"

BANKREF(scene_12_actors)

const struct actor_t scene_12_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 112 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_7),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};
