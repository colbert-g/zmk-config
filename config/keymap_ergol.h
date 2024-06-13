
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

// clang-format off

// Aliases
#define EL_GRV  GRAVE   // `
#define EL_1    N1      // 1
#define EL_2    N2      // 2
#define EL_3    N3      // 3
#define EL_4    N4      // 4
#define EL_5    N5      // 5
#define EL_6    N6      // 6
#define EL_7    N7      // 7
#define EL_8    N8      // 8
#define EL_9    N9      // 9
#define EL_0    N0      // 0
#define EL_SLSH MINUS   // /
#define EL_EQL  EQUAL   // =
#define EL_Q    Q       // Q
#define EL_C    W       // C
#define EL_O    E       // O
#define EL_P    R       // P
#define EL_W    T       // W
#define EL_J    Y       // J
#define EL_M    U       // M
#define EL_D    I       // D
#define EL_1DK  O       // 1dk (dead lafayette)
#define EL_Y    P       // Y
#define EL_LBRC LBKT    // [
#define EL_RBRC RBKT    // ]
#define EL_A    A       // A
#define EL_S    S       // S
#define EL_E    D       // E
#define EL_N    F       // N
#define EL_F    G       // F
#define EL_L    H       // L
#define EL_R    J       // R
#define EL_T    K       // R
#define EL_I    L       // I
#define EL_U    SEMI    // U
#define EL_QUOT SQT     // '
#define EL_BSLS NUHS    // (backslash)
#define EL_LABK NUBS    // <
#define EL_Z    Z       // Z
#define EL_X    X       // X
#define EL_MINS C       // -
#define EL_V    V       // V
#define EL_B    B       // B
#define EL_DOT  N       // .
#define EL_H    M       // H
#define EL_G    COMMA   // G
#define EL_COMM DOT     // ,
#define EL_K    FSLH    // K

//SHIFTED
#define EL_TILD LS(EL_GRV)  // ~
#define EL_EURO LS(EL_1)    // €
#define EL_LDQF LS(EL_2)    // «
#define EL_RDQF LS(EL_3)    // »
#define EL_DLR  LS(EL_4)    // $
#define EL_PERC LS(EL_5)    // %
#define EL_CIRC LS(EL_6)    // ^
#define EL_AMPR LS(EL_7)    // &
#define EL_ASTR LS(EL_8)    // *
#define EL_HASH LS(EL_9)    // #
#define EL_AT   LS(EL_0)    // @
#define EL_UNDS LS(EL_SLSH) // _
#define EL_PLUS LS(EL_EQL)  // =
#define EL_EXCL LS(EL_1DK)  // !
#define EL_LCBR LS(EL_LBRC) // {
#define EL_RCBR LS(EL_RBRC) // }
#define EL_DQUO LS(EL_QUOT) // "
#define EL_PIPE LS(EL_BSLS) // |
#define EL_RABK LS(EL_LABK) // >
#define EL_QUES LS(EL_MINS) // ?
#define EL_COLN LS(EL_DOT)  // :
#define EL_SCLN LS(EL_COMM) // ;

//ALTGR  //Symbol layer
#define EL_SUB1 RA(EL_1)    // ₁
#define EL_SUB2 RA(EL_2)    // ₂
#define EL_SUB3 RA(EL_3)    // ₃
#define EL_SUB4 RA(EL_4)    // ₄
#define EL_SUB5 RA(EL_5)    // ₅
#define EL_SUB6 RA(EL_6)    // ₆
#define EL_SUB7 RA(EL_7)    // ₇
#define EL_SUB8 RA(EL_8)    // ₈
#define EL_SUB9 RA(EL_9)    // ₉
#define EL_SUB0 RA(EL_0)    // ₀
#define EL_LPRN RA(EL_S)    // (
#define EL_RPRN RA(EL_E)    // )

//ALTGR  //Symbol layer //SHIFTED
#define EL_SUP1 RA(LS(EL_1))    // ¹
#define EL_SUP2 RA(LS(EL_2))    // ²
#define EL_SUP3 RA(LS(EL_3))    // ³
#define EL_SUP4 RA(LS(EL_4))    // ⁴
#define EL_SUP5 RA(LS(EL_5))    // ⁵
#define EL_SUP6 RA(LS(EL_6))    // ⁶
#define EL_SUP7 RA(LS(EL_7))    // ⁷
#define EL_SUP8 RA(LS(EL_8))    // ⁸
#define EL_SUP9 RA(LS(EL_9))    // ⁹
#define EL_SUP0 RA(LS(EL_0))    // ⁰

#define EL_DCIR RA(LS(EL_Q))    // ^ (dead)
#define EL_LEEQ RA(LS(EL_C))    // <=
#define EL_GREQ RA(LS(EL_O))    // >=
#define EL_CURR RA(LS(EL_P))    // ¤ (dead)
#define EL_PERM RA(LS(EL_W))    // ‰
#define EL_RNGA RA(LS(EL_J))    // ° (dead)
#define EL_MUL  RA(LS(EL_D))    // ×
#define EL_ACUT RA(LS(EL_1DK))  // ´ (dead)
#define EL_DGRV RA(LS(EL_Y))    // ` (dead)
#define EL_CARN RA(LS(EL_A))    // ˇ (dead)
#define EL_RNGA RA(LS(EL_N))    // ° (dead)
#define EL_NEQL RA(LS(EL_F))    // !=
#define EL_DSLS RA(LS(EL_L))    // / (dead) 
#define EL_PLMN RA(LS(EL_R))    // ±
#define EL_MACR RA(LS(EL_T))    // ¯ (dead)
#define EL_DIV  RA(LS(EL_I))    // ÷
#define EL_DACU RA(LS(EL_U))    // ˝ (dead)
#define EL_DTIL RA(LS(EL_Z))    // ~ (dead)
#define EL_CEDL RA(LS(EL_X))    // ¸ (dead)
#define EL_OGON RA(LS(EL_MINS)) // ˛ (dead)
#define EL_DCLN RA(LS(EL_G))    // cédille ronde (dead)
#define EL_BREV RA(LS(EL_K))    // ˘ (dead)

