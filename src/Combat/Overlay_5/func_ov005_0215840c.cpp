#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_ov005_0215840c {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 27;
    unsigned int unknown_7_3_ : 1;
    unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 3;
};

struct Struct_ov005_021556e4 {
    Struct_ov005_0215840c* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
};

struct Struct_02052df8 {
    char unknown_0_[LOW_REGION(0x144, 0x150)];
    Struct_ov005_0215840c_2* unknown_150_;
};

struct Struct_0201099c_10;

struct Struct_ov005_02153954 {
    char unknown_0_[0xdf4];
    Struct_0201099c_10* unknown_df4_;
};

extern "C" const unsigned char data_ov005_0215cc0c[];

extern "C" int func_02052df8(Struct_02052df8* arg0, int arg1);
extern "C" Struct_ov005_021556e4* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" Struct_ov005_0215840c_2* func_02053c6c(unsigned char* arg0);
extern "C" void func_02052d7c(Struct_02052df8* arg0, int arg1, short arg2);
extern "C" void func_0208358c(Struct_ov005_0215840c_2* arg0, Struct_ov005_021556e4* arg1, int arg2);
extern "C" void func_02083738(Struct_ov005_0215840c_2* arg0, int arg1);
extern "C" int func_0207c378(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov005_0215840c
extern "C" ARM int func_ov005_0215840c(Struct_ov005_02153954* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_02052df8* var1 = (Struct_02052df8*)func_0200ff1c(var0, arg1);
    if (var1 == NULL)
        return 0;
    int var2 = 0;
    unsigned int var3 = var1->unknown_150_->unknown_49c_0_;
    for (int var4 = 0; var4 < 7; var4++) {
        unsigned char var5 = data_ov005_0215cc0c[var4];
        int var6 = func_02052df8(var1, var5);
        Struct_ov005_021556e4* var7 = func_020dedd0(arg0->unknown_df4_, var6);
        if (var7 == NULL)
            continue;
        unsigned int var8[2];
        var8[0] = var7->unknown_0_->unknown_7_3_;
        var8[1] = var7->unknown_0_->unknown_7_4_;
        if (var8[var3] != 0)
            continue;
        short var9 = -1;
        int var10 = -1;
        if (var5 == 0) {
            var10 = 0;
            var9 = 1000;
        }
        func_02052d7c(var1, var5, -1);
        Struct_ov005_0215840c_2* var11 = func_02053c6c((unsigned char*)var1);
        Struct_ov005_021556e4* var12 = func_020dedd0(arg0->unknown_df4_, var9);
        if (var12 != NULL)
            func_0208358c(var11, var12, var10);
        else
            func_02083738(var11, var7->unknown_8_0_);
        func_0207c378((char*)func_02010828(var0) + 0x1d4, var6, 1, var7->unknown_8_0_);
        var2 = 1;
    }
    return var2;
}
