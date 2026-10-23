#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

class Struct_ov004_02156fd4 {
public:
    virtual void inline_ov004_02156fd4_27(); virtual void inline_ov004_02156fd4_28(); virtual void inline_ov004_02156fd4_29(); virtual void inline_ov004_02156fd4_30(); virtual void inline_ov004_02156fd4_31(); virtual void inline_ov004_02156fd4_32(); virtual void inline_ov004_02156fd4_33(); virtual void inline_ov004_02156fd4_34(); virtual void inline_ov004_02156fd4_35(); virtual void inline_ov004_02156fd4_36(); virtual void inline_ov004_02156fd4_37(); virtual void inline_ov004_02156fd4_38(); virtual void inline_ov004_02156fd4_39(); virtual void inline_ov004_02156fd4_40(); virtual void inline_ov004_02156fd4_41(); virtual void inline_ov004_02156fd4_42(); virtual void inline_ov004_02156fd4_43(); virtual void inline_ov004_02156fd4_44(); virtual void inline_ov004_02156fd4_45(); virtual void inline_ov004_02156fd4_46(); virtual void inline_ov004_02156fd4_47(); virtual void inline_ov004_02156fd4_48(); virtual void inline_ov004_02156fd4_49(); virtual void inline_ov004_02156fd4_50(); virtual void inline_ov004_02156fd4_51(); virtual void inline_ov004_02156fd4_52(); virtual void inline_ov004_02156fd4_53(); virtual void inline_ov004_02156fd4_54(); virtual void inline_ov004_02156fd4_55(); virtual void inline_ov004_02156fd4_56(); virtual void inline_ov004_02156fd4_57(); virtual void inline_ov004_02156fd4_58(); virtual void inline_ov004_02156fd4_59(); virtual void inline_ov004_02156fd4(); virtual void inline_ov004_02156fd4_2(); virtual void inline_ov004_02156fd4_3(); virtual void inline_ov004_02156fd4_4(); virtual void inline_ov004_02156fd4_5(); virtual void inline_ov004_02156fd4_6(); virtual void inline_ov004_02156fd4_7(); virtual void inline_ov004_02156fd4_8(); virtual void inline_ov004_02156fd4_9(); virtual void inline_ov004_02156fd4_10(); virtual void inline_ov004_02156fd4_11(); virtual void inline_ov004_02156fd4_12(); virtual void inline_ov004_02156fd4_13(); virtual void inline_ov004_02156fd4_14(); virtual void inline_ov004_02156fd4_15(); virtual void inline_ov004_02156fd4_16(); virtual void inline_ov004_02156fd4_17(); virtual void inline_ov004_02156fd4_18(); virtual void inline_ov004_02156fd4_19(); virtual void inline_ov004_02156fd4_20(); virtual void inline_ov004_02156fd4_21(); virtual void inline_ov004_02156fd4_22(); virtual void inline_ov004_02156fd4_23(); virtual void inline_ov004_02156fd4_24(); virtual void inline_ov004_02156fd4_25();
    virtual int inline_ov004_02156fd4_26();
};

// USA: func_ov004_02156fd4
extern "C" ARM int func_ov004_02156fd4(void* arg0, int arg1) {
    Struct_ov004_02156fd4* var0 = (Struct_ov004_02156fd4*)func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) goto ret0;
    if (func_ov024_021f6f10(var0) != 0x11) goto ret0;
    return var0->inline_ov004_02156fd4_26();
ret0:
    return 0;
}
