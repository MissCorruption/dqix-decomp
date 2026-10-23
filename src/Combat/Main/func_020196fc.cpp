#include <globaldefs.h>

#include "World/Zone3D.h"

// USA: func_020196fc
extern "C" ARM Struct_02013454* func_020196fc(Zone3D* arg0, int arg1) {
    Struct_02013454* var0 = arg0->firstBMDJStruct_41c_;
    int var1;
    for (var1 = 0; var1 < arg1; var1++) {
        if (var0 == 0) {
            return 0;
        }
        var0 = var0->unknown_54_;
    }
    return var0;
}
