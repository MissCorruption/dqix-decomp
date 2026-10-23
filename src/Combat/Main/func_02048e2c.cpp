#include "Combat/FormationPosition.h"
#include <globaldefs.h>

struct Struct_02048e2c_2 {
    char unknown_0_[0x10];
    int unknown_10_[3];
    char unknown_1c_[0x4];
    unsigned int unknown_20_;
    unsigned char unknown_24_[0x10];
    unsigned char unknown_34_;
    char unknown_35_[0x3];
    int unknown_38_;
    unsigned short unknown_3c_;
    char unknown_3e_[0x2];
    int unknown_40_[3];
};

struct Struct_02048e2c {
    char unknown_0_[0x13c];
    Struct_02048e2c_2 *unknown_13c_;
    Struct_02048e2c_2 *inline_02048e2c() const { return unknown_13c_; }
};

static inline Struct_02048cf0 inline_02048e2c_2(const int &arg0) {
    return func_ov000_0216f74c(const_cast<int *>(&arg0));
}

// USA: func_02048e2c
extern "C" ARM void func_02048e2c(Struct_02048e2c *arg0) {
    if (arg0->unknown_13c_ == 0) {
        return;
    }

    {
        Struct_02048e2c_2 *var0  = arg0->unknown_13c_;
        unsigned char var1 = var0->unknown_24_[0];
        int var2;
        int var3 = 1;
        var2      = var3;
        while (var2 < arg0->unknown_13c_->unknown_34_) {
            const unsigned char *var4 = var0->unknown_24_;
            var4 += var2;
            unsigned char var5 = *var4;
            if (var1 != var5) {
                arg0->inline_02048e2c()->unknown_24_[var3] = var5;
                var0                               = arg0->unknown_13c_;
                var3++;
                var1 = var0->unknown_24_[var2];
            }
            var2++;
        }
        var0->unknown_34_ = var3;
    }

    if (arg0->unknown_13c_->unknown_34_ <= 1) {
        arg0->unknown_13c_->unknown_34_ = 0;
        return;
    }

    for (;;) {
        Struct_02048cf0 var6 = inline_02048e2c_2(arg0->unknown_13c_->unknown_24_[1]);
        int var7                  = var6.unknown_0_;
        int var8                  = var6.unknown_4_;
        if (arg0->unknown_13c_->unknown_40_[0] == var7 && arg0->unknown_13c_->unknown_40_[2] == var8) {
            arg0->unknown_13c_->unknown_34_--;
            if (arg0->unknown_13c_->unknown_34_ <= 1) {
                arg0->unknown_13c_->unknown_34_ = 0;
                return;
            }
            for (int var9 = 1; var9 < arg0->unknown_13c_->unknown_34_; var9++) {
                arg0->unknown_13c_->unknown_24_[var9] = arg0->unknown_13c_->unknown_24_[var9 + 1];
            }
        } else {
            arg0->unknown_13c_->unknown_20_ |= 0x10;
            return;
        }
    }
}
