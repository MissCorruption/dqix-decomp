#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_0204f41c func_02050678
#endif

struct Struct_02072a68_2;
struct Struct_02046574_2;
struct Struct_02081870 {
    Struct_02072a68_2* unknown_0_;
    char unknown_4_[0x14];
    char* unknown_18_;
};
struct Struct_02081870_2 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    char unknown_aa_[0xa];
    short unknown_b4_;
    short unknown_b6_;
};
struct Struct_02081870_3 {
    char* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    unsigned char unknown_14_0_ : 2;
    unsigned char unknown_14_2_ : 6;
    char unknown_15_[0x13];
    short unknown_28_;
    unsigned char unknown_2a_;
};
extern "C" int func_02042190(int);
extern "C" void* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_020420e8(char*, int);
extern "C" int func_020421a0();
extern "C" void func_02046380(Struct_02046574_2*);
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
extern "C" void func_020474a8(Struct_02046574_2*, int, void*, char*);
extern "C" void func_0204f41c(Struct_02081870_2*, short, int, char*, int, int, short*, short*);
#else
extern "C" void func_02046608(Struct_02046574_2*, int, void*, char*, int, int, int);
extern "C" void func_0204f41c(Struct_02081870_2*, short, int, char*, int, int, short*, short*, int);
#endif

// USA: func_02081870
#if defined(jpn)
extern "C" ARM void func_02081870(Struct_02081870* arg0, Struct_02081870_2* arg1, Struct_02081870_3* arg2) {
    int var0 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 4) var0 = 5;
    if (arg2->unknown_2a_ & 8) {
        char* var1 = (char*)func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
        if (var1) {
            short var2 = arg1->unknown_a8_ * 8;
            int var3 = func_020d2ff0(var1) >> 1;
            arg2->unknown_6_ = (short)(var2 - var3 * arg2->unknown_13_0_) >> 1;
        }
    }
    Struct_02046574_2* var4 = (Struct_02046574_2*)func_020421a0();
    memset(arg0->unknown_18_, 0, 0x800);
    func_02046380(var4);
    func_02046574(var4, arg2->unknown_10_, arg2->unknown_0_);
    void* var5 = func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
    func_020474a8(var4, arg2->unknown_13_0_, var5, arg0->unknown_18_);
    int var6 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var6;
    arg1->unknown_b6_ = var6 + 1;
    if (arg2->unknown_2a_ & 0x10) {
        int var7 = arg2->unknown_13_0_;
        if (var7 == 12) {
            arg1->unknown_b4_ = var7;
            arg1->unknown_b6_ = 20;
        }
    }
    func_0204f41c(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_), arg2->unknown_8_,
        arg0->unknown_18_, arg2->unknown_13_0_, var0, &arg2->unknown_a_, &arg2->unknown_c_);
}
#else
extern "C" ARM void func_02081870(Struct_02081870* arg0, Struct_02081870_2* arg1, Struct_02081870_3* arg2) {
    int var8 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 4) var8 = 5;
    int var9 = func_02042190(arg2->unknown_13_0_);
    if (arg2->unknown_2a_ & 8) {
        char* var10 = (char*)func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
        if (var10) {
            short var11 = arg1->unknown_a8_ * 8;
            arg2->unknown_6_ = (short)(var11 - func_020420e8(var10, var9)) >> 1;
        }
    }
    Struct_02046574_2* var12 = (Struct_02046574_2*)func_020421a0();
    memset(arg0->unknown_18_, 0, 0x960);
    func_02046380(var12);
    func_02046574(var12, arg2->unknown_10_, arg2->unknown_0_);
    void* var13 = func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
    func_02046608(var12, arg2->unknown_13_0_, var13, arg0->unknown_18_, 0x100, 0, 0);
    int var14 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var14;
    arg1->unknown_b6_ = var14 + 1;
    if (arg2->unknown_2a_ & 0x10) {
        int var15 = arg2->unknown_13_0_;
        if (var15 == 12) {
            arg1->unknown_b4_ = var15;
            arg1->unknown_b6_ = 20;
        }
    }
    int var16 = 0;
    if (arg2->unknown_14_0_) var16 = func_020420e8(arg0->unknown_18_, 0);
    func_0204f41c(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_ - var16), arg2->unknown_8_,
        arg0->unknown_18_, arg2->unknown_13_0_, var8, &arg2->unknown_a_, &arg2->unknown_c_, 0);
}
#endif
