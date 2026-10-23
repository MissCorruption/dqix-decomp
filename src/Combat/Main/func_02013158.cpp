#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "Graphics/Vector.h"

struct Struct_02013158_2
{
    char unknown_0_[8];
    Vector3fix unknown_8_;
    char unknown_14_[2];
    int16_t unknown_16_;
    char unknown_18_[2];
    int16_t unknown_1a_;
    int16_t unknown_1c_;
    int16_t unknown_1e_;
};

struct Struct_02013158
{
    char unknown_0_[6];
    int16_t unknown_6_;
    Vector3fix unknown_8_;
    Vector3fix unknown_14_;
    Struct_02013158_2* unknown_20_;
    char unknown_24_[8];
    Struct_02013158* unknown_2c_;
    Struct_02013158* unknown_30_;
};

// USA: func_02013158
extern "C" ARM void func_02013158(Struct_02013158* arg0, const Vector3fix* arg1, int* arg2, const Vector3fix* arg3)
{
    Matrix3x3 var0;
    int var1;
    int var2;
    Struct_02013158* var3;
    var2 = fix32cos(*arg2);
    var1 = fix32sin(*arg2);
    Mat3x3_WriteRotationY(&var0, var1, var2);
    if (arg0->unknown_20_ != 0)
    {
        Vector3fix var4;
        Mat3x3_ApplyToVector(&arg0->unknown_20_->unknown_8_, &var0, &var4);
        Vector3fix_Add(&var4, arg1, &arg0->unknown_8_);
        arg0->unknown_6_ = (int16_t)fix32ReduceAngle0To2Pi(*arg2 + arg0->unknown_20_->unknown_16_);
        arg0->unknown_14_.x = FIX32_MULTIPLY(arg0->unknown_20_->unknown_1a_, arg3->x);
        arg0->unknown_14_.y = FIX32_MULTIPLY(arg0->unknown_20_->unknown_1c_, arg3->y);
        arg0->unknown_14_.z = FIX32_MULTIPLY(arg0->unknown_20_->unknown_1e_, arg3->z);
    }
    var3 = arg0->unknown_30_;
    if (var3 != 0)
    {
        while (var3 != 0)
        {
            Vector3fix var5;
            int var6;
            if (var3->unknown_20_ != 0)
            {
                Mat3x3_ApplyToVector(&var3->unknown_20_->unknown_8_, &var0, &var5);
                Vector3fix_Add(&var5, arg1, &var3->unknown_8_);
                var3->unknown_6_ = (int16_t)fix32ReduceAngle0To2Pi(*arg2 + var3->unknown_20_->unknown_16_);
                var3->unknown_14_.x = FIX32_MULTIPLY(var3->unknown_20_->unknown_1a_, arg3->x);
                var3->unknown_14_.y = FIX32_MULTIPLY(var3->unknown_20_->unknown_1c_, arg3->y);
                var3->unknown_14_.z = FIX32_MULTIPLY(var3->unknown_20_->unknown_1e_, arg3->z);
            }
            if (var3->unknown_2c_ != 0)
            {
                var6 = var3->unknown_6_;
                func_02013158(var3->unknown_2c_, &var3->unknown_8_, &var6, &var3->unknown_14_);
            }
            var3 = var3->unknown_30_;
        }
    }
    if (arg0->unknown_2c_ != 0)
    {
        int var7;
        var7 = arg0->unknown_6_;
        func_02013158(arg0->unknown_2c_, &arg0->unknown_8_, &var7, &arg0->unknown_14_);
    }
}
