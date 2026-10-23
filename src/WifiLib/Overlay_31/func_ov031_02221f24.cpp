#include "NitroSDK/OverlayMD5.h"

extern const unsigned char data_ov031_0224b194[64];

// USA: func_ov031_02221f24
extern "C" THUMB void func_ov031_02221f24(unsigned char* arg0, Struct_ov031_02221e84* arg1) {
    unsigned char var0[8];
    func_ov031_022227c0(var0, arg1->unknown_10_, 8);
    unsigned int var1 = (arg1->unknown_10_[0] >> 3) & 0x3f;
    unsigned int var2 = var1 < 0x38 ? 0x38 - var1 : 0x78 - var1;
    func_ov031_02221eac(arg1, data_ov031_0224b194, var2);
    func_ov031_02221eac(arg1, var0, 8);
    func_ov031_022227c0(arg0, arg1->unknown_0_, 0x10);
    func_ov031_02222830(arg1, 0, sizeof(*arg1));
}
