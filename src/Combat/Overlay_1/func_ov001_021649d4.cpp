#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov001_021649d4 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };
struct Struct_020484f8_3;

// USA: func_ov001_021649d4
extern "C" ARM int func_ov001_021649d4(Struct_ov001_021649d4* arg0, int arg1, int arg2) {
    if (arg1 < 0 || arg1 >= 0x20) {
        return 0;
    }
    int var0 = arg0[arg1].unknown_0_;
    Struct_ov001_021649d4* var1 = &arg0[arg1];
    if (var0 != 1) {
        goto fail;
    }
    {
        void* var2 = var1->unknown_c_;
        if (var2 == NULL) {
            return 0;
        }
        ((Object3D*)((Struct_020484f8_3*)var2))->SetRadius(arg2);
        return 1;
    }
fail:
    return 0;
}
