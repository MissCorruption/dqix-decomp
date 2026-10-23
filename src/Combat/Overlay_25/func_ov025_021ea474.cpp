#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02160130();
extern "C" void* func_ov000_02160f20(void* arg0);
struct Struct_ov000_0215440c_2;
extern "C" void* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
struct Struct_ov000_0215440c;
extern "C" void* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" int func_ov025_021ed380(char* arg0, unsigned short arg1, short arg2, int arg3, int arg4, short arg5, unsigned short arg6);
extern "C" void func_ov025_021ed350(char* arg0, int arg1, unsigned short arg2);
extern "C" void* func_02079e2c(char*, int);

struct Struct_ov025_021ea474 {
    unsigned short unknown_0_;
    char unknown_2_[0x16];
    unsigned short unknown_18_;
    char unknown_1a_[8];
    unsigned short unknown_22_;
};

struct Struct_ov025_021ea474_2 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x10];
    unsigned short unknown_20_;
};

struct Struct_ov025_021ea474_3 {
    char unknown_0_[0x138];
    char* unknown_138_;
};

struct Struct_ov025_021ea474_4 {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: func_ov025_021ea474
extern "C" ARM void func_ov025_021ea474(char* arg0) {
    if (*(int*)(arg0 + 0x1c4) & 1) return;
    void* var0 = GameState::GetInstance();
    Struct_ov025_021ea474* var1 = (Struct_ov025_021ea474*)func_ov000_02160f20(func_ov000_02160130());
    if (var1 != 0) {
        Struct_ov025_021ea474_2* var2 = (Struct_ov025_021ea474_2*)func_ov000_02160094((Struct_ov000_0215440c_2*)var1, 0);
        int var3 = 0;
        Struct_ov025_021ea474_2* var4 = (Struct_ov025_021ea474_2*)func_ov000_021600f8((Struct_ov000_0215440c*)var1, var3);
        if (var4 != 0) var3 = var4->unknown_e_;
        if (var1->unknown_0_ == 0x92 || var1->unknown_0_ == 0x3a1) {
            Struct_ov025_021ea474_3* var5 = (Struct_ov025_021ea474_3*)((GameState*)var0)->GetCombatantByIndex(var2->unknown_20_);
            if (var5 != 0) var3 = *(short*)(var5->unknown_138_ + 0x2a);
        }
        func_ov025_021ed380(arg0 + 0x5e8, var1->unknown_18_, var3, 0, 0, -1, 0);
        if (var1->unknown_18_ == 0xfa) {
            func_ov025_021ed350(arg0 + 0x5e8, (unsigned short)(*(unsigned char*)(arg0 + 0x738) - 1), 0x1130);
            func_ov025_021ed380(arg0 + 0x5e8, 0x1e0, var3, 0, 0, -1, 100);
        }
        Struct_ov025_021ea474_4* var6 = (Struct_ov025_021ea474_4*)func_02079e2c((char*)func_020797dc(), (short)var1->unknown_0_);
        if ((var6 != 0 && ((var6->unknown_18_ << 16) >> 28) == 2) || var1->unknown_0_ == 0x5c || var1->unknown_0_ == 0x67 ||
            var1->unknown_0_ == 0xa0 || var1->unknown_0_ == 0xbf) {
            func_ov025_021ed380(arg0 + 0x5e8, var1->unknown_22_, var3, 0, 0, -1, 0);
            var1->unknown_22_ = 0;
        }
    }
    *(int*)(arg0 + 0x1c4) |= 1;
}
