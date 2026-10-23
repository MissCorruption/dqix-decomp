#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(void*);
extern "C" int func_02012fe4(void);
extern "C" int func_02018fbc(int arg0, Struct_ov001_02158efc* arg1);
extern "C" void* func_ov001_0215a330(void* arg0, Struct_ov001_02158efc arg1);

// USA: func_ov001_0215c900
extern "C" ARM int func_ov001_0215c900(void* arg0) {
    void* var0 = func_ov017_021d60f4(arg0);
    Struct_ov001_02158efc var1;
    var1.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    int var2 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var1.unknown_4_ = 0xa000;
    var1.unknown_8_ = var2;
    var1.unknown_4_ = func_02018fbc(func_02012fe4(), &var1);
    void* var3 = func_ov001_0215ab20(var0);
    if (var3 != NULL) {
        func_ov001_0215a330(var3, var1);
        return 1;
    }
    return 0;
}
