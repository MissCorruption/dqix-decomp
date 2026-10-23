#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205c570;
struct Struct_0205d6a0;
struct Struct_02108760;
struct Struct_ov000_0217e870 {
    char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    char unknown_19_[4];
    signed char unknown_1d_;
    char unknown_1e_[8];
    unsigned short unknown_26_;
    char unknown_28_[6];
    signed char unknown_2e_;
};
struct Struct_ov004_021707e8 {
    char unknown_0_[0x1c];
    signed char unknown_1c_;
    char unknown_1d_[0x16b];
#if defined(jpn)
    char unknown_188_[0x1e10];
#else
    char unknown_188_[0x1bd8];
#endif
    signed char unknown_1d60_[8];
    signed char unknown_1d68_;
    char unknown_1d69_[9];
    unsigned short unknown_1d72_;
    char unknown_1d74_[5];
    unsigned char unknown_1d79_;
};
struct Struct_ov000_0217e870_2 {
    char unknown_0_[0xf78];
    signed char unknown_f78_[4];
    unsigned char unknown_f7c_;
};
extern Struct_02108760 data_02108760;
#if defined(jpn)
extern int data_ov000_02184294[3];
#define G02184294(i) data_ov000_02184294[(i) + 1]
#else
extern int data_ov000_02184294[2];
#define G02184294(i) data_ov000_02184294[i]
#endif
extern "C" int func_020100a8(GameState*);
extern "C" int func_0205d794(Struct_0205c570*);
extern "C" Struct_ov000_0217e870* func_ov000_02161318(Struct_ov004_021707e8*, int);
extern "C" int func_ov000_0217c594(Struct_ov004_021707e8*, int);
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" void func_ov000_02176e3c(Struct_ov004_021707e8*, Struct_ov000_0217e870*, int, int, int, int);
extern "C" void func_ov000_02170db0(Struct_ov000_0217e870*);
extern "C" int func_ov000_0217c5f4(void*);
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" void func_ov000_0217c638(Struct_ov004_021707e8*, int, int);
extern "C" void func_ov000_02177038(Struct_ov004_021707e8*, Struct_ov000_0217e870*, int, int, int);

// USA: func_ov000_0217e870
extern "C" ARM void func_ov000_0217e870(Struct_ov004_021707e8* arg0, int arg1, int arg2) {
    arg0->unknown_1d72_ |= 0x100;
    arg0->unknown_1c_ = func_0205d794((Struct_0205c570*)arg0->unknown_188_);
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_0217e870_2* var1 = (Struct_ov000_0217e870_2*)func_02010828(var0);
    Struct_ov000_0217e870* var2 = func_ov000_02161318(arg0, func_020100a8(var0));
    if (func_ov000_0217c594(arg0, 0)) {
        func_0205eaa0(&data_02108760, 1, 0);
        if (!var2) return;
        func_ov000_02176e3c(arg0, var2, arg0->unknown_1d60_[arg0->unknown_1d68_], G02184294(1), G02184294(0), 1);
        arg0->unknown_1d72_ &= ~0x100;
        arg0->unknown_1d68_++;
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0x64;
        unsigned char var3 = var1->unknown_f7c_;
        for (unsigned char var4 = 0; var4 < var3; var4++) {
            Struct_ov000_0217e870* var5 = func_ov000_02161318(arg0, var1->unknown_f78_[var4]);
            if (var5) {
                var5->unknown_1d_ = arg0->unknown_1c_;
                var5->unknown_26_ = var2->unknown_26_;
                var5->unknown_2e_ = -1;
                var5->unknown_10_[var5->unknown_18_] = 0x64;
                func_ov000_02170db0(var5);
            }
        }
    } else if (func_ov000_0217c5f4(arg0)) {
        arg0->unknown_1d72_ &= ~0x100;
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_188_, 0);
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
        arg0->unknown_1d68_--;
        arg0->unknown_1c_ = -1;
        func_ov000_0217c638(arg0, arg1, arg2);
        GameState* var6 = GameState::GetInstance();
        Struct_ov000_0217e870_2* var7 = (Struct_ov000_0217e870_2*)func_02010828(var6);
        Struct_ov000_0217e870* var8 = func_ov000_02161318(arg0, func_020100a8(var6));
        if (!var8) return;
        var8->unknown_10_[var8->unknown_18_] = 0x17;
        unsigned char var9 = var7->unknown_f7c_;
        Struct_ov000_0217e870* var10;
        for (unsigned char var11 = 0; var11 < var9; var11++) {
            var10 = func_ov000_02161318(arg0, var7->unknown_f78_[var11]);
            if (var10) {
                var10->unknown_1d_ = -1;
                var10->unknown_26_ = var8->unknown_26_;
                var10->unknown_2e_ = -1;
                var10->unknown_10_[var10->unknown_18_] = 0x17;
            }
        }
        arg0->unknown_1d79_ = 0;
        func_ov000_02176e3c(arg0, var10, 0x17, G02184294(1), G02184294(0), 0);
    }
    func_ov000_02177038(arg0, var2, 0x19, arg1, arg2);
}
