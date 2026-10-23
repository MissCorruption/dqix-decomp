#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Combat/CombatantRecovery.h"
#include "Resource/GameResources.h"

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

struct Struct_020200c0_4 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

struct Struct_020200c0_5 {
    char* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_020200c0_6 {
    Struct_020200c0_5* unknown_0_;
    char unknown_4_[0x60 - 0x4];
    void* unknown_60_;
};

struct Struct_020200c0_7 {
    unsigned char unknown_0_[0x186];
    unsigned char unknown_186_[13];
#if defined(jpn)
    unsigned char unknown_193_[0x8b8 - 0x193];
#else
    unsigned char unknown1_193_[0x950 - 0x193];
#endif
    int unknown_950_;
};
struct Struct_020200c0_8 : GameObject {
#if defined(jpn)
    unsigned char unknown_13c_[0x144 - 0x13c];
#else
    unsigned char unknown1_13c_[0x150 - 0x13c];
#endif
    Struct_020200c0_7* unknown_150_;
};

struct Struct_020200c0_2;

extern "C" Struct_020200c0_6* func_020421a0(void);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_02020520(struct Struct_020200c0_3* arg0);
extern "C" void func_0205b890(struct Struct_020200c0_3* arg0, int arg1, int arg2);
extern "C" void func_0205b20c(struct Struct_020200c0_4* arg0);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);
extern "C" void func_0205b734(struct Struct_020200c0_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" const char* func_020e51cc(int arg0);
extern "C" void func_0205b234(struct Struct_020200c0_4* arg0, short arg1, int arg2, const char* arg3, int arg4, int arg5);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" int func_ov017_021bdbcc(GameResources* arg0);
extern "C" void* func_020421b0(int arg0);
extern "C" void func_0205b530(struct Struct_020200c0_4* arg0, void* arg1, short arg2, short arg3, int arg4, int arg5);
extern "C" unsigned short func_0202053c(void* arg0);
extern "C" void func_0205b674(struct Struct_020200c0_2* arg0, short arg1, int arg2, int arg3,
                                         unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void func_020e46c4(void* arg0);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" void func_02046608(Struct_020200c0_6* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" void func_020c9820(void);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" void LoadToSubObjVRAM(const void* src, unsigned int offset, unsigned int size);
extern char data_020ef580[];

// USA: func_020200c0
extern "C" ARM void func_020200c0(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    if (arg0 >= 0 && arg0 <= 3) var1 = 1;
    else var1 = 0;
    if (!var1 || arg1 == 0) return;
    GameResources* var2 = GetGameResources();
    if (var2 == NULL || var2->unknown_ptr_36d0 == NULL) return;
    unsigned int var3 = (arg0 + 1) << 11;
    Struct_020200c0_6* var4 = func_020421a0();
    void* var5 = var4->unknown_60_;
    if (var5 == NULL) return;
    memcpy(var5, (void*)0x06600000, 0x800);

    Struct_020200c0_3 var6;
    func_02020520(&var6);
    func_0205b890(&var6, 1, arg1);
    Struct_020200c0_4 var7;
    func_0205b20c(&var7);
    func_0205b220(&var7, (int)var5);
    func_0205b228(&var7, (int)&var6, 1);
    func_0205b734(&var7, 7, 0x10, 0x17, 0x18, 1);
    func_0205b234(&var7, 7, 0xe, func_020e51cc(0xc9), 0xf, 0);
    func_0205b734(&var7, 7, 0x1c, 0x17, 0x24, 1);
    func_0205b234(&var7, 7, 0x1a, func_020e51cc(0xca), 0xf, 0);

    Struct_020200c0_8* var8 = (Struct_020200c0_8*)func_0200ff1c(var0, arg0);
    if (var8 == NULL) return;
    char* var9 = var8->baseStats_->unk;
    func_0205b234(&var7, (short)((0x40 - func_020420e8(var9, 0)) >> 1), 3, var9, 0xf, 0);

    int var10;
    int var11;
    short var12;
    int var13;
    int var14;
    unsigned char var15;
    Struct_020200c0_7* var16 = var8->unknown_150_;
    var15 = var16->unknown_186_[var16->unknown_950_];
    var12 = var16->unknown_950_;
    if (func_ov017_021bdbcc(var2)) var12 = 0xd;
    if (var12 == 0) var12 = -1;
    if (var12 == 0xd) var12 = 0;
    var10 = 0xf;
    unsigned int var17 = var8->unknown_ac_.unknown_84_->unknown_0_;
    var11 = -1;
    if (var17 & 1) {
        var11 = 0xe;
        var10 = 8;
    } else if (var17 & 2) {
        var11 = var10;
        var10 = 3;
    } else if (var17 & 4) {
        var11 = 0x10;
    } else {
        int var18 = 5;
        if (var15 == 10) var18 = 0xd;
        const char* var19 = func_020e51cc(0x3f3);
        int var20 = func_020420e8(var19, 0);
        if (var12 >= 0) {
            char* var21 = (char*)func_020421b0((unsigned char)(var12 * 4 + 0x28));
            for (var14 = 0; var14 < 2; var14++) {
                for (var13 = 0; var13 < 2; var13++) {
                    func_0205b530(&var7, var21, var13 * 8 + 6, var14 * 8 + 0x29, 8, 0xf);
                    var21 += 0x20;
                }
            }
        }
        func_0205b234(&var7, 0x20, 0x2b, var19, 0xf, 0);
        func_0205b674((Struct_020200c0_2*)&var7, var20 + 0x1b, 0x2b, func_0202053c(var8), 0xf, 2, 1, 0);
        if (var15 != 0) {
            char var22[7];
            __clear(var22, 7);
            sprintf(var22, data_020ef580, var15);
            func_0205b234(&var7, 0x13, 0x2b, var22, var18, 0);
        }
    }
    if (var11 >= 0) {
        Struct_020200c0_5 var23;
        func_020e46c4(&var23);
        func_020e4bf4(&var23, arg0);
        const char* var24 = func_020e51cc(var11);
        char var25[0x80];
        __clear(var25, 0x80);
        var4->unknown_0_ = &var23;
        func_02046608(var4, 10, var24, var25, 0x100, 0, 0);
        func_0205b234(&var7, (short)((0x40 - func_020420e8(var25, 0)) >> 1), 0x2b, var25, var10, 0);
    }
    func_020c9820();
    CleanInvalidateCacheRange(var5, 0x800);
    LoadToSubObjVRAM(var5, var3, 0x800);
}
