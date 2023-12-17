// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE), U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, BSPC),U_LT(U_MEDIA, DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_NU,            U_NU,            U_NU,            &kp CARET,         U_NU,              U_NA,              &u_to_U_BASE,      &kp U,       &u_to_U_TAP,    U_BOOT,         \
&kp A,           &kp DQT,         &kp GRAVE,       U_MT(LSHFT,RA(E)), U_NU,              U_NA,              &kp LSHFT,         &kp E,       &kp I,          &kp O,          \
U_NU,            U_NU,            &kp RA(COMMA),   U_NU,              U_NU,              U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM, &kp RALT,       U_NA,           \
U_NP,            U_NP,            &kp DEL,         &kp SPACE,         &kp BSPC,          U_NA,              U_NA,              U_NA,        U_NP,           U_NP

// &ac_icir,          &ac_ucir,          &ac_acir,          &ac_ecir,          U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp RA(COMMA),     &ac_ugrv,          &ac_agrv,          &ac_eacu,          &ac_egrv,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// &ac_itre,          &ac_utre,          &ac_ocir,          &ac_etre,          U_NU,              U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              &kp DEL,           &kp SPACE,         &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_ALTERNATIVES_NUM_FLIP \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
// U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP

// #define MIRYOKU_ALTERNATIVES_SYM_FLIP \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
// U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP


//QMK layout
//#define MIRYOKU_LAYER_BASE \
//KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              LSFT(KC_1),           \
//LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
//LT(U_BUTTON,KC_Z), KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            LT(U_BUTTON,KC_SCLN),\
//U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

// #define MIRYOKU_LAYER_MEDIA \
// U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_LBRC,           RALT(KC_SCLN),     U_NA,             U_NA,      \
// KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_NUBS,           KC_SLSH,           KC_QUOT,           KC_NUHS,          KC_RBRC,      \
// U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              RALT(KC_Z),        RALT(KC_X),        U_NA,             U_NA,\
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,             U_NP

// #define MIRYOKU_LAYER_NUM \
// RALT(KC_9),        KC_7,              KC_8,              KC_9,              RALT(KC_0),        U_NA,              RALT(KC_COMM),     RALT(KC_DOT),      U_NA,              U_NA,     \
// KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
// KC_GRV,            KC_1,              KC_2,              KC_3,              LSFT(KC_GRV),      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
// U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_LAYER_SYM \
// RALT(KC_7),        LSFT(KC_7),        LSFT(KC_8),        LSFT(KC_9),        RALT(KC_8),        U_NA,              RALT(KC_COMM),     RALT(KC_DOT),      U_NA,              U_NA,     \
// LSFT(KC_SCLN),     LSFT(KC_4),        LSFT(KC_5),        LSFT(KC_6),        LSFT(KC_EQL),      U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
// RALT(KC_RBRC),     LSFT(KC_1),        LSFT(KC_2),        LSFT(KC_3),        RALT(KC_GRV),      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
// U_NP,              U_NP,              LSFT(KC_9),        LSFT(KC_0),        LSFT(KC_MINS),     U_NA,              U_NA,              U_NA,              U_NP,              U_NP
