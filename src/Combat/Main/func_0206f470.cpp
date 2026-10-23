#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"

// USA: func_0206f470
extern "C" ARM void* func_0206f470(struct Struct_0206f01c_2* arg0, int arg1, Type_0206f470 arg2) {
    Struct_0206ef40* var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;

    var0 = arg0->unknown_4_;
    if (var0 == NULL || arg2 == NULL) {
        return NULL;
    }
    var1 = arg0->unknown_0_.unknown_0_0_;
    if (var1 == 0) {
        return NULL;
    }
    var2 = 0;
    var3 = var1 - 1;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = arg2(&var0[var4]);
        if (var5 == arg1) {
            return &var0[var4];
        }
        if (var5 > arg1) {
            var3 = var4 - 1;
        } else {
            var2 = var4 + 1;
        }
    }
    return NULL;
}
