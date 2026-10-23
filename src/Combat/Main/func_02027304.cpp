#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02027304_1880 = 0x6ac };
#else
enum { Enum_02027304_1880 = 0x758 };
#endif


#include "Combat/ActionState.h"

// USA: func_02027304
extern "C" ARM void func_02027304(unsigned char *arg0, int arg1) {
    if (arg1 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            func_0201fbe0(&data_020fdc60[var0], 0);
        }
        return;
    }
    if (arg1 >= 4) return;
    {
        int var1;
        unsigned char *var2;
        for (var1 = 0; var1 < 4; var1++) {
            var2 = arg0 + var1;
            if (arg1 == var2[Enum_02027304_1880]) {
                func_0201fbe0(&data_020fdc60[var1], 0);
                return;
            }
        }
    }
}
