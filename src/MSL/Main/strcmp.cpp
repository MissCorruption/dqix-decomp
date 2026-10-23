#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02004070
// Vectorised like strcpy once both pointers share an alignment, but the word loop
// only tests (w + 0xfefefeff) & 0x80808080 without the & ~w term, so a byte whose
// value is >= 0x80 also looks like a terminator and drops back to the byte compare.
extern "C" ARM int strcmp(const char* arg0, const char* arg1) {
    unsigned int var0;
    unsigned int var1;
    int var2;

    var0 = *(const unsigned char*)arg0;
    var1 = *(const unsigned char*)arg1;
    var2 = (int)var0 - (int)var1;
    if (var2 != 0) {
        return var2;
    }

    unsigned int var3 = (unsigned int)arg0 & 3;
    unsigned int var4 = (unsigned int)arg1 & 3;
    if (var4 == var3) {
        if (var3 != 0) {
            if (var0 == 0) {
                return 0;
            }
            unsigned int var5 = 3 - var3;
            if (var5 != 0) {
                do {
                    var0 = *(const unsigned char*)++arg0;
                    var1 = *(const unsigned char*)++arg1;
                    var2 = (int)var0 - (int)var1;
                    if (var2 != 0) {
                        return var2;
                    }
                    if (var0 == 0) {
                        return 0;
                    }
                } while (--var5);
            }
            arg0++;
            arg1++;
        }

        var0 = *(const unsigned int*)arg0;
        unsigned int var6 = var0 + 0xfefefeffu;
        unsigned int var7 = ~var0;
        var6 &= var7;
        unsigned int var8 = *(const unsigned int*)arg1;
        if ((var6 & 0x80808080u) == 0) {
            if (var0 == var8) {
                do {
                    arg0 += 4;
                    arg1 += 4;
                    var0 = *(const unsigned int*)arg0;
                    var8 = *(const unsigned int*)arg1;
                    var6 = var0 + 0xfefefeffu;
                    if ((var6 & 0x80808080u) != 0) {
                        goto reload;
                    }
                } while (var0 == var8);
            }
            arg0 -= 1;
            arg1 -= 1;
            goto tail;
        }

    reload:
        var0 = *(const unsigned char*)arg0;
        var1 = *(const unsigned char*)arg1;
        var2 = (int)var0 - (int)var1;
        if (var2 != 0) {
            return var2;
        }
    }

tail:
    if (var0 == 0) {
        return 0;
    }
    do {
        var0 = *(const unsigned char*)++arg0;
        var1 = *(const unsigned char*)++arg1;
        var2 = (int)var0 - (int)var1;
        if (var2 != 0) {
            return var2;
        }
    } while (var0 != 0);
    return 0;
}
