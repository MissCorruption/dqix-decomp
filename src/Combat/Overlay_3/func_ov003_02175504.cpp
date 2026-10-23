// USA: func_ov003_02175504
#include <globaldefs.h>

struct Struct_0207fdcc_2;
struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    void* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};
struct Struct_020dee58;

extern "C" unsigned char *func_02081da8(Struct_0207fdcc_2 *, int);
extern "C" bool func_0204c7cc(unsigned char *);
extern "C" Struct_020dee58 *func_020dedd0(Struct_0201099c_10 *, int);
extern "C" void func_020809c4(void *, int, int, short *, short *);
extern "C" int func_020dee58(Struct_020dee58 *);
extern "C" void func_ov003_0217585c(void *, int, int, int, unsigned char);
extern "C" bool func_0204c7e0(unsigned char *);

#if defined(jpn)
extern unsigned char data_ov003_0217e34d[];
extern unsigned char data_ov003_0217e32c[];
#else
extern unsigned char data_ov003_0217fabd[];
extern unsigned char data_ov003_0217fa9c[];
#endif

struct Struct_ov003_02175504 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_ov003_02175504_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x7c4];
#else
    unsigned char unknown1_0_[0x848];
#endif
    short unknown_848_[12];
    unsigned char unknown_860_[0x14];
    Struct_0201099c_10 unknown_874_;
    unsigned char unknown_88c_[0x10];
    Struct_0207fdcc_2* unknown_89c_;
    unsigned char unknown_8a0_[0xff8 - 0x8a0];
    int unknown_ff8_;
    unsigned char unknown_ffc_[2];
    short unknown_ffe_;
    unsigned char unknown_1000_[0xc];
    short unknown_100c_;
    unsigned char unknown_100e_[2];
    short unknown_1010_;
    short unknown_1012_;
    short unknown_1014_;
};

// USA: func_ov003_02175504
extern "C" ARM void func_ov003_02175504(Struct_ov003_02175504_2 *arg0) {
    Struct_0207fdcc_2 *var0     = arg0->unknown_89c_;
    unsigned char var1  = 6;
    unsigned char *var2 = func_02081da8(var0, 3);
    if (var2) {
        if (!func_0204c7cc(var2)) return;
        short var3 = 7;
        short var4 = (short) (arg0->unknown_1014_ * 6);
        for (unsigned char var5 = 0; var5 < 6; var5++) {
            Struct_020dee58 *var6 = func_020dedd0(&arg0->unknown_874_,
                                                                                arg0->unknown_848_[var4]);
            if (var6) {
                short var7, var8;
                func_020809c4(var0, 3, var3, &var7, &var8);
                int var9 = func_020dee58(var6);
                func_ov003_0217585c(arg0, var7, var8 - 1, (var9 + 6) & 0xff, var1);
            }
            var1++;
            var3++;
            var4++;
        }
        return;
    }
    if (arg0->unknown_100c_ == 0x77) {
        Struct_ov003_02175504 *var10 = 0;
        var2                   = func_02081da8(var0, 0x15);
        if (var2 && func_0204c7cc(var2)) var10 = (Struct_ov003_02175504 *) var2;
        var2 = func_02081da8(var0, 0x16);
        if (var2 && func_0204c7cc(var2)) var10 = (Struct_ov003_02175504 *) var2;
        var2 = func_02081da8(var0, 0x1e);
        if (var2 && func_0204c7cc(var2)) var10 = (Struct_ov003_02175504 *) var2;
        if (var10) {
            int var11 = var10->unknown_ac_;
            int var12 = var10->unknown_ae_;
            var11     = (short) (var11 << 3) + 3;
            var12     = (short) (var12 << 3) + 3;
#if defined(jpn)
            func_ov003_0217585c(arg0, var11, var12, data_ov003_0217e34d[(arg0->unknown_1012_ + (var1 - 0x124)) & 0xff], var1);
#else
            func_ov003_0217585c(arg0, var11, var12, data_ov003_0217fabd[(arg0->unknown_1012_ + (var1 - 0x124)) & 0xff], var1);
#endif
            return;
        }
    }
    if (arg0->unknown_ff8_ == 0) return;
    if (arg0->unknown_ffe_ < 0) return;
    var2 = func_02081da8(var0, 0xe);
    if (!var2) return;
    if (!func_0204c7e0(var2)) return;
    short var13 = 0x68;
    for (unsigned char var14 = 0; var14 < 8; var14++) {
        short var15, var16;
        func_020809c4(var0, 0xe, var13, &var15, &var16);
#if defined(jpn)
        func_ov003_0217585c(arg0, var15, var16 - 1, data_ov003_0217e32c[var14], var1);
#else
        func_ov003_0217585c(arg0, var15, var16 - 1, data_ov003_0217fa9c[var14], var1);
#endif
        var13++;
        var1++;
    }
}
