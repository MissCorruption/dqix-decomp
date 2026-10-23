#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" void* func_0205ec34(void);
extern "C" int func_020deb58(void*, int, int, int, int);
extern "C" void* func_020dec30(void*, int, int, int, int, int);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

class Struct_ov004_02153b6c_2 {
public:
	virtual void inline_ov004_02153b6c_36(); virtual void inline_ov004_02153b6c_37(); virtual void inline_ov004_02153b6c_38(); virtual void inline_ov004_02153b6c_39();
	virtual void inline_ov004_02153b6c_40(); virtual void inline_ov004_02153b6c_41(); virtual void inline_ov004_02153b6c_42(); virtual void inline_ov004_02153b6c_43();
	virtual void inline_ov004_02153b6c_44(); virtual void inline_ov004_02153b6c_45(); virtual void inline_ov004_02153b6c_46(); virtual void inline_ov004_02153b6c_47();
	virtual void inline_ov004_02153b6c_48(); virtual void inline_ov004_02153b6c_49(); virtual void inline_ov004_02153b6c_50(); virtual void inline_ov004_02153b6c_51();
	virtual void inline_ov004_02153b6c_52(); virtual void inline_ov004_02153b6c_53(); virtual void inline_ov004_02153b6c_54(); virtual void inline_ov004_02153b6c_55();
	virtual void inline_ov004_02153b6c_56(); virtual void inline_ov004_02153b6c_57(); virtual void inline_ov004_02153b6c_58(); virtual void inline_ov004_02153b6c_59();
	virtual void inline_ov004_02153b6c(); virtual void inline_ov004_02153b6c_2(); virtual void inline_ov004_02153b6c_3(); virtual void inline_ov004_02153b6c_4();
	virtual void inline_ov004_02153b6c_5(); virtual void inline_ov004_02153b6c_6(); virtual void inline_ov004_02153b6c_7(); virtual void inline_ov004_02153b6c_8();
	virtual void inline_ov004_02153b6c_9(); virtual void inline_ov004_02153b6c_10(); virtual void inline_ov004_02153b6c_11(); virtual void inline_ov004_02153b6c_12();
	virtual void inline_ov004_02153b6c_13(); virtual void inline_ov004_02153b6c_14(); virtual void inline_ov004_02153b6c_15(); virtual void inline_ov004_02153b6c_16();
	virtual void inline_ov004_02153b6c_17(); virtual void inline_ov004_02153b6c_18(); virtual void inline_ov004_02153b6c_19(); virtual void inline_ov004_02153b6c_20();
	virtual void inline_ov004_02153b6c_21(); virtual void inline_ov004_02153b6c_22(); virtual void inline_ov004_02153b6c_23(); virtual void inline_ov004_02153b6c_24();
	virtual void inline_ov004_02153b6c_25(); virtual void inline_ov004_02153b6c_26(); virtual void inline_ov004_02153b6c_27(); virtual void inline_ov004_02153b6c_28();
	virtual void inline_ov004_02153b6c_29(); virtual void inline_ov004_02153b6c_30(); virtual void inline_ov004_02153b6c_31(); virtual void inline_ov004_02153b6c_32();
	virtual void inline_ov004_02153b6c_33(); virtual void inline_ov004_02153b6c_34();
	virtual void* inline_ov004_02153b6c_35();
};

struct Struct_ov004_02153b6c {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_ov004_02153b6c
extern "C" ARM void func_ov004_02153b6c(void* arg0, int arg1, int arg2, int arg3, short* arg4, short* arg5) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2d);
    if (var0) {
        if (func_ov023_021f6f10(var0) == 0x11) {
            void* var1 = ((Struct_ov004_02153b6c_2*)var0)->inline_ov004_02153b6c_35();
            void* var2 = func_0205ec34();
            int var3 = func_020deb58(var1, 1, arg1, arg2, arg3);

            short var4 = 0;
            short var5;
            for (var5 = 0; var5 < var3; var5++) {
                struct Struct_ov004_02153b6c* var6 = (struct Struct_ov004_02153b6c*)func_020dec30(var1, var5, 1, arg1, arg2, arg3);
                if (var6) {
                    int var7 = (var6->unknown_c_ << 9) >> 21;
                    var7 = (unsigned short)var7;
                    if (var7 > 0) {
                        if (func_0206dfb0((int)var2, (unsigned char*)var2 + 0x8c, var7 + 0x76 + 0xc00)) {
                            var4++;
                        }
                    }
                }
            }
            *arg4 = var4;
            *arg5 = (short)var3;
        }
    }
}
