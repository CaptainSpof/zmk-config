/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ $ │ " │ « │ » │ ( │ ) │ @ │ + │ - │ / │ * │ = │ % │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ B │ É │ P │ O │ È │ ! │ V │ D │ L │ J │ Z │ W │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ U │ I │ E │ , │ C │ T │ S │ R │ N │ M │  │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │       │ À │ Y │ X │ . │ K │ ' │ Q │ G │ H │ F │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define BE_DOL      GRAVE              // $
#define BE_DQUOT    LS(SINGLE_QUOTE)   // "
#define BE_LESS     LS(COMMA)          // <
#define BE_GREAT    LS(DOT)            // >
/* #define BE_LGUIL    EQUAL              // ´ (dead) */
/* #define BE_RGUIL    EQUAL              // ´ (dead) */
#define BE_LBRA     LS(NUMBER_9)       // (
#define BE_RBRA     LS(NUMBER_0)       // )
#define BE_AT       LS(NUMBER_2)       // @
#define BE_PLUS     LS(EQUAL)          // +
#define BE_MINUS    MINUS              // -
#define BE_SLASH    SLASH              // /
#define BE_AST      LS(NUMBER_8)       // *
#define BE_EQUAL    EQUAL              // =
#define BE_PERC     LS(NUMBER_5)       // %

// Row 2
#define BE_B        Q                  // B
#define BE_ECU      W                  // É
#define BE_P        E                  // P
#define BE_O        R                  // O
#define BE_EGR      T                  // È
#define BE_CIRC     Y                  // ^ (dead)
#define BE_V        U                  // V
#define BE_D        I                  // D
#define BE_L        O                  // L
#define BE_J        P                  // J
#define BE_Z        LEFT_BRACKET       // Z
#define BE_W        RIGHT_BRACKET      // W
#define BE_CCED     BACKSLASH          // Ç

// Row 3
#define BE_A        A                  // A
#define BE_U        S                  // U
#define BE_I        D                  // I
#define BE_E        F                  // E
#define BE_COMMA    G                  // ,
#define BE_C        H                  // C
#define BE_T        J                  // T
#define BE_S        K                  // S
#define BE_R        L                  // R
#define BE_N        SEMICOLON          // N
#define BE_M        SINGLE_QUOTE       // M

// Row 4
#define BE_ACU      Z                  // À
#define BE_Y        X                  // Y
#define BE_X        C                  // X
#define BE_DOT      V                  // .
#define BE_K        B                  // K
#define BE_QUOT     N                  // '
#define BE_Q        M                  // Q
#define BE_G        COMMA              // G
#define BE_H        PERIOD             // H
#define BE_F        SLASH              // F

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │ ! │   │   │   │   │   │   │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │ ;  │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │       │   │   │   │ :  │   │ ?  │   │   │   │   │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define BE_HASH     LS(NUMBER_3)      // #
#define BE_1        NUMBER_1          // 1
#define BE_2        NUMBER_2          // 2
#define BE_3        NUMBER_3          // 3
#define BE_4        NUMBER_4          // 4
#define BE_5        NUMBER_5          // 5
#define BE_6        NUMBER_6          // 6
#define BE_7        NUMBER_7          // 7
#define BE_8        NUMBER_8          // 8
#define BE_9        NUMBER_9          // 9
#define BE_0        NUMBER_0          // 0
#define BE_DEG      LS(BE_SS)         // ?
#define BE_GRAV     LS(BE_ACUT)       // ` (dead)
// Row 2
/* #define BE_ASTR     LS(BE_PLUS)       // * */
// Row 3
/* #define BE_QUOT     LS(BE_HASH)       // ' */
// Row 4
/* #define BE_RABK     LS(BE_LABK)       // > */
/* #define BE_SCLN     LS(BE_COMM)       // ; */
/* #define BE_COLN     LS(BE_DOT)        // : */
/* #define BE_UNDS     LS(BE_MINS)       // _ */

/* /\* Alted symbols (Mac) */
/*  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐ */
/*  * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │ */
/*  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤ */
/*  * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │ */
/*  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │ */
/*  * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │ */
/*  * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤ */
/*  * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │ */
/*  * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤ */
/*  * │     │    │     │                       │     │    │     │ */
/*  * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘ */
/*  *\/ */
/* // Row 1 */
/* #define BE_EURO     RA(BE_E)          // € */
/* // Win */
/* #define BE_W_LBRC   RA(NUMBER_8)      // [ */
/* #define BE_W_RBRC   RA(NUMBER_9)      // ] */
/* #define BE_W_PIPE   RA(BE_LABK)       // | */
/* #define BE_W_LCBR   RA(NUMBER_7)      // { */
/* #define BE_W_RCBR   RA(NUMBER_0)      // } */
/* #define BE_W_AT     RA(BE_Q)          // @ */
/* #define BE_W_TILD   RA(BE_PLUS)       // ~ */
/* // Mac */
/* #define BE_M_LBRC   LA(NUMBER_5)      // [ */
/* #define BE_M_RBRC   LA(NUMBER_6)      // ] */
/* #define BE_M_PIPE   LA(NUMBER_7)      // | */
/* #define BE_M_LCBR   LA(NUMBER_8)      // { */
/* #define BE_M_RCBR   LA(NUMBER_9)      // } */
/* #define BE_M_AT     LA(BE_L)          // @ */
/* #define BE_M_TILD   LA(BE_N)          // ~ */

/* /\* Shift+Alted symbols */
/*  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐ */
/*  * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │ */
/*  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤ */
/*  * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │ */
/*  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │ */
/*  * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │ */
/*  * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤ */
/*  * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │ */
/*  * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤ */
/*  * │     │    │     │                       │     │    │     │ */
/*  * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘ */
/*  *\/ */
/* // Row 1 */
/* // Win */
/* #define BE_W_BSLS   RA(BE_SS)         // (backslash) */
/* // Mac */
/* #define BE_M_BSLS   LS(LA(NUMBER_7))  // (backslash) */
