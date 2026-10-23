#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" void func_ov001_0215907c(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2);

struct Struct_ov001_02165880_29 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_29 data_ov001_02165880;

// USA: func_ov001_0215d7a8
extern "C" ARM int func_ov001_0215d7a8(void* arg0) {
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
    void* var2 = data_ov001_02165880.unknown_24_;
    func_ov001_0215907c(var2, var0, var1);
    return 1;
}
