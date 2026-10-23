#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" float func_ov017_021d6110(void*);

struct Struct_0203cec4;
struct Struct_0203fc5c;
extern "C" void func_0203cec4(struct Struct_0203cec4* arg0, int arg1);
extern "C" ARM int func_0203fc5c(struct Struct_0203fc5c* arg0, float arg1);

struct Struct_ov001_02165880_39 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_39 data_ov001_02165880;
extern int data_ov001_021657db;

struct Struct_ov001_02160070 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };
struct Struct_ov001_02160070_2 { char unknown_0_[0x14]; void* unknown_14_; };

// USA: func_ov001_02160070
extern "C" ARM int func_ov001_02160070(char* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    float var1 = func_ov017_021d6110(arg0 + 8);
    Struct_ov001_02160070* var2 = (Struct_ov001_02160070*)data_ov001_02165880.unknown_4_;
    int var3 = var2[var0].unknown_0_;
    if (var3 == 2 || var3 == 6) {
        Struct_ov001_02160070_2* var4 = 0;
        if (var2) var4 = (Struct_ov001_02160070_2*)var2[var0].unknown_c_;
        if (var4 == NULL) return 0;
        if (var4->unknown_14_ != NULL) func_0203cec4((struct Struct_0203cec4*)var4->unknown_14_, 1);
        if (var4->unknown_14_ != NULL) func_0203fc5c((struct Struct_0203fc5c*)var4->unknown_14_, var1);
    } else if (var3 == 1 || var3 == 0 || var3 == 4 || var3 == 5) {
        void* var5 = 0;
        if (var2) var5 = var2[var0].unknown_c_;
        if (var5 == NULL) return 0;
        ((Object3D*)var5)->MaybeSetRegularAnimation((char const*)&data_ov001_021657db, 0);
    }
    return 1;
}
