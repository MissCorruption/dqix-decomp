#include <globaldefs.h>
#include "World/ZoneChest.h"

// USA: func_02018bc4
extern "C" ARM int func_02018bc4(Zone3D* arg0, Struct_020134e0::Struct_02018300* arg1) {
    Struct_020134e0::Struct_02018300* var0 = func_0201e664(&arg0->substruct_6c_, 0);
    int var1 = arg0->substruct_6c_.unknown_28_;
    int var2 = 0;
    int var3;
    for (var3 = 0; var3 < var1; var3++) {
        if (var0->unknown_4_ == 2) {
            if (var0 == arg1) return var2;
            var2++;
        }
        var0++;
    }
    return -1;
}
