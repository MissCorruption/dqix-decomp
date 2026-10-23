#include <globaldefs.h>

struct Struct_ov004_021707e8_4 {
#if defined(jpn)
    unsigned char unknown1_0_[4];
    signed char unknown_6_;
    unsigned char unknown_5_;
    unsigned char unknown1_7_;
    unsigned char unknown_7_;
    signed char unknown_b_;
    unsigned char unknown_9_[3];
#else
    unsigned char unknown_0_[6];
    signed char unknown_6_;
    unsigned char unknown1_7_;
    unsigned char unknown_8_[3];
    signed char unknown_b_;
#endif
    char* unknown_c_;
    unsigned char unknown_10_[0xc];
    int unknown_1c_;
};

struct Struct_ov004_02161c18 {
    short unknown_0_[7];
    unsigned char unknown_e_[7];
    unsigned char unknown_15_;
};

struct Struct_ov004_02170b90_3 {
    struct Struct_ov004_02161c18 unknown_0_[26];
    unsigned char unknown_23c_;
    unsigned char unknown_23d_[2];
    unsigned char unknown_23f_;
};

class Struct_ov004_02161c18_2 {
public:
    virtual void inline_ov004_02161c18_46(); virtual void inline_ov004_02161c18_47(); virtual void inline_ov004_02161c18_48(); virtual void inline_ov004_02161c18_49();
    virtual void inline_ov004_02161c18_50(); virtual void inline_ov004_02161c18_51(); virtual void inline_ov004_02161c18_52(); virtual void inline_ov004_02161c18_53();
    virtual void inline_ov004_02161c18_54(); virtual void inline_ov004_02161c18_55(); virtual void inline_ov004_02161c18(); virtual void inline_ov004_02161c18_2();
    virtual void inline_ov004_02161c18_3(); virtual void inline_ov004_02161c18_4(); virtual void inline_ov004_02161c18_5(); virtual void inline_ov004_02161c18_6();
    virtual void inline_ov004_02161c18_7(); virtual void inline_ov004_02161c18_8(); virtual void inline_ov004_02161c18_9(); virtual void inline_ov004_02161c18_10();
    virtual void inline_ov004_02161c18_11(); virtual void inline_ov004_02161c18_12(); virtual void inline_ov004_02161c18_13(); virtual void inline_ov004_02161c18_14();
    virtual void inline_ov004_02161c18_15(); virtual void inline_ov004_02161c18_16(); virtual void inline_ov004_02161c18_17(); virtual void inline_ov004_02161c18_18();
    virtual void inline_ov004_02161c18_19(); virtual void inline_ov004_02161c18_20(); virtual void inline_ov004_02161c18_21(); virtual void inline_ov004_02161c18_22();
    virtual void inline_ov004_02161c18_23(); virtual void inline_ov004_02161c18_24(); virtual void inline_ov004_02161c18_25(); virtual void inline_ov004_02161c18_26();
    virtual void inline_ov004_02161c18_27(); virtual void inline_ov004_02161c18_28(); virtual void inline_ov004_02161c18_29(); virtual void inline_ov004_02161c18_30();
    virtual void inline_ov004_02161c18_31(); virtual void inline_ov004_02161c18_32(); virtual void inline_ov004_02161c18_33(); virtual void inline_ov004_02161c18_34();
    virtual void inline_ov004_02161c18_35(); virtual void inline_ov004_02161c18_36(); virtual void inline_ov004_02161c18_37(); virtual void inline_ov004_02161c18_38();
    virtual void inline_ov004_02161c18_39(); virtual void inline_ov004_02161c18_40(); virtual void inline_ov004_02161c18_41(); virtual void inline_ov004_02161c18_42();
    virtual void inline_ov004_02161c18_43(); virtual void inline_ov004_02161c18_44();
    virtual void inline_ov004_02161c18_45(int arg0);

