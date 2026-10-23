#if defined(jpn)
#define func_02045f3c func_02046c78
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov005_0215b0a0 func_ov005_0215c4b4
#endif
#include <GameState/GameState.h>
#include "Resource/GameResources.h"

struct Struct_0201099c_10;
struct Struct_02052e14;
struct Struct_ov005_0215acc0_2 { char unknown_0_[LOW_REGION(0x4f8, 0x4fc)]; int unknown_4fc_; };
struct Struct_ov005_0215b0a0 {
#if defined(jpn)
    unsigned short unknown_0_[10];
#else
    char unknown1_0_[0x80];
#endif
};
struct Struct_ov005_0215acc0 { char unknown_0_[0xdf4]; Struct_0201099c_10* unknown_df4_; char unknown_df8_[LOW_REGION(0x2f38, 0x2fc0)]; unsigned char unknown_3db8_; char unknown_3db9_[3]; unsigned char unknown_3dbc_; char unknown_3dbd_[0xc7]; Struct_ov005_0215b0a0 unknown_3e84_[8]; unsigned char unknown_4284_[8]; };
extern "C" void* func_020421a0();
extern "C" short* func_02052e14(Struct_02052e14*);
extern "C" void* func_020dedd0(Struct_0201099c_10*, int);
extern "C" Struct_ov005_0215acc0_2* func_ov017_021a193c(int*);
#if defined(jpn)
extern "C" void func_02045f3c(void*, unsigned short*, int, int, int, int, int, int);
#else
extern "C" void func_02045f3c(void*, Struct_ov005_0215b0a0*, int, int, int, int, int, int, int, int);
#endif
extern unsigned char data_ov005_0215cbfc[];
#define REG_GEOMETRY ((volatile unsigned int*)0x04000444)
#define REG_END (*(volatile unsigned int*)0x04000504)

// USA: func_ov005_0215b0a0
extern "C" ARM void func_ov005_0215b0a0(Struct_ov005_0215acc0* arg0) {
    void* var0 = func_020421a0();
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff1c(var1, func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3])->unknown_4fc_);
    if (!var2) return;
    short* var3 = func_02052e14((Struct_02052e14*)var2);
    int var4 = LOW_REGION(29, 28);
#if defined(jpn)
    int var6;
#endif
    if (arg0->unknown_3db8_ == 0) {
        for (int var5 = 0; var5 < 8; var5++) {
#if defined(jpn)
            if (func_020dedd0(arg0->unknown_df4_, var3[data_ov005_0215cbfc[var5]])) var6 = 0x7fff;
            else var6 = 0x3def;
#else
            int var6 = func_020dedd0(arg0->unknown_df4_, var3[data_ov005_0215cbfc[var5]]) ? 0x7fff : 0x3def;
#endif
            if (var5 == arg0->unknown_3dbc_) var6 = 0xf0a;
            int var7 = var5 * 24;
#if !defined(jpn)
            if (arg0->unknown_4284_[var5]) var7 -= 5;
#endif
            REG_GEOMETRY[0] = 0;
            REG_GEOMETRY[0x2f] = 1;
            REG_GEOMETRY[11] = 0;
            REG_GEOMETRY[11] = 0;
            REG_GEOMETRY[11] = 0xffc01000;
#if defined(jpn)
            func_02045f3c(var0, arg0->unknown_3e84_[var5].unknown_0_, 160, var7 + 7, var6, 10, 0, 0);
#else
            func_02045f3c(var0, &arg0->unknown_3e84_[var5], 160, var7 + 6, var6, 10, 0, 0, 0, 9);
#endif
            REG_GEOMETRY[0x30] = 0;
            REG_GEOMETRY[1] = 1;
        }
    } else {
#if defined(jpn)
        if (func_020dedd0(arg0->unknown_df4_, var3[data_ov005_0215cbfc[arg0->unknown_3dbc_]])) var6 = 0x7fff;
        else var6 = 0x3def;
#else
        int var6 = func_020dedd0(arg0->unknown_df4_, var3[data_ov005_0215cbfc[arg0->unknown_3dbc_]]) ? 0x7fff : 0x3def;
#endif
        if (arg0->unknown_3db8_ == 3) var6 = 0xf0a;
#if !defined(jpn)
        if (arg0->unknown_4284_[arg0->unknown_3dbc_]) var4 -= 5;
#endif
        REG_GEOMETRY[0] = 0;
        REG_GEOMETRY[0x2f] = 1;
        REG_GEOMETRY[11] = 0;
        REG_GEOMETRY[11] = 0;
        REG_GEOMETRY[11] = 0xffc01000;
#if defined(jpn)
        func_02045f3c(var0, arg0->unknown_3e84_[arg0->unknown_3dbc_].unknown_0_, 160, var4, var6, 10, 0, 0);
#else
        func_02045f3c(var0, &arg0->unknown_3e84_[arg0->unknown_3dbc_], 160, var4, var6, 10, 0, 0, 0, 9);
#endif
        REG_END = 0;
        REG_GEOMETRY[1] = 1;
    }
}
