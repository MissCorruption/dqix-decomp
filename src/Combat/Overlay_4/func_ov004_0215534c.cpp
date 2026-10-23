#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov004_02153e20 {
    char unknown_0_[0x20];
    short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    char unknown_28_[0x34];
    short unknown_5c_;
    short unknown_5e_;
};

struct Struct_ov004_0215534c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov004_0215534c_3 {
    Struct_ov004_0215534c_3* unknown_0_;
    Struct_ov004_0215534c_2* unknown_4_;
};

struct Struct_ov004_0215534c_4 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x13];
    int unknown_20_;
};

class Struct_ov004_0215534c {
public:
	virtual void inline_ov004_0215534c(); virtual void inline_ov004_0215534c_2(); virtual void inline_ov004_0215534c_3(); virtual void inline_ov004_0215534c_4();
	virtual void inline_ov004_0215534c_5(); virtual void inline_ov004_0215534c_6(); virtual void inline_ov004_0215534c_7(); virtual void inline_ov004_0215534c_8();
	virtual void inline_ov004_0215534c_9(); virtual void inline_ov004_0215534c_10(); virtual void inline_ov004_0215534c_11(); virtual void inline_ov004_0215534c_12();
	virtual void inline_ov004_0215534c_13(); virtual void inline_ov004_0215534c_14(); virtual void inline_ov004_0215534c_15(); virtual void inline_ov004_0215534c_16();
	virtual void inline_ov004_0215534c_17(); virtual void inline_ov004_0215534c_18(); virtual void inline_ov004_0215534c_19(); virtual void inline_ov004_0215534c_20();
	virtual void inline_ov004_0215534c_21(); virtual void inline_ov004_0215534c_22(); virtual void inline_ov004_0215534c_23(); virtual void inline_ov004_0215534c_24();
	virtual void inline_ov004_0215534c_25(); virtual void inline_ov004_0215534c_26(); virtual void inline_ov004_0215534c_27(); virtual void inline_ov004_0215534c_28();
	virtual void inline_ov004_0215534c_29(); virtual void inline_ov004_0215534c_30(); virtual void inline_ov004_0215534c_31(); virtual void inline_ov004_0215534c_32();
	virtual void inline_ov004_0215534c_33(); virtual void inline_ov004_0215534c_34(); virtual void inline_ov004_0215534c_35(); virtual void inline_ov004_0215534c_36();
	virtual void inline_ov004_0215534c_37(); virtual void inline_ov004_0215534c_38(); virtual void inline_ov004_0215534c_39(); virtual void inline_ov004_0215534c_40();
	virtual void inline_ov004_0215534c_41(); virtual void inline_ov004_0215534c_42(); virtual void inline_ov004_0215534c_43(); virtual void inline_ov004_0215534c_44();
	virtual void inline_ov004_0215534c_45(); virtual void inline_ov004_0215534c_46(); virtual void inline_ov004_0215534c_47(); virtual void inline_ov004_0215534c_48();
	virtual void inline_ov004_0215534c_49(); virtual void inline_ov004_0215534c_50(); virtual void inline_ov004_0215534c_51(); virtual void inline_ov004_0215534c_52();
	virtual void inline_ov004_0215534c_53(); virtual void inline_ov004_0215534c_54(); virtual void inline_ov004_0215534c_55(); virtual void inline_ov004_0215534c_56();
	virtual void inline_ov004_0215534c_57(); virtual void inline_ov004_0215534c_58(); virtual void inline_ov004_0215534c_59();
	virtual Struct_ov004_0215534c_3** inline_ov004_0215534c_60();
};

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" void func_ov023_021f9d14(Struct_ov004_02153e20* arg0, void* arg1);
extern "C" int func_ov023_021f9b30(Struct_ov004_02153e20* arg0, unsigned short arg1, unsigned int arg2, unsigned int arg3);
extern "C" void func_ov023_021f9da0(void* arg0, unsigned char arg1);
extern "C" void func_ov023_021f6630(int arg0, int arg1, short arg2, short arg3);
extern "C" int func_ov004_021552b8(void* arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

// USA: func_ov004_0215534c
extern "C" ARM int func_ov004_0215534c(void* arg0) {
    void* var0;
    short var1;
    Struct_ov004_02153e20* var2;
    short var3;
    Struct_ov004_0215534c* var4;
    Struct_ov004_0215534c_3** var5;
    Struct_ov004_0215534c_3* var6;
    unsigned char* var7;
    short var8;
    short var9;
    int var10;
    Struct_ov004_0215534c_4* var11;

    var0 = func_ov011_021849c8(arg0);
    var2 = (Struct_ov004_02153e20*)func_ov023_021f6880(var0, 0x2c);
    if (!var2) return 0;
    if (func_ov023_021f6f10(var2) != 7) return 0;
    var1 = var2->unknown_5c_;
    var3 = var2->unknown_5e_;
    var4 = (Struct_ov004_0215534c*)func_ov023_021f6880(var0, 0x39);
    if (!var4) return 0;
    if (func_ov023_021f6f10(var4) != 0x12) return 0;
    var5 = var4->inline_ov004_0215534c_60();
    if (!var5) return 0;
    var6 = *var5;
    if (!var6) return 0;
    var7 = (unsigned char*)func_0205ec34();

    short var12 = var1 * 16;
    var8 = 0;
    while (var6) {
        if (var8 == var12) break;
        var8++;
        var6 = var6->unknown_0_;
    }

    for (var9 = 0; var9 < 16; var9++) {
        var10 = var9 + 0x1a;
        var11 = (Struct_ov004_0215534c_4*)func_ov023_021f6880(var0, var10);
        if (var11 && func_ov023_021f6f10(var11) == 8) {
            var11->unknown_20_ = 0;
            var11->unknown_c_ &= ~8;
            if (!var6) {
                func_ov023_021f9b30(var2, 0, (unsigned short)(var9 >> 1), (unsigned short)(var9 & 1));
                var11->unknown_c_ |= 8;
            } else {
                func_ov023_021f9b30(var2, (unsigned short)var10, (unsigned short)(var9 >> 1), (unsigned short)(var9 & 1));
                Struct_ov004_0215534c_2* var13 = var6->unknown_4_;
                if (var13) {
                    int var14 = (unsigned short)((var13->unknown_c_ << 9) >> 21);
                    if (var14 > 0) {
                        if (func_0206dfb0((int)var7, var7 + 0x8c, var14 + 0x76 + 0xc00)) {
                            var11->unknown_20_ = var13->unknown_4_;
                        }
                    }
                }
                var6 = var6->unknown_0_;
            }
        }
    }

    func_ov023_021f9da0(var2, 1);
    func_ov023_021f9d14(var2, arg0);
    func_ov023_021f6630((int)arg0, 3, var1, var3);
    func_ov004_021552b8(arg0);
    return 0;
}
