#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov001_02158f64(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2, int arg3, int arg4, int arg5);
extern "C" void func_ov001_02159168(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov001_02165880_34 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_34 data_ov001_02165880;

// USA: func_ov001_0215dd58
extern "C" ARM int func_ov001_0215dd58(void* arg0, int arg1) {
    Struct_ov001_02158efc var0;
    memset(&var0, 0, 0xc);
    Struct_ov001_02158efc var1;
    memset(&var1, 0, 0xc);
    Struct_ov001_02158efc var2;
    memset(&var2, 0, 0xc);
    var1.unknown_0_ = (int)(4096.0f * func_ov017_021d6110(arg0));
    var1.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var1.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    int var3 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    int var4 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x20));
    int var5 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x28));
    int var6;
    int var7 = func_ov017_021d60f4((char*)arg0 + 0x30);
    var6 = -1;
    if (arg1 >= 8) {
        var6 = func_ov017_021d60f4((char*)arg0 + 0x38);
    }
    func_ov001_02158f64(data_ov001_02165880.unknown_24_, var0, var1, var7, 1, 0);
    func_ov001_02159168(data_ov001_02165880.unknown_24_, var3, var4, var5, var7, var6, 0);
    return 1;
}
