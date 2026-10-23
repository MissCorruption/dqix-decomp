#include <globaldefs.h>
#if defined(jpn)
#define LOW_REGION(j,u) (j)
#else
#define LOW_REGION(j,u) (u)
#endif
#include "GameState/GameState.h"

struct Struct_02070b6c_3;
struct Struct_0206f01c_2;
struct Struct_02010088;
struct Struct_02048934;
struct Random;
struct Struct_02048850;
struct Struct_02048850_2;
struct Struct_0202c1a4;

extern "C" void* func_0202ae18(void);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char* func_02070fd0(Struct_02070b6c_3* arg0, int arg1);
extern "C" Struct_02048850_2* func_0206f4f0(Struct_0206f01c_2* arg0, int arg1);
extern "C" int func_02010088(Struct_02010088* arg0);
extern "C" int func_ov000_02161bb8(unsigned char* arg0);
extern "C" void func_02048934(void* arg0, Struct_02048934* arg1, Random* arg2);
extern "C" void func_020891cc(void* arg0);
extern "C" void func_02089630(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02161bec(unsigned char* arg0);
extern "C" void func_02048614(unsigned char* arg0);
extern "C" void func_02049c88(void* arg0, void* arg1);
extern "C" void func_02048850(Struct_02048850* arg0, Struct_02048850_2* arg1);
extern "C" void func_020488ec(char* arg0);
extern "C" void func_02049f3c(unsigned char* arg0);
extern "C" void func_0200fd38(GameState* arg0, int arg1, GameObject* arg2);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);

struct Struct_ov000_02161380 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[0x10];
    unsigned int unknown_18_;
    unsigned char unknown_1c_[9];
    unsigned char unknown_25_;
    unsigned char unknown_26_[0xa4 - 0x26];
};

struct Struct_ov000_02161380_2 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x134 - 0xac];
    unsigned char* unknown_134_;
    Struct_ov000_02161380* unknown_138_;
    unsigned char unknown_13c_[0xc];
    unsigned char* unknown_148_;
    unsigned char unknown_14c_[0x30];
    unsigned char unknown_17c_;
    unsigned char unknown_17d_[7];
    unsigned char unknown_184_;
    unsigned char unknown_185_;
    unsigned short unknown_186_;
    unsigned short unknown_188_;
    unsigned short unknown_18a_;
    unsigned char unknown_18c_;
    unsigned char unknown_18d_;
    unsigned char unknown_18e_[2];
};

struct Struct_01ff8b48_3 { unsigned char unknown_0_[0x70]; };

struct Struct_ov000_02161380_3 {
    unsigned char unknown_0_[0x158];
    Struct_ov000_02161380 unknown_158_[8];
};

struct Struct_ov000_02161380_4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[2];
    unsigned char unknown_d_[8];
    unsigned char unknown_15_;
    unsigned char unknown_16_[2];
};

struct Struct_ov000_02161380_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};

struct Struct_ov000_02161380_6 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 2;
    unsigned char unknown_0_6_ : 2;
};

struct Struct_ov000_02161380_7 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov000_02161380_4 unknown_4_[3];
    Struct_ov000_02161380_5 unknown_4c_[4];
};

struct Struct_ov000_02161380_8 {
    unsigned char unknown_0_[0x81b0];
    Struct_ov000_02161380_7 unknown_81b0_;
};

struct Struct_ov000_02161380_9 {
    Object3D unknown_0_;
};

struct Struct_ov000_02161380_10 {
    unsigned char unknown_0_[LOW_REGION(0x218,0x29c)];
    Struct_ov000_02161380_8* unknown_29c_;
    Struct_ov000_02161380_3* unknown_2a0_;
    unsigned char unknown_2a4_[0xc14];
    Struct_ov000_02161380_9* unknown_eb8_[4];
    unsigned short unknown_ec8_;
    unsigned char unknown_eca_[LOW_REGION(0x51ce,0x4f5a)];
    Struct_ov000_02161380_2 unknown_5e24_[8];
    Struct_01ff8b48_3 unknown_6aa4_[8];
};

