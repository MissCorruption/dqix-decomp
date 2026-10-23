#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(void*);
extern "C" int func_ov001_0215a608(void* arg0, Struct_ov001_02158efc arg1, int arg2);

// USA: func_ov001_0215c330
extern "C" ARM int func_ov001_0215c330(void* arg0, int arg1) {
    int var0 = 0;
    void* var1 = func_ov017_021d60f4(arg0);
    Struct_ov001_02158efc var2;
    var2.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var2.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var2.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    if (arg1 >= 5) {
        var0 = (int)func_ov017_021d60f4((char*)arg0 + 0x20);
    }
    void* var3 = func_ov001_0215ab20(var1);
    if (var3 != NULL) {
        func_ov001_0215a608(var3, var2, var0);
        return 1;
    }
    return 0;
}