    unsigned char unknown_4_[8];
    unsigned char unknown_c_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_02161c18_2* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void func_ov004_0215e574(void* arg0, unsigned short arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov004_0215e49c(void*, int, int);
extern "C" Struct_ov004_02161c18_2* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(Struct_ov004_02161c18_2* arg0);
extern "C" void func_ov004_0215f6f4(void* arg0, short arg1, short arg2, int arg3);

extern struct Struct_ov004_021707e8_4 data_ov004_021707e8;
extern struct Struct_ov004_02170b90_3 data_ov004_02170b90;
extern int data_ov004_0216fe90[];
#if defined(jpn)
extern short data_ov004_021710a8[];
extern unsigned char data_ov004_02171090[];
#else
extern short data_ov004_02170818[];
extern unsigned char data_ov004_02170814[];
#endif

// JPN: func_ov004_02161c18 (021624fc)
// USA: func_ov004_02161c18
extern "C" ARM int func_ov004_02161c18(void* arg0) {
    int var0;
    int var1;
    void* var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    int var8;
    Struct_ov004_02161c18_2* var9;
    int var10;
    int var11;
    int var12;
    unsigned char var13[2];
    struct Struct_ov004_02170b90_3* var14;
    struct Struct_ov004_02161c18* var15;

    data_ov004_021707e8.unknown1_7_ = 0x66;
    var3 = 0;
    var2 = func_ov011_021849c8(arg0);
    if (data_ov004_021707e8.unknown_6_ == 0) {
        var9 = func_ov004_0215e47c(arg0, 3);
        if (var9 != 0) var9->unknown_c_ &= ~4;
    } else {
        var9 = func_ov004_0215e47c(arg0, 3);
        if (var9 != 0) var9->unknown_c_ |= 4;
    }

    if (data_ov004_02170b90.unknown_23f_ != 0) {
        for (var6 = 0xd; var6 < 0xf; var6++) func_ov004_0215e49c(arg0, var6, 0x3a);
        for (var6 = 0xf; var6 < 0x1d; var6++) func_ov004_0215e49c(arg0, var6, 0x11e);
        func_ov004_0215e49c(arg0, 0x31, 0x3a);
        func_ov004_0215e49c(arg0, 0x32, 0x3a);
        for (var5 = 0; var5 < 3; var5++) {
            var9 = func_ov023_021f6880(var2, var5 + 0x65);
            if (var9 != 0) var9->unknown_c_ &= ~8;
        }
    #if !defined(jpn)
    func_ov004_0215e574(arg0, 0xc, 0xff, 0, 0);
#endif

        var14 = &data_ov004_02170b90;
        if (var14->unknown_23f_ <= 1) var14->unknown_23c_ = 0;
        var12 = var14->unknown_23c_;
        if (var12 >= 26) var12 = 0;
        var4 = 0;
        __clear(var13, 2);
        var10 = 0;
        for (var6 = var12; var6 < 26; var6++) {
            var11 = data_ov004_0216fe90[var6];
            var15 = &var14->unknown_0_[var11 - 1];
            if (!var15->unknown_15_) continue;
            {
                int var16;
                int var17;
                func_ov004_0215e49c(arg0, var4 + 0xd, var6 + 0x19f);
#if !defined(jpn)
                if (var4 == 0) {
                    func_ov004_0215e574(arg0, var4 + 0xd, 0x80, 0, 0);
                } else {
                    func_ov004_0215e574(arg0, var4 + 0xd, 0x80, 0x80, 0);
                }
#endif
                var9 = func_ov023_021f6880(var2, var4 + 0xd);
                if (var9 == 0) continue;
                var16 = data_ov004_021707e8.unknown_1c_;
#if defined(jpn)
                if (var11 != data_ov004_021710a8[var16] && var11 <= 0xe) var7 = 3;
                else var7 = 0xf;
                if (var11 == 0xd && data_ov004_02171090[var16] == 1) var7 = 0xf;
#else
                if (var11 != data_ov004_02170818[var16] && var11 <= 0xe) var7 = 3;
                else var7 = 0xf;
                if (var11 == 0xd && data_ov004_02170814[var16] == 1) var7 = 0xf;
#endif
                var9->inline_ov004_02161c18_45(var7);
                if (var7 == 0xf) var13[var4] = 1;

                for (var8 = 0; var8 < 7; var8++) {
                    int var18 = var15->unknown_0_[var8];
                    if (var18 < 0) break;
                    var17 = 0xf;
                    if (var4 == 1) var17 = 0x16;
                    func_ov004_0215e49c(arg0, var17 + var8, var18);
                    var9 = func_ov023_021f6880(var2, var17 + var8);
                    if (var9 != 0 && func_ov023_021f6f10(var9) == 8) var9->inline_ov004_02161c18_45(var7);
                }
            }
            var12 = var6 + 1;
            var10 = 1;
            if (++var4 == 2) break;
        }
        if (var10) {
            int var19 = 0;
            for (; var12 < 26; var12++) {
                if (var14->unknown_0_[data_ov004_0216fe90[var12] - 1].unknown_15_) {
                    var19 = 1;
                    break;
                }
            }
            if (!var19) var12 = 26;
            var14->unknown_23c_ = var12;
        }
        if (var13[0] == 0 && var13[1] == 0) var3 = 1;
    } else {
        for (var6 = 0xd; var6 < 0xf; var6++) func_ov004_0215e49c(arg0, var6, 0x3a);
        for (var6 = 0xf; var6 < 0x1d; var6++) func_ov004_0215e49c(arg0, var6, 0x11e);
        for (var5 = 0; var5 < 3; var5++) {
            var9 = func_ov023_021f6880(var2, var5 + 0x65);
            if (var9 != 0) var9->unknown_c_ |= 8;
        }
        func_ov004_0215e49c(arg0, 0x31, 0x1e2);
        func_ov004_0215e49c(arg0, 0x32, 0x1e3);
#if !defined(jpn)
        func_ov004_0215e574(arg0, 0x31, 0xff, 0, 0);
        func_ov004_0215e574(arg0, 0x32, 0xff, 0, 0);
#endif
    }

    var0 = 0xf;
    if (var3) var0 = 3;
    var9 = func_ov023_021f6880(var2, 0xc);
    if (var9 != 0 && func_ov023_021f6f10(var9) == 8) var9->inline_ov004_02161c18_45(var0);
    for (var1 = 0; var1 < 4; var1++) {
        var9 = func_ov023_021f6880(var2, var1 + 0x64);
        if (var9 != 0 && func_ov023_021f6f10(var9) == 0x13) var9->inline_ov004_02161c18_45(var0);
    }
    func_ov004_0215f6f4(arg0, data_ov004_021707e8.unknown_b_, data_ov004_021707e8.unknown_6_, var3);
    return 0;
}
