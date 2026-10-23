#if defined(jpn)
#define R(j,u) (j)
#define data_ov001_02164ca4 data_ov001_02166270
#define data_ov028_021d9aa0 data_ov028_021da400
#define func_ov014_02188330 func_ov014_02189234
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_02191f04 func_ov015_02192a48
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov004_02153e20;

struct Struct_ov004_02153e20_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov004_02153e20_3 {
    Struct_ov004_02153e20_3* unknown_0_;
    Struct_ov004_02153e20_2* unknown_4_;
};

struct Struct_ov004_02153e20_4 {
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
};

struct Struct_ov004_02153e20_5 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x13];
    int unknown_20_;
};

struct Struct_ov004_02153e20_6 {
    char unknown_0_[0x104];
    short unknown_104_;
    short unknown_106_;
};

class Struct_ov004_02153e20_7 {
public:
    virtual void inline_ov004_02153e20(); virtual void inline_ov004_02153e20_2(); virtual void inline_ov004_02153e20_3(); virtual void inline_ov004_02153e20_4();
    virtual void inline_ov004_02153e20_5(); virtual void inline_ov004_02153e20_6(); virtual void inline_ov004_02153e20_7(); virtual void inline_ov004_02153e20_8();
    virtual void inline_ov004_02153e20_9(); virtual void inline_ov004_02153e20_10(); virtual void inline_ov004_02153e20_11(); virtual void inline_ov004_02153e20_12();
    virtual void inline_ov004_02153e20_13(); virtual void inline_ov004_02153e20_14(); virtual void inline_ov004_02153e20_15(); virtual void inline_ov004_02153e20_16();
    virtual void inline_ov004_02153e20_17(); virtual void inline_ov004_02153e20_18(); virtual void inline_ov004_02153e20_19(); virtual void inline_ov004_02153e20_20();
    virtual void inline_ov004_02153e20_21(); virtual void inline_ov004_02153e20_22(); virtual void inline_ov004_02153e20_23(); virtual void inline_ov004_02153e20_24();
    virtual void inline_ov004_02153e20_25(); virtual void inline_ov004_02153e20_26(); virtual void inline_ov004_02153e20_27(); virtual void inline_ov004_02153e20_28();
    virtual void inline_ov004_02153e20_29(); virtual void inline_ov004_02153e20_30(); virtual void inline_ov004_02153e20_31(); virtual void inline_ov004_02153e20_32();
    virtual void inline_ov004_02153e20_33(); virtual void inline_ov004_02153e20_34(); virtual void inline_ov004_02153e20_35(); virtual void inline_ov004_02153e20_36();
    virtual void inline_ov004_02153e20_37(); virtual void inline_ov004_02153e20_38(); virtual void inline_ov004_02153e20_39(); virtual void inline_ov004_02153e20_40();
    virtual void inline_ov004_02153e20_41(); virtual void inline_ov004_02153e20_42(); virtual void inline_ov004_02153e20_43(); virtual void inline_ov004_02153e20_44();
    virtual void inline_ov004_02153e20_45(); virtual void inline_ov004_02153e20_46(); virtual void inline_ov004_02153e20_47(); virtual void inline_ov004_02153e20_48();
    virtual void inline_ov004_02153e20_49(); virtual void inline_ov004_02153e20_50(); virtual void inline_ov004_02153e20_51(); virtual void inline_ov004_02153e20_52();
    virtual void inline_ov004_02153e20_53(); virtual void inline_ov004_02153e20_54(); virtual void inline_ov004_02153e20_55(); virtual void inline_ov004_02153e20_56();
    virtual void inline_ov004_02153e20_57(); virtual void inline_ov004_02153e20_58(); virtual void inline_ov004_02153e20_59();
    virtual Struct_ov004_02153e20_3** inline_ov004_02153e20_60();
};

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" unsigned char* func_0205ec34(void);
extern "C" int func_ov023_021f9b30(struct Struct_ov004_02153e20* arg0, unsigned short arg1, unsigned int arg2, unsigned int arg3);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov023_021f9d14(void* arg0, void* arg1);
extern "C" void func_ov023_021f809c(void* arg0, void* arg1);
extern "C" int func_ov004_02153d8c(void* arg0);

// USA: func_ov004_02153e20
extern "C" ARM int func_ov004_02153e20(void* arg0) {
    void* var0 = func_ov011_021849c8(arg0);
    short var1, var2;
    Struct_ov004_02153e20_4* var3 = (Struct_ov004_02153e20_4*)func_ov023_021f6880(var0, 0x2c);
    if (!var3) return 0;
    if (func_ov023_021f6f10(var3) != 7) return 0;
    var1 = var3->unknown_5c_;
    var2 = var3->unknown_5e_;
    Struct_ov004_02153e20_7* var4 = (Struct_ov004_02153e20_7*)func_ov023_021f6880(var0, 0x39);
    if (!var4) return 0;
    if (func_ov023_021f6f10(var4) != 0x12) return 0;
    Struct_ov004_02153e20_3** var5 = var4->inline_ov004_02153e20_60();
    if (!var5) return 0;
    Struct_ov004_02153e20_3* var6 = *var5;
    if (!var6) return 0;
    unsigned char* var7 = func_0205ec34();

    short var8 = var1 * 16;
    short var9 = 0;
    while (var6) {
        if (var9 == var8) break;
        var9++;
        var6 = var6->unknown_0_;
    }

    for (short var10 = 0; var10 < 16; var10++) {
        int var11 = var10 + 0x1a;
        Struct_ov004_02153e20_5* var12 = (Struct_ov004_02153e20_5*)func_ov023_021f6880(var0, var11);
        if (var12 && func_ov023_021f6f10(var12) == 8) {
            var12->unknown_20_ = 0;
            var12->unknown_c_ &= ~8;
            if (!var6) {
                func_ov023_021f9b30((Struct_ov004_02153e20*)var3, 0, (unsigned short)(var10 >> 1), (unsigned short)(var10 & 1));
                var12->unknown_c_ |= 8;
            } else {
                func_ov023_021f9b30((Struct_ov004_02153e20*)var3, (unsigned short)var11, (unsigned short)(var10 >> 1), (unsigned short)(var10 & 1));
                Struct_ov004_02153e20_2* var13 = var6->unknown_4_;
                if (var13) {
                    int var14 = (unsigned short)((var13->unknown_c_ << 9) >> 21);
                    if (var14 > 0) {
                        if (func_0206dfb0((int)var7, var7 + 0x8c, var14 + 0x76 + 0xc00)) {
                            var12->unknown_20_ = var13->unknown_4_;
                        }
                    }
                }
                var6 = var6->unknown_0_;
            }
        }
    }

    func_ov023_021f9d14(var3, arg0);
    Struct_ov004_02153e20_6* var15 = (Struct_ov004_02153e20_6*)func_ov023_021f6880(var0, 3);
    if (!var15) return 0;
    if (func_ov023_021f6f10(var15) != 6) return 0;
    var15->unknown_104_ = var1;
    var15->unknown_106_ = var2;
    func_ov023_021f809c(var15, arg0);
    func_ov004_02153d8c(arg0);
    return 0;
}
