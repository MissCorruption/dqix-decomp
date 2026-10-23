#include <globaldefs.h>
#include "GameState/GameState.h"

struct Random;
struct Struct_02010088;
struct Struct_02088660;
struct Struct_02088674;

struct Struct_ov000_0215858c {
    char unknown_0_[0x22];
    unsigned short unknown_22_0_ : 9;
    unsigned short unknown_23_1_ : 3;
    unsigned short unknown_23_4_ : 4;
    char unknown_24_[0xa];
    short unknown_2e_;
    char unknown_30_[0xb];
    unsigned char unknown_3b_0_ : 1;
    unsigned char unknown_3b_1_ : 1;
    unsigned char unknown_3b_2_ : 6;
    unsigned char unknown_3c_;
    char unknown_3d_[0x41];
    unsigned char unknown_7e_;
    char unknown_7f_[3];
    unsigned char unknown_82_;
    unsigned char unknown_83_;
    unsigned char unknown_84_;
    unsigned char unknown_85_;
    unsigned char unknown_86_;
    unsigned char unknown_87_;
    char unknown_88_;
    unsigned char unknown_89_;
    unsigned char unknown_8a_;
    char unknown_8b_[2];
    unsigned char unknown_8d_;
    unsigned char unknown_8e_;
    unsigned char unknown_8f_;
    unsigned char unknown_90_;
    unsigned char unknown_91_;
    unsigned char unknown_92_;
    unsigned char unknown_93_;
    unsigned char unknown_94_;
    unsigned char unknown_95_;
    unsigned char unknown_96_;
    unsigned char unknown_97_;
    unsigned char unknown_98_;
    unsigned char unknown_99_;
    unsigned char unknown_9a_;
    unsigned char unknown_9b_;
    unsigned char unknown_9c_;
    char unknown_9d_;
    unsigned char unknown_9e_;
    char unknown_9f_;
    unsigned char unknown_a0_;
    unsigned char unknown_a1_;
};

#define AILMENTS(combatant) ((struct Struct_ov000_0215858c*)(combatant)->currentStats_)

int NextRandomMax(struct Random* random, int max);

extern "C" void* func_ov000_0215e958(struct Random* arg0);
extern "C" void func_ov000_021584e8(struct Random* arg0, void* arg1, GameObject* arg2, int arg3, int arg4, int arg5);

extern "C" void func_020884f8(unsigned char* arg0);
extern "C" int func_ov000_02155154(GameObject* arg0);
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" void func_02088e64(unsigned char* arg0);
extern "C" void func_020488cc(unsigned char* arg0, int arg1);
extern "C" int func_02088660(struct Struct_02088660* arg0);
extern "C" void func_02088674(struct Struct_02088674* arg0);
void UpdateCombatantAttack(int random, int combatantId);
void UpdateCombatantDefense(int random, int combatantId);
void UpdateCombatantAgility(int random, int combatantId);
void UpdateCombatantCharm(int random, int combatantId);
void UpdateCombatantMagicalMight(int random, int combatantId);
void UpdateCombatantMagicalMending(int random, int combatantId);
extern "C" int func_ov000_02156b20(GameObject* arg0);
extern "C" void func_02088874(unsigned char* arg0);
extern "C" int func_ov000_0215985c(GameObject* arg0);
extern "C" void func_020888c4(unsigned char* arg0);
extern "C" int func_ov000_02159874(GameObject* arg0);
extern "C" void func_02088914(unsigned char* arg0);
extern "C" int func_ov000_0215516c(GameObject* arg0);
extern "C" void func_020889b4(void* arg0);
extern "C" int func_ov000_0215988c(GameObject* arg0);
extern "C" void func_02088a04(void* arg0);
extern "C" int func_ov000_021598a4(GameObject* arg0);
extern "C" void func_02088a54(unsigned char* arg0);
extern "C" int func_ov000_021598bc(GameObject* arg0);
extern "C" void func_02088964(unsigned char* arg0);
extern "C" int func_ov000_021598d4(GameObject* arg0);
extern "C" void func_02088b34(unsigned char* arg0);
extern "C" int func_ov000_02156c94(GameObject* arg0);
extern "C" void func_02088cf4(unsigned char* arg0);
extern "C" int func_ov000_02156cac(GameObject* arg0);
extern "C" void func_02088d4c(unsigned char* arg0);
extern "C" int func_ov000_021598ec(GameObject* arg0);
extern "C" void func_02088c38(unsigned char* arg0);
extern "C" int func_ov000_02159904(GameObject* arg0);
extern "C" void func_02088c9c(unsigned char* arg0);
extern "C" int func_ov000_0215991c(GameObject* arg0);
extern "C" void func_02087838(void* arg0);
extern "C" int func_ov000_02159934(GameObject* arg0);
extern "C" void func_0208792c(void* arg0);
extern "C" int func_ov000_0215994c(GameObject* arg0);
extern "C" void func_02087a20(void* arg0);
extern "C" int func_ov000_02159964(GameObject* arg0);
extern "C" void func_02087b14(void* arg0);
extern "C" int func_ov000_0215997c(GameObject* arg0);
extern "C" void func_02087c08(void* arg0);
extern "C" int func_ov000_02159994(GameObject* arg0);
extern "C" void func_02087cfc(void* arg0);
extern "C" int func_ov000_021599ac(GameObject* arg0);
extern "C" void func_02087df0(void* arg0);
extern "C" int func_ov000_021599c4(GameObject* arg0);
extern "C" void func_02087efc(unsigned char* arg0);
extern "C" int func_ov000_02156258(GameObject* arg0);
extern "C" void func_020880e4(void* arg0);
extern "C" int func_ov000_021563ec(GameObject* arg0);
extern "C" void func_02087ff0(void* arg0);
extern "C" int func_ov000_02153a8c(GameObject* arg0);
extern "C" void func_020890f4(unsigned char* arg0);
extern "C" int func_ov000_02156404(GameObject* arg0);
extern "C" void func_02089144(unsigned char* arg0);
extern "C" int func_ov000_021599dc(GameObject* arg0);
extern "C" void func_02088d9c(unsigned char* arg0);

