#include <globaldefs.h>


struct Struct_ov031_0221474c_2 {
    unsigned char unknown_0_[0x40];
    unsigned char unknown_40_[0x20];
    unsigned char unknown_60_[0x20];
    unsigned char unknown_80_[0x67];
    unsigned char unknown_e7_;
    unsigned char unknown_e8_[0x18];
};

struct Struct_ov031_0221474c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_[0x20];
};

struct Struct_ov031_0221474c_3 {
    Struct_ov031_0221474c_2 unknown_0_[3];
    Struct_ov031_0221474c unknown_300_[1];
    unsigned char unknown_324_[0x9e8];
    unsigned char unknown_d0c_0_ : 4;
};

// USA: func_ov031_0221474c
extern "C" ARM int func_ov031_0221474c(Struct_ov031_0221474c_3* arg0) {
    int var0;
    unsigned char var1 = 0;
    Struct_ov031_0221474c_2* var2 = arg0->unknown_0_;
    var0 = 0;
    Struct_ov031_0221474c* var3 = arg0->unknown_300_;

    do {
        unsigned int var4 = arg0->unknown_d0c_0_;
        if (var4 == 0 || var4 == (unsigned int)(var0 + 1)) {
            if (var2->unknown_e7_ != 0xff) {
                unsigned char var5 = 0;
                bool var6;
                do {
                    unsigned char var7 = var2->unknown_40_[var5];
                    if (var7 == 0) {
                        break;
                    }
                    var3->unknown_4_[var5] = var7;
                    var5++;
                } while (var5 < 0x20);
                if (var5 != 0) {
                    var3->unknown_3_ = var5;
                    var3->unknown_1_ = var0;
                    var6 = true;
                } else {
                    var6 = false;
                }
                if (var6) {
                    var1++;
                    var3++;
                }

                if (var2->unknown_e7_ == 1) {
                    unsigned char var8 = 0;
                    bool var9;
                    do {
                        unsigned char var10 = var2->unknown_60_[var8];
                        if (var10 == 0) {
                            break;
                        }
                        var3->unknown_4_[var8] = var10;
                        var8++;
                    } while (var8 < 0x20);
                    if (var8 == 0) {
                        var9 = false;
                    } else {
                        var3->unknown_3_ = var8;
                        var3->unknown_1_ = var0 + 3;
                        var9 = true;
                    }
                    if (var9) {
                        var1++;
                        var3++;
                    }
                }
            }
        }
        var0++;
        var2++;
    } while (var0 < 3);
    return var1;
}
