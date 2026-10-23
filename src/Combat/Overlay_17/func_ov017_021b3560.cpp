#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_020534ac;
extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_02082828_2;
extern "C" void func_02083508(struct Struct_02082828_2* arg0);
extern "C" int func_020deef4(int arg0, int arg1, int arg2, short* arg3, short arg4);

extern "C" {
    void func_02072afc(int arg0, int* arg1, short* arg2);
    void func_02052d7c(void* arg0, int arg1, int arg2);
}

struct Struct_ov017_021d6b74 { int unknown_0_; int unknown_4_; };
extern struct Struct_ov017_021d6b74 data_ov017_021d6b78[];
extern struct Struct_ov017_021d6b74 data_ov017_021d6b74[];

struct Struct_ov017_021b3560 {
    unsigned char unknown_0_[8];
    short unknown_8_;
    char unknown_a_[6];
    int unknown_10_;
};

// USA: func_ov017_021b3560
extern "C" ARM int func_ov017_021b3560(struct Struct_ov017_021b3560* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (int)BackgroundLoader::GetInstance();
    if (!((BackgroundLoader*)(var1))->GetTaskStatus((int)(arg0->unknown_10_))) {
        return 0;
    }

    GameObject* var2 = func_0200ff1c(var0, arg0->unknown_8_);
    if (!var2) {
        return 0;
    }

    void* var3 = (void*)func_02053c6c((unsigned char*)var2);
    if (!var3) {
        return 0;
    }

    int var4[11];
    short var5[12];
    func_02072afc(arg0->unknown_8_, var4, var5);

    int var6, var7;
    ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(arg0->unknown_10_), (void**)(&var6), (unsigned int*)(&var7));
    func_02083508((struct Struct_02082828_2*)var3);
    func_020deef4((int)((char*)var3 + 0x194), var6, var7, var5, 11);
    ((BackgroundLoader*)(var1))->RemoveTask((int)(arg0->unknown_10_));
    arg0->unknown_10_ = -1;

    int var8;
    for (var8 = 0; data_ov017_021d6b74[var8].unknown_0_ >= 0; var8++) {
        int var9 = data_ov017_021d6b78[var8].unknown_0_;
        short var10 = *(short*)((char*)var3 + var9 * 0x20 + 0x1ac);
        if (var10 != var5[var9]) {
            func_02052d7c(var2, data_ov017_021d6b74[var8].unknown_0_, -1);
        }
    }
    return 1;
}
