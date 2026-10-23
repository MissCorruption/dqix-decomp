#include <globaldefs.h>

extern "C" int func_ov004_0215513c(void*, short*, short*, short*);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov023_021e1f0c(int arg0, short arg1, short arg2, short arg3);
extern "C" void func_ov023_021f65d4(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021f6600(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021f65b4(void*, void*, short, short);

class Struct_ov004_021555b0 {
public:
    virtual void inline_ov004_021555b0_44(); virtual void inline_ov004_021555b0_45(); virtual void inline_ov004_021555b0_46(); virtual void inline_ov004_021555b0_47();
    virtual void inline_ov004_021555b0_48(); virtual void inline_ov004_021555b0_49(); virtual void inline_ov004_021555b0_50(); virtual void inline_ov004_021555b0_51();
    virtual void inline_ov004_021555b0_52(); virtual void inline_ov004_021555b0_53(); virtual void inline_ov004_021555b0_54(); virtual void inline_ov004_021555b0_55();
    virtual void inline_ov004_021555b0_56(); virtual void inline_ov004_021555b0_57(); virtual void inline_ov004_021555b0_58(); virtual void inline_ov004_021555b0_59();
    virtual void inline_ov004_021555b0_60(); virtual void inline_ov004_021555b0(); virtual void inline_ov004_021555b0_2(); virtual void inline_ov004_021555b0_3();
    virtual void inline_ov004_021555b0_4(); virtual void inline_ov004_021555b0_5(); virtual void inline_ov004_021555b0_6(); virtual void inline_ov004_021555b0_7();
    virtual void inline_ov004_021555b0_8(); virtual void inline_ov004_021555b0_9(); virtual void inline_ov004_021555b0_10(); virtual void inline_ov004_021555b0_11();
    virtual void inline_ov004_021555b0_12(); virtual void inline_ov004_021555b0_13(); virtual void inline_ov004_021555b0_14(); virtual void inline_ov004_021555b0_15();
    virtual void inline_ov004_021555b0_16(); virtual void inline_ov004_021555b0_17(); virtual void inline_ov004_021555b0_18(); virtual void inline_ov004_021555b0_19();
    virtual void inline_ov004_021555b0_20(); virtual void inline_ov004_021555b0_21(); virtual void inline_ov004_021555b0_22(); virtual void inline_ov004_021555b0_23();
    virtual void inline_ov004_021555b0_24(); virtual void inline_ov004_021555b0_25(); virtual void inline_ov004_021555b0_26(); virtual void inline_ov004_021555b0_27();
    virtual void inline_ov004_021555b0_28(); virtual void inline_ov004_021555b0_29(); virtual void inline_ov004_021555b0_30(); virtual void inline_ov004_021555b0_31();
    virtual void inline_ov004_021555b0_32(); virtual void inline_ov004_021555b0_33(); virtual void inline_ov004_021555b0_34(); virtual void inline_ov004_021555b0_35();
    virtual void inline_ov004_021555b0_36(); virtual void inline_ov004_021555b0_37(); virtual void inline_ov004_021555b0_38(); virtual void inline_ov004_021555b0_39();
    virtual void inline_ov004_021555b0_40(); virtual void inline_ov004_021555b0_41(); virtual void inline_ov004_021555b0_42();
    virtual int inline_ov004_021555b0_43();
};

// USA: func_ov004_021555b0
extern "C" ARM int func_ov004_021555b0(void* arg0) {
    short var0, var1, var2;
    func_ov004_0215513c(arg0, &var0, &var1, &var2);

    void* var3 = func_ov011_021849c8(arg0);
    void* var4 = func_ov023_021f6880(var3, 0x39);
    if (!var4) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var4) != 0x12) return 0;
#else
    if (func_ov024_021f6f10(var4) != 0x12) return 0;
#endif

    int var5 = ((Struct_ov004_021555b0*)var4)->inline_ov004_021555b0_43();
    if (!var4) return 0;

    int var6 = func_ov023_021e1f0c(var5, var0, var1, var2);
    short var7 = (var6 + 15) / 16;

    if (var6 == 0) {
        func_ov023_021f65d4(arg0, 0xa, 8);
        func_ov023_021f6600(arg0, 3, 4);
        unsigned short var8 = 0x1a, var9 = 0;
        for (; var9 < 0x10; var8++, var9++) {
            func_ov023_021f65d4(arg0, var8, 8);
        }
        func_ov023_021f6600(arg0, 0x3a, 8);
    } else {
        func_ov023_021f65d4(arg0, 0x3a, 8);
    }

    func_ov023_021f65b4(arg0, (void*)0x2c, 0, var7);
    return 0;
}
