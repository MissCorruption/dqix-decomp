#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021eb8e8_3 {
    unsigned long long unknown_0_;
    char unknown_8_[0x10];
    unsigned int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
};

struct Struct_ov025_021eb8e8 {
    char unknown_0_[0x28];
    unsigned int unknown_28_;
    char unknown_2c_[3];
    unsigned char unknown_2f_;
};

struct Struct_ov025_021eb8e8_2 {
    char unknown_0_[0xc];
    int unknown_c_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" char* func_ov000_02160f08(void* arg0);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" Struct_ov025_021eb8e8_3* func_0204a01c(unsigned char* arg0);
extern "C" void func_ov000_02162dc4(void* arg0, GameObject* arg1, GameObject* arg2, unsigned int arg3,
                                    int arg4, int arg5, unsigned long long arg6, int arg7);
extern "C" Struct_ov025_021eb8e8* func_ov025_021dafd0(char* arg0, int arg1);
extern "C" void func_ov000_0217616c(Struct_ov025_021eb8e8* arg0);
extern "C" void func_ov000_0216ff20(char*, unsigned char);
extern "C" void func_0204a00c(unsigned char* arg0, int arg1);
extern "C" int func_0204a0f8(unsigned char* arg0);
extern "C" void func_0204a0e0(unsigned char* arg0);
extern "C" int func_0204a040(unsigned char* arg0);
extern "C" void func_0204a030(unsigned char* arg0, int arg1);
extern "C" void func_02033920(GameObject* arg0, int arg1, int arg2);

// USA: func_ov025_021eb8e8
extern "C" ARM void func_ov025_021eb8e8(Struct_ov025_021eb8e8_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_ov000_02160130();
    char* var2 = func_ov000_02160f08(var1);
    short var3[16];
    int var4 = 0;
    var4 = var4 + func_ov000_0215e9fc(arg0->unknown_c_, var3, 0x10, var4);
    var4 = var4 + func_ov000_0215ec1c(arg0->unknown_c_, var3 + var4, 0x10 - var4, 0);
    short* var5 = var3;
    for (int var6 = 0; var6 < var4; var5++, var6++) {
        GameObject* var7 = var0->GetCombatantByIndex(*var5);
        if (var7 == 0) {
            continue;
        }
        Struct_ov025_021eb8e8_3* var8 = func_0204a01c((unsigned char*)var7);
        if (var8 != 0) {
            unsigned int var9 = var8->unknown_18_ & ~0x80000;
            func_ov000_02162dc4(var1, 0, var7, var9, var8->unknown_1d_, var8->unknown_1e_, var8->unknown_0_, 1);
            Struct_ov025_021eb8e8* var10 = func_ov025_021dafd0(var2, *var5);
            if (var10 != 0) {
                var10->unknown_28_ = var9;
                func_ov000_0217616c(var10);
                func_ov000_0216ff20((char*)var10, var8->unknown_1d_);
                var10->unknown_2f_ = var8->unknown_1e_;
            }
            func_0204a00c((unsigned char*)var7, 0);
        }
        if (func_0204a0f8((unsigned char*)var7)) {
            var7->obj3D_.SetInheritedAlpha(0x1f);
            func_0204a0e0((unsigned char*)var7);
        }
        if (func_0204a040((unsigned char*)var7) != 0xff) {
            func_02033920(var7, func_0204a040((unsigned char*)var7), 1);
            func_0204a030((unsigned char*)var7, 0xff);
        }
    }
}
