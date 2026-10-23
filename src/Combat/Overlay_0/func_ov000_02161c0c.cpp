#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02161c0c_3;
struct Struct_02070b6c_3;
struct Struct_0206f01c_2;
struct Struct_02048850;
struct Struct_02048850_2;
struct Struct_02010604;

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void func_ov000_02167c28(unsigned char* arg0, int arg1);
extern "C" unsigned char* func_02070fd0(struct Struct_02070b6c_3* arg0, int arg1);
extern "C" struct Struct_02048850_2* func_0206f4f0(struct Struct_0206f01c_2* arg0, int arg1);
extern "C" void func_02048614(unsigned char* arg0);
extern "C" void func_02049c88(unsigned char* arg0, int arg1);
extern "C" void func_02048850(struct Struct_02048850* arg0, struct Struct_02048850_2* arg1);
extern "C" void func_02048588(unsigned char* arg0, unsigned char* arg1);
extern "C" void func_02033b88(struct Struct_02010604* arg0, int arg1);
extern "C" void func_ov000_02161dfc(unsigned char* arg0, unsigned char* arg1);
extern "C" void func_020488ec(char* arg0);
extern "C" void func_ov000_02161274(GameObject* arg0);
extern "C" void func_ov000_02166784(struct Struct_ov000_02161c0c_3* arg0, unsigned char* arg1, unsigned char* arg2);
extern "C" void func_0200fd48(GameState* arg0, int arg1);

struct Struct_ov000_02161c0c {
    char unknown_0_[2];
    short unknown_2_;
};

struct Struct_ov000_02161c0c_2 {
    char unknown_0_[0x11];
    signed char unknown_11_[8];
    unsigned char unknown_19_;
};

#if defined(jpn)
enum { Enum_ov000_02161c0c_672 = 0x21c, Enum_ov000_02161c0c_3768 = 0xe34, Enum_ov000_02161c0c_3784 = 0xe44, Enum_ov000_02161c0c_668 = 0x218 };
#else
enum { Enum_ov000_02161c0c_672 = 0x2a0, Enum_ov000_02161c0c_3768 = 0xeb8, Enum_ov000_02161c0c_3784 = 0xec8, Enum_ov000_02161c0c_668 = 0x29c };
#endif

// USA: func_ov000_02161c0c
extern "C" ARM void func_ov000_02161c0c(unsigned char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_0200fea4(var0, arg1);
    unsigned char* var2 = *(unsigned char**)(arg0 + Enum_ov000_02161c0c_672);
    struct Struct_02070b6c_3* var3 = (struct Struct_02070b6c_3*)(var2 + 0x684);
    struct Struct_0206f01c_2* var4 = (struct Struct_0206f01c_2*)(var2 + 0x678);
    struct Struct_ov000_02161c0c* var5 = 0;
    unsigned short var6 = *(unsigned short*)(var1 + 0x186);
    for (int var7 = 0; var7 < 4; var7++) {
        struct Struct_ov000_02161c0c* var8 = *(struct Struct_ov000_02161c0c**)(arg0 + var7 * 4 + Enum_ov000_02161c0c_3768);
        if (var8 == 0) continue;
        if (var6 == var8->unknown_2_) {
            var5 = var8;
            break;
        }
    }
    if (var5 == 0) return;

    func_ov000_02167c28(arg0, arg1);
    unsigned short var9 = *(unsigned short*)(var1 + 0x186);
    unsigned char var10 = var1[0x18c];
    unsigned char var11 = var1[0x18d];
    int var12 = *(int*)(var1 + 0x13c);
    unsigned char* var13 = func_02070fd0(var3, var9);
    struct Struct_02048850_2* var14 = func_0206f4f0(var4, (short)var9);
    unsigned char* var15 = *(unsigned char**)(arg0 + Enum_ov000_02161c0c_672) + 0x158 + (arg1 - 0xc0) * 0xa4;

    func_02048614(var1);
    *(short*)(var1 + 4) = arg1;
    func_02049c88(var1, var12);
    *(unsigned char**)(var1 + 0x148) = var13;
    func_02048850((struct Struct_02048850*)var1, var14);
    func_02048588((unsigned char*)var5, var1);
    ((Object3D*)var1)->SetField06(*(unsigned short*)(arg0 + Enum_ov000_02161c0c_3784));
    var1[0x17c] = var10;
    func_02033b88((struct Struct_02010604*)var1, 0);
    *(unsigned char**)(var1 + 0x138) = var15;
    func_ov000_02161dfc(var15, var13 + 0x6c);
    (*(unsigned char**)(var1 + 0x138))[0x25] = var11;
    func_020488ec((char*)var1);
    var1[0xc2] |= 0x20;
    var1[0x18d] = var11;
    if (var11 == 2) {
        func_ov000_02161274((GameObject*)var1);
    }
    func_ov000_02166784((struct Struct_ov000_02161c0c_3*)arg0, (unsigned char*)var5, var1);

    int var16 = var10;
    arg0 = *(unsigned char**)(arg0 + Enum_ov000_02161c0c_668) + 0x81b0;
    for (arg1 = 0; arg1 < ((struct Struct_ov000_02161c0c_2*)(arg0 + var16 * 0x18))->unknown_19_; arg1++) {
        func_0200fd48(var0, (short)(((struct Struct_ov000_02161c0c_2*)(arg0 + var16 * 0x18))->unknown_11_[arg1] + 0xc0));
    }
    memset(arg0 + 0x11 + var10 * 0x18, 0, 8);
    (arg0 + var10 * 0x18)[0x19] = 0;
}
