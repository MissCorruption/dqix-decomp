#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e6d4
extern "C" ARM Struct_020134e0::Struct_02018300* func_0201e6d4(Struct_020134e0* arg0, int arg1) {
    Struct_020134e0::Struct_02018300* var0;
    if (arg1 < 0) {
        return 0;
    }
    var0 = arg0->unknown_3c_[9];
    while (var0 != 0) {
        if (var0->unknown_4_ == 9 && var0->unknown_2c_.unknown5_0_.unknown_0_ == arg1) {
            return var0;
        }
        var0 = var0->unknown_70_;
    }
    return 0;
}
