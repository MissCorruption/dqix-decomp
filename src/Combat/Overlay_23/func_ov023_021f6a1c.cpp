#include <globaldefs.h>
#include "Input/Input.h"

class Struct_ov023_021f6a1c_2 {
public:
    virtual void inline_ov023_021f6a1c(); virtual void inline_ov023_021f6a1c_6(); virtual void inline_ov023_021f6a1c_7(); virtual void inline_ov023_021f6a1c_8();
    virtual void inline_ov023_021f6a1c_9(); virtual void inline_ov023_021f6a1c_10(); virtual void inline_ov023_021f6a1c_11(); virtual void inline_ov023_021f6a1c_12();
    virtual void inline_ov023_021f6a1c_13(); virtual void inline_ov023_021f6a1c_14(); virtual void inline_ov023_021f6a1c_15(); virtual void inline_ov023_021f6a1c_16();
    virtual void inline_ov023_021f6a1c_17(); virtual void inline_ov023_021f6a1c_18(); virtual void inline_ov023_021f6a1c_19(); virtual void inline_ov023_021f6a1c_20();
    virtual void inline_ov023_021f6a1c_21(); virtual void inline_ov023_021f6a1c_22(); virtual void inline_ov023_021f6a1c_23(); virtual void inline_ov023_021f6a1c_24();
    virtual void inline_ov023_021f6a1c_25(); virtual void inline_ov023_021f6a1c_26(); virtual void inline_ov023_021f6a1c_27(); virtual void inline_ov023_021f6a1c_28();
    virtual void inline_ov023_021f6a1c_29(); virtual void inline_ov023_021f6a1c_30(); virtual void inline_ov023_021f6a1c_31(); virtual void inline_ov023_021f6a1c_32();
    virtual void inline_ov023_021f6a1c_33(); virtual void inline_ov023_021f6a1c_34(); virtual void inline_ov023_021f6a1c_35(); virtual void inline_ov023_021f6a1c_36();
    virtual void inline_ov023_021f6a1c_37(); virtual void inline_ov023_021f6a1c_38(); virtual void inline_ov023_021f6a1c_39(); virtual void inline_ov023_021f6a1c_40();
    virtual void inline_ov023_021f6a1c_41(); virtual void inline_ov023_021f6a1c_42(); virtual void inline_ov023_021f6a1c_43(); virtual void inline_ov023_021f6a1c_44();
    virtual void inline_ov023_021f6a1c_45(); virtual void inline_ov023_021f6a1c_46();
    virtual int inline_ov023_021f6a1c_47();
    virtual void inline_ov023_021f6a1c_2(); virtual void inline_ov023_021f6a1c_3(); virtual void inline_ov023_021f6a1c_4();
    virtual int inline_ov023_021f6a1c_5();

    char unknown_4_[0x18 - 4];
    Struct_ov023_021f6a1c_2* unknown_18_;
};

struct Struct_ov023_021f6a1c {
    Struct_ov023_021f6a1c_2* unknown_0_;
};

extern "C" void func_ov011_02184a40(void* arg0, int arg1);

// USA: func_ov023_021f6a1c
extern "C" ARM void func_ov023_021f6a1c(struct Struct_ov023_021f6a1c* arg0, void* arg1) {
    if (g_touchInput.pressed_ == 0) {
        return;
    }

    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);

    Struct_ov023_021f6a1c_2* var2 = arg0->unknown_0_;
    while (var2 != NULL) {
        if (var2->inline_ov023_021f6a1c_5() != 0) {
            int var3 = var2->inline_ov023_021f6a1c_47();
            if (var3 > 0) {
                var3 = var2->inline_ov023_021f6a1c_47();
                func_ov011_02184a40(arg1, var3);
                return;
            }
        }
        var2 = var2->unknown_18_;
    }
}
