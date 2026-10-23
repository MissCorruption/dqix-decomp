#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct Struct_ov031_0220a184_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x2e];
    unsigned char unknown_30_[0x425];
    unsigned char unknown_455_;
    unsigned char unknown_456_[0x3e];
    unsigned char unknown_494_[0x100];
    int unknown_594_;
    unsigned char unknown_598_[8];
    int unknown_5a0_;
    unsigned char unknown_5a4_[8];
    unsigned char unknown_5ac_;
};

struct Struct_ov031_0220a184 {
    unsigned char unknown_0_[0xc];
    Struct_ov031_0220a184_2* unknown_c_;
};

extern "C" void func_ov031_022037a8(const void*, int, int, int, Struct_ov031_0220a184*);
extern "C" void func_ov031_02209cf8(void*, int);
extern "C" void func_ov031_0220c8d0(unsigned short*, unsigned char*, int, int);
extern "C" unsigned int func_ov031_02207cf0();
extern "C" void func_ov031_0220c2bc(unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_02207d3c(unsigned int);
extern "C" void func_ov031_022098ac(void*, int, int);
extern unsigned char data_ov031_02245fa8[8];
extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220a184
extern "C" ARM int func_ov031_0220a184(Struct_ov031_0220a184* arg0) {
    Struct_ov031_0220a184_2* var0 = arg0->unknown_c_;
    unsigned short* var1;
    unsigned short* var2;
    int var3;
    unsigned char* var4;
    int var5;
    if (var0->unknown_5ac_)
        func_ov031_022037a8(data_ov031_02245fa8, 7, 0, 0, arg0);
    var0->unknown_0_ = 3;
    var0->unknown_1_ = 0;
    func_ov031_02209cf8(var0->unknown_2_, 0x2e);
    var5 = var0->unknown_594_;
    var3 = (var5 * 2) / 2;
    var4 = (unsigned char*)data_ov031_0224c994(var5);
    if (var4 == 0) {
        var0->unknown_455_ = 9;
        return 9;
    }
    var4[0] = 0;
    var4[1] = 2;
    func_ov031_02209cf8(var4 + 2, var5 - 0x33);
    var4[var5 - 0x31] = 0;
    VectorizedInvertedMemcpy(var0, var4 + var5 - 0x30, 0x30);
    var1 = (unsigned short*)data_ov031_0224c994(var3 * 8);
    if (var1 == 0) {
        data_ov031_0224c9c0(var4);
        var0->unknown_455_ = 9;
        return 9;
    }
    unsigned short* var6 = var1 + var3;
    unsigned short* var7 = var6 + var3;
    var2 = var7 + var3;
    func_ov031_0220c8d0(var6, var4, var5, var3);
    func_ov031_0220c8d0(var7, var0->unknown_598_, var0->unknown_5a0_, var3);
    func_ov031_0220c8d0(var2, var0->unknown_494_, var5, var3);
    unsigned int var8 = func_ov031_02207cf0();
    func_ov031_0220c2bc(var1, var6, var7, var3, var2);
    func_ov031_02207d3c(var8);
    unsigned char* var9 = (unsigned char*)data_ov031_0224c994(var5 + 0x49);
    if (var9 == 0) {
        data_ov031_0224c9c0(var4);
        data_ov031_0224c9c0(var1);
        var0->unknown_455_ = 9;
        return 9;
    }
    var9[0] = 0x16;
    var9[1] = 3;
    var9[2] = 0;
    var9[3] = (var5 + 4) >> 8;
    var9[4] = var5 + 4;
    var9[5] = 0x10;
    var9[6] = var5 >> 16;
    var9[7] = var5 >> 8;
    var9[8] = var5;
    unsigned char* var10 = var9 + 9;
    if (var5 & 1)
        *var10++ = var1[var5 / 2];
    int var11 = var5 / 2 - 1;
    if (var11 >= 0) {
        do {
            *var10 = var1[var11] >> 8;
            var10[1] = var1[var11];
            --var11;
            var10 += 2;
        } while (var11 >= 0);
    }
    func_ov031_022037a8(var9, var5 + 9, 0, 0, arg0);
    func_ov031_022098ac(var0, (int)(var9 + 5), var5 + 4);
    data_ov031_0224c9c0(var9);
    data_ov031_0224c9c0(var1);
    return data_ov031_0224c9c0(var4);
}
