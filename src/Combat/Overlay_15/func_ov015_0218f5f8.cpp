#include <globaldefs.h>
#include "World/Object3D.h"
#include "Graphics/Vector.h"

struct Struct_ov015_0218c03c_2
{
    char unknown_0_[0x1c];
    unsigned char unknown_1c_;
    char unknown_1d_[3];
    int* unknown_20_;
    Object3D* unknown_24_;
};

static inline const Vector3fix& inline_ov015_0218f5f8(const Object3D* arg0)
{
    return arg0->rotation_;
}

static inline void inline_ov015_0218f5f8_2(Object3D* arg0, const Vector3fix& arg1)
{
    arg0->rotation_ = arg1;
}

// USA: func_ov015_0218f5f8
extern "C" ARM void func_ov015_0218f5f8(Struct_ov015_0218c03c_2* arg0, int arg1)
{
    Vector3fix var0 = {0};
    switch (arg0->unknown_1c_)
    {
    case 0:
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[1]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[1], var0);
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[0]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[0], var0);
        break;
    case 1:
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[6]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[6], var0);
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[1]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[1], var0);
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[5]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[5], var0);
        var0 = inline_ov015_0218f5f8(&arg0->unknown_24_[0]);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(&arg0->unknown_24_[0], var0);
        break;
    default:
        var0 = inline_ov015_0218f5f8(arg0->unknown_24_);
        var0.y = fix32ReduceAngle0To2Pi(var0.y + arg1);
        inline_ov015_0218f5f8_2(arg0->unknown_24_, var0);
        break;
    }
}
