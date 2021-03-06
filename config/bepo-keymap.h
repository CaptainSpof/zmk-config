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
#define _DQUOT    N1                 // "
#define _LESS     RA(N2)             // <
#define _GREAT    RA(N3)             // >
#define _LGUIL    N2                 // «
#define _RGUIL    N3                 // »
#define _LBRA     N4                 // (
#define _RBRA     N5                 // )
#define _AT       N6                 // @
#define _PLUS     N7                 // +
#define _MINUS    N8                 // -
#define _SLASH    N9                 // /
#define _AST      N0                 // *
#define _EQUAL    MINUS              // =
#define _PERC     EQUAL              // %

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
#define _AGR      Z                  // À
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
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ = │ % │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │ ! │   │   │   │   │   │   │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │ ;  │   │   │   │   │   │   │  │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │       │   │   │   │ :  │   │ ?  │   │   │   │   │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define _HASH     LS(GRAVE)       // #
#define _1        LS(N1)          // 1
#define _2        LS(N2)          // 2
#define _3        LS(N3)          // 3
#define _4        LS(N4)          // 4
#define _5        LS(N5)          // 5
#define _6        LS(N6)          // 6
#define _7        LS(N7)          // 7
#define _8        LS(N8)          // 8
#define _9        LS(N9)          // 9
#define _0        LS(N0)          // 0
#define _DEG      LS(_SS)         // ?
#define _GRAV     LS(_AGR)       // ` (dead)

#define _UNDS      RA(SPC)        // _
#define _LSBRA     RA(N4)         // [
#define _RSBRA     RA(N5)         // ]
#define _LCBRA     RA(X)          // [
#define _RCBRA     RA(C)          // ]
#define _BCKSLSH   RA(Z)          //
#define _PIPE      RA(Q)          // |
