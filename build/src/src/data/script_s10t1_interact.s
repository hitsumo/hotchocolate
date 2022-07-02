.module script_s10t1_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_11, _scene_11

.area _CODE_255

ACTOR = -4

___bank_script_s10t1_interact = 255
.globl ___bank_script_s10t1_interact
.CURRENT_SCRIPT_BANK == ___bank_script_s10t1_interact

_script_s10t1_interact::
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
        VM_SET_CONST            ^/(ACTOR + 1)/, 1920
        VM_SET_CONST            ^/(ACTOR + 2)/, 1920
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_11

        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "Izninizle oyunu \ntanitacagim..."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Burada tabelalar var.\nOyun hakkinda bilgiler\nicin bakabilirsin."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Ilk tabelaya\nben gidiyorum."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 2048
        VM_SET_CONST            ^/(ACTOR + 2)/, 1536
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Stop Script
        VM_STOP
2$:

        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 3$, 1
        VM_JUMP                 4$
3$:
        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "b"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Stop Script
        VM_STOP
4$:

        ; Stop Script
        VM_STOP
