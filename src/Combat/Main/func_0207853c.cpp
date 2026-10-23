#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_02057924(void);
extern "C" void __clear(void* arg0, int arg1);

struct Struct_02037d88_9;

struct Struct_02078398_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 1;
    unsigned char unknown_11_4_ : 1;
    unsigned char unknown_11_5_ : 1;
    unsigned char unknown_11_6_ : 1;
    unsigned char unknown_11_7_ : 1;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_; int unknown_24_; int unknown_28_; int unknown_2c_; int unknown_30_;
    int unknown_34_; int unknown_38_; int unknown_3c_; int unknown_40_;
    int unknown_44_; int unknown_48_; int unknown_4c_;
};
extern "C" void func_02078484(struct Struct_02078398_2* arg0);

struct Vector3i;

extern "C" void func_02057fb4(void* arg0, int arg1, void* arg2);

extern "C" int func_0202b7d8(int* arg0);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_02039df4;

struct Struct_0207853c { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" void func_ov017_021c95ec(int arg0, int arg1, int arg2, int arg3, int arg4, struct Struct_0207853c arg5, int arg6, int arg7, int arg8);

struct Struct_0207853c_2 {
    char unknown_0_[0x2];
    short unknown_2_;
    short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x3c];
    int unknown_44_; int unknown_48_; int unknown_4c_;
    char unknown_50_[0x62];
    short unknown_b2_;
    char unknown_b4_[0xc4];
    short unknown_178_;
};

// USA: func_0207853c
extern "C" ARM int func_0207853c(struct Struct_0207853c_2* arg0) {
    void* var0 = func_0202ae18();
    arg0->unknown_b2_ = 0;
    ((Object3D*)((struct Struct_02037d88_9*)arg0))->TransitionInheritedAlpha(0, 0x7d);

    if (arg0->unknown_178_ > 0) {
        void* var1 = func_02057924();
        struct Struct_02078398_2 var2;
        func_02078484(&var2);
        *(Vector3i*)&var2.unknown_2c_ = *(Vector3i const*)&arg0->unknown_44_;
        const Vector3fix& var3 = ((Object3D*)arg0)->GetScale();
        *(Vector3i*)&var2.unknown_44_ = *(Vector3i const*)((int*)&var3);
        func_02057fb4(var1, arg0->unknown_178_, &var2);
    }

    if (func_0202b7d8((int*)var0) && func_0202c1a4((struct Struct_0202c1a4*)var0) == 0) {
        int var4 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
        int var5 = arg0->unknown_2_;
        int var6 = (arg0->unknown_4_ - 0x70) % 0xc;
        if (var6 >= 0 && var6 < 0xc) {
            struct Struct_0207853c var7;
            __clear(&var7, 0xc);
            func_ov017_021c95ec(var4, var6, var5, 0xb, -1, var7, 0, 0, 0);
        }
    }

    return 1;
}
