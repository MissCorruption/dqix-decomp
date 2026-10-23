#include <globaldefs.h>

struct Struct_ov031_022492e2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_ov031_0223cc18
extern "C" ARM void func_ov031_0223cc18(int arg0, int arg1, const Struct_ov031_022492e2* arg2) {
    if (arg0 == 1) {
        if (arg1 == 0) {
            int var0 = arg2->unknown_0_;
            int var1 = arg2->unknown_2_;
            int var2 = arg2->unknown_4_;
            int var3 = arg2->unknown_6_;
            *(volatile unsigned short*)0x04001040 = ((var0 << 8) & 0xff00) | (var2 & 0xff);
            *(volatile unsigned short*)0x04001044 = ((var1 << 8) & 0xff00) | (var3 & 0xff);
        } else {
            int var4 = arg2->unknown_0_;
            int var5 = arg2->unknown_2_;
            int var6 = arg2->unknown_4_;
            int var7 = arg2->unknown_6_;
            *(volatile unsigned short*)0x04001042 = ((var4 << 8) & 0xff00) | (var6 & 0xff);
            *(volatile unsigned short*)0x04001046 = ((var5 << 8) & 0xff00) | (var7 & 0xff);
        }
    } else {
        if (arg1 == 0) {
            int var8 = arg2->unknown_0_;
            int var9 = arg2->unknown_2_;
            int var10 = arg2->unknown_4_;
            int var11 = arg2->unknown_6_;
            *(volatile unsigned short*)0x04000040 = ((var8 << 8) & 0xff00) | (var10 & 0xff);
            *(volatile unsigned short*)0x04000044 = ((var9 << 8) & 0xff00) | (var11 & 0xff);
        } else {
            int var12 = arg2->unknown_0_;
            int var13 = arg2->unknown_2_;
            int var14 = arg2->unknown_4_;
            int var15 = arg2->unknown_6_;
            *(volatile unsigned short*)0x04000042 = ((var12 << 8) & 0xff00) | (var14 & 0xff);
            *(volatile unsigned short*)0x04000046 = ((var13 << 8) & 0xff00) | (var15 & 0xff);
        }
    }
}
