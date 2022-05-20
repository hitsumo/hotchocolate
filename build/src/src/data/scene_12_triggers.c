#pragma bank 255

// Scene: SAHNE 2
// Triggers

#include "gbs_types.h"
#include "data/script_s12t0_interact.h"
#include "data/script_s12t1_interact.h"
#include "data/script_s12t2_interact.h"

BANKREF(scene_12_triggers)

const struct trigger_t scene_12_triggers[] = {
    {
        // YENI OYUN,
        .x = 9,
        .y = 17,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s12t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // HAKKINDA,
        .x = 0,
        .y = 13,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s12t1_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // DEVAM,
        .x = 19,
        .y = 13,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s12t2_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
