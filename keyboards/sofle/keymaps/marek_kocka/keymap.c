#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _CREEZY
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,

    KC_LIND,
    KC_RIND,

    KC_WSUP,
    KC_WSDN,
    KC_WWUP,
    KC_WWDN,

    KC_WINLIN,

    KC_PGUPX,
    KC_PGDNX,

    CR_HLLO,
    CR_EXIT,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_EQL, \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC, \
  KC_GRV,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,     XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT, \
                 KC_LCTRL,KC_LGUI,KC_LALT, KC_LOWER, KC_SPC,      KC_ENT,  KC_RAISE, KC_RALT, KC_RCTRL, KC_MINS \
),
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV, \
  KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC, \
  KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,      XXXXXXX,KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT, \
                 KC_LGUI,KC_LALT,KC_LCTRL,KC_LOWER, KC_ENT,      KC_SPC,  KC_RAISE, KC_RCTRL, KC_RALT, KC_RGUI \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT( \
  KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,\
  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  _______, \
  _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,       _______, KC_LBRC, KC_RBRC, KC_LT, KC_GT, KC_BSLS, _______, \
                       _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______\
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
  _______, _______ , _______ , _______ , _______, KC_PSCR,                       _______,        KC_WWUP, KC_WSUP, KC_WSDN, KC_WWDN,_______, \
  _______,  KC_INS,  _______,   KC_APP,  XXXXXXX, XXXXXXX,                       KC_PGDNX, KC_PRVWD,   KC_UP, KC_NXTWD,KC_DLINE, KC_BSPC, \
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGUPX, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSLS, \
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  KC_MPLY,         RESET,  KC_LIND,        KC_LSTRT, KC_RIND, KC_LEND,   KC_PIPE, _______, \
                         _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |QWERTY|COLEMAK|     |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX, KC_QWERTY, KC_WINLIN, CG_TOGG, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_WH_U, KC_ACL2, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_WH_D, KC_ACL1, KC_BTN1, XXXXXXX,                       XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0, KC_BTN2, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
                   _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______ \
  ),

  [_CREEZY] = LAYOUT( \
  CR_EXIT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CR_HLLO, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                   _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______ \
  ),
};


static bool shift_held = false;
static bool ctrl_held = false;
static bool gui_held = false;
static bool alt_held = false;


// uint16_t held_shift = 0;
// bool keymap_config.swap_win_lin = false;

/* status variables */
int   current_wpm = 0;



// #define OLED_ENABLE
#ifdef OLED_ENABLE


static void print_logo_narrow(void) {
    // render_logo();

    oled_write("HELLO\nMAREK", false);

    void update(void) {
        /* wpm counter */
        uint8_t n = get_current_wpm();
        char    wpm_str[4];
        oled_set_cursor(0, 14);
        wpm_str[3] = '\0';
        wpm_str[2] = '0' + n % 10;
        wpm_str[1] = '0' + (n /= 10) % 10;
        wpm_str[0] = '0' + n / 10;
        oled_write(wpm_str, false);

        oled_set_cursor(0, 15);
        oled_write(" wpm", false);
    }

    update();
}

