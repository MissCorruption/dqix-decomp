#include <globaldefs.h>

typedef int (*Type_020db894)(void);
extern Type_020db894 data_020f28fc[];

struct Struct_020db894 { char unknown_0_[0x5c]; int unknown_5c_[2]; };

// USA: func_020db964
extern "C" ARM void func_020db964(struct Struct_020db894* arg0) {
    int var0;
    for (var0 = 0; var0 < 2; var0++) {
        int var1 = data_020f28fc[var0]();
        if (var1 != 0x10) {
            if (var1 != arg0->unknown_5c_[var0]) {
                arg0->unknown_5c_[var0] = var1;
            }
        }
    }
}
