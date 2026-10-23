#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" void* func_ov001_02158f30(void* arg0, Struct_ov001_02158efc arg1);

struct Struct_ov001_02165880_35 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_35 data_ov001_02165880;

// USA: func_ov001_0215ded8
extern "C" ARM int func_ov001_0215ded8(void* arg0, int arg1) {
    void* var0 = arg0;
    arg0 = (char*)arg0 + 0x8;
    int var1 = func_ov017_021d60f4(var0);
    char* var2 = (char*)func_ov001_0215ab20(var1);
    if (!var2) {
        return 0;
    }
    Struct_ov001_02158efc var3;
    memcpy(&var3, var2 + 0x74, 0xc);
    if (arg1 >= 2) {
        void* var4 = arg0;
        arg0 = (char*)arg0 + 0x8;
        var3.unknown_0_ += (int)(4096.0f * func_ov017_021d6110(var4));
    }
    if (arg1 >= 3) {
        void* var5 = arg0;
        arg0 = (char*)arg0 + 0x8;
        var3.unknown_4_ += (int)(4096.0f * func_ov017_021d6110(var5));
    }
    if (arg1 >= 4) {
        var3.unknown_8_ += (int)(4096.0f * func_ov017_021d6110(arg0));
    }
    void* var6 = data_ov001_02165880.unknown_24_;
    func_ov001_02158f30(var6, var3);
    return 1;
}
