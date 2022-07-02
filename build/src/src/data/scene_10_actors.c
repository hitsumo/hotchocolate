#pragma bank 255

// Scene: SAHNE 2
// Actors

#include "gbs_types.h"
#include "data/spritesheet_6.h"
#include "data/script_s10a0_interact.h"
#include "data/spritesheet_6.h"
#include "data/script_s10a1_interact.h"
#include "data/spritesheet_6.h"
#include "data/script_s10a2_interact.h"

BANKREF(scene_10_actors)

const struct actor_t scene_10_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 16 * 16,
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
        .script = TO_FAR_PTR_T(script_s10a0_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 128 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(spritesheet_6),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s10a1_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 96 * 16,
            .y = 120 * 16
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
        .script = TO_FAR_PTR_T(script_s10a2_interact),
        .reserve_tiles = 0
    }
};
