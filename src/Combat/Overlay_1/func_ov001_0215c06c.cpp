#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" void* func_ov017_021d612c(void*);
extern "C" void* func_ov001_0215ab20(void*);
extern "C" void func_ov001_0215a364(void* arg0, Struct_ov001_02158efc arg1, int arg2, int arg3, const char* arg4);

// USA: func_ov001_0215c06c
extern "C" ARM int func_ov001_0215c06c(void* arg0, int arg1) {
    const char* var0;
    void* var1 = func_ov017_021d60f4(arg0);
    Struct_ov001_02158efc var2;
    var2.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var2.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var2.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    int var3 = (int)func_ov017_021d60f4((char*)arg0 + 0x20);
    var0 = 0;
    if (arg1 >= 6) {
        var0 = (const char*)func_ov017_021d612c((char*)arg0 + 0x28);
    }
    void* var4 = func_ov001_0215ab20(var1);
    if (var4 != NULL) {
        func_ov001_0215a364(var4, var2, var3, 0, var0);
        return 1;
    }
    return 0;
}
