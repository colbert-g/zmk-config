/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ " │ « │ » │ ( │ ) │ @ │ + │ - │ / │ * │ = │ % │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ B │ É │ P │ O │ È │ ^ │ V │ D │ L │ J │ Z │ W │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ U │ I │ E │ , │ C │ T │ S │ R │ N │ M │ Ç │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ Ê │ À │ Y │ X │ . │ K │ ' │ Q │ G │ H │ F │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define BP_DLR  GRAVE // $
#define BP_DQUO N1    // "
#define BP_LDAQ N2    // «
#define BP_RDAQ N3    // »
#define BP_LPRN N4    // (
#define BP_RPRN N5    // )
#define BP_AT   N6    // @
#define BP_PLUS N7    // +
#define BP_MINS N8    // -
#define BP_SLSH N9    // /
#define BP_ASTR N0    // *
#define BP_EQL  MINUS // =
#define BP_PERC EQUAL // %
// Row 2
#define BP_B    Q    // B
#define BP_EACU W    // É
#define BP_P    E    // P
#define BP_O    R    // O
#define BP_EGRV T    // È
#define BP_DCIR Y    // ^ (dead)
#define BP_V    U    // V
#define BP_D    I    // D
#define BP_L    O    // L
#define BP_J    P    // J
#define BP_Z    LBKT // Z
#define BP_W    RBKT // W
// Row 3
#define BP_A    A    // A
#define BP_U    S    // U
#define BP_I    D    // I
#define BP_E    F    // E
#define BP_COMM G    // ,
#define BP_C    H    // C
#define BP_T    J    // T
#define BP_S    K    // S
#define BP_R    L    // R
#define BP_N    SEMI // N
#define BP_M    SQT  // M
#define BP_CCED NUHS // Ç
// Row 4
#define BP_ECIR NUBS  // Ê
#define BP_AGRV Z     // À
#define BP_Y    X     // Y
#define BP_X    C     // X
#define BP_DOT  V     // .
#define BP_K    B     // K
#define BP_QUOT N     // '
#define BP_Q    M     // Q
#define BP_G    COMMA // G
#define BP_H    DOT   // H
#define BP_F    FSLH  // F

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ ! │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │ ? │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define BP_HASH LS(BP_DLR)  // #
#define BP_1    LS(BP_DQUO) // 1
#define BP_2    LS(BP_LDAQ) // 2
#define BP_3    LS(BP_RDAQ) // 3
#define BP_4    LS(BP_LPRN) // 4
#define BP_5    LS(BP_RPRN) // 5
#define BP_6    LS(BP_AT)   // 6
#define BP_7    LS(BP_PLUS) // 7
#define BP_8    LS(BP_MINS) // 8
#define BP_9    LS(BP_SLSH) // 9
#define BP_0    LS(BP_ASTR) // 0
#define BP_DEG  LS(BP_EQL)  // °
#define BP_GRV  LS(BP_PERC) // `
// Row 2
#define BP_EXLM LS(BP_DCIR) // !
// Row 3
#define BP_SCLN LS(BP_COMM) // ;
// Row 4
#define BP_COLN LS(BP_DOT)  // :
#define BP_QUES LS(BP_QUOT) // ?
// Row 5
#define BP_NBSP LS(KC_SPC)  //   (non-breaking space)
