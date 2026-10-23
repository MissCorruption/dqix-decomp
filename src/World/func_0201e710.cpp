#include "World/ZoneFeatures.h"
#include <globaldefs.h>

// USA: func_0201e710
ARM Struct_020134e0::Struct_02018300 *Struct_020134e0::func_0201e710(const Struct_02018300 &arg0) {
    if (unknown_28_ < unknown_2c_) {
        Struct_02018300 &var0            = unknown_24_[unknown_28_];
        unknown_24_[unknown_28_].unknown_0_ = arg0.unknown_0_;
        var0.unknown_4_                 = arg0.unknown_4_;
        var0.unknown_8_                     = arg0.unknown_8_;
        var0.unknown_14_                    = arg0.unknown_14_;
        var0.unknown_20_                    = arg0.unknown_20_;
        var0.unknown_22_                    = arg0.unknown_22_;
        var0.unknown_24_                    = arg0.unknown_24_;
        var0.unknown_28_                    = arg0.unknown_28_;
        var0.unknown_2c_                    = arg0.unknown_2c_;
        var0.unknown_70_                     = arg0.unknown_70_;

        int var1 = unknown_24_[unknown_28_].unknown_4_;
        if (unknown_3c_[var1] == NULL)
            unknown_3c_[var1] = &unknown_24_[unknown_28_];
        else {
            unknown_24_[unknown_28_].unknown_70_ = unknown_3c_[var1];
            unknown_3c_[var1]     = &unknown_24_[unknown_28_];
        }

        unknown_28_++;
        return &var0;
    }
    return NULL;
}