// USA: func_ov000_02161380
extern "C" ARM int func_ov000_02161380(Struct_ov000_02161380_10* arg0, int arg1, int arg2, int arg3) {
    Struct_02070b6c_3* var0;
    GameState* var1;
    void* var2;
    Struct_0206f01c_2* var3;
    int var4;
    Struct_02048850_2* var5;
    int var6;
    Struct_ov000_02161380* var7;
    int var8;
    unsigned short var9;
    Struct_ov000_02161380* var10;
    int var11;
    unsigned char* var12;
    Struct_ov000_02161380_2* var13;
    int var14;
    Struct_ov000_02161380_2* var15;
    Struct_ov000_02161380_7* var16;
    var16 = &arg0->unknown_29c_->unknown_81b0_;
    int var17 = 5;
    if (arg1 == 0x10a) var17 = 8;
    if (var17 <= var16->unknown_1_0_) return -1;

    Struct_ov000_02161380_9* var18 = 0;
    for (int var19 = 0; var19 < 4; var19++) {
        Struct_ov000_02161380_9* var20 = arg0->unknown_eb8_[var19];
        if (var20 && arg1 == var20->unknown_0_.unknown_2_) {
            var18 = var20;
            break;
        }
    }
    if (!var18) return -1;

    var1 = GameState::GetInstance();
    var2 = func_0202ae18();
    var0 = (Struct_02070b6c_3*)((unsigned char*)arg0->unknown_2a0_ + 0x684);
    var3 = (Struct_0206f01c_2*)((unsigned char*)arg0->unknown_2a0_ + 0x678);
    var4 = -1;
    for (int var21 = 0; var21 < 8; var21++) {
        if (func_0200fea4(var1, var21 + 0xc0) == 0) {
            var4 = (short)(var21 + 0xc0);
            break;
        }
    }

    int var22 = 0;
    int var23 = -1;
    if (arg2 < 0) {
        for (int var24 = 0; var24 < var16->unknown_1_4_; var24++) {
            if (arg1 == var16->unknown_4_[var24].unknown_0_) {
                arg2 = var24;
                var22 = 1;
                break;
            }
        }
    } else {
        var22 = 1;
    }

    if (!var22) {
        if (var16->unknown_1_4_ >= 3) {
            int var25;
            for (var25 = 0; var25 < ((Struct_ov000_02161380_6*)((unsigned char*)var16 + 1))->unknown_0_4_; var25++) {
                if (var16->unknown_4_[var25].unknown_a_4_ == 0) {
                    arg2 = var25;
                    break;
                }
            }
            if (var25 >= 3) return -1;
            for (int var26 = 0; var26 < var16->unknown_1_6_; var26++) {
                if (arg1 == var16->unknown_4c_[var26].unknown_2_) {
                    var23 = var26;
                    break;
                }
            }
            if (var23 <= -1) {
                unsigned int var27 = ((Struct_ov000_02161380_6*)((unsigned char*)var16 + 1))->unknown_0_6_;
                if (var27 >= 4) return -1;
                var23 = var27;
                var16->unknown_1_6_ = var23 + 1;
                memset(&var16->unknown_4c_[var23], 0, sizeof(Struct_ov000_02161380_5));
                var16->unknown_4c_[var23].unknown_2_ = arg1;
                var16->unknown_4c_[var23].unknown_0_ = 1;
            }
            var14 = 0;
            if (var4 < 0) {
                var4 = (short)(var16->unknown_4_[arg2].unknown_2_[0] + 0xc0);
                var14 = 1;
            }
            unsigned char var28[8];
            __clear(var28, 8);
            unsigned char var29 = 0;
            for (; var14 < var16->unknown_4_[arg2].unknown_a_0_; var14++) {
                var28[var29++] = var16->unknown_4_[arg2].unknown_2_[var14];
            }
            memset(&var16->unknown_4_[arg2], 0, sizeof(Struct_ov000_02161380_4));
            var16->unknown_4_[arg2].unknown_0_ = arg1;
            memcpy(var16->unknown_4_[arg2].unknown_d_, var28, 8);
            var16->unknown_4_[arg2].unknown_15_ = var29;
        } else {
            arg2 = var16->unknown_1_4_;
            var23 = var16->unknown_1_6_;
            var16->unknown_1_4_ = arg2 + 1;
            var16->unknown_1_6_++;
            memset(&var16->unknown_4_[arg2], 0, sizeof(Struct_ov000_02161380_4));
            memset(&var16->unknown_4c_[var23], 0, sizeof(Struct_ov000_02161380_5));
            unsigned short var30 = arg1;
            var16->unknown_4_[arg2].unknown_0_ = var30;
            var16->unknown_4c_[var23].unknown_2_ = var30;
            var16->unknown_4c_[var23].unknown_0_ = 1;
        }
    } else {
        for (int var31 = 0; var31 < var16->unknown_1_6_; var31++) {
            if (var16->unknown_4c_[var31].unknown_2_ == var16->unknown_4_[arg2].unknown_0_) {
                var23 = var31;
                break;
            }
        }
    }

    var12 = func_02070fd0(var0, arg1);
    var5 = func_0206f4f0(var3, (short)arg1);
    if (!var12) return -1;
    if (!var5) return -1;

    for (var6 = 0; var6 < 2; var6++) {
        for (int var32 = 0; var32 < var16->unknown_4_[arg2].unknown_a_0_; var32++) {
            var13 = (Struct_ov000_02161380_2*)func_0200fea4(var1, var16->unknown_4_[arg2].unknown_2_[var32] + 0xc0);
            if (!var13) continue;
            unsigned char var33[2];
            var33[0] = (var13->unknown_138_->unknown_18_ & 0x2000) != 0;
            var33[1] = func_02010088((Struct_02010088*)var13);
            if (var33[var6] == 0) continue;
            if (var13->unknown_184_ != 0) continue;

            var16->unknown_4_[arg2].unknown_a_4_++;
            var16->unknown_1_0_++;
            var8 = var13->unknown_138_->unknown_25_;
            var11 = func_ov000_02161bb8((unsigned char*)&var16->unknown_4c_[var23]);
            func_02048934(var13, (Struct_02048934*)var12, (Random*)arg0->unknown_29c_);
            var9 = var13->unknown_188_;
            unsigned short var34 = var13->unknown_18a_;
            var10 = var13->unknown_138_;
            func_020891cc(var10);
            func_02089630(var10, var12 + 0x2c, 0);
            var13->unknown_138_->unknown_0_ = var9;
            var13->unknown_138_->unknown_4_ = var9;
            var13->unknown_138_->unknown_2_ = var34;
            var13->unknown_138_->unknown_6_ = var34;
            var13->unknown_186_ = arg1;
            var13->unknown_18c_ = arg2;
            var13->unknown_18d_ = var11;
            var13->unknown_184_ = 1;
            var16->unknown_4c_[var23].unknown_4_ |= 1 << var13->unknown_18d_;
            func_ov000_02161bec((unsigned char*)&var16->unknown_4c_[var23]);
            var16->unknown_4c_[var23].unknown_4_ &= ~(1 << var8);
            return (short)(var16->unknown_4_[arg2].unknown_2_[var32] + 0xc0);
        }
    }

    if (var4 >= 0xc0) {
        int var35 = var4 - 0xc0;
        var7 = &arg0->unknown_2a0_->unknown_158_[var35];
        var15 = &arg0->unknown_5e24_[var35];
        func_020891cc(var7);
        if (var15) {
            func_02048614((unsigned char*)var15);
            func_02049c88(var15, &arg0->unknown_6aa4_[var35]);
            func_02089630(var7, var12 + 0x2c, 0);
            var15->unknown_0_.SetField06(arg0->unknown_ec8_);
            var15->unknown_138_ = var7;
            var15->unknown_134_ = var12 + 0x2c;
            var15->unknown_148_ = var12;
            func_02048850((Struct_02048850*)var15, var5);
            func_02048934(var15, (Struct_02048934*)var12, (Random*)arg0->unknown_29c_);
            unsigned short var36 = var15->unknown_188_;
            unsigned short var37 = var15->unknown_18a_;
            var15->unknown_138_->unknown_0_ = var36;
            var15->unknown_138_->unknown_4_ = var36;
            var15->unknown_138_->unknown_2_ = var37;
            var15->unknown_138_->unknown_6_ = var37;
            unsigned char* var38 = (unsigned char*)&var16->unknown_4c_[var23];
            unsigned char var39 = func_ov000_02161bb8(var38);
            if (var39 == 1) var39 = 0;
            var15->unknown_0_.unknown_2_ = arg1;
            var15->unknown_17c_ = arg2;
            var15->unknown_138_->unknown_25_ = var39;
            func_020488ec((char*)var15);
            var15->unknown_186_ = arg1;
            var15->unknown_18c_ = arg2;
            var15->unknown_18d_ = var39;
            var15->unknown_184_ = 1;
            var15->unknown_0_.MakeHidden();
            func_02049f3c((unsigned char*)var15);
            var16->unknown_4c_[var23].unknown_4_ |= 1 << var15->unknown_18d_;
            func_ov000_02161bec(var38);
            func_0200fd38(var1, var4, (GameObject*)var15);
            var16->unknown_4_[arg2].unknown_2_[var16->unknown_4_[arg2].unknown_a_0_] = var35;
            var16->unknown_4_[arg2].unknown_a_0_++;
            var16->unknown_4_[arg2].unknown_a_4_++;
            var16->unknown_0_++;
            var16->unknown_1_0_++;
            if (func_0202b7d8((int*)var2)) {
                func_0202c1a4((Struct_0202c1a4*)var2);
            }
            return var4;
        }
    }
    return -1;
}
