#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "std_library_functions.h"

// USA: func_0201e304
ARM void Struct_020134e0::func_0201e304(const Struct_020146fc& arg0) {
    if (unknown_4_ >= unknown_8_) return;
    Struct_020146fc& var0 = unknown_0_[unknown_4_];
    var0.unknown_0_ = arg0.unknown_0_;
    var0.unknown_4_ = arg0.unknown_4_;
    COPY_ARRAY(var0.unknown_10_, arg0.unknown_10_);
    COPY_ARRAY(var0.unknown_20_, arg0.unknown_20_);
    COPY_ARRAY(var0.unknown_30_, arg0.unknown_30_);
    COPY_ARRAY(var0.unknown_40_, arg0.unknown_40_);
    unknown_4_++;
}
