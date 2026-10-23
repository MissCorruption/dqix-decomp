#include <globaldefs.h>
#include <Graphics/Vector.h>
#include <std_library_functions.h>

struct Struct_ov004_021561b0 {
    virtual void inline_ov004_021561b0_14();
    virtual void inline_ov004_021561b0_24();
    virtual void inline_ov004_021561b0_26();
    virtual void inline_ov004_021561b0_27();
    virtual void inline_ov004_021561b0_28();
    virtual void inline_ov004_021561b0_29();
    virtual void inline_ov004_021561b0_30();
    virtual void inline_ov004_021561b0_31(const Vector3fix*);
    virtual Vector3fix inline_ov004_021561b0_32();
    virtual void inline_ov004_021561b0_33();
    virtual void inline_ov004_021561b0_34();
    virtual void inline_ov004_021561b0_35();
    virtual void inline_ov004_021561b0_36();
    virtual void inline_ov004_021561b0_37();
    virtual void inline_ov004_021561b0_38();
    virtual void inline_ov004_021561b0_39();
    virtual void inline_ov004_021561b0_40();
    virtual void inline_ov004_021561b0_41();
    virtual void inline_ov004_021561b0_42();
    virtual void inline_ov004_021561b0_43();
    virtual void inline_ov004_021561b0_44();
    virtual void inline_ov004_021561b0_45();
    virtual void inline_ov004_021561b0_46();
    virtual void inline_ov004_021561b0_47();
    virtual void inline_ov004_021561b0_48();
    virtual void inline_ov004_021561b0_49();
    virtual void inline_ov004_021561b0_50();
    virtual void inline_ov004_021561b0_51();
    virtual void inline_ov004_021561b0_52();
    virtual void inline_ov004_021561b0();
    virtual void inline_ov004_021561b0_2();
    virtual void inline_ov004_021561b0_3();
    virtual void inline_ov004_021561b0_4();
    virtual void inline_ov004_021561b0_5();
    virtual void inline_ov004_021561b0_6();
    virtual void inline_ov004_021561b0_7();
    virtual void inline_ov004_021561b0_8();
    virtual void inline_ov004_021561b0_9();
    virtual void inline_ov004_021561b0_10();
    virtual void inline_ov004_021561b0_11();
    virtual void inline_ov004_021561b0_12();
    virtual void inline_ov004_021561b0_13();
    virtual void inline_ov004_021561b0_15();
    virtual void inline_ov004_021561b0_16();
    virtual void inline_ov004_021561b0_17();
    virtual void inline_ov004_021561b0_18();
    virtual void inline_ov004_021561b0_19();
    virtual void inline_ov004_021561b0_20();
    virtual void inline_ov004_021561b0_21();
    virtual void inline_ov004_021561b0_22();
    virtual void inline_ov004_021561b0_23(const Vector3fix*);
    virtual Vector3fix inline_ov004_021561b0_25();
    char unknown_4_[8];
    unsigned char unknown_c_;
    char unknown_d_[0x20 - 0xd];
    char* unknown_20_;
    char unknown_24_[0x104 - 0x24];
    short unknown_104_, unknown_106_;
};
struct Struct_ov004_02153e20 {
    char unknown_0_[0x5c];
    short unknown_5c_, unknown_5e_;
    unsigned char unknown_60_;
    unsigned char unknown_61_;
};
struct Struct_ov004_021561b0_2 { char unknown_0_[0x100]; };
struct Struct_ov004_021561b0_3 {
    Struct_ov004_021561b0_2 unknown_0_[15];
    Struct_ov004_021561b0_2 unknown_f00_;
};
struct Struct_ov004_021707c8 {
    Struct_ov004_021561b0_3* unknown_0_;
    void* unknown_4_;
    short* unknown_8_;
    void* unknown_c_;
};
struct Struct_02072a68_2;
extern Struct_ov004_021707c8 data_ov004_021707c8;
extern char data_ov004_02170398[];
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" Struct_02072a68_2* func_ov023_021fa598(void*);
extern "C" void* func_020421a0();
extern "C" void* func_02072a68(Struct_02072a68_2*, int);
extern "C" void func_02046608(void*, int, void*, char*, int, int, int);
extern "C" char* func_020d2f88(char*, char*);
extern "C" void func_ov023_021f9b30(Struct_ov004_02153e20*, short, unsigned int, unsigned int);
typedef void (*Type_ov004_021561b0)(Struct_ov004_02153e20*, unsigned short, unsigned int, unsigned int);
typedef void (*Type_ov004_021561b0_2)(char*, unsigned short, unsigned short);
extern "C" void func_ov023_021f9d14(Struct_ov004_02153e20*, void*);
extern "C" void func_ov023_021f8960(char*, short, unsigned short);
extern "C" void func_ov023_021f809c(void*, void*);
extern "C" int func_ov004_021560e8(void*);

