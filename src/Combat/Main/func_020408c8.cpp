#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0203d028_18;

struct Struct_020408c8 {
    char unknown_0_[0x1c];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};
struct Struct_0203d028_19 {
    char unknown_0_[0x14];
    struct Struct_020408c8* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

// USA: func_020408c8
extern "C" ARM void func_020408c8(struct Struct_0203d028_19* arg0, short arg1, short arg2, short arg3) {
    struct Struct_020408c8* var0 = arg0->unknown_14_;
    if (var0 != NULL) {
        var0->unknown_1c_ = arg1;
        var0->unknown_20_ = arg2;
        var0->unknown_24_ = arg3;
        return;
    }
    if (arg0->unknown_18_ != NULL) {
        ((Object3D*)((struct Struct_0203d028_18*)arg0->unknown_18_))->SetScale(arg1, arg2, arg3);
        return;
    }
    if (arg0->unknown_1c_ != NULL) {
        ((Object3D*)((struct Struct_0203d028_18*)arg0->unknown_1c_))->SetScale(arg1, arg2, arg3);
    }
}
