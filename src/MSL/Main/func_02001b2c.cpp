#include <globaldefs.h>

#define cpd ((unsigned char*)arg0)
#define lpd ((unsigned int*)arg0)

#define deref_auto_inc(p) *(p)++

// USA: func_02001b2c
extern "C" ARM void func_02001b2c(void* arg0, int arg1, unsigned int arg2) {
    unsigned int var0 = (unsigned char)arg1;
    unsigned int var1;

    if (arg2 >= 32) {
        var1 = (-(unsigned int)arg0) & 3;

        if (var1) {
            arg2 -= var1;
            do {
                deref_auto_inc(cpd) = var0;
            } while (--var1);
        }

        if (var0) {
            var0 |= var0 << 24 | var0 << 16 | var0 << 8;
        }

        var1 = arg2 >> 5;

        if (var1) {
            do {
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
                deref_auto_inc(lpd) = var0;
            } while (--var1);
        }

        var1 = (arg2 & 31) >> 2;

        if (var1) {
            do {
                deref_auto_inc(lpd) = var0;
            } while (--var1);
        }

        arg2 &= 3;
    }

    if (arg2) {
        do {
            deref_auto_inc(cpd) = var0;
        } while (--arg2);
    }
}
