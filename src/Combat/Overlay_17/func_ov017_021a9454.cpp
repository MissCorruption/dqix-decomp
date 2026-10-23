#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_021a9454_92 = 0x28, Enum_ov017_021a9454_2456 = 0x868, Enum_ov017_021a9454_2464 = 0x870, Enum_ov017_021a9454_2482 = 0x7e2 };
#else
enum { Enum_ov017_021a9454_92 = 0x5c, Enum_ov017_021a9454_2456 = 0x998, Enum_ov017_021a9454_2464 = 0x9a0, Enum_ov017_021a9454_2482 = 0x9b2 };
#endif

struct Struct_0200ffc0;
struct Struct_0214e34c;
struct Struct_020d7aa0_2;

struct Struct_ov017_021a9454 {
    char unknown_0_[Enum_ov017_021a9454_92];
    char* unknown_5c_;
    char unknown_60_[Enum_ov017_021a9454_2456 - Enum_ov017_021a9454_92 - sizeof(char*)];
    int unknown_998_;
    int unknown_99c_;
    int unknown_9a0_;
    char unknown_9a4_[0x1000 + Enum_ov017_021a9454_2482 - Enum_ov017_021a9454_2464 - sizeof(int)];
    unsigned char unknown_19b2_;
};

struct Struct_ov017_021a9454_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

struct Struct_ov017_021a9454_3 {
    short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    signed char unknown_b_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    Vector3i unknown_10_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    char unknown_30_[0x6c - 0x30];
    short unknown_6c_;
    char unknown_6e_[2];
};

extern "C" Struct_ov017_021a9454* func_020421a0(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_020100f8(char* arg0);
extern "C" struct Struct_0214e34c* func_020d7a50(void);
extern "C" void func_020d7aa0(struct Struct_020d7aa0_2* arg0);
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
extern "C" void func_020a7f40(unsigned char* arg0);
extern "C" int func_020e51cc(int arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
extern char data_ov017_021d7c28;
extern char data_ov017_021d7c49;
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" int func_020457e0(void* arg0);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void VectorizedMemset(void*, int, int);
extern "C" void func_02043204(char* arg0);
extern "C" void func_020a7f34(unsigned char* arg0);

// USA: func_ov017_021a9454
extern "C" ARM void func_ov017_021a9454(Struct_ov017_021a9454_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021a9454* var1 = func_020421a0();
    func_02012fe4();
    int var2 = func_020100f8((char*)var0);
    int var3 = arg0->unknown_8_;

    if (var3 == 0) {
        struct Struct_0214e34c* var4 = func_020d7a50();
        func_020d7aa0((struct Struct_020d7aa0_2*)var4);
        void* var5 = func_0200ffc0((struct Struct_0200ffc0*)var0);
        func_020a7f40((unsigned char*)var5);

        int var6 = arg0->unknown_10_;
        char* var7 = var1->unknown_5c_;
        if (var6 == 0) {
#if defined(jpn)
            sprintf(var7, &data_ov017_021d7c28);
#else
            sprintf(var7, (const char*)func_020e51cc(0x3a));
#endif
        } else {
#if defined(jpn)
            sprintf(var7, &data_ov017_021d7c49);
#else
            sprintf(var7, (const char*)func_020e51cc(0x3b));
#endif
            arg0->unknown_c_ = 0x170c;
        }
#if defined(jpn)
        func_0204500c(var1, var7, 0);
#else
        func_0204500c(var1, var7, 0, 0xe3);
#endif
        var1->unknown_19b2_ = 0;
        var1->unknown_998_ = 1;
        func_020a28a0((unsigned char*)var2, 2);
        arg0->unknown_8_ = 1;
        return;
    }

    if (var3 != 1 || var1->unknown_9a0_ != 0) return;

    func_020a28b0((unsigned char*)var2, 2);
    if (func_020457e0(var1) == 0) {
        func_0200ffc0((struct Struct_0200ffc0*)var0);
        Struct_ov017_021a9454_3* var8 = (Struct_ov017_021a9454_3*)func_0200fd0c(var0);
        VectorizedMemset(var8, 0, sizeof(*var8));
        var8->unknown_4_ = 1;
        var8->unknown_8_ = 1;
        var8->unknown_9_ = 1;
        var8->unknown_b_ = -1;
        var8->unknown_20_ = -1;
        var8->unknown_24_ = -1;
        var8->unknown_28_ = -1;
        var8->unknown_2c_ = -1;
        var8->unknown_1e_ = -1;
        var8->unknown_c_ = 0;
        var8->unknown_6c_ = -1;
        var8->unknown_0_ = (short)arg0->unknown_c_;
        var8->unknown_2_ = 1;
        var8->unknown_7_ = 1;

        if (arg0->unknown_10_ == 0) {
            var8->unknown_10_.x = 0x100000;
            var8->unknown_10_.y = 0;
            var8->unknown_10_.z = 0x100000;
            var8->unknown_1c_ = 0;
        } else {
            var8->unknown_10_.x = 0x5f0a;
            var8->unknown_10_.y = 0x3614;
            var8->unknown_10_.z = 0x570;
            var8->unknown_1c_ = 0x4b66;
        }
        func_02043204((char*)var1);
        arg0->unknown_1_ = 1;
        return;
    }

    func_02043204((char*)var1);
    void* var9 = func_0200ffc0((struct Struct_0200ffc0*)var0);
    func_020a7f34((unsigned char*)var9);
    arg0->unknown_1_ = 1;
}
