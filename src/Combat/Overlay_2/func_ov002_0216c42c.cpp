#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_ov002_0216c42c;

struct Struct_ov002_0216c42c_2 {
    short unknown_0_0_ : 11;
    short unknown_1_3_ : 5;
};

struct Struct_ov002_0216c42c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    signed char unknown_3_;
    signed char unknown_4_[3];
    signed char unknown_7_;
    Struct_ov002_0216c42c_2 unknown_8_[3];
    signed char unknown_e_;
};

struct Struct_ov002_0216c42c_4 {
    unsigned char unknown_0_;
    short unknown_2_;
    short unknown_4_;
};

struct Struct_ov002_0216c42c_5 {
    char unknown_0_[3];
    unsigned char unknown_3_;
    signed char unknown_4_[4];
    Struct_ov002_0216c42c_4 unknown_8_[4];
    Struct_ov002_0216c42c_4 unknown_20_[4];
};

struct Struct_ov002_0216c42c_6 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
};

extern "C" void* func_02010828(GameState* arg0);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" int func_02086ef0(Struct_ov002_0216c42c* arg0, int arg1);

extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021d2cc0(void* arg0);

// USA: func_ov002_0216c42c
extern "C" ARM void func_ov002_0216c42c(char* arg0, Struct_ov002_0216c42c_5* arg1, Struct_ov002_0216c42c_6* arg2) {
    if (arg1 == NULL || arg2 == NULL) return;
    GameState* var0 = GameState::GetInstance();
    Struct_ov002_0216c42c* var1 = (Struct_ov002_0216c42c*)func_02010828(var0);
    Struct_ov002_0216c42c_3 var2;
    memset(&var2, 0, 0x10);
    var2.unknown_0_ = 1;
    switch (arg2->unknown_18_5_) {
    case 7:
        var2.unknown_1_ = 3;
        break;
    case 0x1a:
        var2.unknown_1_ = 2;
        break;
    case 0x4f:
    case 0x50:
        var2.unknown_2_ = 3;
    case 2:
        var2.unknown_1_ = 1;
        break;
    case 0x12:
        var2.unknown_1_ = 4;
        break;
    }
    if (arg2->unknown_18_0_ == 5) var2.unknown_2_ = 3;
    var2.unknown_3_ = *(signed char*)(arg0 + RG(0x1c20, 0x1ae8));
    signed char var3 = 0;
    for (int var4 = 0; var4 < arg1->unknown_3_; var4++) {
        int var5 = arg1->unknown_4_[var4];
        if (func_02086ef0(var1, var5) == 0) {
            var2.unknown_4_[var3] = var5;
            Struct_ov002_0216c42c_2* var6 = &var2.unknown_8_[var3];
            Struct_ov002_0216c42c_4* var7 = &arg1->unknown_8_[var4];
            var6->unknown_0_0_ = var7->unknown_2_;
            var6->unknown_1_3_ = arg1->unknown_20_[var4].unknown_2_;
            if (var2.unknown_1_ == 4 && var7->unknown_0_ == 3) {
                char* var8 = (char*)func_0200ff1c(var0, var5);
                if (var8 != NULL) {
                    *(unsigned char*)(arg0 + RG(0x2522, 0x2352)) = 1;
                    *(unsigned char*)(arg0 + RG(0x2523, 0x2353)) = 0;
                    *(Vector3i*)(arg0 + RG(0x2524, 0x2354)) = *(Vector3i*)(var8 + 0x44);
                }
            }
            var3++;
        }
    }
    var2.unknown_7_ = var3;
    var2.unknown_e_ = func_020100a8(var0);
    func_ov017_021d2cc0(&var2);
}
