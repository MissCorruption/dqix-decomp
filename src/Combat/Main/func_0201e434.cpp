#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "World/BmdjScriptNode.h"
#include "std_library_functions.h"

// USA: func_0201e434
extern "C" ARM TileFeaturePlacementData* func_0201e434(Struct_020134e0* arg0, const char* arg1) {
    TileFeaturePlacementData* var0 = arg0->unknown_30_;
    for (int var1 = 0; var1 < arg0->unknown_34_; var1++, var0++) {
        if (strstr(var0->tilename, arg1) != NULL)
            return var0;
    }
    return NULL;
}
