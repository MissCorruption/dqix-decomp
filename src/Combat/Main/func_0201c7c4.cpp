#include "World/ZoneWarpScript.h"
#include <globaldefs.h>

// USA: func_0201c7c4
extern "C" ARM int func_0201c7c4(Script::Parameter *arg0, int arg1) {
    const char* var0;
    const char* var1;
    int var2;
    Vector3fix var3;
    Script::Parameter *var4;
    const char* var5;

    var2 = arg0->ToInt();
    var4 = arg0[1].ToVec3fix(&var3);
    arg0 = var4 + 1;
    var5 = var4->ToString();
    var0 = NULL;
    var1 = NULL;
    if (arg1 >= 6) {
        var0 = arg0->ToString();
        arg0++;
    }
    if (arg1 >= 7) {
        var1 = arg0->ToString();
    }
    if (var5 == NULL) return 0;

    {
        Struct_020134e0::Struct_020146fc var6;
        var6.unknown_0_ = var2;
        var6.unknown_4_.unknown1_0_ = var3;
        strcpy(var6.unknown_10_, var5);
        if (var0 == NULL) var6.unknown_20_[0] = 0; else strcpy(var6.unknown_20_, var0);
        if (var1 == NULL) var6.unknown_30_[0] = 0; else strcpy(var6.unknown_30_, var1);
        data_020fdc20.unknown_8_->func_0201e304(var6);
    }
    return 1;
}
