#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov027_021d9134_5 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
    unsigned char unknown_1_;
    unsigned short unknown_2_[10];
};

struct Struct_ov027_021d9134_2 {
    unsigned int unknown_0_;
    Struct_ov027_021d9134_5 unknown_4_;
    unsigned short unknown_1a_;
    unsigned char unknown_1c_;
};

struct Struct_ov027_021d9134_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x10];
};

struct Struct_ov027_021d9134_4 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned char unknown_18_;
};

struct Struct_ov027_021d9134_6 {
    unsigned char unknown_0_[0x5b8];
    Struct_ov027_021d9134_4* unknown_5b8_;
    void* unknown_5bc_;
    unsigned short unknown_5c0_;
    unsigned short unknown_5c2_;
    unsigned short unknown_5c4_;
    unsigned short unknown_5c6_;
    unsigned short unknown_5c8_;
    unsigned char unknown_5ca_;
    unsigned char unknown_5cb_;
    void* unknown_5cc_;
    unsigned int* unknown_5d0_;
};

struct Struct_ov027_021d9134 {
    unsigned char unknown_0_[0x1340];
    Struct_ov027_021d9134_5 unknown_1340_[15];
    unsigned short unknown_148a_[15];
    unsigned int unknown_14a8_[15];
    void* unknown_14e4_;
    int unknown_14e8_[15];
    unsigned char unknown_1524_;
    unsigned char unknown_1525_;
    signed char unknown_1526_[15];
    unsigned char unknown_1535_;
    unsigned short unknown_1536_;
    unsigned char unknown_1538_[0x1754 - 0x1538];
    unsigned short unknown_1754_[15];
    Struct_ov027_021d9134_5 unknown_1772_;
    Struct_ov027_021d9134_6 unknown_1788_[16];
};

extern Struct_ov027_021d9134* data_ov027_021e33ec;
extern unsigned int data_ov027_021dd920 __attribute__((aligned(32)));

extern "C" Struct_ov027_021d9134_2* func_ov027_021dd6bc(void* arg0, Struct_ov027_021d9134_3* arg1, unsigned int arg2);
extern "C" unsigned short func_ov027_021d9dd8(unsigned short arg0, unsigned short arg1);
extern "C" void func_ov027_021d8c20(int arg0, int arg1, int arg2);

// USA: func_ov027_021d9134
extern "C" ARM void func_ov027_021d9134(void* arg0, unsigned int arg1) {
    Struct_ov027_021d9134_3 var0;
    int var1;
    Struct_ov027_021d9134_2* var2;

    if (arg1 == 0 || arg1 > 15) {
        return;
    }

    var2 = func_ov027_021dd6bc((char*)arg0 + 0xa, &var0, arg1);
    var1 = data_ov027_021e33ec->unknown_14e8_[arg1 - 1];

    switch (var0.unknown_0_) {
    case 7: {
        if (var1 == 2) {
            Struct_ov027_021d9134_2 var3;

            if (var2 == NULL) {
                break;
            }

            VectorizedInvertedMemcpy(var2, &var3, 0x1d);

            data_ov027_021e33ec->unknown_14a8_[arg1 - 1] = var3.unknown_0_;
            data_ov027_021e33ec->unknown_148a_[arg1 - 1] = var3.unknown_1a_;

            VectorizedInvertedMemcpy(&var3.unknown_4_, &data_ov027_021e33ec->unknown_1340_[arg1 - 1],
                                     sizeof(Struct_ov027_021d9134_5));

            data_ov027_021e33ec->unknown_1340_[arg1 - 1].unknown_0_4_ = arg1;
            func_ov027_021d8c20(arg1, 0xa, (int)&var3.unknown_4_);
        }

        if (var1 == 0xa) {
            unsigned char var4, var5 = 0;
            unsigned char var6 = var2->unknown_1c_;

            if (var6 >= 16 || data_ov027_021e33ec->unknown_1788_[var6].unknown_5ca_ == 0
                || data_ov027_021e33ec->unknown_14a8_[arg1 - 1] != data_ov027_021e33ec->unknown_1788_[var6].unknown_5b8_->unknown_14_) {
                data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 4;
            } else {
                for (var4 = 0; var4 < 16; var4++) {
                    if (data_ov027_021e33ec->unknown_1788_[var6].unknown_5c6_ & (1 << var4)) {
                        var5++;
                    }
                }

                if (var5 >= data_ov027_021e33ec->unknown_1788_[var6].unknown_5b8_->unknown_18_) {
                    data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 0;
                    func_ov027_021d8c20(arg1, 0xb, 0);
                    break;
                }
            }

            switch (data_ov027_021e33ec->unknown_1754_[arg1 - 1]) {
            case 3:
                if (0 == (data_ov027_021e33ec->unknown_1536_ & (1 << arg1))) {
                    data_ov027_021e33ec->unknown_1535_++;
                    data_ov027_021e33ec->unknown_1536_ |= (1 << arg1);
                    data_ov027_021e33ec->unknown_1526_[arg1 - 1] = (signed char)var6;

                    data_ov027_021e33ec->unknown_1788_[var6].unknown_5c6_ |= 1 << arg1;
                    data_ov027_021e33ec->unknown_1788_[var6].unknown_5c8_ |= 1 << arg1;

                    data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 0;
                    func_ov027_021d8c20(arg1, 5, 0);
                }
                break;
            case 4:
                data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 0;
                func_ov027_021d8c20(arg1, 4, 0);
                break;
            }
        }
        break;
    }
    case 8:
        if (var1 == 5) {
            func_ov027_021d8c20(arg1, 0xe, 0);
        } else if (var1 == 0xe) {
            if (data_ov027_021e33ec->unknown_1754_[arg1 - 1] == 2) {
                unsigned char var7 = (unsigned char)data_ov027_021e33ec->unknown_1526_[arg1 - 1];
                data_ov027_021e33ec->unknown_1788_[var7].unknown_5c4_ |= (1 << arg1);
                data_ov027_021e33ec->unknown_1788_[var7].unknown_5c0_ = 0;
                data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 0;
                func_ov027_021d8c20(arg1, 6, 0);
            }
        }
        break;
    case 9:
        if (var1 == 6) {
            unsigned char var8 = (unsigned char)data_ov027_021e33ec->unknown_1526_[arg1 - 1];

            if (var8 == 0xff) {
                break;
            }

            data_ov027_021e33ec->unknown_1788_[var8].unknown_5c2_ =
                func_ov027_021d9dd8(data_ov027_021e33ec->unknown_1788_[var8].unknown_5c2_, var0.unknown_2_);
            data_ov027_021dd920 |= (1 << var8);
        }
        break;
    case 10:
        if (var1 == 6) {
            unsigned char var9 = (unsigned char)data_ov027_021e33ec->unknown_1526_[arg1 - 1];

            if (var9 == 0xff) {
                break;
            }

            data_ov027_021e33ec->unknown_1788_[var9].unknown_5c4_ &= ~(1 << arg1);

            func_ov027_021d8c20(arg1, 7, 0);
        } else if (var1 == 7) {
            if (data_ov027_021e33ec->unknown_1754_[arg1 - 1] == 5) {
                data_ov027_021e33ec->unknown_1754_[arg1 - 1] = 0;
                func_ov027_021d8c20(arg1, 8, 0);
                break;
            }
        }
        break;
    case 11:
        if (var1 == 8) {
            break;
        }
        break;
    default:
        break;
    }
}
