#include <globaldefs.h>

struct Struct_ov000_02179cdc_2 {
    unsigned char unknown_0_[0x15];
    unsigned char unknown_15_;
};

struct Struct_ov004_02170b90_2 {
    struct Struct_ov000_02179cdc_2 unknown_0_[26];
    unsigned char unknown_23c_;
    unsigned char unknown_23d_;
    unsigned char unknown_23e_;
    unsigned char unknown_23f_;
};

extern struct Struct_ov004_02170b90_2 data_ov004_02170b90[] __attribute__((aligned(4)));
extern int data_ov004_0216fe90[];

// USA: func_ov004_0215ef9c
extern "C" ARM void func_ov004_0215ef9c(int arg0) {
    struct Struct_ov004_02170b90_2* var0 = &data_ov004_02170b90[arg0 ? 0 : 1];
    if (var0->unknown_23f_ <= 1) {
        var0->unknown_23c_ = 0;
        return;
    }
    int var1 = var0->unknown_23c_;
    int var2 = 0;
    if (var1 >= 26) {
        var2 = 3;
    } else {
        int var3 = 0;
        while (var3 < 4) {
            if (--var1 < 0) {
                break;
            }
            if (var0->unknown_0_[data_ov004_0216fe90[var1] - 1].unknown_15_) {
                var3++;
            }
        }
        if (var1 < 0) {
            var2 = 1;
        }
    }
    if (var2 >= 1) {
        int var4 = 0;
        for (int var5 = 0; var5 < 26; var5++) {
            if (var0->unknown_0_[data_ov004_0216fe90[var5] - 1].unknown_15_) {
                var4++;
                if (var4 & 1) {
                    var1 = var5;
                }
            }
        }
        int var6 = 0;
        while (var6 < var2 - 1) {
            if (--var1 < 0) {
                break;
            }
            if (var0->unknown_0_[data_ov004_0216fe90[var1] - 1].unknown_15_) {
                var6++;
            }
        }
        if (var1 < 0) {
            var1 = 0;
        }
    }
    var0->unknown_23c_ = var1;
}
