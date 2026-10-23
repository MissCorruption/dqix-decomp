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

class Struct_ov004_02154e64 {
public:
    virtual void inline_ov004_02154e64_40(); virtual void inline_ov004_02154e64_41(); virtual void inline_ov004_02154e64_42(); virtual void inline_ov004_02154e64_43();
    virtual void inline_ov004_02154e64_44(); virtual void inline_ov004_02154e64_45(); virtual void inline_ov004_02154e64_46(); virtual void inline_ov004_02154e64_47();
    virtual void inline_ov004_02154e64_48(); virtual void inline_ov004_02154e64_49(); virtual void inline_ov004_02154e64_50(); virtual void inline_ov004_02154e64_51();
    virtual void inline_ov004_02154e64_52(); virtual void inline_ov004_02154e64_53(); virtual void inline_ov004_02154e64_54(); virtual void inline_ov004_02154e64_55();
    virtual void inline_ov004_02154e64_56(); virtual void inline_ov004_02154e64_57(); virtual void inline_ov004_02154e64_58(); virtual void inline_ov004_02154e64_59();
    virtual void inline_ov004_02154e64_60(); virtual void inline_ov004_02154e64(); virtual void inline_ov004_02154e64_2(); virtual void inline_ov004_02154e64_3();
    virtual void inline_ov004_02154e64_4(); virtual void inline_ov004_02154e64_5(); virtual void inline_ov004_02154e64_6(); virtual void inline_ov004_02154e64_7();
    virtual void inline_ov004_02154e64_8(); virtual void inline_ov004_02154e64_9(); virtual void inline_ov004_02154e64_10(); virtual void inline_ov004_02154e64_11();
    virtual void inline_ov004_02154e64_12(); virtual void inline_ov004_02154e64_13(); virtual void inline_ov004_02154e64_14(); virtual void inline_ov004_02154e64_15();
    virtual void inline_ov004_02154e64_16(); virtual void inline_ov004_02154e64_17(); virtual void inline_ov004_02154e64_18(); virtual void inline_ov004_02154e64_19();
    virtual void inline_ov004_02154e64_20(); virtual void inline_ov004_02154e64_21(); virtual void inline_ov004_02154e64_22(); virtual void inline_ov004_02154e64_23();
    virtual void inline_ov004_02154e64_24(); virtual void inline_ov004_02154e64_25(); virtual void inline_ov004_02154e64_26(); virtual void inline_ov004_02154e64_27();
    virtual void inline_ov004_02154e64_28(); virtual void inline_ov004_02154e64_29(); virtual void inline_ov004_02154e64_30(); virtual void inline_ov004_02154e64_31();
    virtual void inline_ov004_02154e64_32(); virtual void inline_ov004_02154e64_33(); virtual void inline_ov004_02154e64_34(); virtual void inline_ov004_02154e64_35();
    virtual void inline_ov004_02154e64_36(); virtual void inline_ov004_02154e64_37(); virtual void inline_ov004_02154e64_38();
    virtual void* inline_ov004_02154e64_39();
};
extern "C" Struct_ov004_02154e64* func_ov023_021f6880(void*, int);

// USA: func_ov004_02154e64
extern "C" ARM int func_ov004_02154e64(void* arg0) {
    Struct_ov004_02154e64* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 0x12) return 0;
    void* var1 = var0->inline_ov004_02154e64_39();
    if (!var0) return 0;
    unsigned short var2 = 0x1a;
    short var3 = 1;
    for (; var3 <= 7; var2++, var3++) {
        if (func_ov023_021e1de8(var1, -1, var3, -1) == 0) {
            func_ov004_021537a8(arg0, var2, 0);
        }
    }
    return 0;
}
