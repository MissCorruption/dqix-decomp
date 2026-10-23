#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void func_02076a8c(unsigned char* arg0);

struct Struct_02033f44 {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_0_ : 6;
    unsigned char unknown_e0_6_ : 1;
    unsigned char unknown_e0_7_ : 1;
    char unknown_e1_[3];
    int unknown_e4_;
};
extern "C" int* func_02033f44(struct Struct_02033f44* arg0);

extern "C" void* func_02057924(void);

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
    int unknown_20_; int unknown_24_; int unknown_28_; Vector3i unknown_2c_;
    int unknown_38_; int unknown_3c_; int unknown_40_;
    Vector3i unknown_44_;
};
extern "C" void func_02078484(struct Struct_02078398_2* arg0);

extern "C" void func_02057fb4(void* arg0, int arg1, void* arg2);

struct Struct_02078398 : Object3D {
    char unknown_ac_[0x6];
    unsigned short unknown_b2_;
    char unknown_b4_[0xa4];
    Vector3fix unknown_158_;
    char unknown_164_[0x14];
    short unknown_178_;
};

// USA: func_02078398
extern "C" ARM void func_02078398(struct Struct_02078398* arg0) {
    if (arg0->GetInheritedAlpha() == 0) {
        func_02076a8c((unsigned char*)arg0);
        arg0->MakeHidden();
        return;
    }

    if (arg0->GetInheritedAlpha() == 0x1f) {
        int* var0 = func_02033f44((struct Struct_02033f44*)arg0);
        Vector3fix var1 = arg0->position_;
        var1.y = 0;
        if (Vector3fix_Distance(&var1, &arg0->unknown_158_) < 0x2000 || var0 != 0) {
            arg0->unknown_b2_ = 0;
            arg0->TransitionInheritedAlpha(0, 0x7d);
            if (arg0->unknown_178_ > 0) {
                void* var2 = func_02057924();
                struct Struct_02078398_2 var3;
                func_02078484(&var3);
                var3.unknown_2c_ = arg0->position_;
                var3.unknown_44_ = arg0->GetScale();
                func_02057fb4(var2, (int)arg0->unknown_178_, &var3);
            }
        }
    }
}
