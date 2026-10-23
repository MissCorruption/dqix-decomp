#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" void func_ov011_02184a40(void* arg0, int arg1);

struct Struct_ov023_021f6ac8 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_[8];
    short unknown_12_;
    short unknown_14_;
};

struct Struct_ov023_021f6ac8_2 {
    char unknown_0_[0x30];
    Struct_ov023_021f6ac8 unknown_30_[3];
};

class Struct_ov023_021f6ac8_3 {
public:
    virtual void inline_ov023_021f6ac8_39(); virtual void inline_ov023_021f6ac8_40(); virtual void inline_ov023_021f6ac8_41(); virtual void inline_ov023_021f6ac8_42();
    virtual void inline_ov023_021f6ac8_43(); virtual void inline_ov023_021f6ac8_44(); virtual void inline_ov023_021f6ac8_45(); virtual void inline_ov023_021f6ac8_46();
    virtual void inline_ov023_021f6ac8_47(); virtual void inline_ov023_021f6ac8_48(); virtual void inline_ov023_021f6ac8_49(); virtual void inline_ov023_021f6ac8_50();
    virtual void inline_ov023_021f6ac8_51(); virtual void inline_ov023_021f6ac8_52(); virtual void inline_ov023_021f6ac8_53(); virtual void inline_ov023_021f6ac8_54();
    virtual void inline_ov023_021f6ac8_55(); virtual void inline_ov023_021f6ac8_56(); virtual void inline_ov023_021f6ac8_57(); virtual void inline_ov023_021f6ac8_58();
    virtual void inline_ov023_021f6ac8_59(); virtual void inline_ov023_021f6ac8_60(); virtual void inline_ov023_021f6ac8_61(); virtual void inline_ov023_021f6ac8_62();
    virtual void inline_ov023_021f6ac8_63(); virtual void inline_ov023_021f6ac8(); virtual void inline_ov023_021f6ac8_2(); virtual void inline_ov023_021f6ac8_3();
    virtual void inline_ov023_021f6ac8_4(); virtual void inline_ov023_021f6ac8_5(); virtual void inline_ov023_021f6ac8_6(); virtual void inline_ov023_021f6ac8_7();
    virtual void inline_ov023_021f6ac8_8(); virtual void inline_ov023_021f6ac8_9(); virtual void inline_ov023_021f6ac8_10(); virtual void inline_ov023_021f6ac8_11();
    virtual void inline_ov023_021f6ac8_12(); virtual void inline_ov023_021f6ac8_13(); virtual void inline_ov023_021f6ac8_14(); virtual void inline_ov023_021f6ac8_15();
    virtual void inline_ov023_021f6ac8_16(); virtual void inline_ov023_021f6ac8_17(); virtual void inline_ov023_021f6ac8_18(); virtual void inline_ov023_021f6ac8_19();
    virtual void inline_ov023_021f6ac8_20(); virtual void inline_ov023_021f6ac8_21(); virtual void inline_ov023_021f6ac8_22(); virtual void inline_ov023_021f6ac8_23();
    virtual void inline_ov023_021f6ac8_24(); virtual void inline_ov023_021f6ac8_25(); virtual void inline_ov023_021f6ac8_26(); virtual void inline_ov023_021f6ac8_27();
    virtual void inline_ov023_021f6ac8_28(); virtual void inline_ov023_021f6ac8_29(); virtual void inline_ov023_021f6ac8_30(); virtual void inline_ov023_021f6ac8_31();
    virtual void inline_ov023_021f6ac8_32(); virtual void inline_ov023_021f6ac8_33(); virtual void inline_ov023_021f6ac8_34(); virtual void inline_ov023_021f6ac8_35();
#if defined(jpn)
    virtual void inline_ov023_021f6ac8_36();
#else
    virtual void inline_ov023_021f6ac8_36(); virtual void inline_ov023_021f6ac8_37();
#endif
    virtual int inline_ov023_021f6ac8_38();
};

// USA: func_ov023_021f6ac8
extern "C" ARM int func_ov023_021f6ac8(void* arg0, void* arg1) {
    if (g_touchInput.pressed_ != 0) {
        struct Struct_ov023_021f6ac8_2* var0 = (struct Struct_ov023_021f6ac8_2*)arg0;
        int var1;
        for (var1 = 0; var1 < 3; var1++) {
            struct Struct_ov023_021f6ac8* var2 = &var0->unknown_30_[var1];
            if (var2->unknown_0_ == 0) continue;

            int var3 = 0;
            int var4;
            for (var4 = 0; var4 < var2->unknown_0_ && !var3; var4++) {
                void* var5 = func_ov023_021f6880((void**)arg0, var2->unknown_2_[var4]);
                if (var5 != 0) {
                    Struct_ov023_021f6ac8_3* var6 = (Struct_ov023_021f6ac8_3*)var5;
                    if (var6->inline_ov023_021f6ac8_38() != 0) {
                        var3 = 1;
                    }
                }
            }

            if (var3) continue;

            if (var2->unknown_12_ > 0) func_ov011_021848a0(arg1, var2->unknown_12_);
            if (var2->unknown_14_ > 0) func_ov011_02184a40(arg1, var2->unknown_14_);
            return 1;
        }
    }
    return 0;
}
