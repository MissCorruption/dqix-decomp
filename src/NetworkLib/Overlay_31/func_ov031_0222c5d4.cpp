#include <globaldefs.h>

struct Struct_ov031_0222c5d4_2 {
    unsigned char unknown_0_[0x26];
    unsigned short unknown_26_;
    unsigned char unknown_28_;
    unsigned char unknown_29_[0x2a - 0x29];
};

struct Struct_ov031_0222c5d4 {
    Struct_ov031_0222c5d4_2* unknown_0_;
    unsigned char unknown_4_[0x51 - 4];
    unsigned char unknown_51_;
};
struct Struct_ov031_02290c8c_12 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    Struct_ov031_0222c5d4* unknown_4_;
};
extern Struct_ov031_02290c8c_12 data_ov031_02290c8c;

// USA: func_ov031_0222c5d4
extern "C" ARM void func_ov031_0222c5d4(int arg0, int arg1) {
    Struct_ov031_0222c5d4* var0 = data_ov031_02290c8c.unknown_4_;
    if (arg0 >= var0->unknown_51_) return;

    unsigned char var1 = var0->unknown_0_[arg0].unknown_28_;
    void* var2 = *(void**)((char*)var0 + 0x10 + arg1 * 4);
    unsigned short var3 = *(unsigned short*)((char*)var0 + 0x42 + var1 * 2);
    unsigned short* var4 = (unsigned short*)((char*)var2 + 4);
    *var4 = (*var4 & ~0x3ff) | var3;

    Struct_ov031_0222c5d4* var5 = data_ov031_02290c8c.unknown_4_;
    void* var6 = *(void**)((char*)var5 + 0x24 + arg1 * 4);
    unsigned short var7 = var5->unknown_0_[arg0].unknown_26_;
    unsigned short var8 = *(unsigned short*)((char*)var5 + 0x48 + var7 * 2);
    unsigned short* var9 = (unsigned short*)((char*)var6 + 4);
    *var9 = (*var9 & ~0x3ff) | var8;
}
