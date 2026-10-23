#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "std_library_functions.h"

// USA: func_0201e574
ARM void Struct_020134e0::func_0201e574(const Struct_0201cb60_3& arg0) {
    Struct_0201cb60_3* var0;
    if (unknown_1c_ >= unknown_20_) return;
    var0 = &unknown_18_[unknown_1c_];
    var0->unknown_0_ = arg0.unknown_0_;
    COPY_ARRAY(var0->unknown_4_, arg0.unknown_4_);
    var0->unknown_1c_ = arg0.unknown_1c_;
    COPY_ARRAY(var0->unknown_20_, arg0.unknown_20_);
    var0->unknown_50_ = arg0.unknown_50_;
    var0->unknown_52_ = arg0.unknown_52_;
    var0->unknown_54_ = arg0.unknown_54_;
    COPY_ARRAY(var0->unknown_58_, arg0.unknown_58_);
    COPY_ARRAY(var0->unknown_64_, arg0.unknown_64_);
    var0->unknown_6c_ = arg0.unknown_6c_;
    unknown_1c_++;
}
