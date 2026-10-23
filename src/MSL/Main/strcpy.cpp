#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02003f28
// Vectorised when dst and src share the same alignment: for a word x,
// (x + 0xfefefeff) & ~x & 0x80808080 is zero exactly when every byte of x is
// non-zero, so a whole word can be copied at a time until a terminator appears.
extern "C" ARM char* strcpy(char* arg0, const char* arg1) {
    char* var0 = arg0;
    unsigned int var1 = (unsigned int)arg1 & 3;
    unsigned int var2 = (unsigned int)arg0 & 3;

    if (var2 == var1) {
        if (var1 != 0) {
            unsigned char var3 = *(const unsigned char*)arg1;
            *arg0 = var3;
            if (var3 == 0) {
                return arg0;
            }
            unsigned int var4 = 3 - var1;
            if (var4 != 0) {
                do {
                    var3 = *(const unsigned char*)++arg1;
                    *++var0 = var3;
                    if (var3 == 0) {
                        return arg0;
                    }
                } while (--var4);
            }
            var0++;
            arg1++;
        }
        unsigned int var5 = *(const unsigned int*)arg1;
        if (((var5 + 0xfefefeffu) & ~var5 & 0x80808080u) == 0) {
            var0 -= 4;
            unsigned int var6;
            unsigned int var7;
            for (;;) {
                var0 += 4;
                *(unsigned int*)var0 = var5;
                arg1 += 4;
                var5 = *(const unsigned int*)arg1;
                var6 = var5 + 0xfefefeffu;
                var7 = ~var5;
                var6 &= var7;
                if ((var6 & 0x80808080u) != 0) {
                    break;
                }
            }
            var0 += 4;
        }
    }

    unsigned char var8 = *(const unsigned char*)arg1;
    *var0 = var8;
    if (var8 != 0) {
        do {
            var8 = *(const unsigned char*)++arg1;
            *++var0 = var8;
        } while (var8 != 0);
    }
    return arg0;
}
