#pragma bank 255

// Scene: SAHNE 1_alt
// Triggers

#include "gbs_types.h"
#include "data/script_s11t0_interact.h"

BANKREF(scene_11_triggers)

const struct trigger_t scene_11_triggers[] = {
    {
        // Trigger 1,
        .x = 19,
        .y = 13,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s11t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT | TRIGGER_HAS_LEAVE_SCRIPT
    }
};
