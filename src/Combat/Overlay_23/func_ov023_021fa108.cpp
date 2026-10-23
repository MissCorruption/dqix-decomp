#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_ov023_021f9eb4;
extern "C" void func_ov023_021f9eb4(struct Struct_ov023_021f9eb4* arg0);

struct Struct_ov023_021fa108 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    Vector3i unknown_10_;
    Vector3i unknown_1c_;
};

class Struct_ov023_021fa108_2 {
public:
    virtual void inline_ov023_021fa108(); virtual void inline_ov023_021fa108_2(); virtual void inline_ov023_021fa108_3(); virtual void inline_ov023_021fa108_4();
    virtual void inline_ov023_021fa108_5(); virtual void inline_ov023_021fa108_6(); virtual void inline_ov023_021fa108_7();
    virtual void inline_ov023_021fa108_8(Vector3i* arg0);
};

extern "C" Struct_ov023_021fa108_2* func_ov023_021f6880(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);

// USA: func_ov023_021fa108
extern "C" ARM void func_ov023_021fa108(void* arg0, void* arg1, struct Struct_ov023_021fa108* arg2) {
    Vector3i var0;
    Vector3fix_Subtract(&arg2->unknown_1c_, &arg2->unknown_10_, &var0);
    Vector3fix_Normalize(&var0, &var0);

    int var1 = 0;
    if (arg2->unknown_3_ == 0) {
        int var2 = arg2->unknown_4_ + arg2->unknown_8_;
        arg2->unknown_4_ = var2;
        if (arg2->unknown_c_ < var2) {
            arg2->unknown_4_ = arg2->unknown_c_;
        }
        Vector3i var3;
        Vector3fixMultiplyScalar(&var0, arg2->unknown_4_, &var3);
        Vector3fix_Add(&arg2->unknown_10_, &var3, &arg2->unknown_10_);
        int var4 = Vector3fix_Distance(&arg2->unknown_1c_, &arg2->unknown_10_);
        float var5 = (float)arg2->unknown_4_ / 4096.0f;
        float var6 = var5 * var5;
        float var7 = (float)arg2->unknown_8_ / 4096.0f;
        int var8 = (int)((var6 / (2.0f * var7)) * 4096.0f);
        if (var4 < var8) {
            arg2->unknown_3_ = 1;
        }
    } else if (arg2->unknown_3_ == 1) {
        int var9 = Vector3fix_Distance(&arg2->unknown_1c_, &arg2->unknown_10_);
        int var10;
        if (arg2->unknown_8_ < arg2->unknown_4_ && (var10 = arg2->unknown_4_ - arg2->unknown_8_) < var9) {
            arg2->unknown_4_ = var10;
            Vector3i var11;
            Vector3fixMultiplyScalar(&var0, var10, &var11);
            Vector3fix_Add(&arg2->unknown_10_, &var11, &arg2->unknown_10_);
        } else {
            arg2->unknown_10_ = arg2->unknown_1c_;
            var1 = 1;
        }
    }

    void* var12 = func_ov011_021849c8(arg1);
    Struct_ov023_021fa108_2* var13 = func_ov023_021f6880(var12, arg2->unknown_0_);
    if (var13 != NULL) {
        var13->inline_ov023_021fa108_8(&arg2->unknown_10_);
    }
    if (var1) {
        func_ov023_021f9eb4((struct Struct_ov023_021f9eb4*)arg2);
    }
}
