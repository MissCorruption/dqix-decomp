#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0202c1a4;
struct Struct_0205e854;

struct Struct_ov017_021b0288 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_ov017_021b0288_2 {
    char unknown_0_[0x4];
    signed char* unknown_4_;
    char unknown_8_[0x1];
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    char unknown_b_[0x10];
    unsigned char unknown_1b_[4];
    char unknown_1f_[0x24];
    unsigned char unknown_43_[4];
    unsigned char unknown_47_;
};

extern "C" Struct_0202c1a4* func_0202ae18(void);
extern "C" unsigned char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" void func_020546a0(void* arg0, int arg1);
extern "C" void func_ov017_021c32b0(Struct_ov017_021b0288* arg0, int arg1);
extern "C" void func_020100a0(GameState* arg0, int arg1);
extern "C" void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov017_021b0a7c(Struct_ov017_021b0288_2* arg0);
extern "C" void func_ov017_021d0b30(int arg0, int arg1, int arg2);
extern "C" void* func_0202ae24(void);
extern "C" void* func_0205e854(struct Struct_0205e854* arg0);

// USA: func_ov017_021b0288
extern "C" ARM int func_ov017_021b0288(Struct_ov017_021b0288_2* arg0) {
    if (arg0->unknown_1b_[0] != 0) {
        if (arg0->unknown_9_ == 2) {
            GameObject* var0;
            int var1;
            int var2;
            int var3;
            GameResources* var4;
            Struct_0202c1a4* var5;
            GameState* var6;
            unsigned char var7[4];
            Struct_ov017_021b0288 var8[4];
            var6 = GameState::GetInstance();
            var5 = func_0202ae18();
            var4 = GetGameResources();
            var3 = 0;
            var8[var3].unknown_0_ = 0;
            var8[var3].unknown_1_ = func_0202c1a4(var5);
            var3++;
            memcpy(var7, arg0->unknown_1b_, 4);
            for (var2 = 3; var2 >= 1; var2--) {
                var0 = func_0200ff58(var6, var2);
                if (var0 == 0) continue;
                for (var1 = 3; var1 >= 1; var1--) {
                    if (var7[var1] == 3) {
                        var8[var3].unknown_0_ = var2;
                        var8[var3].unknown_1_ = var1;
                        func_020546a0(var0, func_0202c1a4(var5));
                        var7[var1] = 0;
                        var3++;
                        break;
                    }
                }
            }
            func_ov017_021c32b0(var8, var3);
            arg0->unknown_47_ = var3;
            for (int var9 = 0; var9 < var3; var9++) {
                arg0->unknown_43_[var9] = var8[var9].unknown_1_;
            }
            func_020100a0(var6, func_0202c1a4(var5));
            int var10 = 1;
            if (arg0->unknown_4_ != 0 && *arg0->unknown_4_ == 10) var10 = 0;
            func_ov017_02191108(var4, 1, var10, 1, 1);
        }
        func_ov017_021b0a7c(arg0);
        func_ov017_021d0b30(2, 0, 0);
        if (arg0->unknown_9_ != 2) return 0xb;
        func_0205e854((Struct_0205e854*)func_0202ae24());
        return 6;
    }
    return arg0->unknown_a_;
}
