#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov000_02161e30;
struct Struct_020a36a8;
struct Struct_0207da94;
struct Struct_0207d7f4;
struct Struct_ov000_0216377c;

struct Struct_ov000_0217e870_2 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    char unknown_a_[0x20];
    signed char unknown_2a_;
};

struct Struct_ov026_021d8ba0_4 {
    char unknown_0_[0xb8];
};

struct Struct_ov000_02160da0 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif

    Struct_ov000_02161e30* unknown_29c_;
    Struct_ov000_0217e870_2* unknown_2a0_;
    char unknown_2a4_[0xc08];
    int unknown_eac_;
#if defined(jpn)
    char unknown_e2c_[0x28f0];
#else
    char unknown_eb0_[0x28b0];
#endif

    Struct_ov026_021d8ba0_4 unknown_3760_;
#if defined(jpn)
    char unknown_37d4_[0x4164];
#else
    char unknown_3818_[0x3f30];
#endif

    unsigned char unknown_7748_;
};

extern "C" char func_020100a8(GameState* arg0);
extern "C" void* func_0207d78c();
extern "C" int func_020a36a8(Struct_020a36a8* arg0);
extern "C" unsigned char func_0207db58(Struct_0207d7f4* arg0, unsigned short arg1, char arg2);
extern "C" void func_ov000_0216377c(Struct_ov000_0216377c* arg0, unsigned char arg1);
extern "C" void func_ov017_021cc050(unsigned short arg0);

extern "C" {
int func_020a35e0(Struct_ov000_0217e870_2* arg0, unsigned char arg1);
void func_020a367c(Struct_ov000_0217e870_2* arg0, unsigned char arg1);
void func_0207da94(void* arg0, unsigned char arg1);
void func_ov017_02191b40(GameResources* arg0, int arg1);
int* func_0202ae18();
int func_0202c508(int*);
void func_ov000_02174a50(Struct_ov026_021d8ba0_4*, int);
void func_ov017_021c9b90(unsigned short, int);
void func_ov000_0215fb04(Struct_ov000_02161e30*, int);
void func_ov026_021dbf04(Struct_ov000_02160da0*);
}

// USA: func_ov026_021dbd1c
extern "C" ARM void func_ov026_021dbd1c(Struct_ov000_02160da0* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_0217e870_2* var1 = arg0->unknown_2a0_;
    Struct_ov026_021d8ba0_4* var2 = &arg0->unknown_3760_;
    Struct_ov000_02161e30* var3 = arg0->unknown_29c_;
    void* var4 = func_0207d78c();
    int* var5 = func_0202ae18();
    GameResources* var6 = GetGameResources();
    int var7 = 0;

    if (func_020a35e0(var1, arg1)) {
        var7 = 1;
        arg0->unknown_7748_ = 1;
    }
    func_ov000_02174a50(var2, arg1);
    func_020a367c(var1, arg1);
    func_0207da94(var4, arg1);
    func_ov017_02191b40(var6, arg1);

    if (arg1 == var1->unknown_2a_) {
        if (func_0202c508(var5)) {
            func_ov000_0216377c((Struct_ov000_0216377c*)arg0, func_0207db58((Struct_0207d7f4*)var4, var1->unknown_8_, func_020100a8(var0)));
        } else {
            func_ov017_021c9b90(var1->unknown_8_, arg1);
        }
    }
    func_ov000_0215fb04(var3, arg1);

    if (arg2 && arg0->unknown_eac_ != 0x11 && var7 && func_020a36a8((Struct_020a36a8*)var1)) {
        func_ov026_021dbf04(arg0);
        func_ov017_021cc050(var1->unknown_8_);
    }
}
