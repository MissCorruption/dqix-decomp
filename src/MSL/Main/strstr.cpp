#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_0200423c
extern "C" ARM char* strstr(const char* arg0, const char* arg1) {
    unsigned char var0;
    if (arg1 == 0 || (var0 = *(const unsigned char*)arg1) == 0) {
        return (char*)arg0;
    }

    unsigned char var1 = *(const unsigned char*)arg0;
    char* var2 = (char*)arg0 + 1;
    if (var1 != 0) {
        do {
        if (var1 == var0) {
            const unsigned char* var3 = (const unsigned char*)var2;
            const unsigned char* var4 = (const unsigned char*)arg1 + 1;
            unsigned char var5;
            unsigned char var6;
            do {
                var5 = *var4++;
                var6 = *var3++;
            } while (var6 == var5 && var6 != 0);
            if (var5 == 0) {
                return var2 - 1;
            }
        }
            var1 = *(const unsigned char*)var2++;
        } while (var1 != 0);
    }
    return 0;
}
