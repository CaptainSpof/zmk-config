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
#define _DOL      GRAVE              // $
#define _DQUOT    LS(SINGLE_QUOTE)   // "
#define _LESS     LS(COMMA)          // <
#define _GREAT    LS(DOT)            // >
/* #define _LGUIL    EQUAL              // ´ (dead) */
/* #define _RGUIL    EQUAL              // ´ (dead) */
#define _LBRA     LS(NUMBER_9)       // (
#define _RBRA     LS(NUMBER_0)       // )
#define _AT       LS(NUMBER_2)       // @
#define _PLUS     LS(EQUAL)          // +
#define _MINUS    MINUS              // -
#define _SLASH    SLASH              // /
#define _AST      LS(NUMBER_8)       // *
#define _EQUAL    EQUAL              // =
#define _PERC     LS(NUMBER_5)       // %

// Row 2
#define _B        Q                  // B
#define _ECU      W                  // É
#define _P        E                  // P
#define _O        R                  // O
#define _EGR      T                  // È
#define _CIRC     Y                  // ^ (dead)
#define _V        U                  // V
#define _D        I                  // D
#define _L        O                  // L
#define _J        P                  // J
#define _Z        LEFT_BRACKET       // Z
#define _W        RIGHT_BRACKET      // W
#define _CCED     BACKSLASH          // Ç

// Row 3
#define _A        A                  // A
#define _U        S                  // U
#define _I        D                  // I
#define _E        F                  // E
#define _COMMA    G                  // ,
#define _C        H                  // C
#define _T        J                  // T
#define _S        K                  // S
#define _R        L                  // R
#define _N        SEMICOLON          // N
#define _M        SINGLE_QUOTE       // M

// Row 4
#define _ACU      Z                  // À
#define _Y        X                  // Y
#define _X        C                  // X
#define _DOT      V                  // .
#define _K        B                  // K
#define _QUOT     N                  // '
#define _Q        M                  // Q
#define _G        COMMA              // G
#define _H        PERIOD             // H
#define _F        SLASH              // F

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
#define _HASH     LS(NUMBER_3)      // #
#define _1        NUMBER_1          // 1
#define _2        NUMBER_2          // 2
#define _3        NUMBER_3          // 3
#define _4        NUMBER_4          // 4
#define _5        NUMBER_5          // 5
#define _6        NUMBER_6          // 6
#define _7        NUMBER_7          // 7
#define _8        NUMBER_8          // 8
#define _9        NUMBER_9          // 9
#define _0        NUMBER_0          // 0
#define _DEG      LS(_SS)         // ?
#define _GRAV     LS(_ACUT)       // ` (dead)
// Row 2
/* #define _ASTR     LS(_PLUS)       // * */
// Row 3
/* #define _QUOT     LS(_HASH)       // ' */
// Row 4
/* #define _RABK     LS(_LABK)       // > */
/* #define _SCLN     LS(_COMM)       // ; */
/* #define _COLN     LS(_DOT)        // : */
/* #define _UNDS     LS(_MINS)       // _ */

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
/* #define _EURO     RA(_E)          // € */
/* // Win */
/* #define _W_LBRC   RA(NUMBER_8)      // [ */
/* #define _W_RBRC   RA(NUMBER_9)      // ] */
/* #define _W_PIPE   RA(_LABK)       // | */
/* #define _W_LCBR   RA(NUMBER_7)      // { */
/* #define _W_RCBR   RA(NUMBER_0)      // } */
/* #define _W_AT     RA(_Q)          // @ */
/* #define _W_TILD   RA(_PLUS)       // ~ */
/* // Mac */
/* #define _M_LBRC   LA(NUMBER_5)      // [ */
/* #define _M_RBRC   LA(NUMBER_6)      // ] */
/* #define _M_PIPE   LA(NUMBER_7)      // | */
/* #define _M_LCBR   LA(NUMBER_8)      // { */
/* #define _M_RCBR   LA(NUMBER_9)      // } */
/* #define _M_AT     LA(_L)          // @ */
/* #define _M_TILD   LA(_N)          // ~ */

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
/* #define _W_BSLS   RA(_SS)         // (backslash) */
/* // Mac */
/* #define _M_BSLS   LS(LA(NUMBER_7))  // (backslash) */
