#include <globaldefs.h>
#include "Resource/MessageSystem.h"

// USA: func_02042a90
ARM int Struct_02021b84::func_02042a90(unsigned char* arg0, unsigned int arg1) {
    unsigned int var0;
    for (var0 = 0; var0 < arg1; var0++) {
        unsigned char var1 = *arg0;
        int var2;
        for (var2 = 0; var2 < 8; var2++) {
            unsigned char var3 = 1 << var2;
            if ((var1 & var3) == 0) {
                *arg0 |= var3;
                return var0 * 8 + var2;
            }
        }
        arg0++;
    }
    return -1;
}
