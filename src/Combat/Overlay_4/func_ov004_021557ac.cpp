#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov004_021557ac_2 { unsigned int unknown_0_; SafeAllocator unknown_4_; };
struct Struct_ov004_021557ac_3 { short unknown_0_; short unknown_2_; unsigned char unknown_4_; unsigned char unknown_5_; };
struct Struct_ov004_021557ac_4 { Struct_ov004_021557ac_3 unknown_0_[2]; unsigned short unknown_c_; unsigned short unknown_e_; unsigned char unknown_10_; };
struct Struct_0201099c_10;
struct Struct_ov002_0215b2c8;
struct Struct_ov004_021557ac_5 { unsigned char unknown_0_[0x8c]; unsigned char unknown_8c_[1]; };
struct Struct_ov004_021557ac_6 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; unsigned int unknown_c_; };
extern "C" Struct_ov004_021557ac_2* func_ov011_021845f8(void*, int);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" Struct_ov004_021557ac_5* func_0205ec34();
extern "C" int func_020deb58(Struct_0201099c_10*, int, int, int, int);
extern "C" Struct_ov004_021557ac_6* func_020dec30(Struct_0201099c_10*, int, int, int, int, int);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_ov023_021e1518(void*);
extern "C" void func_ov023_021e1474(Struct_ov002_0215b2c8*, Struct_0201099c_10*);
extern Struct_ov004_021557ac_4* data_ov004_021707c4;

class Struct_ov004_021557ac {
public:
    virtual void inline_ov004_021557ac(); virtual void inline_ov004_021557ac_2(); virtual void inline_ov004_021557ac_3(); virtual void inline_ov004_021557ac_4();
    virtual void inline_ov004_021557ac_5(); virtual void inline_ov004_021557ac_6(); virtual void inline_ov004_021557ac_7(); virtual void inline_ov004_021557ac_8();
    virtual void inline_ov004_021557ac_9(); virtual void inline_ov004_021557ac_10(); virtual void inline_ov004_021557ac_11(); virtual void inline_ov004_021557ac_12();
    virtual void inline_ov004_021557ac_13(); virtual void inline_ov004_021557ac_14(); virtual void inline_ov004_021557ac_15(); virtual void inline_ov004_021557ac_16();
    virtual void inline_ov004_021557ac_17(); virtual void inline_ov004_021557ac_18(); virtual void inline_ov004_021557ac_19(); virtual void inline_ov004_021557ac_20();
    virtual void inline_ov004_021557ac_21(); virtual void inline_ov004_021557ac_22(); virtual void inline_ov004_021557ac_23(); virtual void inline_ov004_021557ac_24();
    virtual void inline_ov004_021557ac_25(); virtual void inline_ov004_021557ac_26(); virtual void inline_ov004_021557ac_27(); virtual void inline_ov004_021557ac_28();
    virtual void inline_ov004_021557ac_29(); virtual void inline_ov004_021557ac_30(); virtual void inline_ov004_021557ac_31(); virtual void inline_ov004_021557ac_32();
    virtual void inline_ov004_021557ac_33(); virtual void inline_ov004_021557ac_34(); virtual void inline_ov004_021557ac_35(); virtual void inline_ov004_021557ac_36();
    virtual void inline_ov004_021557ac_37(); virtual void inline_ov004_021557ac_38(); virtual void inline_ov004_021557ac_39(); virtual void inline_ov004_021557ac_40();
    virtual void inline_ov004_021557ac_41(); virtual void inline_ov004_021557ac_42(); virtual void inline_ov004_021557ac_43(); virtual void inline_ov004_021557ac_44();
    virtual void inline_ov004_021557ac_45(); virtual void inline_ov004_021557ac_46(); virtual void inline_ov004_021557ac_47(); virtual void inline_ov004_021557ac_48();
    virtual void inline_ov004_021557ac_49(); virtual void inline_ov004_021557ac_50(); virtual void inline_ov004_021557ac_51(); virtual void inline_ov004_021557ac_52();
    virtual void inline_ov004_021557ac_53(); virtual void inline_ov004_021557ac_54(); virtual void inline_ov004_021557ac_55(); virtual void inline_ov004_021557ac_56();
    virtual void inline_ov004_021557ac_57(); virtual void inline_ov004_021557ac_58();
    virtual Struct_0201099c_10* inline_ov004_021557ac_59();
    virtual Struct_ov002_0215b2c8* inline_ov004_021557ac_60();
};

// USA: func_ov004_021557ac
extern "C" ARM int func_ov004_021557ac(void* arg0) {
    Struct_ov004_021557ac_2* var0 = func_ov011_021845f8(arg0, 0);
    if (!var0) return 0;
    Struct_ov004_021557ac_4* var1 = (Struct_ov004_021557ac_4*)var0->unknown_4_.Allocate(0x12);
    data_ov004_021707c4 = var1;
    if (!var1) return 0;
    for (unsigned char var2 = 0; var2 < 2; var2++) {
        var1->unknown_0_[var2].unknown_0_ = -1;
        var1->unknown_0_[var2].unknown_2_ = -1;
        var1->unknown_0_[var2].unknown_4_ = 0;
        var1->unknown_0_[var2].unknown_5_ = 0;
    }
    var1->unknown_c_ = 0;
    var1->unknown_e_ = 0;
    var1->unknown_10_ = 0;
    unsigned char var3 = 0;
    short var4 = 8;
    short var5;
    short var6 = 0;
    long var7 = 0;
    for (; var4 <= 9; var4++, var3++) {
        Struct_ov004_021557ac* var8 = (Struct_ov004_021557ac*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2d);
        if (var8 && func_ov023_021f6f10(var8) == 0x11) {
            Struct_0201099c_10* var9 = var8->inline_ov004_021557ac_59();
            Struct_ov004_021557ac_5* var10 = func_0205ec34();
            var7 = func_020deb58(var9, 0, -1, (signed char)var4, -1);
            var6 = 0;
            for (var5 = 0; var5 < var7; var5++) {
                Struct_ov004_021557ac_6* var11 = func_020dec30(var9, var5, 0, -1, (signed char)var4, -1);
                if (var11) {
                    int var12 = (unsigned short)((var11->unknown_c_ << 9) >> 21);
                    if (var12 > 0 && func_0206dfb0((int)var10, var10->unknown_8c_, var12 + 0x76 + 0xc00)) var6++;
                }
            }
        }
        var1 = data_ov004_021707c4;
        var1->unknown_0_[var3].unknown_0_ = var4;
        var1->unknown_0_[var3].unknown_2_ = -1;
        var1->unknown_0_[var3].unknown_4_ = var7;
        var1->unknown_0_[var3].unknown_5_ = var6;
    }
    Struct_ov004_021557ac_4* var13 = data_ov004_021707c4;
    for (unsigned char var14 = 0; var14 < 2; var14++) {
        Struct_ov004_021557ac_3* var15 = &var13->unknown_0_[var14];
        var13->unknown_c_ += var15->unknown_4_;
        var13->unknown_e_ += var15->unknown_5_;
    }
    Struct_ov004_021557ac* var16 = (Struct_ov004_021557ac*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2d);
    Struct_ov004_021557ac* var17 = (Struct_ov004_021557ac*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (var16 && var17) {
        Struct_ov002_0215b2c8* var18 = var17->inline_ov004_021557ac_60();
        if (var18) {
            func_ov023_021e1518(var18);
            func_ov023_021e1474(var18, var16->inline_ov004_021557ac_59());
        }
    }
    return 0;
}
