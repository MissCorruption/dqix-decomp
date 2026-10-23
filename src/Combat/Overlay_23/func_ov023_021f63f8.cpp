#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f6f10(void*);

// virtual call at vtable idx 0xd8/4 = 54; class w/ virtuals mirrors the
// ROM's single-scratch vtable pointer-chase (ldr r2,[r0]; ldr r2,[r2,#0xd8]).
class Struct_ov023_021f63f8 {
public:
    virtual void inline_ov023_021f63f8_23(); virtual void inline_ov023_021f63f8_24(); virtual void inline_ov023_021f63f8_25(); virtual void inline_ov023_021f63f8_26();
    virtual void inline_ov023_021f63f8_27(); virtual void inline_ov023_021f63f8_28(); virtual void inline_ov023_021f63f8_29(); virtual void inline_ov023_021f63f8_30();
    virtual void inline_ov023_021f63f8_31(); virtual void inline_ov023_021f63f8_32(); virtual void inline_ov023_021f63f8_33(); virtual void inline_ov023_021f63f8_34();
    virtual void inline_ov023_021f63f8_35(); virtual void inline_ov023_021f63f8_36(); virtual void inline_ov023_021f63f8_37(); virtual void inline_ov023_021f63f8_38();
    virtual void inline_ov023_021f63f8_39(); virtual void inline_ov023_021f63f8_40(); virtual void inline_ov023_021f63f8_41(); virtual void inline_ov023_021f63f8_42();
    virtual void inline_ov023_021f63f8_43(); virtual void inline_ov023_021f63f8_44(); virtual void inline_ov023_021f63f8_45(); virtual void inline_ov023_021f63f8_46();
    virtual void inline_ov023_021f63f8_47(); virtual void inline_ov023_021f63f8_48(); virtual void inline_ov023_021f63f8_49(); virtual void inline_ov023_021f63f8_50();
    virtual void inline_ov023_021f63f8_51(); virtual void inline_ov023_021f63f8_52(); virtual void inline_ov023_021f63f8_53(); virtual void inline_ov023_021f63f8_54();
    virtual void inline_ov023_021f63f8_55(); virtual void inline_ov023_021f63f8(); virtual void inline_ov023_021f63f8_2(); virtual void inline_ov023_021f63f8_3();
    virtual void inline_ov023_021f63f8_4(); virtual void inline_ov023_021f63f8_5(); virtual void inline_ov023_021f63f8_6(); virtual void inline_ov023_021f63f8_7();
    virtual void inline_ov023_021f63f8_8(); virtual void inline_ov023_021f63f8_9(); virtual void inline_ov023_021f63f8_10(); virtual void inline_ov023_021f63f8_11();
    virtual void inline_ov023_021f63f8_12(); virtual void inline_ov023_021f63f8_13(); virtual void inline_ov023_021f63f8_14(); virtual void inline_ov023_021f63f8_15();
    virtual void inline_ov023_021f63f8_16(); virtual void inline_ov023_021f63f8_17(); virtual void inline_ov023_021f63f8_18(); virtual void inline_ov023_021f63f8_19();
    virtual void inline_ov023_021f63f8_20(); virtual void inline_ov023_021f63f8_21();
    virtual void inline_ov023_021f63f8_22(int arg0);
    char unknown_4_[0x1c];
    void* unknown_20_;
};
extern "C" Struct_ov023_021f63f8* func_ov023_021f6880(void*, int);

// USA: func_ov023_021f63f8
extern "C" ARM void func_ov023_021f63f8(void* arg0, int arg1, void* arg2, int arg3) {
    Struct_ov023_021f63f8* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (var0 == 0) return;
    if (func_ov023_021f6f10(var0) != 8) return;
    var0->unknown_20_ = arg2;
    var0->inline_ov023_021f63f8_22(arg3);
}
