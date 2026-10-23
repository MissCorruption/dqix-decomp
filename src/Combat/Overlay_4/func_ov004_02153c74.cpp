#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov004_02153978(void*, short*, short*, short*);
extern "C" int func_ov023_021f9bc8(char* arg0);

struct Struct_ov004_02153c74 { struct Struct_ov004_02153c74* unknown_0_; int unknown_4_; };

class Struct_ov004_02153c74_2 {
public:
    virtual void inline_ov004_02153c74_37(); virtual void inline_ov004_02153c74_38(); virtual void inline_ov004_02153c74_39(); virtual void inline_ov004_02153c74_40();
    virtual void inline_ov004_02153c74_41(); virtual void inline_ov004_02153c74_42(); virtual void inline_ov004_02153c74_43(); virtual void inline_ov004_02153c74_44();
    virtual void inline_ov004_02153c74_45(); virtual void inline_ov004_02153c74_46(); virtual void inline_ov004_02153c74_47(); virtual void inline_ov004_02153c74_48();
    virtual void inline_ov004_02153c74_49(); virtual void inline_ov004_02153c74_50(); virtual void inline_ov004_02153c74_51(); virtual void inline_ov004_02153c74_52();
    virtual void inline_ov004_02153c74_53(); virtual void inline_ov004_02153c74_54(); virtual void inline_ov004_02153c74_55(); virtual void inline_ov004_02153c74_56();
    virtual void inline_ov004_02153c74_57(); virtual void inline_ov004_02153c74_58(); virtual void inline_ov004_02153c74_59(); virtual void inline_ov004_02153c74_60();
    virtual void inline_ov004_02153c74(); virtual void inline_ov004_02153c74_2(); virtual void inline_ov004_02153c74_3(); virtual void inline_ov004_02153c74_4();
    virtual void inline_ov004_02153c74_5(); virtual void inline_ov004_02153c74_6(); virtual void inline_ov004_02153c74_7(); virtual void inline_ov004_02153c74_8();
    virtual void inline_ov004_02153c74_9(); virtual void inline_ov004_02153c74_10(); virtual void inline_ov004_02153c74_11(); virtual void inline_ov004_02153c74_12();
    virtual void inline_ov004_02153c74_13(); virtual void inline_ov004_02153c74_14(); virtual void inline_ov004_02153c74_15(); virtual void inline_ov004_02153c74_16();
    virtual void inline_ov004_02153c74_17(); virtual void inline_ov004_02153c74_18(); virtual void inline_ov004_02153c74_19(); virtual void inline_ov004_02153c74_20();
    virtual void inline_ov004_02153c74_21(); virtual void inline_ov004_02153c74_22(); virtual void inline_ov004_02153c74_23(); virtual void inline_ov004_02153c74_24();
    virtual void inline_ov004_02153c74_25(); virtual void inline_ov004_02153c74_26(); virtual void inline_ov004_02153c74_27(); virtual void inline_ov004_02153c74_28();
    virtual void inline_ov004_02153c74_29(); virtual void inline_ov004_02153c74_30(); virtual void inline_ov004_02153c74_31(); virtual void inline_ov004_02153c74_32();
    virtual void inline_ov004_02153c74_33(); virtual void inline_ov004_02153c74_34(); virtual void inline_ov004_02153c74_35();
    virtual void* inline_ov004_02153c74_36();
};

// USA: func_ov004_02153c74
extern "C" ARM int func_ov004_02153c74(void* arg0) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, 0x2c);
    if (!var1) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var1) != 7) return 0;
#else
    if (func_ov024_021f6f10(var1) != 7) return 0;
#endif

    short var2 = *(short*)((char*)var1 + 0x5c);
    short var3, var4, var5;
    func_ov004_02153978(arg0, &var3, &var4, &var5);
    int var6 = func_ov023_021f9bc8((char*)var1) + (var2 << 4);

    void* var7 = func_ov023_021f6880(var0, 0x2d);
    if (!var7) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var7) != 0x11) return 0;
#else
    if (func_ov024_021f6f10(var7) != 0x11) return 0;
#endif

    void* var8 = func_ov023_021f6880(var0, 0x39);
    if (!var8) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var8) != 0x12) return 0;
#else
    if (func_ov024_021f6f10(var8) != 0x12) return 0;
#endif

    void* var9 = ((Struct_ov004_02153c74_2*)var8)->inline_ov004_02153c74_36();
    if (!var9) return 0;

    struct Struct_ov004_02153c74* var10 = *(struct Struct_ov004_02153c74**)var9;
    if (!var10) return 0;
    short var11 = 0;
    while (var10 != 0) {
        if (var11 == var6) break;
        var11++;
        var10 = var10->unknown_0_;
    }
    return var10 ? var10->unknown_4_ : 0;
}
