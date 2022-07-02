.module script_s11t0_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_10, _scene_10

.area _CODE_255

ACTOR = -4

___bank_script_s11t0_interact = 255
.globl ___bank_script_s11t0_interact
.CURRENT_SCRIPT_BANK == ___bank_script_s11t0_interact

_script_s11t0_interact::
        VM_LOCK

        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; If Parameter 0 Equals 1
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 1, 1$, 1
        VM_JUMP                 2$
1$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 256
        VM_SET_CONST            ^/(ACTOR + 2)/, 1920
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_10

        ; Call Script: SAHNE DEGİSİM
        VM_CALL_FAR             ___bank_script_sahne_degsm, _script_sahne_degsm

        ; Stop Script
        VM_STOP
2$:

        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 3$, 1
        VM_JUMP                 4$
3$:
        ; Call Script: SAHNE DEGİSİM
        VM_CALL_FAR             ___bank_script_sahne_degsm, _script_sahne_degsm

        ; Stop Script
        VM_STOP
4$:

        ; Stop Script
        VM_STOP
