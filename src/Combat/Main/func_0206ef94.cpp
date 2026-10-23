#include <globaldefs.h>

#include "Resource/MonsterDefinition.h"

// USA: func_0206ef94
extern "C" ARM char* func_0206ef94(Struct_0206ef48* arg0, char* arg1, char* arg2) {
    int var0 = 1;
    int var1 = arg1 - (char*)0;
    if (var1 != -1) {
        if (arg0->unknown_8_ != 0) {
            var0 = 0;
        }
    }
    if (!var0) {
        return arg0->unknown_8_ + var1;
    }
    return arg2;
}
