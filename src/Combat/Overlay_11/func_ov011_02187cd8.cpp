#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

// The dispatched object is a C++ polymorphic type; the call site
// (obj->vtable[0xac])(obj, ...) is a real virtual call. Modelling it as a
// class with virtual methods (target method at vtable index 0xac/4 = 43) makes
// mwcc emit the ROM's single-scratch pointer chase (ldr ip,[r0]; ldr ip,[ip,#0xac])
// rather than the two-scratch form a manual function-pointer struct produces.
class Struct_ov011_02187cd8 {
public:
    virtual void inline_ov011_02187cd8_28(); virtual void inline_ov011_02187cd8_29(); virtual void inline_ov011_02187cd8_30(); virtual void inline_ov011_02187cd8_31();
    virtual void inline_ov011_02187cd8_32(); virtual void inline_ov011_02187cd8_33(); virtual void inline_ov011_02187cd8_34(); virtual void inline_ov011_02187cd8_35();
    virtual void inline_ov011_02187cd8_36(); virtual void inline_ov011_02187cd8_37(); virtual void inline_ov011_02187cd8_38(); virtual void inline_ov011_02187cd8_39();
    virtual void inline_ov011_02187cd8_40(); virtual void inline_ov011_02187cd8_41(); virtual void inline_ov011_02187cd8_42(); virtual void inline_ov011_02187cd8_43();
    virtual void inline_ov011_02187cd8_44(); virtual void inline_ov011_02187cd8(); virtual void inline_ov011_02187cd8_2(); virtual void inline_ov011_02187cd8_3();
    virtual void inline_ov011_02187cd8_4(); virtual void inline_ov011_02187cd8_5(); virtual void inline_ov011_02187cd8_6(); virtual void inline_ov011_02187cd8_7();
    virtual void inline_ov011_02187cd8_8(); virtual void inline_ov011_02187cd8_9(); virtual void inline_ov011_02187cd8_10(); virtual void inline_ov011_02187cd8_11();
    virtual void inline_ov011_02187cd8_12(); virtual void inline_ov011_02187cd8_13(); virtual void inline_ov011_02187cd8_14(); virtual void inline_ov011_02187cd8_15();
    virtual void inline_ov011_02187cd8_16(); virtual void inline_ov011_02187cd8_17(); virtual void inline_ov011_02187cd8_18(); virtual void inline_ov011_02187cd8_19();
    virtual void inline_ov011_02187cd8_20(); virtual void inline_ov011_02187cd8_21(); virtual void inline_ov011_02187cd8_22(); virtual void inline_ov011_02187cd8_23();
    virtual void inline_ov011_02187cd8_24(); virtual void inline_ov011_02187cd8_25(); virtual void inline_ov011_02187cd8_26();
    virtual void inline_ov011_02187cd8_27(int arg0, int arg1, int arg2);
};
extern "C" struct Struct_ov011_02187cd8* func_ov023_021f6880(void*, int);

// USA: func_ov011_02187cd8
extern "C" ARM int func_ov011_02187cd8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x18));
    struct Struct_ov011_02187cd8* var4 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (var4) {
        var4->inline_ov011_02187cd8_27(var1, var2, var3);
    }
    return 1;
}
