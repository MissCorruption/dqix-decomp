#include <globaldefs.h>

extern "C" int func_ov031_0223d414(void* arg0);
extern "C" int func_ov031_0223d69c(void* arg0);
extern "C" void func_ov031_022368e0(void);
extern "C" void func_ov031_02235488(int arg0);
extern "C" void func_ov031_02235744(int arg0);

extern int data_ov031_022493b8;
extern unsigned char data_ov031_022491f4[];

struct Struct_ov031_022353b8 {
    char unknown_0_[0x10];
    unsigned short unknown_10_;
    char unknown_12_[0x16 - 0x12];
    unsigned short unknown_16_;
    unsigned char unknown_18_;
    unsigned char unknown_19_;
    char unknown_1a_;
    unsigned char unknown_1b_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
};

extern Struct_ov031_022353b8* data_ov031_02290cf4;

// USA: func_ov031_022353b8
extern "C" ARM void func_ov031_022353b8(void) {
    unsigned short var0[2];

    if (!func_ov031_0223d414(&data_ov031_022493b8)) {
        goto fail;
    }

    func_ov031_0223d69c(var0);

    {
        Struct_ov031_022353b8* var1 = data_ov031_02290cf4;
        if (var0[0] < var1->unknown_10_ - 0x1e) {
            goto fail;
        }

        int var2 = var0[1] - var1->unknown_16_;
        int var3 = var1->unknown_18_ + var2;
        if (var3 < 0) {
            var3 = 0;
        } else {
            unsigned char var4 = data_ov031_022491f4[var1->unknown_1b_];
            int var5 = var1->unknown_19_ - var4;
            if (var3 >= var5) var3 = var5;
        }

        func_ov031_02235488(var3);
        func_ov031_02235744(var3);
        data_ov031_02290cf4->unknown_1d_ = 2;
        return;
    }

fail:
    func_ov031_022368e0();
    data_ov031_02290cf4->unknown_1c_ = 0;
    data_ov031_02290cf4->unknown_1d_ = 3;
}
