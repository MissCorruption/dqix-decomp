#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e88c
ARM void Struct_020134e0::func_0201e88c(const Struct_0201dfcc& arg0) {
    unsigned short var0;
    Struct_0201dfcc* var1;
    if (unknown_84_ == NULL) {
        return;
    }
    var0 = unknown_80_;
    unknown_80_ = var0 + 1;
    var1 = &unknown_84_[var0];
    var1->unknown_0_ = arg0.unknown_0_;
    var1->unknown_c_ = arg0.unknown_c_;
    var1->unknown_18_ = arg0.unknown_18_;
    var1->unknown_1c_ = arg0.unknown_1c_;
    var1->unknown_20_ = arg0.unknown_20_;
    var1->unknown_24_ = arg0.unknown_24_;
    var1->unknown_28_ = arg0.unknown_28_;
}
