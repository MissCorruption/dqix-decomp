#include <globaldefs.h>
#include "World/ZoneChest.h"

// USA: func_02018c20
extern "C" ARM Struct_020134e0::Struct_02018300* func_02018c20(Zone3D* arg0, int arg1) {
    Struct_020134e0::Struct_02018300* var0 = func_0201e664(&arg0->substruct_6c_, 0);
    int var1 = arg0->substruct_6c_.unknown_28_;
    int var2;
    for (var2 = 0; var2 < var1; var2++) {
        if (var0->unknown_4_ == 2) {
            if (arg1 == 0) return var0;
            arg1--;
        }
        var0++;
    }
    return NULL;
}
