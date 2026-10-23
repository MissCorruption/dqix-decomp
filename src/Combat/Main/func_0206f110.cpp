#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"

// USA: func_0206f110
extern "C" ARM int func_0206f110(Struct_0206ef48* arg0, Type_0206f110 arg1) {
    int var0;
    Struct_0206ef40* var1 = arg0->unknown_0_.unknown_4_;
    int var2;
    if (var1 == NULL || (var0 = arg0->unknown_0_.unknown_0_.unknown_0_0_) == 0 || arg1 == NULL) {
        return 0;
    }
    for (var2 = 0; var2 < var0; var2++, var1++) {
        arg1(arg0, var1);
    }
    return 1;
}
