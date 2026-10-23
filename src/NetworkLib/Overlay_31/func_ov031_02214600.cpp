#include <globaldefs.h>

struct Struct_ov031_02214600_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_[0x20];
};

struct Struct_ov031_02214600 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};

extern "C" int func_ov031_0221474c(void*);
extern "C" void VectorizedInvertedMemcpy(const void*, void*, unsigned int);
extern unsigned char data_ov031_02245fe0[];

// USA: func_ov031_02214600
extern "C" ARM int func_ov031_02214600(void* arg0) {
    Struct_ov031_02214600_2* var0 = (Struct_ov031_02214600_2*)((char*)arg0 + 0x300);
    int var1 = func_ov031_0221474c(arg0);
    unsigned int var2 = ((Struct_ov031_02214600*)((char*)arg0 + 0xd0c))->unknown_0_0_;
    var0 += var1;
    if (var2 == 0 || var2 == 6) {
        VectorizedInvertedMemcpy(data_ov031_02245fe0, var0->unknown_4_, 8);
        var0->unknown_3_ = 8;
        var0->unknown_1_ = 8;
        var1 = (var1 + 1) & 0xff;
    }
    return var1;
}
