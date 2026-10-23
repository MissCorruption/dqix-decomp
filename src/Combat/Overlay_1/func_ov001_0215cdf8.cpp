#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void*);
struct Struct_ov001_0215cdf8;

struct Struct_ov001_02165880_14 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_14 data_ov001_02165880;
struct Struct_ov001_0215cdf8_2 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_0215cdf8
extern "C" ARM int func_ov001_0215cdf8(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = NULL;
    Struct_ov001_0215cdf8_2* var2 = (Struct_ov001_0215cdf8_2*)data_ov001_02165880.unknown_4_;
    int var3 = var2[var0].unknown_0_;
    if (var3 == 0 || var3 == 4 || var3 == 5 || var3 == 1 || var3 == 6) {
        var1 = var2[var0].unknown_c_;
    }
    if (var1 == NULL) return 0;
    ((Object3D*)((struct Struct_ov001_0215cdf8*)var1))->Detach();
    return 1;
}
