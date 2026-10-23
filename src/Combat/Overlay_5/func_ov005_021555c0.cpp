#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <GameState/GameState.h>

extern "C" void* func_02010828(GameState* arg0);
extern "C" short* func_0207c5f8(unsigned char* arg0, unsigned int arg1);
extern "C" signed char* func_0207c60c(void* arg0, unsigned int arg1);

extern "C" unsigned char data_ov005_0215cd60[8];

struct Struct_ov005_02153ba4 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x2d08, 0x2d90)];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3dbc - 0x3030];
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
};

// USA: func_ov005_021555c0
extern "C" ARM void func_ov005_021555c0(Struct_ov005_02153954* arg0) {
    char* var0 = (char*)func_02010828(GameState::GetInstance());
    short* var1 = func_0207c5f8((unsigned char*)(var0 + 0x1d4), data_ov005_0215cd60[arg0->unknown_3dbc_]);
    signed char* var2 = func_0207c60c(var0 + 0x1d4, data_ov005_0215cd60[arg0->unknown_3dbc_]);
    signed char var3 = arg0->unknown_3dbd_;
    for (int var4 = 0; var4 < 16; var4++) {
        Struct_ov005_02153ba4* var5 = &arg0->unknown_2d90_[var4 + 8];
        int var6 = var4 + var3 * 16;
        short var7 = var1[var6];
        signed char var8 = var2[var6];
        if (var7 == var5->unknown_18_)
            var5->unknown_3_ = 1;
        else
            var5->unknown_3_ = 0;
        var5->unknown_0_ = var7;
        var5->unknown_2_ = var8;
    }
}
