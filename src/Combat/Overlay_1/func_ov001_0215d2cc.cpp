#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" void func_ov001_02158f64(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2, int arg3, int arg4, int arg5);

struct Struct_ov001_02165880_22 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_22 data_ov001_02165880;

// USA: func_ov001_0215d2cc
extern "C" ARM int func_ov001_0215d2cc(void* arg0, int arg1) {
    Struct_ov001_02158efc var0;
    memset(&var0, 0, 0xc);
    Struct_ov001_02158efc var1;
    memset(&var1, 0, 0xc);
    var0.unknown_0_ = (int)(4096.0f * func_ov017_021d6110(arg0));
    var0.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var0.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var1.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    var1.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x20));
    var1.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x28));
    int var2 = (int)func_ov017_021d60f4((char*)arg0 + 0x30);
    int var3 = 0;
    if (arg1 >= 8) {
        var3 = (func_ov017_021d60f4((char*)arg0 + 0x38) != NULL) ? 1 : 0;
    }
    void* var4 = data_ov001_02165880.unknown_24_;
    func_ov001_02158f64(var4, var0, var1, var2, 1, var3);
    return 1;
}
