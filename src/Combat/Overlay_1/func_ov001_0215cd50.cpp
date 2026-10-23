#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_021d612c(void*);

struct Struct_ov001_0215cd50;
struct Object3D;

struct Struct_ov001_02165880_13 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_13 data_ov001_02165880;
struct Struct_ov001_0215cd50_2 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_0215cd50
extern "C" ARM int func_ov001_0215cd50(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    int var2 = 0;
    if (arg1 >= 3) {
        var2 = func_ov017_021d612c((char*)arg0 + 0x10);
    }
    Struct_ov001_0215cd50_2* var3 = (Struct_ov001_0215cd50_2*)data_ov001_02165880.unknown_4_;
    void* var4 = NULL;
    void* var5 = var4;
    int var6 = var3[var0].unknown_0_;
    if (var6 == 0 || var6 == 4 || var6 == 5 || var6 == 1 || var6 == 6) {
        var4 = var3[var0].unknown_c_;
    }
    var6 = var3[var1].unknown_0_;
    if (var6 == 0 || var6 == 4 || var6 == 5 || var6 == 1 || var6 == 6) {
        var5 = var3[var1].unknown_c_;
    }
    if (var4 == NULL || var5 == NULL) return 0;
    ((Object3D*)((struct Struct_ov001_0215cd50*)var4))->Attach((Object3D*)var5, (char*)var2);
    return 1;
}
