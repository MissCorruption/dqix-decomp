#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct Struct_020839dc { unsigned char unknown_0_[IS_JPN ? 0x878 : 0x910]; unsigned char unknown_910_[9]; };
// USA: func_020839dc
extern "C" ARM int func_020839dc(struct Struct_020839dc* arg0, unsigned char* arg1, int arg2) {
    int var0;
    int var1;
    int var2;
    var2 = 0;
    for (var0 = 0; var0 < 9; var0++) {
        if (arg0->unknown_910_[var0] == 0) {
            continue;
        }
        for (var1 = 0; var1 < 8; var1++) {
            if (arg0->unknown_910_[var0] & (1 << var1)) {
                arg1[var2] = (unsigned char)(var1 + var0 * 8);
                var2++;
                if (var2 == arg2) {
                    return var2;
                }
            }
        }
    }
    return var2;
}
