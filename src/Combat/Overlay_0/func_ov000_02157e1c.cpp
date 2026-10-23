#include <globaldefs.h>
#include "GameState/GameState.h"

struct Random;

struct Struct_ov000_02157e1c {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
    char unknown_1c_[0x3b - 0x1c];
    unsigned char unknown_3b_0_ : 3;
    unsigned char unknown_3b_3_ : 1;
    unsigned char unknown_3b_4_ : 4;
    char unknown_3c_[0x68 - 0x3c];
    unsigned char unknown_68_;
    unsigned char unknown_69_;
    char unknown_6a_[0x7a - 0x6a];
    unsigned char unknown_7a_;
    char unknown_7b_;
    unsigned char unknown_7c_;
    char unknown_7d_[0x8b - 0x7d];
    unsigned char unknown_8b_;
    unsigned char unknown_8c_;
    char unknown_8d_[0x9d - 0x8d];
    unsigned char unknown_9d_;
    char unknown_9e_;
    unsigned char unknown_9f_;
};

struct Struct_ov000_02182cb4 {
    short unknown_0_[16];
};

#define TIMERS(combatant) ((struct Struct_ov000_02157e1c*)(combatant)->currentStats_)

extern Struct_ov000_02182cb4 data_ov000_02182cb4;
extern Struct_ov000_02182cb4 data_ov000_02182cd4;
extern float data_ov000_02182ad4[];
extern float data_ov000_02182bd4[];

extern "C" int func_ov000_02153e40(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov000_0215cac8(struct Random* arg0, short* arg1, int arg2, short arg3,
                                    unsigned short* arg4, unsigned char* arg5);
extern "C" void __clear(void* arg0, unsigned int arg1);
int NextRandomMax(struct Random* random, int max);
extern "C" void func_02088dc8(unsigned char* arg0);
extern "C" int func_ov000_0215830c(GameObject* arg0);
extern "C" void func_02088b84(unsigned char* arg0);
extern "C" int func_ov000_02158324(GameObject* arg0);
extern "C" void func_02088bd4(unsigned char* arg0);
extern "C" int func_ov000_02156af0(GameObject* arg0);
extern "C" void func_02089194(unsigned char* arg0);
extern "C" int func_ov000_02156b08(GameObject* arg0);
extern "C" void func_020890a4(unsigned char* arg0);
extern "C" int func_ov000_0215fd24(int arg0, int arg1);

static inline short inline_ov000_0215440c(short* arg0, int arg1) { return arg0[arg1]; }

// USA: func_ov000_02157e1c
extern "C" ARM void func_ov000_02157e1c(struct Random* arg0) {
    Struct_ov000_02182cb4 var0 = data_ov000_02182cb4;
    short* var1 = var0.unknown_0_;
    short var2 = 0;
    Struct_ov000_02182cb4 var3 = data_ov000_02182cd4;
    short* var4 = var3.unknown_0_;
    int var5 = func_ov000_02153e40(arg0, var4, 16, 1);
    struct Struct_ov000_02157e1c* var6;
    unsigned short var7[40];
    unsigned char var8[8];
    unsigned char var9;
    int var10;
    __clear(var7, sizeof(var7));
    var9 = 0;
    unsigned short* var11 = var7;
    __clear(var8, sizeof(var8));
    unsigned char* var12 = var8;
    GameObject* var13;
    float var14 = (float)NextRandomMax(arg0, 100) / 100.0f;

    for (var10 = 0; var10 < var5; var10++) {
        short var15 = inline_ov000_0215440c(var4, var10);
        var13 = GameState::GetInstance()->GetCombatantByIndex(var15);
        if (var13 == 0) {
            continue;
        }
        var12[var2] = 0;
        unsigned char var16 = 0;
        if (TIMERS(var13)->unknown_18_ & 0x20) {
            func_02088dc8((unsigned char*)var13->currentStats_);
        }
        var6 = TIMERS(var13);

        if (func_ov000_0215830c(var13)) {
            float var17 = (float)NextRandomMax(arg0, 100) / 100.0f;
            if (var6->unknown_8b_ != 0) {
                var6->unknown_8b_--;
                if (data_ov000_02182ad4[var6->unknown_8b_] > var17) {
                    var6->unknown_8b_ = 0;
                    func_02088b84((unsigned char*)var13->currentStats_);
                    var11[var9] = 0x1c8;
                    var9++;
                    var12[var2]++;
                    var16 = 1;
                }
            } else if (var6->unknown_68_ != 0) {
                var6->unknown_68_--;
                if (var6->unknown_68_ == 0) {
                    var6->unknown_68_ = 0;
                    var6->unknown_8b_ = 4;
                }
            }
        }

        if (func_ov000_02158324(var13)) {
            float var18 = (float)NextRandomMax(arg0, 100) / 100.0f;
            if (var6->unknown_8c_ != 0) {
                var6->unknown_8c_--;
                if (data_ov000_02182ad4[var6->unknown_8c_] > var18) {
                    var6->unknown_8c_ = 0;
                    func_02088bd4((unsigned char*)var13->currentStats_);
                    var11[var9] = 0x24c;
                    var9++;
                    var12[var2]++;
                    var16 = 1;
                }
            } else if (var6->unknown_69_ != 0) {
                var6->unknown_69_--;
                if (var6->unknown_69_ == 0) {
                    var6->unknown_69_ = 0;
                    var6->unknown_8c_ = 4;
                }
            }
        }

        if (func_ov000_02156af0(var13)) {
            float var19 = (float)NextRandomMax(arg0, 100) / 100.0f;
            if (var6->unknown_9f_ != 0) {
                var6->unknown_9f_--;
                if (data_ov000_02182ad4[var6->unknown_9f_] > var19) {
                    var6->unknown_9f_ = 0;
                    func_02089194((unsigned char*)var13->currentStats_);
                    var11[var9] = 0x249;
                    var9++;
                    var12[var2]++;
                    var16 = 1;
                }
            } else if (var6->unknown_7c_ != 0) {
                var6->unknown_7c_--;
                if (var6->unknown_7c_ == 0) {
                    var6->unknown_7c_ = 0;
                    var6->unknown_9f_ = 1;
                }
            }
        }

        if (func_ov000_02156b08(var13)) {
            if (var6->unknown_9d_ != 0) {
                var6->unknown_9d_--;
                if (data_ov000_02182bd4[var6->unknown_9d_] > var14) {
                    var6->unknown_9d_ = 0;
                    func_020890a4((unsigned char*)var13->currentStats_);
                    var11[var9] = 0x1c6;
                    var9++;
                    var12[var2]++;
                    var16 = 1;
                }
            } else if (var6->unknown_7a_ != 0) {
                var6->unknown_7a_--;
                if (var6->unknown_7a_ == 0) {
                    var6->unknown_7a_ = 0;
                    var6->unknown_9d_ = 1;
                }
            }
        }

        if (TIMERS(var13)->unknown_3b_3_) {
            TIMERS(var13)->unknown_3b_4_--;
            int var20 = TIMERS(var13)->unknown_3b_4_;
            if (var20 <= 0) {
                TIMERS(var13)->unknown_3b_3_ = 0;
                if (func_ov000_0215fd24((int)arg0, var4[var10])) {
                    var11[var9] = 0x25b;
                    var9++;
                    var12[var2]++;
                    var16 = 1;
                }
            }
        }

        if (var16 != 0) {
            var1[var2] = var4[var10];
            var2++;
        }
    }

    if (var2 > 0) {
        func_ov000_0215cac8(arg0, var1, var2, 0x3a8, var7, var8);
    }
}
