#include QMK_KEYBOARD_H
/* initially a file converted from json */

enum custom_layers {
    base,
    function,
    shavian1,
    shavian2,
};
enum shavian_names {
    PEEP, TOT, KICK, FEE, THIGH, SO, SURE, CHURCH, YEA, HUNG, 
    BIB, DEAD, GAG, VOW, THEY, ZOO, MEASURE, JUDGE, WOE, HAHA,
    LOLL, MIME, IF, EGG, ASH, ADO, ON, WOOL, OUT, AH,
    ROAR, NUN, EAT, AGE, ICE, UP, OAK, OOZE, OIL, AWE, 
    ARE, OR, AIR, ERR, ARRAY, EAR, IAN, YEW,
    DOT,
};
const uint32_t PROGMEM unicode_map[] = {
    
    [PEEP] = 0x10450, //𐑐
    [TOT] = 0x10451, //𐑑
    [KICK] = 0x10452, //𐑒
    [FEE] = 0x10453, //𐑓
    [THIGH] = 0x10454, //𐑔
    [SO] = 0x10455, //𐑕
    [SURE] = 0x10456, //𐑖
    [CHURCH] = 0x10457, //𐑗
    [YEA] = 0x10458, //𐑘
    [HUNG] = 0x10459, //𐑙

    [BIB] = 0x1045A, //𐑚
    [DEAD] = 0x1045B, //𐑛
    [GAG] = 0x1045C, //𐑜
    [VOW] = 0x1045D, //𐑝
    [THEY] = 0x1045E, //𐑞
    [ZOO] = 0x1045F, //𐑟
    [MEASURE] = 0x10460, //𐑠
    [JUDGE] = 0x10461, //𐑡
    [WOE] = 0x10462, //𐑢
    [HAHA] = 0x10463, //𐑣

    [LOLL] = 0x10464, //𐑤
    [MIME] = 0x10465, //𐑥
    [IF] = 0x10466, //𐑦
    [EGG] = 0x10467, //𐑧
    [ASH] = 0x10468, //𐑨
    [ADO] = 0x10469, //𐑩
    [ON] = 0x1046A, //𐑪
    [WOOL] = 0x1046B, //𐑫
    [OUT] = 0x1046C, //𐑬
    [AH] = 0x1046D, //𐑭

    [ROAR] = 0x1046E, //𐑮
    [NUN] = 0x1046F, //𐑯
    [EAT] = 0x10470, //𐑰
    [AGE] = 0x10471, //𐑱
    [ICE] = 0x10472, //𐑲
    [UP] = 0x10473, //𐑳
    [OAK] = 0x10474, //𐑴
    [OOZE] = 0x10475, //𐑵
    [OIL] = 0x10476, //𐑶
    [AWE] = 0x10477, //𐑷

    [ARE] = 0x10478, //𐑸
    [OR] = 0x10479, //𐑹
    [AIR] = 0x1047A, //𐑺
    [ERR] = 0x1047B, //𐑻
    [ARRAY] = 0x1047C, //𐑼
    [EAR] = 0x1047D, //𐑽
    [IAN] = 0x1047E, //𐑾
    [YEW] = 0x1047F, //𐑿
    [DOT] = 0x00B7, //proper name DOT
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [base] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_GRV, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
			       KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, KC_BSLS, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_QUOT,
			       KC_CAPS, KC_A, KC_R, KC_S, KC_T, KC_G, KC_HOME, KC_DEL, KC_PGUP, KC_K, KC_N, KC_E, KC_I, KC_O, KC_ENT,
			       KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_END, KC_UP, KC_PGDN, KC_M, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
			       KC_LCTL, KC_LGUI, KC_LALT, OSL(function), KC_LCTL, KC_LALT, KC_LEFT, KC_DOWN, KC_RGHT, KC_LGUI, KC_SPC, MO(function), KC_RALT, KC_RGUI, KC_RCTL),
    
    [function] = LAYOUT_ortho_5x15(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NLCK, KC_SLSH, KC_ASTR, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
				   KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, RGB_HUD, RGB_HUI, KC_P7, KC_P8, KC_P9, KC_MINS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS,
				   KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, RGB_SAD, RGB_SAI, KC_P4, KC_P5, KC_P6, KC_PLUS, KC_TRNS, RESET, KC_TRNS, TO(shavian1), KC_TRNS,
				   KC_VOLD, KC_MUTE, KC_VOLU, KC_APP, RGB_VAD, RGB_VAI, KC_P1, KC_P2, KC_P3, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				   KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, RGB_RMOD, RGB_MOD, KC_P0, KC_TRNS, KC_PDOT, KC_PENT, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
 
    [shavian1] = LAYOUT_ortho_5x15(KC_ESC , KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_GRV, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
				   KC_TAB , X(OIL), X(WOE), X(FEE), X(PEEP), X(BIB), KC_LBRC, KC_BSLS, KC_RBRC, X(YEA), X(LOLL), X(UP), X(AH), KC_SCLN, KC_QUOT,
				   KC_CAPS, X(ADO), X(ROAR), X(SURE), X(TOT), X(GAG), KC_HOME, KC_DEL, KC_PGUP , X(KICK), X(NUN), X(EGG), X(IF), X(ON), KC_ENT,
				   KC_LSFT, X(MEASURE), X(ERR), X(CHURCH), X(DEAD), X(VOW), KC_END, KC_UP, KC_PGDN , X(MIME), X(HAHA), KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
				   KC_LCTL, KC_LGUI, KC_LALT, MO(shavian2), KC_LCTL, KC_LALT, KC_LEFT, KC_DOWN, KC_RGHT, KC_LGUI, KC_SPC, MO(shavian2), KC_RALT, KC_RGUI, KC_RCTL),

    [shavian2] = LAYOUT_ortho_5x15(KC_ESC , KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_GRV, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
				   KC_TAB , X(OUT), X(IAN), X(ICE), X(OR), X(BIB), KC_LBRC, KC_BSLS, KC_RBRC, X(JUDGE), X(LOLL), X(WOOL), X(AWE), KC_SCLN, KC_QUOT,
				   KC_CAPS, X(ASH), X(ARE), X(SO), X(THIGH), X(DOT), KC_HOME, KC_DEL, KC_PGUP , X(KICK), X(HUNG), X(AGE), X(EAT), X(OAK), TO(base),
				   KC_LSFT, X(ZOO), X(AIR), X(EAR), X(ARRAY), X(YEW), KC_END, KC_UP, KC_PGDN , X(OOZE), X(THEY), KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
				   KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_LCTL, KC_LALT, KC_LEFT, KC_DOWN, KC_RGHT, KC_LGUI, KC_SPC, KC_TRNS, KC_RALT, KC_RGUI, KC_RCTL)
};
