#include <globaldefs.h>

struct Struct_ov025_021ebb90_6 {
    int unknown_0_;
    unsigned char unknown_4_0_ : 6;
    unsigned char unknown_4_6_ : 2;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    int unknown_1c_;
    short unknown_20_;
    short unknown_22_;
    unsigned int unknown_24_;
    int unknown_28_;
    unsigned short unknown_2c_;
    short unknown_2e_;
    short unknown_30_;
    short unknown_32_;
    short unknown_34_;
    short unknown_36_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
};

struct Struct_ov025_021ecc54_3 {
    struct Struct_ov025_021ebb90_6 unknown_0_[12];
    unsigned char unknown_300_;
    unsigned char unknown_301_;
    unsigned short unknown_302_;
    short unknown_304_;
    unsigned char unknown_306_;
    unsigned char unknown_307_;
    int unknown_308_;
    void* unknown_30c_;
    unsigned char unknown_310_;
    unsigned char unknown_311_;
};

struct Struct_ov025_021ecc54_4 {
    unsigned long long unknown_0_;
    char unknown_8_[0x18];
    struct Struct_ov025_021ecc54_4* unknown_20_;
};

struct Struct_ov000_021600f8 {
    struct Struct_ov025_021ecc54_4* unknown_0_;
    char unknown_4_[0x14];
    unsigned char unknown_18_[3];
};

struct Struct_ov000_02160094 {
    struct Struct_ov025_021ecc54_4* unknown_0_[3];
    char unknown_c_[0x1a];
    unsigned char unknown_26_[6];
};

struct Struct_ov025_021ecc54 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

struct Struct_ov025_021ecc54_2 {
    struct Struct_ov025_021ecc54* unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    short unknown_14_;
    short unknown_16_;
    int unknown_18_;
    short unknown_1c_;
    short unknown_1e_;
    unsigned int unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    short unknown_2a_;
    short unknown_2c_;
    short unknown_2e_;
    short unknown_30_;
    short unknown_32_;
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    char unknown_36_[2];
    unsigned char unknown_38_;
};

struct Struct_ov000_0215440c;
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c*, int);
struct Struct_ov000_0215440c_2;
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" void func_ov025_021ebb24(struct Struct_ov025_021ebb90_6* arg0);
extern "C" int func_ov000_0215fd90(struct Struct_ov025_021ecc54_4* arg0, int arg1);
extern "C" void func_ov025_021ed0b8(struct Struct_ov025_021ecc54_3* arg0, struct Struct_ov025_021ebb90_6* arg1);

extern unsigned int data_ov025_021ef010[];
extern const int data_ov025_021ef008[];

