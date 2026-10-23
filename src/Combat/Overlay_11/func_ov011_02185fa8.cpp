#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

// Real virtual call; target method at vtable index 0xc4/4 = 49.
// See func_ov011_02187cd8.cpp for why a class w/
// dummy virtuals (rather than a manual fn-ptr struct) matches mwcc's
// single-scratch pointer chase (ldr ip,[r0]; ldr ip,[ip,#0xc4]).
class Struct_ov011_02185fa8 {
public:
    virtual void inline_ov011_02185fa8_28(); virtual void inline_ov011_02185fa8_29(); virtual void inline_ov011_02185fa8_30(); virtual void inline_ov011_02185fa8_31();
    virtual void inline_ov011_02185fa8_32(); virtual void inline_ov011_02185fa8_33(); virtual void inline_ov011_02185fa8_34(); virtual void inline_ov011_02185fa8_35();
    virtual void inline_ov011_02185fa8_36(); virtual void inline_ov011_02185fa8_37(); virtual void inline_ov011_02185fa8_38(); virtual void inline_ov011_02185fa8_39();
    virtual void inline_ov011_02185fa8_40(); virtual void inline_ov011_02185fa8_41(); virtual void inline_ov011_02185fa8_42(); virtual void inline_ov011_02185fa8_43();
    virtual void inline_ov011_02185fa8_44(); virtual void inline_ov011_02185fa8_45(); virtual void inline_ov011_02185fa8_46(); virtual void inline_ov011_02185fa8_47();
    virtual void inline_ov011_02185fa8_48(); virtual void inline_ov011_02185fa8_49(); virtual void inline_ov011_02185fa8_50(); virtual void inline_ov011_02185fa8();
    virtual void inline_ov011_02185fa8_2(); virtual void inline_ov011_02185fa8_3(); virtual void inline_ov011_02185fa8_4(); virtual void inline_ov011_02185fa8_5();
    virtual void inline_ov011_02185fa8_6(); virtual void inline_ov011_02185fa8_7(); virtual void inline_ov011_02185fa8_8(); virtual void inline_ov011_02185fa8_9();
    virtual void inline_ov011_02185fa8_10(); virtual void inline_ov011_02185fa8_11(); virtual void inline_ov011_02185fa8_12(); virtual void inline_ov011_02185fa8_13();
    virtual void inline_ov011_02185fa8_14(); virtual void inline_ov011_02185fa8_15(); virtual void inline_ov011_02185fa8_16(); virtual void inline_ov011_02185fa8_17();
    virtual void inline_ov011_02185fa8_18(); virtual void inline_ov011_02185fa8_19(); virtual void inline_ov011_02185fa8_20(); virtual void inline_ov011_02185fa8_21();
    virtual void inline_ov011_02185fa8_22(); virtual void inline_ov011_02185fa8_23(); virtual void inline_ov011_02185fa8_24(); virtual void inline_ov011_02185fa8_25();
    virtual void inline_ov011_02185fa8_26();
    virtual void inline_ov011_02185fa8_27(int arg0, int arg1, int arg2);
};
extern "C" struct Struct_ov011_02185fa8* func_ov023_021f6880(void*, int);

// USA: func_ov011_02185fa8
extern "C" ARM int func_ov011_02185fa8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x18));
    struct Struct_ov011_02185fa8* var4 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (!var4) return 0;
    var4->inline_ov011_02185fa8_27(var1, var2, var3);
    return 1;
}
