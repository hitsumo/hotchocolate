#pragma bank 255

// Scene: SAHNE 2
// Triggers

#include "gbs_types.h"
#include "data/script_s10t0_interact.h"
#include "data/script_s10t1_interact.h"
#include "data/script_s10t2_interact.h"

BANKREF(scene_10_triggers)

const struct trigger_t scene_10_triggers[] = {
    {
        // YENI OYUN,
        .x = 9,
        .y = 17,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s10t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // HAKKINDA,
        .x = 0,
        .y = 13,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s10t1_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT | TRIGGER_HAS_LEAVE_SCRIPT
    },
    {
        // DEVAM,
        .x = 19,
        .y = 13,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s10t2_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
