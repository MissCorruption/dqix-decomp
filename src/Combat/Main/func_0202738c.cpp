#include <globaldefs.h>

#include "Combat/ActionState.h"

#if defined(jpn)
enum { Enum_0202738c_1880 = 0x6ac };
#else
enum { Enum_0202738c_1880 = 0x758 };
#endif

// USA: func_0202738c
extern "C" ARM void func_0202738c(unsigned char *arg0, int arg1, int arg2, int arg3) {
    if (arg3 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            Struct_020fdc60 *var1 = &data_020fdc60[var0];
            if (arg1) {
                var1->unknown_2_ = var1->unknown_2_ | arg2;
            } else {
                var1->unknown_2_ = var1->unknown_2_ & ~arg2;
            }
        }
        return;
    }
    if (arg3 >= 4) return;
    {
        int var2;
        unsigned char *var3;
        Struct_020fdc60 *var4;
        for (var2 = 0; var2 < 4; var2++) {
            var3 = arg0 + var2;
            var4 = &data_020fdc60[var2];
            if (arg3 == var3[Enum_0202738c_1880]) {
                if (arg1) {
                    var4->unknown_2_ = var4->unknown_2_ | arg2;
                    return;
                }
                var4->unknown_2_ = var4->unknown_2_ & ~arg2;
                return;
            }
        }
    }
}
