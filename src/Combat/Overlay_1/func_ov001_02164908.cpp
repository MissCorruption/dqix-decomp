#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02037d88_8;
struct Struct_0203fc84;
extern "C" void func_0203fc84(struct Struct_0203fc84* arg0, int arg1);

struct Struct_ov001_02164908 {
    int unknown_0_;
    char unknown_4_[8];
    void* unknown_c_;
};

struct Struct_ov001_02164908_2 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
};

// USA: func_ov001_02164908
extern "C" ARM int func_ov001_02164908(struct Struct_ov001_02164908* arg0, int arg1, int arg2) {
    struct Struct_ov001_02164908* var0;
    void* var1;
    void* var2;
    if (arg1 < 0 || arg1 >= 0x20) return 0;
    var0 = &arg0[arg1];
    switch (var0->unknown_0_) {
    case 0:
    case 1:
    case 4:
    case 5:
        var1 = var0->unknown_c_;
        if (var1 == 0) return 0;
        ((Object3D*)((struct Struct_02037d88_8*)var1))->SetInheritedAlpha(arg2);
        return 1;
    case 6:
        var1 = var0->unknown_c_;
        if (var1 == 0) return 0;
        var2 = ((struct Struct_ov001_02164908_2*)var1)->unknown_18_;
        if (var2 == 0) return 0;
        ((Object3D*)((struct Struct_02037d88_8*)var2))->SetInheritedAlpha(arg2);
        return 1;
    case 2:
        var1 = var0->unknown_c_;
        if (var1 == 0) return 0;
        var2 = ((struct Struct_ov001_02164908_2*)var1)->unknown_14_;
        if (var2 == 0) return 0;
        func_0203fc84((struct Struct_0203fc84*)var2, arg2);
    default:
        return 0;
    }
}
