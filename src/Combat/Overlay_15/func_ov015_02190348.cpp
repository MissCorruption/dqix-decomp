#if defined(jpn)
#define R(j,u) (j)
#define func_0208b610 func_0208bf04
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" void func_ov015_0218f22c(void* arg0);

struct Struct_ov015_02190348 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void func_0208b610(struct Struct_ov015_02190348 arg0, unsigned short arg1, int arg2, int arg3, int arg4, short arg5);

struct Struct_ov015_02190348_2 { void* unknown_0_; struct Struct_ov015_02190348_2* unknown_4_; };

struct Struct_ov015_02190348_3 {
    char unknown_0_[0x2c];
    struct Struct_ov015_02190348_2* unknown_2c_;
    char unknown_30_[0x19c - 0x2c - 4];
    unsigned char unknown_19c_;
    unsigned char unknown_19d_;
};

// USA: func_ov015_02190348
extern "C" ARM void func_ov015_02190348(struct Struct_ov015_02190348_3* arg0) {
    if (arg0->unknown_19d_) {
        *(volatile unsigned int*)0x040004a4 = 0x1f00c0;
        *(volatile unsigned int*)0x04000444 = 0;
        *(volatile unsigned int*)0x04000500 = 1;
        *(volatile unsigned int*)0x04000480 = 0x5294;
        *(volatile unsigned int*)0x0400048c = 0x3000;
        *(volatile unsigned int*)0x0400048c = 0x3000;
        *(volatile unsigned int*)0x0400048c = 0x3000;
        *(volatile unsigned int*)0x0400048c = 0xd000;
        *(volatile unsigned int*)0x0400048c = 0xd000;
        *(volatile unsigned int*)0x0400048c = 0xd000;
        *(volatile unsigned int*)0x0400048c = 0xd000;
        *(volatile unsigned int*)0x0400048c = 0x3000;
        *(volatile unsigned int*)0x04000504 = 0;
        *(volatile unsigned int*)0x04000448 = 1;
    }
    if (arg0->unknown_19c_) {
        GameState* var0 = GameState::GetInstance();
        void* var1 = func_020100bc(var0);
        func_0208b610(*(struct Struct_ov015_02190348*)((char*)var1 + 0x10), 0x3dff, 0x800, 0x800, 0x800, 0);
    }
    struct Struct_ov015_02190348_2* var2 = arg0->unknown_2c_;
    while (var2 != 0) {
        func_ov015_0218f22c(var2->unknown_0_);
        var2 = var2->unknown_4_;
    }
}
