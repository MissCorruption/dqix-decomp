#include <globaldefs.h>

struct Struct_ov006_021537d0 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_[3];
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 4;
    unsigned short unknown_b_0_ : 4;
    unsigned short unknown_b_4_ : 4;
    unsigned int unknown_c_0_ : 10;
    unsigned int unknown_d_2_ : 10;
    unsigned int unknown_e_4_ : 8;
    unsigned int unknown_f_4_ : 4;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 2;
    unsigned int unknown_12_6_ : 1;
    unsigned int unknown_12_7_ : 9;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    Struct_ov006_021537d0* unknown_1c_;
};

struct Struct_02071d60;

extern "C" Struct_ov006_021537d0* func_02071d60(Struct_02071d60* arg0, int arg1);

struct Struct_ov006_021537c8 {
    Struct_02071d60* unknown_0_;
    short** unknown_4_;
    unsigned char** unknown_8_;
    unsigned short* unknown_c_;
    Struct_ov006_021537d0* unknown_10_;
    short unknown_14_[3];
    signed char unknown_1a_[3];
    void* unknown_20_;
    unsigned short unknown_24_;
};

// USA: func_ov006_021537d0
extern "C" ARM int func_ov006_021537d0(Struct_ov006_021537c8* arg0, short arg1) {
    if (arg0->unknown_c_ == 0)
        return 0;
    arg0->unknown_10_ = func_02071d60(arg0->unknown_0_, arg1);
    if (arg0->unknown_10_ == 0)
        return 0;
    if (arg0->unknown_10_->unknown_4_[0] > 0 && arg0->unknown_10_->unknown_a_0_ != 0) {
        arg0->unknown_14_[0] = -1;
        arg0->unknown_1a_[0] = -1;
        for (signed char var0 = 0; var0 < 9; var0++) {
            short* var1 = arg0->unknown_4_[var0];
            unsigned short var2 = arg0->unknown_c_[var0];
            for (unsigned short var3 = 0; var3 < var2; var3++) {
                if (arg0->unknown_10_->unknown_4_[0] == var1[var3]) {
                    arg0->unknown_14_[0] = var3;
                    arg0->unknown_1a_[0] = var0;
                    break;
                }
            }
        }
        if (arg0->unknown_14_[0] < 0)
            return 0;
        if (arg0->unknown_10_->unknown_a_0_ > arg0->unknown_8_[arg0->unknown_1a_[0]][arg0->unknown_14_[0]])
            return 0;
    }
    if (arg0->unknown_10_->unknown_4_[1] > 0 && arg0->unknown_10_->unknown_a_4_ != 0) {
        arg0->unknown_14_[1] = -1;
        arg0->unknown_1a_[1] = -1;
        for (signed char var4 = 0; var4 < 9; var4++) {
            short* var5 = arg0->unknown_4_[var4];
            unsigned short var6 = arg0->unknown_c_[var4];
            for (unsigned short var7 = 0; var7 < var6; var7++) {
                if (arg0->unknown_10_->unknown_4_[1] == var5[var7]) {
                    arg0->unknown_14_[1] = var7;
                    arg0->unknown_1a_[1] = var4;
                    break;
                }
            }
        }
        if (arg0->unknown_14_[1] < 0)
            return 0;
        if (arg0->unknown_10_->unknown_a_4_ > arg0->unknown_8_[arg0->unknown_1a_[1]][arg0->unknown_14_[1]])
            return 0;
    }
    if (arg0->unknown_10_->unknown_4_[2] > 0 && arg0->unknown_10_->unknown_b_0_ != 0) {
        arg0->unknown_14_[2] = -1;
        arg0->unknown_1a_[2] = -1;
        for (signed char var8 = 0; var8 < 9; var8++) {
            short* var9 = arg0->unknown_4_[var8];
            unsigned short var10 = arg0->unknown_c_[var8];
            for (unsigned short var11 = 0; var11 < var10; var11++) {
                if (arg0->unknown_10_->unknown_4_[2] == var9[var11]) {
                    arg0->unknown_14_[2] = var11;
                    arg0->unknown_1a_[2] = var8;
                    break;
                }
            }
        }
        if (arg0->unknown_14_[2] < 0)
            return 0;
        if (arg0->unknown_10_->unknown_b_0_ > arg0->unknown_8_[arg0->unknown_1a_[2]][arg0->unknown_14_[2]])
            return 0;
    }
    return 1;
}
