#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02214660_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_[0x20];
};
struct Struct_ov031_02214660 {
    unsigned char unknown_0_[0x300];
    Struct_ov031_02214660_2 unknown_300_[9];
    unsigned char unknown_444_[0x8c8];
    unsigned char unknown_d0c_0_ : 4;
    unsigned char unknown_d0c_4_ : 4;
};
extern "C" int func_ov031_0221474c(void*);
extern unsigned char data_ov031_02249abc[];
extern unsigned char data_ov031_02245fd8[];
extern unsigned char data_ov031_02245fe8[];

// USA: func_ov031_02214660
extern "C" ARM int func_ov031_02214660(Struct_ov031_02214660* arg0) {
    int var0;
    Struct_ov031_02214660_2* var1 = arg0->unknown_300_;
    var0 = func_ov031_0221474c(arg0);
    var1 += var0;
    if (arg0->unknown_d0c_0_ == 0 || arg0->unknown_d0c_0_ == 4) {
        VectorizedInvertedMemcpy(data_ov031_02249abc, var1->unknown_4_, 8);
        var1->unknown_3_ = 8;
        var1->unknown_1_ = 6;
        var0 = (var0 + 1) & 255;
        ++var1;
    }
    if (arg0->unknown_d0c_0_ == 0 || arg0->unknown_d0c_0_ == 7) {
        VectorizedInvertedMemcpy(data_ov031_02245fd8, var1->unknown_4_, 8);
        var1->unknown_3_ = 8;
        var1->unknown_1_ = 9;
        var0 = (var0 + 1) & 255;
        ++var1;
    }
    if (arg0->unknown_d0c_0_ == 0 || arg0->unknown_d0c_0_ == 8) {
        VectorizedInvertedMemcpy(data_ov031_02245fe8, var1->unknown_4_, 11);
        var1->unknown_3_ = 11;
        var1->unknown_1_ = 10;
        var0 = (var0 + 1) & 255;
    }
    return var0;
}
