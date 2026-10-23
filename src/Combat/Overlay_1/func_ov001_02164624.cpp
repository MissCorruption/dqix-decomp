#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02059cfc_4;

struct Struct_ov001_02164624 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_02164624
extern "C" ARM int func_ov001_02164624(Struct_ov001_02164624* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 0x20) return 0;
    Struct_ov001_02164624* var0 = arg0 + arg1;
    switch (var0->unknown_0_) {
        case 0: case 1: case 4: case 5: {
            void* var1 = var0->unknown_c_;
            if (var1 == NULL) return 0;
            return ((Object3D*)((struct Struct_02059cfc_4*)var1))->HasAnimationStopped();
        }
        case 6: {
            void* var2 = var0->unknown_c_;
            if (var2 == NULL) return 0;
            void* var3 = *(void**)((char*)var2 + 0x18);
            if (var3 == NULL) return 0;
            return ((Object3D*)((struct Struct_02059cfc_4*)var3))->HasAnimationStopped();
        }
        default:
            return 0;
    }
}
