.module script_s11_p_hit1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

ACTOR = -4

___bank_script_s11_p_hit1 = 255
.globl ___bank_script_s11_p_hit1
.CURRENT_SCRIPT_BANK == ___bank_script_s11_p_hit1

_script_s11_p_hit1::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 1$, 1
        VM_JUMP                 2$
1$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; If Actor At Position
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    1792
            .R_OPERATOR .EQ
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    1280
            .R_OPERATOR .EQ
            .R_OPERATOR .AND
            .R_STOP
        VM_IF_CONST .EQ         .ARG0, 0, 3$, 1
        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "Merhaba Oyuncu"
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Bu oyun GameboyStudio\nile yapildi."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Cizim gerektiren isler\nicin libresprite \nkullanildi."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Muzikler icin.....!\nEe sey oyunda muzik yok."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Banyoda sarki soylerim\nfakat beste yapmak\nyetenegimi asiyor"
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz "Neyse cok konustum.\nDiger tabelalara da\nbakin."
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        VM_JUMP                 4$
3$:
4$:

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
