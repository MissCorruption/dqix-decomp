#include <globaldefs.h>
#include "World/ZoneChest.h"

// USA: func_02018b34
extern "C" ARM Struct_02016874_2* func_02018b34(Zone3D* arg0, Struct_020134e0::Struct_02018300* arg1) {
    Struct_02013454* var0;
    Struct_02016874_2* var1;
    int var2;
    int var3;
    if (arg1->unknown_4_ != 2) return NULL;
    if (arg0->unknown_424_ != 0) return NULL;
    var0 = arg0->firstBMDJStruct_41c_;
    while (var0 != NULL) {
        if (var0->unknown_0_ == arg1->unknown_2c_.unknown1_0_.unknown_0_) break;
        var0 = var0->unknown_54_;
    }
    var1 = NULL;
    if (var0 == NULL) return var1;
    var2 = var0->unknown_4_.unknown_10_;
    for (var3 = 0; var3 < var2; var3++) {
        if (arg1->unknown_2c_.unknown1_0_.unknown_1_ == var0->unknown_44_[var3].unknown_0_) {
            var1 = &var0->unknown_44_[var3];
            break;
        }
    }
    return var1;
}
