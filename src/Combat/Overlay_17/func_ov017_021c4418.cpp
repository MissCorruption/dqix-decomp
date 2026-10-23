#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021cc4f8_2384 = 0x8b8 };
#else
enum { Enum_ov017_021cc4f8_2384 = 0x950 };
#endif

#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

extern "C" void func_ov017_021c41fc(int arg0, signed char arg1);
extern "C" ARM void func_ov017_021c4418(int arg0, signed char arg1);
extern "C" ARM void func_ov017_021c45b4(int arg0);
extern "C" void func_ov017_021ce704(int arg0);
extern "C" ARM void func_ov017_021cf078(int arg0, unsigned short arg1, unsigned char arg2);
extern "C" void func_ov017_021c3fb4(int arg0, int arg1);
extern "C" void func_ov017_021cc730(int arg0, int arg1, int arg2, int arg3);
extern "C" ARM void func_ov017_021ccc34(int arg0);
extern "C" void func_ov017_021ce524(short arg0);
extern "C" void func_ov017_021ccdac(int arg0);
extern "C" void func_ov017_021ccfd0(int arg0);
extern "C" ARM void func_ov017_021ce32c(int arg0);
extern "C" ARM void func_ov017_021cee78(int arg0, unsigned char arg1);
extern "C" void func_ov017_021cff8c(int arg0, int arg1);
extern "C" ARM void func_ov017_021cfed0(unsigned char arg0, unsigned char arg1);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021cc4f8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    unsigned int unknown_8_;
};

// USA: func_ov017_021cc4f8
extern "C" ARM void func_ov017_021cc4f8(signed char arg0, struct Struct_ov017_021cc4f8* arg1, GameState* arg2, int arg3, struct Struct_0202c1a4* arg4) {
    int var0 = arg1->unknown_4_;
    signed char var1 = func_0202c1a4(arg4);
    if (arg1->unknown_5_ != var1) return;

    int var2 = 0;
    unsigned int var3 = arg1->unknown_8_;

    if (var3 & 0x2) {
        func_ov017_021c41fc(var0, arg0);
        func_ov017_021c4418(var0, arg0);
    }
    if (var3 & 0x4) {
        func_ov017_021c45b4(var0);
    }
    if (var3 & 0x8) {
        func_ov017_021ce704(var0);
        GameObject* var4 = func_0200ff1c(arg2, var0);
        if (var4) {
            int var5 = func_02053c6c((unsigned char*)var4);
            unsigned char var6 = *(int*)((char*)var5 + Enum_ov017_021cc4f8_2384) & 0xff;
            func_ov017_021cf078(var0, var6, 1);
        }
        var2 = 1;
    }
    if (var3 & 0x1) {
        func_ov017_021c3fb4(var0, 1);
        var2 = 1;
    }
    if (var3 & 0x10) {
        func_ov017_021cc730(var0, 0, 0, 1);
        func_ov017_021ccc34(var0);
        func_ov017_021ce524((short)var0);
    }
    if (var3 & 0x40) {
        func_ov017_021ccdac(var0);
    }
    if (var3 & 0x20) {
        func_ov017_021ccfd0(var0);
        var2 = 1;
    }
    if (var3 & 0x80) {
        func_ov017_021ce32c(var0);
    }
    if (var3 & 0x100) {
        func_ov017_021cee78(var0, 0);
    }
    if (var3 & 0x800) {
        func_ov017_021cff8c(var0, 0);
    }
    if (var3 & 0x200) {
        func_ov017_021cfed0((unsigned char)arg0, (unsigned char)var0);
    }
    if (var2) {
        func_ov017_021c9e00(var0, 1, 0, 1);
    }
    if (!(var3 & 0x1000)) return;
    func_ov017_021c9e00(var0, 1, 0, 1);
}
