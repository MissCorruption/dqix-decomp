#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ab20(void*);

struct Struct_ov001_02159250 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void func_ov001_02159250(void* arg0, int arg1, Struct_ov001_02159250 arg2);

struct Struct_ov001_02165880_36 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_36 data_ov001_02165880;

// USA: func_ov001_0215dfc4
extern "C" ARM int func_ov001_0215dfc4(void* arg0, int arg1) {
    void* var0 = arg0;
    arg0 = (char*)arg0 + 0x8;
    int var1 = func_ov001_0215ab20(func_ov017_021d60f4(var0));
    if (var1 == 0) {
        return 0;
    }
    Struct_ov001_02159250 var2;
    memset(&var2, 0, 0xc);
    if (arg1 >= 2) {
        void* var3 = arg0;
        arg0 = (char*)arg0 + 0x8;
        var2.unknown_0_ += (int)(4096.0f * func_ov017_021d6110(var3));
    }
    if (arg1 >= 3) {
        void* var4 = arg0;
        arg0 = (char*)arg0 + 0x8;
        var2.unknown_4_ += (int)(4096.0f * func_ov017_021d6110(var4));
    }
    if (arg1 >= 4) {
        var2.unknown_8_ += (int)(4096.0f * func_ov017_021d6110(arg0));
    }
    func_ov001_02159250(data_ov001_02165880.unknown_24_, var1, var2);
    return 1;
}
