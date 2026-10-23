#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"
#include "std_library_functions.h"

struct GameObject;
struct Struct_020e3b8c_2;
extern "C" void func_020e3c34(Struct_020e3b8c_2* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020897b4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" int func_ov017_0218f5a4(char* arg0, int arg1, int arg2, int arg3, int arg4);
extern char* data_020ee9cc[];
extern char data_020f2cbc;

struct Struct_020e3b8c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    signed char unknown_9_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_[2];
    int unknown_1c_;
    int unknown_20_;
    unsigned char unknown_24_;
};

// USA: func_020e3c94
extern "C" ARM void func_020e3c94(Struct_020e3b8c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    GameObject* var2 = func_0200ff1c(var0, arg0->unknown_9_);
    unsigned char* var3 = 0;

    if (var2) {
        var3 = (unsigned char*)func_02053c6c((unsigned char*)var2);
    }

    if (arg0->unknown_1c_ == 0) {
        if (var2 == 0) {
            func_020e3c34(arg0);
            arg0->unknown_1_ = 1;
            return;
        }
        char var4[80];
        sprintf(var4, &data_020f2cbc, arg0->unknown_c_);
        const char* var5[2];
        var5[0] = var4;
        var5[1] = data_020ee9cc[1];
        for (int var6 = 0; var6 < 2; var6++) {
            arg0->unknown_14_[var6] = var1->QueueLoadFile(var5[var6], 0);
        }
        arg0->unknown_1c_ = 1;
    }

    if (arg0->unknown_1c_ != 1) {
        return;
    }

    for (int var7 = 0; var7 < 2; var7++) {
        if (var1->GetTaskStatus(arg0->unknown_14_[var7]) == 0) {
            return;
        }
    }

    void* var8;
    void* var9;
    unsigned int var10;
    unsigned int var11;
    var1->GetLoadedFileByID(arg0->unknown_14_[0], &var8, &var10);
    var1->GetLoadedFileByID(arg0->unknown_14_[1], &var9, &var11);

    unsigned short var12 = 0;
    if (var3) {
        if (arg0->unknown_20_ & 1) {
            var12 = *(unsigned short*)(var3 + 0x564);
        }
    }

    func_020897b4(arg0->unknown_9_, arg0->unknown_a_, arg0->unknown_c_, arg0->unknown_8_,
                 arg0->unknown_24_, (int)var8, (int)var10, (int)var9, (int)var11);

    if (var3) {
        if ((arg0->unknown_20_ & 1) && (arg0->unknown_9_ == func_020100a8(var0))) {
            *(unsigned short*)(var3 + 0x564) = var12;
        }
        if (arg0->unknown_20_ & 2) {
            *(int*)((var3 + arg0->unknown_c_ * 4) + 0x138) = arg0->unknown_10_;
        }
        if (arg0->unknown_20_ & 4) {
            func_ov017_0218f5a4((char*)GetGameResources(), arg0->unknown_9_, 0, 0, 1);
        }
    }

    for (int var13 = 0; var13 < 2; var13++) {
        var1->RemoveTask(arg0->unknown_14_[var13]);
    }

    func_020e3c34(arg0);
    arg0->unknown_1_ = 1;
}
