#include <globaldefs.h>
#include "World/BmdjScriptNode.h"
#include "std_library_functions.h"

// USA: func_02019f24
extern "C" ARM TileFeaturePlacementData* func_02019f24(TileFeaturePlacementData* arg0, const TileFeaturePlacementData* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    COPY_ARRAY(arg0->directionBitmasks, arg1->directionBitmasks);
    COPY_ARRAY(arg0->tilename, arg1->tilename);
    return arg0;
}