static void print_status_narrow(void) {
    /* Print current mode */
    oled_set_cursor(0, 0);
    if (keymap_config.swap_lctl_lgui) {
        oled_write("MAC", false);
    } else if (keymap_config.swap_win_lin) {
        oled_write("WIN", false);
    } else {
        oled_write("LNX", false);
    }

    oled_set_cursor(0, 1);

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write("Qrty", false);
            break;
        case _COLEMAK:
            oled_write("Clmk", false);
            break;
        default:
            oled_write("UNDEF", false);
    }

    oled_set_cursor(0, 4);

    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 5);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write("Base ", false);
            break;
        case _RAISE:
            oled_write("Raise", false);
            break;
        case _LOWER:
            oled_write("Lower", false);
            break;
        case _ADJUST:
            oled_write("Adj  ", false);
            break;
        case _CREEZY:
            oled_write("Crezy", true);
        default:
            oled_write("Undef", false);
    }

    /* Shift held */
    oled_set_cursor(0, 6);
    if (!shift_held) {
        oled_write("     ", false);
    } else {
        oled_write("Shift", true);
    }

    oled_set_cursor(0, 7);
    if (!ctrl_held) {
        oled_write("     ", false);
    } else {
        oled_write("Ctrl ", true);
    }

    oled_set_cursor(0, 8);
    if (!gui_held) {
        oled_write("     ", false);
    } else {
        oled_write("Gui  ", true);
    }


    oled_set_cursor(0, 9);
    if (!alt_held) {
        oled_write("     ", false);
    } else {
        oled_write("Alt  ", true);
    }


    /* caps lock */
    oled_set_cursor(0, 12);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write("     CPSLK     ", led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    // current_wpm   = get_current_wpm();
    // led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }

    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool do_return = false;
    switch (keycode) {
        case CR_HLLO:
            if (record->event.pressed) {
                SEND_STRING("HELLO WORLD!");
                do_return = true;
            }
            break;
        case CR_EXIT:
            if (record->event.pressed) {
                SEND_STRING("; exit\n");
                do_return = true;
            }
            break;
    }

    if (record->event.pressed) {
        clear_oneshot_layer_state(ONESHOT_PRESSED);
    }

    if (do_return) {
        return false;
    }

    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_LOWER:
            if (shift_held) {
                if (record->event.pressed) {
                    // layer_on()
                    set_oneshot_layer(_CREEZY, ONESHOT_START);
                }
            } else {
                if (record->event.pressed) {
                    layer_on(_LOWER);
                    update_tri_layer(_LOWER, _RAISE, _ADJUST);
                } else {
                    layer_off(_LOWER);
                    update_tri_layer(_LOWER, _RAISE, _ADJUST);
                }
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;

        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;

        case KC_LIND:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_RCTL));
                register_code(KC_LBRC);
            } else {
                unregister_mods(mod_config(MOD_RCTL));
                unregister_code(KC_LBRC);
            }
            return false;
        case KC_RIND:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_RCTL));
                register_code(KC_RBRC);
            } else {
                unregister_mods(mod_config(MOD_RCTL));
                unregister_code(KC_RBRC);
            }
            return false;


        // WORKSPACES
        case KC_WSUP:
            if (record->event.pressed) {
                if (keymap_config.swap_win_lin) {
                    register_mods(mod_config(MOD_LCTL));
                    register_mods(mod_config(MOD_LGUI));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LGUI));
                    register_code(KC_PGUP);
                }
            } else {
                if (keymap_config.swap_win_lin) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_mods(mod_config(MOD_LGUI));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LGUI));
                    unregister_code(KC_PGUP);
                }
            }
            return false;

        case KC_WSDN:
            if (record->event.pressed) {
                if (keymap_config.swap_win_lin) {
                    register_mods(mod_config(MOD_LCTL));
                    register_mods(mod_config(MOD_LGUI));
                    register_code(KC_RGHT);
                } else {
                    register_mods(mod_config(MOD_LGUI));
                    register_code(KC_PGDN);
                }
            } else {
                if (keymap_config.swap_win_lin) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_mods(mod_config(MOD_LGUI));
                    unregister_code(KC_RGHT);
                } else {
                    unregister_mods(mod_config(MOD_LGUI));
                    unregister_code(KC_PGDN);
                }
            }
            return false;


        case KC_WWUP:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_mods(mod_config(MOD_LSFT));
                register_code(KC_PGUP);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_mods(mod_config(MOD_LSFT));
                unregister_code(KC_PGUP);
            }
            return false;

        case KC_WWDN:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_mods(mod_config(MOD_LSFT));
                register_code(KC_PGDN);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_mods(mod_config(MOD_LSFT));
                unregister_code(KC_PGDN);
            }
            return false;

        case KC_PGDNX:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_PGDN);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_PGDN);
            }
            return false;

        case KC_PGUPX:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_PGUP);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_PGUP);
            }
            return false;

        // copy-paste-cut
        case KC_COPY:
            if (keymap_config.swap_win_lin) {
                if (record->event.pressed) {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_C);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_C);
                }
            }
            return false;
        case KC_PASTE:
            if (keymap_config.swap_win_lin) {
                if (record->event.pressed) {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_V);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_V);
                }
            }
            return false;
        case KC_CUT:
            if (keymap_config.swap_win_lin) {
                if (record->event.pressed) {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_X);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_X);
                }
            }
            return false;

        case KC_UNDO:
            if (keymap_config.swap_win_lin) {
                if (record->event.pressed) {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_Z);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_Z);
                }
            }
            return false;


        case KC_RSFT:
        case KC_LSFT:
            shift_held = record->event.pressed;
            break;

        case KC_LCTRL:
        case KC_RCTRL:
            ctrl_held = record->event.pressed;
            break;

        case KC_LGUI:
        case KC_RGUI:
            gui_held = record->event.pressed;
            break;

        case KC_LALT:
        case KC_RALT:
            alt_held = record->event.pressed;
            break;

        case KC_MUTE:
            if (record->event.pressed) {
                register_code(shift_held ? KC_MPLY : KC_MUTE);
            } else {
                unregister_code(shift_held ? KC_MPLY : KC_MUTE);
            }
            break;


        case KC_WINLIN:
            if (record->event.pressed) {
                keymap_config.swap_win_lin = !keymap_config.swap_win_lin;
                return false;
            }

    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (get_highest_layer(layer_state) == _QWERTY) {
            tap_code(clockwise ? KC_VOLU : KC_VOLD);
        } else {
            tap_code(clockwise ? KC_MNXT : KC_MPRV);
        }
    } else if (index == 1) {
        if (get_highest_layer(layer_state) == _QWERTY) {
            tap_code(clockwise ? KC_PGDOWN : KC_PGUP);
        } else {
            tap_code(clockwise ? KC_BRIU : KC_BRID);
        }
    }
    return true;
}

#endif
