#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov011_021845f8(void*, int);
extern "C" void* func_ov011_0218466c(void* arg0, unsigned short arg1);

struct Struct_020e03b8;
extern "C" int func_020e03b8(int arg0, struct Struct_020e03b8* arg1, int arg2);
extern "C" void* func_020dfc2c(void* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);
extern "C" void func_020dfec0(void*, void*, void*, unsigned int);
struct Struct_020e03f0;
struct Struct_02072aa8;
extern "C" int func_020e03f0(struct Struct_020e03f0* arg0, struct Struct_02072aa8* arg1);

struct Struct_ov023_021fa644 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

extern "C" int func_020100a8(GameState* arg0);

struct Struct_020727d8;
extern "C" void func_020727d8(struct Struct_020727d8* arg0);

struct Struct_02013fb4;
extern "C" void func_020728ac(int, int, struct Struct_02013fb4*, int, int, unsigned short, unsigned char);

struct Struct_ov023_021fa644_2 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
#if defined(jpn)
    char unknown_c_[0x28 - 0xc];
#else
    char unknown1_c_[0x2c - 0xc];
#endif

    unsigned char unknown_2c_;
};

// USA: func_ov023_021fa644
extern "C" ARM void func_ov023_021fa644(Struct_ov023_021fa644_2* arg0, void* arg1, Struct_020e03b8* arg2, int arg3) {
#if defined(jpn)
 enum {Enum_ov023_021fa644_336=0x144};
#else
 enum {Enum_ov023_021fa644_336=0x150};
#endif
    if (arg2 == 0 || arg3 == 0) {
        return;
    }
    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    void* var1 = func_ov011_0218466c(arg1, arg0->unknown_a_);
    if (var0 == 0 || var1 == 0) {
        return;
    }

    char var2[0x18];
    func_020dfc2c(var2);
    if (func_020e03b8((int)var2, arg2, arg3)) {
        func_020dfc40((Struct_0201099c_14*)var2);
        func_020dfec0(var2, (char*)var0 + 4, arg2, (unsigned int)arg3);
        func_020e03f0((Struct_020e03f0*)var2, (Struct_02072aa8*)((char*)arg0 + 0x20));
        return;
    }

    unsigned char var3 = arg0->unknown_2c_;
    int var4 = 0;
    if (var3 == 1) {
        GameState* var5 = GameState::GetInstance();
        int var6 = func_020100a8(var5);
        GameObject* var7 = var5->GetPartyMemberByIndex(var6);
        if (var7 != 0) {
            Struct_ov023_021fa644* var8 = *(Struct_ov023_021fa644**)((char*)var7 + Enum_ov023_021fa644_336);
            var4 = var8->unknown_49c_0_;
        }
    } else if (var3 == 2) {
    } else if (var3 == 3) {
        var4 = 1;
    }

    func_020727d8((Struct_020727d8*)((char*)arg0 + 0x20));
    func_020728ac((int)((char*)arg0 + 0x20), (int)((char*)var0 + 4), (Struct_02013fb4*)arg2, arg3, 0, 0, var4);
}
