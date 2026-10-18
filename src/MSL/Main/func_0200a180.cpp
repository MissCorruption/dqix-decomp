#include <globaldefs.h>

// MSL_C ansi_fp.c __num2dec_internal.
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

extern "C" int func_0200aa60(double x);                                   /* __signbitd */
extern "C" int func_0200aa74(double x);                                   /* __fpclassifyd */
extern "C" double func_0200911c(double x, int* exp);                      /* frexp */
extern "C" double func_020091d8(double x, int n);                         /* ldexp */
extern "C" unsigned char func_0200a9cc(unsigned long long v);             /* __msl_generic_count_bits64 */
extern "C" unsigned long long func_0200afe8(double x);                    /* _ll_ufrom_d */
extern "C" void func_02009998(decimal* d, long exp);                      /* __two_exp */
extern "C" void func_020096ac(decimal* result, unsigned long long val);   /* __ull2dec */
extern "C" void func_02009778(decimal* result, const decimal* x, const decimal* y); /* __timesdec */

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
        func_020096ac(&int_d, func_0200afe8(func_020091d8(frac, num_bits_extract)));
        func_02009778(d, &int_d, &pow2_d);
        d->sgn = sign;
    }
}
