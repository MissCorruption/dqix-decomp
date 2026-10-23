#if defined(jpn)
#define data_ov026_021de87c data_ov026_021dee50
#endif
#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov000_02161e30;

struct Struct_ov026_021de87c {
    int unknown_0_;
    int unknown_4_[3];
    Vector3i unknown_10_;
};

struct Struct_ov000_02160da0 {
    #if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    Struct_ov000_02161e30* unknown_29c_;
    #if defined(jpn)
    char unknown_21c_[0x77c4];
#else
    char unknown_2a0_[0x7550];
#endif
    int unknown_77f0_;
    int unknown_77f4_[3];
    Vector3i unknown_7800_;
};

extern "C" void func_ov026_021d8b98(int* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov000_0215fc8c(void* arg0, int arg1);

extern Struct_ov026_021de87c data_ov026_021de87c[];

// USA: func_ov026_021d8aac
extern "C" ARM void func_ov026_021d8aac(Struct_ov000_02160da0* arg0, int arg1, int arg2) {
    if (arg0->unknown_29c_ == 0) {
        return;
    }
    arg0->unknown_77f0_ = -1;
    for (Struct_ov026_021de87c* var0 = data_ov026_021de87c; var0->unknown_0_ != -1; var0++) {
        if (var0->unknown_0_ == 0) {
            if (arg2 == 2) {
                arg0->unknown_77f0_ = var0->unknown_0_;
                func_ov026_021d8b98(arg0->unknown_77f4_, var0->unknown_4_[0], var0->unknown_4_[1], var0->unknown_4_[2]);
                arg0->unknown_7800_ = var0->unknown_10_;
                return;
            }
        } else if (func_ov000_0215fc8c(arg0->unknown_29c_, (short)var0->unknown_0_)) {
            arg0->unknown_77f0_ = var0->unknown_0_;
            if (var0->unknown_0_ == 0x115) {
                var0 += arg1 % 3;
            }
            func_ov026_021d8b98(arg0->unknown_77f4_, var0->unknown_4_[0], var0->unknown_4_[1], var0->unknown_4_[2]);
            arg0->unknown_7800_ = var0->unknown_10_;
            return;
        }
    }
}
