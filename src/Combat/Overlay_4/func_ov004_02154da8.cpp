#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov004_021537a8(void* arg0, int arg1, int arg2);
extern "C" int func_ov023_021e1de8(void* arg0, int arg1, int arg2, int arg3);

class Struct_ov004_02154da8 {
public:
    virtual void inline_ov004_02154da8_40(); virtual void inline_ov004_02154da8_41(); virtual void inline_ov004_02154da8_42(); virtual void inline_ov004_02154da8_43();
    virtual void inline_ov004_02154da8_44(); virtual void inline_ov004_02154da8_45(); virtual void inline_ov004_02154da8_46(); virtual void inline_ov004_02154da8_47();
    virtual void inline_ov004_02154da8_48(); virtual void inline_ov004_02154da8_49(); virtual void inline_ov004_02154da8_50(); virtual void inline_ov004_02154da8_51();
    virtual void inline_ov004_02154da8_52(); virtual void inline_ov004_02154da8_53(); virtual void inline_ov004_02154da8_54(); virtual void inline_ov004_02154da8_55();
    virtual void inline_ov004_02154da8_56(); virtual void inline_ov004_02154da8_57(); virtual void inline_ov004_02154da8_58(); virtual void inline_ov004_02154da8_59();
    virtual void inline_ov004_02154da8_60(); virtual void inline_ov004_02154da8(); virtual void inline_ov004_02154da8_2(); virtual void inline_ov004_02154da8_3();
    virtual void inline_ov004_02154da8_4(); virtual void inline_ov004_02154da8_5(); virtual void inline_ov004_02154da8_6(); virtual void inline_ov004_02154da8_7();
    virtual void inline_ov004_02154da8_8(); virtual void inline_ov004_02154da8_9(); virtual void inline_ov004_02154da8_10(); virtual void inline_ov004_02154da8_11();
    virtual void inline_ov004_02154da8_12(); virtual void inline_ov004_02154da8_13(); virtual void inline_ov004_02154da8_14(); virtual void inline_ov004_02154da8_15();
    virtual void inline_ov004_02154da8_16(); virtual void inline_ov004_02154da8_17(); virtual void inline_ov004_02154da8_18(); virtual void inline_ov004_02154da8_19();
    virtual void inline_ov004_02154da8_20(); virtual void inline_ov004_02154da8_21(); virtual void inline_ov004_02154da8_22(); virtual void inline_ov004_02154da8_23();
    virtual void inline_ov004_02154da8_24(); virtual void inline_ov004_02154da8_25(); virtual void inline_ov004_02154da8_26(); virtual void inline_ov004_02154da8_27();
    virtual void inline_ov004_02154da8_28(); virtual void inline_ov004_02154da8_29(); virtual void inline_ov004_02154da8_30(); virtual void inline_ov004_02154da8_31();
    virtual void inline_ov004_02154da8_32(); virtual void inline_ov004_02154da8_33(); virtual void inline_ov004_02154da8_34(); virtual void inline_ov004_02154da8_35();
    virtual void inline_ov004_02154da8_36(); virtual void inline_ov004_02154da8_37(); virtual void inline_ov004_02154da8_38();
    virtual void* inline_ov004_02154da8_39();
};
extern "C" Struct_ov004_02154da8* func_ov023_021f6880(void*, int);

// USA: func_ov004_02154da8
extern "C" ARM int func_ov004_02154da8(void* arg0) {
    Struct_ov004_02154da8* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 0x12) return 0;
    void* var1 = var0->inline_ov004_02154da8_39();
    if (!var0) return 0;
    unsigned short var2 = 0x1a;
    short var3 = 0;
    for (; var3 <= 0xb; var2++, var3++) {
        if (func_ov023_021e1de8(var1, -1, 0, var3) == 0) {
            func_ov004_021537a8(arg0, var2, 0);
        }
    }
    return 0;
}
