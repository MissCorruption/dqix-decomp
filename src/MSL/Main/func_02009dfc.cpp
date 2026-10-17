#include <globaldefs.h>

typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

// USA: func_02009dfc
extern "C" ARM int func_02009dfc(const decimal* x, const decimal* y) {
    if (x->sig.text[0] == 0) {
        if (y->sig.text[0] != 0)
            return 1;
        return 0;
    }
    if (y->sig.text[0] == 0)
        return 0;

    if (x->exp == y->exp) {
        int i;
        int l = x->sig.length;

        if (l > y->sig.length)
            l = y->sig.length;

        for (i = 0; i < l; i++) {
            if (x->sig.text[i] < y->sig.text[i])
                return 1;
            if (y->sig.text[i] < x->sig.text[i])
                return 0;
        }

        if (l == x->sig.length) {
            for (; i < y->sig.length; i++) {
                if (y->sig.text[i] != 0)
                    return 1;
            }
        }
        return 0;
    }
    return x->exp < y->exp;
}