extern float data_ov000_02182ad4[];
extern float data_ov000_02182bd4[];

// USA: func_ov000_0215858c
extern "C" ARM void func_ov000_0215858c(struct Random* arg0, int arg1, int arg2) {
    struct Struct_ov000_0215858c* var0;
    GameObject* var1 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var1 == 0) {
        return;
    }

    float var2 = (float)NextRandomMax(arg0, 100) / 100.0f;
    var0 = AILMENTS(var1);

    if (var0->unknown_3b_1_ != 0) {
        func_020884f8((unsigned char*)var1->currentStats_);
        AILMENTS(var1)->unknown_3c_ |= 0x40;
    }
    if (func_ov000_02155154(var1) != 0) {
        void* var3 = func_ov000_0215e958(arg0);
        if (var3 == 0) {
            return;
        }
        if (var0->unknown_7e_ != 0) {
            var0->unknown_7e_ = var0->unknown_7e_ - 1;
            if (var0->unknown_7e_ == 0) {
                var0->unknown_7e_ = 0;
                var0->unknown_a1_ = 1;
            }
        }

        int var4 = 0;
        short var5 = AILMENTS(var1)->unknown_2e_;
        GameState* var6 = GameState::GetInstance();
        GameObject* var7 = var6->GetCombatantByIndex(var5);
        if (var7 == 0) {
            var4 = 1;
        }
        if (var7 != 0 && func_02010088((struct Struct_02010088*)var7) != 0) {
            var4 = 1;
        }
        if (var7 != 0 && func_ov000_02153c0c(var7) != 0) {
            var4 = 1;
        }
        if (var4 != 0) {
            var0->unknown_a1_ = 0;
            func_02088e64((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var3, var1, arg2, 0x164, 0);
        } else if (var0->unknown_a1_ != 0) {
            int var8 = var0->unknown_a1_ - 1;
            float var9 = data_ov000_02182ad4[var8 & 0xff];
            float var10 = var2;
            var0->unknown_a1_ = var8;
            if (var9 > var10) {
                var0->unknown_a1_ = 0;
                func_02088e64((unsigned char*)var1->currentStats_);
                int var11 = (arg1 >= 0 && arg1 <= 3);
                if (var11 == 0) {
                    func_020488cc((unsigned char*)var1, 1);
                }
                func_ov000_021584e8(arg0, var3, var1, arg2, 0x164, 0);
            }
        }
    }

    if (func_ov000_02156b20(var1) != 0 && var0->unknown_82_ != 0) {
        void* var12 = func_ov000_0215e958(arg0);
        if (var12 == 0) {
            return;
        }
        var0->unknown_82_ = var0->unknown_82_ - 1;
        if (data_ov000_02182bd4[var0->unknown_82_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_82_ = 0;
            func_02088874((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var12, var1, arg2, 0x1c7, 0);
        }
    }

    if (func_ov000_0215985c(var1) != 0 && var0->unknown_83_ != 0) {
        void* var13 = func_ov000_0215e958(arg0);
        if (var13 == 0) {
            return;
        }
        var0->unknown_83_ = var0->unknown_83_ - 1;
        if (data_ov000_02182ad4[var0->unknown_83_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_83_ = 0;
            func_020888c4((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var13, var1, arg2, 0x1d6, 0x2d);
        }
    }

    if (func_ov000_02159874(var1) != 0 && var0->unknown_84_ != 0) {
        void* var14 = func_ov000_0215e958(arg0);
        if (var14 == 0) {
            return;
        }
        var0->unknown_84_ = var0->unknown_84_ - 1;
        if (data_ov000_02182ad4[var0->unknown_84_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_84_ = 0;
            func_02088914((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var14, var1, arg2, 0x1c3, 0);
        }
    }

    if (func_ov000_0215516c(var1) != 0 && var0->unknown_85_ != 0) {
        void* var15 = func_ov000_0215e958(arg0);
        if (var15 == 0) {
            return;
        }
        var0->unknown_85_ = var0->unknown_85_ - 1;
        if (data_ov000_02182bd4[var0->unknown_85_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_85_ = 0;
            func_020889b4(var1->currentStats_);
            func_ov000_021584e8(arg0, var15, var1, arg2, 0x1c9, 0x28);
        }
    }

    if (func_ov000_0215988c(var1) != 0 && var0->unknown_86_ != 0) {
        void* var16 = func_ov000_0215e958(arg0);
        if (var16 == 0) {
            return;
        }
        var0->unknown_86_ = var0->unknown_86_ - 1;
        if (data_ov000_02182bd4[var0->unknown_86_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_86_ = 0;
            func_02088a04(var1->currentStats_);
            func_ov000_021584e8(arg0, var16, var1, arg2, 0x1d7, 0);
        }
    }

    if (func_ov000_021598a4(var1) != 0 && var0->unknown_87_ != 0) {
        void* var17 = func_ov000_0215e958(arg0);
        if (var17 == 0) {
            return;
        }
        var0->unknown_87_ = var0->unknown_87_ - 1;
        if (data_ov000_02182bd4[var0->unknown_87_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_87_ = 0;
            func_02088a54((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var17, var1, arg2, 0x1d8, 0);
        }
    }

    if (func_ov000_021598bc(var1) != 0 && var0->unknown_89_ != 0) {
        void* var18 = func_ov000_0215e958(arg0);
        if (var18 == 0) {
            return;
        }
        var0->unknown_89_ = var0->unknown_89_ - 1;
        if (data_ov000_02182ad4[var0->unknown_89_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_89_ = 0;
            func_02088964((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var18, var1, arg2, 0x1c4, 0);
        }
    }

    if (func_ov000_021598d4(var1) != 0 && var0->unknown_8a_ != 0) {
        void* var19 = func_ov000_0215e958(arg0);
        if (var19 == 0) {
            return;
        }
        var0->unknown_8a_ = var0->unknown_8a_ - 1;
        if (data_ov000_02182ad4[var0->unknown_8a_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_8a_ = 0;
            func_02088b34((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var19, var1, arg2, 0x1cb, 0);
        }
    }

    if (func_02088660((struct Struct_02088660*)var1->currentStats_) != 0 && var0->unknown_8d_ != 0) {
        void* var20 = func_ov000_0215e958(arg0);
        if (var20 == 0) {
            return;
        }
        var0->unknown_8d_ = var0->unknown_8d_ - 1;
        if (data_ov000_02182bd4[var0->unknown_8d_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_8d_ = 0;
            unsigned int var21 = AILMENTS(var1)->unknown_23_1_;
            func_02088674((struct Struct_02088674*)var1->currentStats_);
            switch (var21) {
            case 1:
                func_ov000_021584e8(arg0, var20, var1, arg2, 0x219, 0);
                break;
            case 2:
                func_ov000_021584e8(arg0, var20, var1, arg2, 0x21a, 0);
                break;
            case 3:
                func_ov000_021584e8(arg0, var20, var1, arg2, 0x21b, 0);
                break;
            case 4:
                func_ov000_021584e8(arg0, var20, var1, arg2, 0x21c, 0);
                break;
            case 5:
                func_ov000_021584e8(arg0, var20, var1, arg2, 0x21d, 0);
                break;
            }
        }
    }

    if (func_ov000_02156c94(var1) != 0 && var0->unknown_8e_ != 0) {
        void* var22 = func_ov000_0215e958(arg0);
        if (var22 == 0) {
            return;
        }
        var0->unknown_8e_ = var0->unknown_8e_ - 1;
        if (data_ov000_02182ad4[var0->unknown_8e_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_8e_ = 0;
            func_02088cf4((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var22, var1, arg2, 0x25d, 0);
        }
    }

    if (func_ov000_02156cac(var1) != 0 && var0->unknown_9e_ != 0) {
        void* var23 = func_ov000_0215e958(arg0);
        if (var23 == 0) {
            return;
        }
        var0->unknown_9e_ = var0->unknown_9e_ - 1;
        if (data_ov000_02182ad4[var0->unknown_9e_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_9e_ = 0;
            func_02088d4c((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var23, var1, arg2, 0x25e, 0);
        }
    }

    if (func_ov000_021598ec(var1) != 0 && var0->unknown_8f_ != 0) {
        void* var24 = func_ov000_0215e958(arg0);
        if (var24 == 0) {
            return;
        }
        var0->unknown_8f_ = var0->unknown_8f_ - 1;
        if (data_ov000_02182ad4[var0->unknown_8f_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_8f_ = 0;
            func_02088c38((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var24, var1, arg2, 0x1cc, 0);
        }
    }

    if (func_ov000_02159904(var1) != 0 && var0->unknown_90_ != 0) {
        void* var25 = func_ov000_0215e958(arg0);
        if (var25 == 0) {
            return;
        }
        var0->unknown_90_ = var0->unknown_90_ - 1;
        if (data_ov000_02182ad4[var0->unknown_90_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_90_ = 0;
            func_02088c9c((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var25, var1, arg2, 0x1cd, 0);
        }
    }

    if (func_ov000_0215991c(var1) != 0 && var0->unknown_91_ != 0) {
        void* var26 = func_ov000_0215e958(arg0);
        if (var26 == 0) {
            return;
        }
        var0->unknown_91_ = var0->unknown_91_ - 1;
        if (data_ov000_02182ad4[var0->unknown_91_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_91_ = 0;
            func_02087838(var1->currentStats_);
            func_ov000_021584e8(arg0, var26, var1, arg2, 0x1ce, 0);
            UpdateCombatantAttack((int)arg0, arg1);
        }
    }

    if (func_ov000_02159934(var1) != 0 && var0->unknown_92_ != 0) {
        void* var27 = func_ov000_0215e958(arg0);
        if (var27 == 0) {
            return;
        }
        var0->unknown_92_ = var0->unknown_92_ - 1;
        if (data_ov000_02182ad4[var0->unknown_92_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_92_ = 0;
            func_0208792c(var1->currentStats_);
            func_ov000_021584e8(arg0, var27, var1, arg2, 0x1cf, 0);
            UpdateCombatantDefense((int)arg0, arg1);
        }
    }

    if (func_ov000_0215994c(var1) != 0 && var0->unknown_93_ != 0) {
        void* var28 = func_ov000_0215e958(arg0);
        if (var28 == 0) {
            return;
        }
        var0->unknown_93_ = var0->unknown_93_ - 1;
        if (data_ov000_02182ad4[var0->unknown_93_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_93_ = 0;
            func_02087a20(var1->currentStats_);
            func_ov000_021584e8(arg0, var28, var1, arg2, 0x1db, 0);
            UpdateCombatantAgility((int)arg0, arg1);
        }
    }

    if (func_ov000_02159964(var1) != 0 && var0->unknown_94_ != 0) {
        void* var29 = func_ov000_0215e958(arg0);
        if (var29 == 0) {
            return;
        }
        var0->unknown_94_ = var0->unknown_94_ - 1;
        if (data_ov000_02182ad4[var0->unknown_94_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_94_ = 0;
            func_02087b14(var1->currentStats_);
            func_ov000_021584e8(arg0, var29, var1, arg2, 0x1d0, 0);
            UpdateCombatantCharm((int)arg0, arg1);
        }
    }

    if (func_ov000_0215997c(var1) != 0 && var0->unknown_95_ != 0) {
        void* var30 = func_ov000_0215e958(arg0);
        if (var30 == 0) {
            return;
        }
        var0->unknown_95_ = var0->unknown_95_ - 1;
        if (data_ov000_02182ad4[var0->unknown_95_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_95_ = 0;
            func_02087c08(var1->currentStats_);
            func_ov000_021584e8(arg0, var30, var1, arg2, 0x1d1, 0);
            UpdateCombatantMagicalMight((int)arg0, arg1);
        }
    }

    if (func_ov000_02159994(var1) != 0 && var0->unknown_96_ != 0) {
        void* var31 = func_ov000_0215e958(arg0);
        if (var31 == 0) {
            return;
        }
        var0->unknown_96_ = var0->unknown_96_ - 1;
        if (data_ov000_02182ad4[var0->unknown_96_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_96_ = 0;
            func_02087cfc(var1->currentStats_);
            func_ov000_021584e8(arg0, var31, var1, arg2, 0x1d2, 0);
            UpdateCombatantMagicalMending((int)arg0, arg1);
        }
    }

    if (func_ov000_021599ac(var1) != 0 && var0->unknown_97_ != 0) {
        void* var32 = func_ov000_0215e958(arg0);
        if (var32 == 0) {
            return;
        }
        var0->unknown_97_ = var0->unknown_97_ - 1;
        if (data_ov000_02182bd4[var0->unknown_97_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_97_ = 0;
            func_02087df0(var1->currentStats_);
            func_ov000_021584e8(arg0, var32, var1, arg2, 0x1d3, 0);
        }
    }

    if (func_ov000_021599c4(var1) != 0 && var0->unknown_98_ != 0) {
        void* var33 = func_ov000_0215e958(arg0);
        if (var33 == 0) {
            return;
        }
        var0->unknown_98_ = var0->unknown_98_ - 1;
        if (data_ov000_02182ad4[var0->unknown_98_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_98_ = 0;
            func_02087efc((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var33, var1, arg2, 0x1d4, 0);
        }
    }

    if (func_ov000_02156258(var1) != 0 && var0->unknown_99_ != 0) {
        void* var34 = func_ov000_0215e958(arg0);
        if (var34 == 0) {
            return;
        }
        var0->unknown_99_ = var0->unknown_99_ - 1;
        if (data_ov000_02182bd4[var0->unknown_99_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_99_ = 0;
            func_020880e4(var1->currentStats_);
            func_ov000_021584e8(arg0, var34, var1, arg2, 0x1d5, 0);
        }
    }

    if (func_ov000_021563ec(var1) != 0 && var0->unknown_9a_ != 0) {
        void* var35 = func_ov000_0215e958(arg0);
        if (var35 == 0) {
            return;
        }
        var0->unknown_9a_ = var0->unknown_9a_ - 1;
        if (data_ov000_02182bd4[var0->unknown_9a_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_9a_ = 0;
            func_02087ff0(var1->currentStats_);
            func_ov000_021584e8(arg0, var35, var1, arg2, 0x1d9, 0);
        }
    }

    if (func_ov000_02153a8c(var1) != 0 && var0->unknown_9b_ != 0) {
        void* var36 = func_ov000_0215e958(arg0);
        if (var36 == 0) {
            return;
        }
        var0->unknown_9b_ = var0->unknown_9b_ - 1;
        if (data_ov000_02182bd4[var0->unknown_9b_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_9b_ = 0;
            func_020890f4((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var36, var1, arg2, 0x1c5, 0);
        }
    }

    if (func_ov000_02156404(var1) != 0 && var0->unknown_9c_ != 0) {
        void* var37 = func_ov000_0215e958(arg0);
        if (var37 == 0) {
            return;
        }
        var0->unknown_9c_ = var0->unknown_9c_ - 1;
        if (data_ov000_02182bd4[var0->unknown_9c_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_9c_ = 0;
            func_02089144((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var37, var1, arg2, 0x1da, 0);
        }
    }

    if (func_ov000_021599dc(var1) != 0 && var0->unknown_a0_ != 0) {
        void* var38 = func_ov000_0215e958(arg0);
        if (var38 == 0) {
            return;
        }
        var0->unknown_a0_ = var0->unknown_a0_ - 1;
        if (data_ov000_02182ad4[var0->unknown_a0_] > (float)NextRandomMax(arg0, 100) / 100.0f) {
            var0->unknown_a0_ = 0;
            func_02088d9c((unsigned char*)var1->currentStats_);
            func_ov000_021584e8(arg0, var38, var1, arg2, 0x24b, 0);
        }
    }
}
