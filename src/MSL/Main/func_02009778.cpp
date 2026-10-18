#include <globaldefs.h>

struct decimal {
    unsigned char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
};

extern "C" void func_0200961c(decimal* d, int digits);

// USA: func_02009778
extern "C" ARM void func_02009778(decimal* result, const decimal* x, const decimal* y) {
    unsigned int accumulator = 0;
    unsigned char mantissa[32 * 2];
    int i = x->sig.length + y->sig.length - 1;
    unsigned char* ip = mantissa + i + 1;
    unsigned char* ep = ip;

    result->sgn = 0;

    for (; i > 0; i--) {
        int k = y->sig.length - 1;
        int j = i - k - 1;
        int l;
        int t;
        const unsigned char* jp;
        const unsigned char* kp;

        if (j < 0) {
            j = 0;
            k = i - 1;
        }

        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l = k + 1;
        t = x->sig.length - j;

        if (l > t) {
            l = t;
        }

        for (; l > 0; l--, jp++, kp--) {
            accumulator += *jp * *kp;
        }

        *--ip = (unsigned char)(accumulator % 10);
        accumulator /= 10;
    }

    result->exp = (short)(x->exp + y->exp);

    if (accumulator) {
        *--ip = (unsigned char)(accumulator);
        result->exp++;
    }

    for (i = 0; i < 32 && ip < ep; i++, ip++) {
        result->sig.text[i] = *ip;
    }
    result->sig.length = (unsigned char)(i);

    if (ip < ep && *ip >= 5) {
        if (*ip == 5) {
            unsigned char* jp = ip + 1;
            for (; jp < ep; jp++) {
                if (*jp != 0) {
                    goto round;
                }
            }
            if ((ip[-1] & 1) == 0) {
                return;
            }
        }
    round:
        func_0200961c(result, result->sig.length);
    }
}
