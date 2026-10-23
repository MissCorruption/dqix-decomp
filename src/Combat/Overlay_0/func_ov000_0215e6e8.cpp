#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215d63c_2 {
    char unknown_0_[0x21];
    unsigned char unknown_21_;
};

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x138];
    Struct_ov000_0215d63c_2* unknown_138_;
    char unknown_13c_[0x184 - 0x13c];
    unsigned char unknown_184_;
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x81b1];
    unsigned char unknown_81b1_0_ : 4;
    unsigned char unknown_81b1_4_ : 2;
    char unknown_81b2_[0x8e14 - 0x81b2];
    signed char unknown_8e14_;
    char unknown_8e15_[0x8e20 - 0x8e15];
    int unknown_8e20_;
};

struct Struct_ov000_02182c74 { short unknown_0_[16]; };
struct Struct_ov000_02182b04 { short unknown_0_[8]; };

extern Struct_ov000_02182c74 data_ov000_02182cf4;
extern Struct_ov000_02182b04 data_ov000_02182bc4;

struct GameState;
extern "C" Struct_ov000_0215ab88* func_0200fea4(GameState*, int);
extern "C" void func_020488ac(unsigned char*, int);
extern "C" void func_020488cc(unsigned char*, int);
extern "C" void func_0208979c(unsigned char*);
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_ov000_02153e40(Struct_ov000_0215767c_2* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215e9fc(Struct_ov000_0215767c_2* arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov000_0215a23c(Struct_ov000_0215767c_2* arg0);
extern "C" void func_ov000_02157e1c(Struct_ov000_0215767c_2* arg0);
extern "C" void func_ov000_02155e94(Struct_ov000_0215767c_2* arg0);

// USA: func_ov000_0215e6e8
extern "C" ARM void func_ov000_0215e6e8(Struct_ov000_0215767c_2* arg0) {
    int var0;
    Struct_ov000_02182c74 var1 = data_ov000_02182cf4;
    if (arg0->unknown_8e14_ == 0) {
        var0 = func_ov000_02153e40(arg0, var1.unknown_0_, 0x10, 1);
        for (int var2 = 0; var2 < var0; var2++) {
            int var3 = var1.unknown_0_[var2];
            void* var4 = GameState::GetInstance();
            Struct_ov000_0215ab88* var5 = (Struct_ov000_0215ab88*)((GameState*)var4)->GetCombatantByIndex(var3);
            if (var5 != NULL) {
                int var6 = 0;
                int var7 = var1.unknown_0_[var2];
                if (var7 >= 0) {
                    if (var7 <= 3) {
                        var6 = 1;
                    }
                }
                if (var6 == 0) {
                    Struct_ov000_0215ab88* var8 = func_0200fea4((GameState*)GameState::GetInstance(), var7);
                    if (var8 != NULL) {
                        var8->unknown_184_ = 0;
                        func_020488ac((unsigned char*)var8, 0);
                        func_020488cc((unsigned char*)var8, 0);
                    }
                }
                func_0208979c((unsigned char*)var5->unknown_138_);
                var5->unknown_138_->unknown_21_ = 0;
            }
        }
        func_ov000_0215a23c(arg0);
        if (arg0->unknown_8e14_ == 0) {
            func_ov000_02157e1c(arg0);
        }
        func_ov000_02155e94(arg0);
        Struct_ov000_02182b04 var9 = data_ov000_02182bc4;
        if (func_ov000_0215e9fc(arg0, var9.unknown_0_, 8, 9) <= 0) {
            arg0->unknown_8e14_ = 2;
        } else if (arg0->unknown_81b1_0_ == 0) {
            arg0->unknown_8e14_ = 1;
        }
    }
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        arg0->unknown_8e14_ = 0;
    }
    arg0->unknown_8e20_++;
    if (arg0->unknown_8e14_ != 0) {
        var0 = func_ov000_0215e9fc(arg0, var1.unknown_0_, 0x10, 0);
        void* var10 = GameState::GetInstance();
        for (int var11 = 0; var11 < var0; var11++) {
            (Struct_ov000_0215ab88*)func_0200ff1c((GameState*)var10, var1.unknown_0_[var11]);
        }
    }
}