// USA: func_ov025_021ecc54
extern "C" ARM void func_ov025_021ecc54(struct Struct_ov025_021ecc54_3* arg0, struct Struct_ov025_021ecc54_2* arg1) {
    int var0[2];
    struct Struct_ov025_021ebb90_6 var1;

    arg0->unknown_306_ = 0;
    var0[0] = arg1->unknown_0_->unknown_9_;
    var0[1] = arg1->unknown_0_->unknown_8_;

    for (int var2 = 0; var2 < 2; var2++) {
        if (arg1->unknown_26_ & data_ov025_021ef010[var2]) continue;
        for (int var3 = 0; var3 < var0[var2]; var3++) {
            struct Struct_ov025_021ecc54* var4 = arg1->unknown_0_;
            int var5 = -1;
            if (data_ov025_021ef008[var2] == 1) {
                struct Struct_ov000_021600f8* var6 = func_ov000_021600f8((Struct_ov000_0215440c*)var4, var3);
                if (var6 != 0) {
                    var5 = var6->unknown_18_[0];
                    var5 += var6->unknown_18_[1];
                    var5 += var6->unknown_18_[2];
                }
            } else if (data_ov025_021ef008[var2] == 0) {
                struct Struct_ov000_02160094* var7 = func_ov000_02160094((Struct_ov000_0215440c_2*)var4, var3);
                if (var7 != 0) {
                    var5 = var7->unknown_26_[0];
                    var5 += var7->unknown_26_[2];
                    var5 += var7->unknown_26_[3];
                    var5 += var7->unknown_26_[4];
                    var5 += var7->unknown_26_[5];
                    var5 += var7->unknown_26_[1];
                }
            }
            if (var5 <= 0) continue;

            func_ov025_021ebb24(&var1);
            int var8 = 0;
            struct Struct_ov025_021ecc54_4** var9 = 0;
            unsigned char* var10 = 0;
            if (data_ov025_021ef008[var2] == 1) {
                var8 = 1;
            } else if (data_ov025_021ef008[var2] == 0) {
                struct Struct_ov000_02160094* var11 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1->unknown_0_, var3);
                if (var11 != 0) {
                    var9 = var11->unknown_0_;
                    var10 = var11->unknown_26_;
                }
            }
            if (var9 != 0) {
                for (int var12 = 0; var12 < 3; var12++) {
                    struct Struct_ov025_021ecc54_4* var13 = *var9;
                    int var14 = *var10;
                    for (int var15 = 0; var15 < var14; var15++) {
                        if (data_ov025_021ef008[var2] == 0 && var13->unknown_0_ == 0x100) var1.unknown_6_ |= 6;
                        if (var13->unknown_0_ != 0) {
                            var8 = 1;
                            break;
                        }
                        var13++;
                    }
                    if (var8) break;
                    var9++;
                    var10++;
                }
            }

            var1.unknown_0_ = (int)arg1->unknown_0_;
            var1.unknown_4_0_ = var3;
            var1.unknown_4_6_ = data_ov025_021ef008[var2];
            if (arg1->unknown_26_ & 0x10) {
                var1.unknown_4_6_ = 2;
            } else if (arg1->unknown_26_ & 0x20) {
                var1.unknown_4_6_ = 3;
            }
            var1.unknown_5_ = 6;
            var1.unknown_c_ = arg1->unknown_4_;
            var1.unknown_14_ = arg1->unknown_c_;
            var1.unknown_18_ = arg1->unknown_10_;
            var1.unknown_10_ = arg1->unknown_8_;
            var1.unknown_28_ = arg1->unknown_18_;
            var1.unknown_22_ = arg1->unknown_1c_;
            var1.unknown_24_ = arg1->unknown_20_;
            var1.unknown_2c_ = arg1->unknown_28_;
            var1.unknown_2e_ = arg1->unknown_2a_;
            var1.unknown_30_ = arg1->unknown_2c_;
            var1.unknown_38_ = arg1->unknown_34_;
            var1.unknown_39_ = arg1->unknown_35_;
            var1.unknown_32_ = arg1->unknown_2e_;
            var1.unknown_34_ = arg1->unknown_30_;
            var1.unknown_36_ = arg1->unknown_32_;
            if (arg1->unknown_16_ < 0) {
                var1.unknown_20_ = arg1->unknown_14_;
                var1.unknown_22_ = arg1->unknown_1c_;
            } else {
                int var16;
                struct Struct_ov025_021ecc54* var17 = arg1->unknown_0_;
                if (data_ov025_021ef008[var2] == 1) {
                    struct Struct_ov000_021600f8* var18 = func_ov000_021600f8((Struct_ov000_0215440c*)var17, var3);
                    if (var18 != 0) {
                        for (struct Struct_ov025_021ecc54_4* var19 = var18->unknown_0_; var19 != 0; var19 = var19->unknown_20_) {
                            if (func_ov000_0215fd90(var19, 3)) {
                                var16 = 1;
                                goto checked;
                            }
                        }
                    }
                } else if (data_ov025_021ef008[var2] == 0) {
                    struct Struct_ov000_02160094* var20 = func_ov000_02160094((Struct_ov000_0215440c_2*)var17, var3);
                    if (var20 != 0) {
                        for (struct Struct_ov025_021ecc54_4* var21 = var20->unknown_0_[0]; var21 != 0; var21 = var21->unknown_20_) {
                            if (func_ov000_0215fd90(var21, 3)) {
                                var16 = 1;
                                goto checked;
                            }
                        }
                    }
                }
                var16 = 0;
            checked:
                if (var16) {
                    var1.unknown_20_ = arg1->unknown_16_;
                    var1.unknown_22_ = arg1->unknown_1e_;
                    var1.unknown_6_ |= 0x20;
                    var1.unknown_28_ &= ~1;
                } else {
                    var1.unknown_20_ = arg1->unknown_14_;
                    var1.unknown_22_ = arg1->unknown_1c_;
                }
            }
            if (var1.unknown_20_ < 0) var1.unknown_6_ |= 2;
            if (var1.unknown_22_ < 0) var1.unknown_6_ |= 4;
            if (!var8) var1.unknown_6_ |= 6;
            if (arg1->unknown_38_ != 0) var1.unknown_6_ |= 0x40;
            func_ov025_021ed0b8(arg0, &var1);
        }
    }
    arg0->unknown_302_ = arg1->unknown_24_;
    if (arg0->unknown_300_ != 0) arg0->unknown_310_ = 0;
}
