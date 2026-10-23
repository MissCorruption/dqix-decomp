#if defined(jpn)
enum { Enum_ov017_021984f4_108 = 0x8c };
#else
enum { Enum_ov017_021984f4_108 = 0x6c };
#endif

#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_02094b9c(void* arg0, void* arg1);
int fix32ReduceAngle0To2Pi(int angle);
int fix32SignedAngleDistance(int a, int b);
int fix32abs(int x);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" void func_ov017_0218da48(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);
extern "C" void func_ov017_0219b33c(void* arg0, void* arg1);

struct Struct_ov017_021984f4 {
    unsigned char unknown_0_[0x20];
    short unknown_20_;
    unsigned char unknown_22_[0x70 - 0x22];
    struct Struct_ov017_021984f4* unknown_70_;
};

struct Struct_ov017_021984f4_2 {
    int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov017_021984f4_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    void* unknown_8_;
    int unknown_c_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};

// USA: func_ov017_021984f4
extern "C" ARM void func_ov017_021984f4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 == NULL) {
        return;
    }
    if (func_020535c8((signed char*)var1) != 0) {
        return;
    }

    void* var2 = func_02012fe4();
    func_020100bc(var0);
    struct Struct_ov017_021984f4* var3 = (struct Struct_ov017_021984f4*)func_0201e838((unsigned char*)var2 + Enum_ov017_021984f4_108, 8);

    struct Struct_ov017_021984f4_2 var4 = *(struct Struct_ov017_021984f4_2*)((char*)var1 + 0x44);
    int var5 = 0x270f000;
    unsigned char var6 = 1;
    unsigned char var7 = 0;
    while (var3 != NULL) {
        if (func_02094b9c(var3, &var4) != 0) {
            int var8 = (short)fix32ReduceAngle0To2Pi(var3->unknown_20_ + 0x3244);
            func_ov017_0218da48(arg0, var8, 0xccc, -819, var7);
            int var9 = fix32abs(fix32SignedAngleDistance(var1->obj3D_.rotation_.y, var3->unknown_20_));
            if ((float)var9 < 8364.19921875f) {
                if (var9 < var5) {
                    var5 = var9;
                    struct Struct_ov017_021984f4_3 var10;
                    func_ov017_0219a674((unsigned char*)&var10);
                    var10.unknown_0_ = 6;
                    var10.unknown_4_ = var6;
                    var10.unknown_8_ = var3;
                    func_ov017_0219b33c(arg0, &var10);
                }
            }
        }
        var3 = var3->unknown_70_;
    }
}