// USA: func_ov004_021561b0
extern "C" ARM int func_ov004_021561b0(void* arg0) {
    void* var0 = func_ov011_021849c8(arg0);
    short var1;
    Struct_ov004_02153e20* var2 = (Struct_ov004_02153e20*)func_ov023_021f6880(var0, 3);
    if (!var2) return 0;
    if (func_ov023_021f6f10(var2) != 7) return 0;
    var1 = var2->unknown_5c_;
    short var3 = var2->unknown_5e_;
    void* var4 = func_ov023_021f6880(var0, 11);
    if (!var4) return 0;
    if (func_ov023_021f6f10(var4) != 4) return 0;
    Struct_02072a68_2* var5 = func_ov023_021fa598(var4);
    memset(data_ov004_021707c8.unknown_0_, 0, 0x1000);
    short var6 = var1 * 12;
    int var7 = 0;
    Struct_ov004_021561b0_3* var8 = data_ov004_021707c8.unknown_0_;
    int var9;
    for (short var10 = 0; var10 < 12; var10++) {
        int var11 = var10 + 0x6e;
        Struct_ov004_021561b0* var12 = (Struct_ov004_021561b0*)func_ov023_021f6880(var0, var11);
        if (!var12 || func_ov023_021f6f10(var12) != 8) continue;
        var12->unknown_20_ = NULL;
        var12->unknown_c_ &= ~8;
        int var13 = var10 + var6;
        if (data_ov004_021707c8.unknown_8_[var13] > 0) {
            void* var14 = func_020421a0();
            memset(var8->unknown_f00_.unknown_0_, 0, 0x100);
            void* var15 = func_02072a68(var5, data_ov004_021707c8.unknown_8_[var13]);
            func_02046608(var14, 0, var15, var8->unknown_f00_.unknown_0_, 0x60, 0, 0);
            Vector3fix var16 = var12->inline_ov004_021561b0_32();
            Vector3fix var17 = var12->inline_ov004_021561b0_25();
            int var18 = (var10 / 2 * 20) << 12;
            var9 = 0;
            if (func_020d2f88(var8->unknown_f00_.unknown_0_, data_ov004_02170398)) {
                var18 -= 0x5000;
                var9 = 0x5000;
            }
            var16.y = var18 + 0x8000;
            var12->inline_ov004_021561b0_31(&var16);
            var17.y = var9 - 0x3000;
            var12->inline_ov004_021561b0_23(&var17);
            char* var19 = data_ov004_021707c8.unknown_0_->unknown_0_[var10].unknown_0_;
            memcpy(var19, var8->unknown_f00_.unknown_0_, 0x100);
            ((Type_ov004_021561b0)func_ov023_021f9b30)(var2, (unsigned short)var11, (unsigned short)(var10 >> 1), var10 & 1);
            var12->unknown_20_ = var19;
            var7++;
        } else {
            func_ov023_021f9b30(var2, 0, (unsigned short)(var10 >> 1), var10 & 1);
            var12->unknown_c_ |= 8;
        }
    }
    if (var7 == 0) func_ov023_021f9b30(var2, 0x6e, 0, 0);
    func_ov023_021f9d14(var2, arg0);
    var2->unknown_61_ = 0;
    Struct_ov004_021561b0* var20 = (Struct_ov004_021561b0*)func_ov023_021f6880(var0, 0x33);
    if (!var20) return 0;
    if (func_ov023_021f6f10(var20) != 6) return 0;
    ((Type_ov004_021561b0_2)func_ov023_021f8960)((char*)var20, 0, 0xffff);
    var20->unknown_104_ = var1;
    var20->unknown_106_ = var3;
    func_ov023_021f809c(var20, arg0);
    func_ov004_021560e8(arg0);
    return 0;
}
