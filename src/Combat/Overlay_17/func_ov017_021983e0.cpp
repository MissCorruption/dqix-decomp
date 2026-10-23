#if defined(jpn)
enum { Enum_ov017_021983e0_14076 = 0x34ec, Enum_ov017_021983e0_108 = 0x8c };
#else
enum { Enum_ov017_021983e0_14076 = 0x36fc, Enum_ov017_021983e0_108 = 0x6c };
#endif

#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_02046b08(void** arg0);
extern "C" void* func_02012fe4(void);
extern "C" int func_020535c8(signed char* arg0);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02094b9c(void* arg0, void* arg1);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" void func_ov017_0218da48(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);
struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" short func_ov017_021a4700(struct Struct_ov009_0218aa28* arg0, int arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" void func_ov017_0219b33c(void* arg0, void* arg1);

struct Struct_ov017_021983e0_2 {
    int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov017_021983e0_3 {
    unsigned char unknown_0_[0x20];
    short unknown_20_;
    unsigned char unknown_22_[0x70 - 0x22];
    struct Struct_ov017_021983e0_3* unknown_70_;
};

struct Struct_ov017_021983e0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    void* unknown_8_;
    int unknown_c_;
    short unknown_10_;
    unsigned short unknown_12_;
};

// USA: func_ov017_021983e0
extern "C" ARM void func_ov017_021983e0(unsigned char* arg0) {
    if (func_02046b08(*(void***)(arg0 + Enum_ov017_021983e0_14076))) {
        GameState* var0 = GameState::GetInstance();
        void* var1 = func_02012fe4();
        func_020100bc(var0);
        GameObject* var2 = var0->GetUnknownGameObject();
        if (func_020535c8((signed char*)var2) == 0) {
            struct Struct_ov017_021983e0_2 var3 = *(struct Struct_ov017_021983e0_2*)((char*)var2 + 0x44);
            struct Struct_ov017_021983e0_3* var4 = (struct Struct_ov017_021983e0_3*)func_0201e838((unsigned char*)var1 + Enum_ov017_021983e0_108, 5);
            while (var4 != NULL) {
                if (func_02094b9c(var4, &var3) != 0) {
                    int var5 = (short)fix32ReduceAngle0To2Pi(var4->unknown_20_ + 0x3244);
                    func_ov017_0218da48(arg0, var5, 0xccc, 0x800 - 0xccc, 0);
                    struct Struct_ov017_021983e0 var6;
                    func_ov017_0219a674((unsigned char*)&var6);
                    var6.unknown_0_ = 7;
                    var6.unknown_8_ = var4;
                    var6.unknown_10_ = func_ov017_021a4700((struct Struct_ov009_0218aa28*)((char*)var2 + 0x44), (short)var2->obj3D_.rotation_.y, (struct Struct_ov009_0218aa28*)((char*)var4 + 8));
                    func_ov017_0219b33c(arg0, &var6);
                    return;
                }
                var4 = var4->unknown_70_;
            }
        }
    }
}
