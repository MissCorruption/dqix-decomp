#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e4b0
ARM void Struct_020134e0::func_0201e4b0(const Struct_0201c96c& arg0) {
    int var0 = unknown_10_;
    Struct_0201c96c* var1;
    if (var0 >= unknown_14_) {
        return;
    }
    var1 = &unknown_c_[var0];
    COPY_ARRAY(var1->unknown_0_, arg0.unknown_0_);
    COPY_ARRAY(var1->unknown_18_, arg0.unknown_18_);
    var1->unknown_20_ = arg0.unknown_20_;
    unknown_10_++;
}
