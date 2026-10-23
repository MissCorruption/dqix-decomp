#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "std_library_functions.h"

// USA: func_0201e3c4
ARM void Struct_020134e0::func_0201e3c4(const TileFeaturePlacementData& arg0) {
    int var0 = unknown_34_;
    TileFeaturePlacementData* var1;
    if (var0 >= unknown_38_) {
        return;
    }
    var1 = &unknown_30_[var0];
    var1->unknown_0_ = arg0.unknown_0_;
    COPY_ARRAY(var1->directionBitmasks, arg0.directionBitmasks);
    COPY_ARRAY(var1->tilename, arg0.tilename);
    unknown_34_++;
}
