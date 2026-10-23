#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_0203c818_3;
extern "C" void func_0203f20c(Struct_0203c818_3*);
extern "C" void func_0203ca24(void* arg0, void* arg1);
struct Struct_0203c818;
extern "C" void func_0203c960(Struct_0203c818*);
int fix32ReduceAngle0To2Pi(int angle);

struct Struct_0203c818_2 {
    char unknown_0_[4];
    Vector3fix unknown_4_;
    char unknown_10_[0x5c - 0x10];
    int unknown_5c_;
    int unknown_60_;
    int unknown_64_;
    int unknown_68_;
    Vector3fix unknown_6c_;
    char unknown_78_[0x88 - 0x78];
    int unknown_88_;
};

// USA: func_0203c818
extern "C" ARM void func_0203c818(Struct_0203c818_2* arg0, void* arg1, int arg2, int arg3) {
    func_0203f20c((Struct_0203c818_3*)arg0);

    if ((arg0->unknown_5c_ & 0x10) || (arg0->unknown_5c_ & 0x20)) {
        func_0203ca24(arg0, arg1);
    } else {
        int var0;
        int var1;
        int var2;

        if (arg0->unknown_5c_ & 1) {
            func_0203c960((Struct_0203c818*)arg0);
        }

        var0 = 0;
        var1 = arg0->unknown_68_ * arg3;
        var2 = 0;

        if (arg0->unknown_60_ < arg0->unknown_64_) {
            var2 = arg0->unknown_64_ - arg0->unknown_60_;
            if (var2 > 0x3244) {
                var2 -= 0x3244 * 2;
            }
        } else if (arg0->unknown_64_ < arg0->unknown_60_) {
            var2 = -(arg0->unknown_60_ - arg0->unknown_64_);
            if (var2 < -0x3244) {
                var2 += 0x3244 * 2;
            }
        }

        if (var2 > 0) {
            if (var2 < var1) {
                arg0->unknown_60_ = arg0->unknown_64_;
            } else {
                arg0->unknown_60_ = arg0->unknown_60_ + var1;
            }
            arg0->unknown_5c_ |= 2;
            var0 = 1;
        } else if (var2 < 0) {
            if (-var2 < var1) {
                arg0->unknown_60_ = arg0->unknown_64_;
            } else {
                arg0->unknown_60_ = arg0->unknown_60_ - var1;
            }
            arg0->unknown_5c_ |= 2;
            var0 = 1;
        }

        if (var0 == 0) {
            arg0->unknown_5c_ &= ~2;
        }

        arg0->unknown_60_ = fix32ReduceAngle0To2Pi(arg0->unknown_60_);
        arg0->unknown_6c_ = arg0->unknown_4_;

        if (!(arg0->unknown_5c_ & 1)) {
            arg0->unknown_88_ = arg0->unknown_88_ + arg2;
        } else {
            arg0->unknown_88_ = 0;
        }
    }
}
