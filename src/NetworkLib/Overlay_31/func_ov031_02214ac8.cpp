#include <globaldefs.h>

extern "C" void* func_ov031_022133f8(unsigned int arg0);

struct Struct_ov031_02214ac8_2 {
    char unknown_0_[0x16];
    unsigned short unknown_16_;
};

struct Struct_ov031_02214ac8 {
    char unknown_0_[0xd00];
    Struct_ov031_02214ac8_2 unknown_d00_;
};

// USA: func_ov031_02214ac8
extern "C" ARM void* func_ov031_02214ac8(unsigned short arg0) {
    unsigned int var0 = arg0;
    Struct_ov031_02214ac8* var1 = (Struct_ov031_02214ac8*)func_ov031_022133f8(0x10);
    Struct_ov031_02214ac8_2* var2 = &var1->unknown_d00_;
    if (var0 > 13) var0 = 13;
    var2->unknown_16_ |= 1U << (var0 - 1);
    return var2;
}
