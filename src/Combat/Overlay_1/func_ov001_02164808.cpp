#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov001_02164808_2 { int unknown_0_; char unknown_4_[8]; unsigned char* unknown_c_; };
struct Struct_ov001_02164808 { int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov001_02164808
extern "C" ARM int func_ov001_02164808(struct Struct_ov001_02164808_2* arg0, int arg1, struct Struct_ov001_02164808* arg2) {
    struct Struct_ov001_02164808_2* var0;
    unsigned char* var1;
    unsigned char* var2;

    if (arg1 < 0 || arg1 >= 0x20) {
        return 0;
    }
    var0 = &arg0[arg1];
    switch (var0->unknown_0_) {
    case 0:
    case 1:
    case 4:
    case 5: {
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        Vector3fix var3 = ((Object3D*)var1)->GetScale();
        arg2->unknown_0_ = var3.x;
        arg2->unknown_4_ = var3.y;
        arg2->unknown_8_ = var3.z;
        return 1;
    }
    case 6: {
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        var2 = *(unsigned char**)(var1 + 0x18);
        if (var2 == NULL) return 0;
        Vector3fix var4 = ((Object3D*)var2)->GetScale();
        arg2->unknown_0_ = var4.x;
        arg2->unknown_4_ = var4.y;
        arg2->unknown_8_ = var4.z;
        return 1;
    }
    }
    return 0;
}
