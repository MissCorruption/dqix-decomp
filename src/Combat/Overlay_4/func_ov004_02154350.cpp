#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov004_02154350_3 { unsigned int unknown_0_; SafeAllocator unknown_4_; };
struct Struct_ov004_02154350 { short unknown_0_; short unknown_2_; unsigned char unknown_4_; unsigned char unknown_5_; };
struct Struct_ov004_02154350_2 { Struct_ov004_02154350 unknown_0_[20]; unsigned short unknown_78_; unsigned short unknown_7a_; unsigned char unknown_7c_; };
struct Struct_0201099c_10;
struct Struct_ov002_0215b2c8;
extern "C" Struct_ov004_02154350_3* func_ov011_021845f8(void*, int);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov004_02153b6c(void*, int, int, int, short*, short*);
extern "C" void func_ov004_021545f0(Struct_ov004_02154350_2*, int, short, short, unsigned char, unsigned char);
extern "C" void func_ov023_021e1518(void*);
extern "C" void func_ov023_021e1474(Struct_ov002_0215b2c8*, Struct_0201099c_10*);
extern Struct_ov004_02154350_2* data_ov004_021707c0;

class Struct_ov004_02154350_4 {
public:
    virtual void inline_ov004_02154350_60(); virtual void inline_ov004_02154350(); virtual void inline_ov004_02154350_2(); virtual void inline_ov004_02154350_3();
    virtual void inline_ov004_02154350_4(); virtual void inline_ov004_02154350_5(); virtual void inline_ov004_02154350_6(); virtual void inline_ov004_02154350_7();
    virtual void inline_ov004_02154350_8(); virtual void inline_ov004_02154350_9(); virtual void inline_ov004_02154350_10(); virtual void inline_ov004_02154350_11();
    virtual void inline_ov004_02154350_12(); virtual void inline_ov004_02154350_13(); virtual void inline_ov004_02154350_14(); virtual void inline_ov004_02154350_15();
    virtual void inline_ov004_02154350_16(); virtual void inline_ov004_02154350_17(); virtual void inline_ov004_02154350_18(); virtual void inline_ov004_02154350_19();
    virtual void inline_ov004_02154350_20(); virtual void inline_ov004_02154350_21(); virtual void inline_ov004_02154350_22(); virtual void inline_ov004_02154350_23();
    virtual void inline_ov004_02154350_24(); virtual void inline_ov004_02154350_25(); virtual void inline_ov004_02154350_26(); virtual void inline_ov004_02154350_27();
    virtual void inline_ov004_02154350_28(); virtual void inline_ov004_02154350_29(); virtual void inline_ov004_02154350_30(); virtual void inline_ov004_02154350_31();
    virtual void inline_ov004_02154350_32(); virtual void inline_ov004_02154350_33(); virtual void inline_ov004_02154350_34(); virtual void inline_ov004_02154350_35();
    virtual void inline_ov004_02154350_36(); virtual void inline_ov004_02154350_37(); virtual void inline_ov004_02154350_38(); virtual void inline_ov004_02154350_39();
    virtual void inline_ov004_02154350_40(); virtual void inline_ov004_02154350_41(); virtual void inline_ov004_02154350_42(); virtual void inline_ov004_02154350_43();
    virtual void inline_ov004_02154350_44(); virtual void inline_ov004_02154350_45(); virtual void inline_ov004_02154350_46(); virtual void inline_ov004_02154350_47();
    virtual void inline_ov004_02154350_48(); virtual void inline_ov004_02154350_49(); virtual void inline_ov004_02154350_50(); virtual void inline_ov004_02154350_51();
    virtual void inline_ov004_02154350_52(); virtual void inline_ov004_02154350_53(); virtual void inline_ov004_02154350_54(); virtual void inline_ov004_02154350_55();
    virtual void inline_ov004_02154350_56(); virtual void inline_ov004_02154350_57();
    virtual Struct_0201099c_10* inline_ov004_02154350_58();
    virtual Struct_ov002_0215b2c8* inline_ov004_02154350_59();
};

// USA: func_ov004_02154350
extern "C" ARM int func_ov004_02154350(void* arg0) {
    Struct_ov004_02154350_3* var0 = func_ov011_021845f8(arg0, 0);
    if (!var0) return 0;
    Struct_ov004_02154350_2* var1 = (Struct_ov004_02154350_2*)var0->unknown_4_.Allocate(0x7e);
    data_ov004_021707c0 = var1;
    if (!var1) return 0;
    for (unsigned char var2 = 0; var2 < 20; var2++) {
        var1->unknown_0_[var2].unknown_0_ = -1;
        var1->unknown_0_[var2].unknown_2_ = -1;
        var1->unknown_0_[var2].unknown_4_ = 0;
        var1->unknown_0_[var2].unknown_5_ = 0;
    }
    var1->unknown_78_ = 0;
    var1->unknown_7a_ = 0;
    var1->unknown_7c_ = 0;
    short var3 = 0;
    short var4 = 0;
    unsigned char var5 = 0;
    signed char var6;
    for (var6 = 0; var6 <= 11; var6++) {
        func_ov004_02153b6c(arg0, -1, 0, var6, &var3, &var4);
        func_ov004_021545f0(data_ov004_021707c0, var5, 0, var6, var4, var3);
        var5++;
    }
    for (var6 = 1; var6 <= 6; var6++, var5++) {
        func_ov004_02153b6c(arg0, -1, var6, -1, &var3, &var4);
        func_ov004_021545f0(data_ov004_021707c0, var5, var6, -1, var4, var3);
    }
    func_ov004_02153b6c(arg0, -1, 7, -1, &var3, &var4);
    func_ov004_021545f0(data_ov004_021707c0, var5, 7, -1, var4, var3);
    Struct_ov004_02154350_2* var7 = data_ov004_021707c0;
    for (unsigned char var8 = 0; var8 < 20; var8++) {
        Struct_ov004_02154350* var9 = &var7->unknown_0_[var8];
        var7->unknown_78_ += var9->unknown_4_;
        var7->unknown_7a_ += var9->unknown_5_;
    }
    Struct_ov004_02154350_4* var10 = (Struct_ov004_02154350_4*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2d);
    Struct_ov004_02154350_4* var11 = (Struct_ov004_02154350_4*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (var10 && var11) {
        Struct_ov002_0215b2c8* var12 = var11->inline_ov004_02154350_59();
        if (var12) {
            func_ov023_021e1518(var12);
            func_ov023_021e1474(var12, var10->inline_ov004_02154350_58());
        }
    }
    return 0;
}
