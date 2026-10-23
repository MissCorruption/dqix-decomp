#include <globaldefs.h>
#include "std_library_functions.h"
#include "World/ZoneWarpScript.h"

// USA: func_0201c8d0
extern "C" ARM int func_0201c8d0(Script::Parameter* arg0, int arg1) {
    TileFeaturePlacementData var0;
    var0.unknown_0_ = arg0->ToInt();
    Script::Parameter* var1 = arg0 + 1;
    arg0 += 2;
    strcpy(var0.tilename, var1->ToString());
    int var2;
    for (var2 = 0; var2 < 9; var2++) {
        var0.directionBitmasks[var2] = arg0->ToInt();
        arg0++;
    }
    data_020fdc20.unknown_8_->func_0201e3c4(var0);
    return 1;
}
