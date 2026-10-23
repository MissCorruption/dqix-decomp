#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(void*);
extern "C" void* func_ov001_0215a3f8(void* arg0, Struct_ov001_02158efc arg1);

// USA: func_ov001_0215c468
extern "C" ARM int func_ov001_0215c468(void* arg0) {
    void* var0 = func_ov001_0215ab20(func_ov017_021d60f4(arg0));
    if (var0 == NULL) {
        return 0;
    }
    Struct_ov001_02158efc var1;
    var1.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var1.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var1.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    func_ov001_0215a3f8(var0, var1);
    return 1;
}
