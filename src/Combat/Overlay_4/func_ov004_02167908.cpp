#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

class Struct_ov004_02167908 {
public:
    virtual void inline_ov004_02167908_27(); virtual void inline_ov004_02167908_28(); virtual void inline_ov004_02167908_29(); virtual void inline_ov004_02167908_30(); virtual void inline_ov004_02167908_31(); virtual void inline_ov004_02167908_32(); virtual void inline_ov004_02167908_33(); virtual void inline_ov004_02167908_34(); virtual void inline_ov004_02167908_35(); virtual void inline_ov004_02167908_36(); virtual void inline_ov004_02167908_37(); virtual void inline_ov004_02167908_38(); virtual void inline_ov004_02167908_39(); virtual void inline_ov004_02167908_40(); virtual void inline_ov004_02167908_41(); virtual void inline_ov004_02167908_42(); virtual void inline_ov004_02167908_43(); virtual void inline_ov004_02167908_44(); virtual void inline_ov004_02167908_45(); virtual void inline_ov004_02167908_46(); virtual void inline_ov004_02167908_47(); virtual void inline_ov004_02167908_48(); virtual void inline_ov004_02167908_49(); virtual void inline_ov004_02167908_50(); virtual void inline_ov004_02167908_51(); virtual void inline_ov004_02167908_52(); virtual void inline_ov004_02167908_53(); virtual void inline_ov004_02167908_54(); virtual void inline_ov004_02167908_55(); virtual void inline_ov004_02167908_56(); virtual void inline_ov004_02167908_57(); virtual void inline_ov004_02167908_58(); virtual void inline_ov004_02167908_59(); virtual void inline_ov004_02167908(); virtual void inline_ov004_02167908_2(); virtual void inline_ov004_02167908_3(); virtual void inline_ov004_02167908_4(); virtual void inline_ov004_02167908_5(); virtual void inline_ov004_02167908_6(); virtual void inline_ov004_02167908_7(); virtual void inline_ov004_02167908_8(); virtual void inline_ov004_02167908_9(); virtual void inline_ov004_02167908_10(); virtual void inline_ov004_02167908_11(); virtual void inline_ov004_02167908_12(); virtual void inline_ov004_02167908_13(); virtual void inline_ov004_02167908_14(); virtual void inline_ov004_02167908_15(); virtual void inline_ov004_02167908_16(); virtual void inline_ov004_02167908_17(); virtual void inline_ov004_02167908_18(); virtual void inline_ov004_02167908_19(); virtual void inline_ov004_02167908_20(); virtual void inline_ov004_02167908_21(); virtual void inline_ov004_02167908_22(); virtual void inline_ov004_02167908_23(); virtual void inline_ov004_02167908_24(); virtual void inline_ov004_02167908_25();
    virtual int inline_ov004_02167908_26();
};

// USA: func_ov004_02167908
extern "C" ARM int func_ov004_02167908(void* arg0, int arg1) {
    Struct_ov004_02167908* var0 = (Struct_ov004_02167908*)func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) goto ret0;
    if (func_ov024_021f6f10(var0) != 0x11) goto ret0;
    return var0->inline_ov004_02167908_26();
ret0:
    return 0;
}
