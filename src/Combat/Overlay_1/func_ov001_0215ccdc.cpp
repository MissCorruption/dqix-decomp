#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, unsigned int);
struct Struct_02059cfc_4;

struct Struct_ov001_02165880_12 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_12 data_ov001_02165880;
struct Struct_ov001_0215ccdc { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_0215ccdc
extern "C" ARM int func_ov001_0215ccdc(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    Struct_ov001_0215ccdc* var1 = (Struct_ov001_0215ccdc*)data_ov001_02165880.unknown_4_;
    int var2 = var1[var0].unknown_0_;
    if (var2 == 0 || var2 == 4 || var2 == 5 || var2 == 1 || var2 == 6) {
        void* var3 = var1[var0].unknown_c_;
        if (var3 != NULL) {
            int var4 = ((Object3D*)((struct Struct_02059cfc_4*)var3))->HasAnimationStopped();
            unsigned int var5 = (var4 == 0) ? 1 : 0;
            func_ov017_021d6134((char*)arg0 + 0x8, var5);
        }
    } else {
        func_ov017_021d6134((char*)arg0 + 0x8, 1);
    }
    return 1;
}
