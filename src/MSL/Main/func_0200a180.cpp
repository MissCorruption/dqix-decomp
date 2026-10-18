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

extern "C" int func_0200aa60(double x);
extern "C" int func_0200aa74(double x);
extern "C" double func_0200911c(double x, int* exp);
extern "C" double func_020091d8(double x, int n);
extern "C" unsigned char func_0200a9cc(unsigned long long v);
extern "C" void func_02009998(decimal* d, long exp);
extern "C" void func_020096ac(decimal* result, unsigned long long val);
extern "C" void func_02009778(decimal* result, const decimal* x, const decimal* y);

static inline int count_trailing(double x) {
    unsigned long long bits = *(unsigned long long*)&x | 0x0010000000000000ULL;
    return func_0200a9cc((bits & -bits) - 1);
}

// USA: func_0200a180
extern "C" ARM void func_0200a180(decimal* d, double x) {
    char sign = (char)(func_0200aa60(x) != 0);

    if (x == 0) {
        d->sgn = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (!(func_0200aa74(x) > 2)) {
        d->sgn = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = func_0200aa74(x) == 1 ? 'N' : 'I';
        return;
    }

    if (sign != 0) {
        x = -x;
    }

    {
        int exp;
        double frac = func_0200911c(x, &exp);
        int num_bits_extract = 53 - count_trailing(frac);
        decimal int_d, pow2_d;

        func_02009998(&pow2_d, exp - num_bits_extract);
        func_020096ac(&int_d, (unsigned long long)func_020091d8(frac, num_bits_extract));
        func_02009778(d, &int_d, &pow2_d);
        d->sgn = sign;
    }
}
