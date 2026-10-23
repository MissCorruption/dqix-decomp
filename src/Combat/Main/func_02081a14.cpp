#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_02046608 func_020474a8
#define func_0204f41c func_02050678
#endif

struct Struct_02072a68_2;
struct Struct_020465c0;

extern "C" int func_020421a0();
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);

extern "C" void func_02046380(int arg0);
#if defined(jpn)
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3);
extern "C" void func_0204f41c(void* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);
#else
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);
#endif

struct Struct_02081a14 {
    struct Struct_02072a68_2* unknown_0_;
    char unknown_4_[0x18 - 0x4];
    void* unknown_18_;
};

struct Struct_02081a14_2 {
    char unknown_0_[0xb4];
    unsigned short unknown_b4_;
    unsigned short unknown_b6_;
};

struct Struct_02081a14_3 {
    int unknown_0_;
    char unknown_4_[0x6 - 0x4];
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    char unknown_12_[0x13 - 0x12];
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    unsigned char unknown_14_0_ : 2;
#if defined(jpn)
    unsigned char unknown_14_2_ : 6;
#endif
    char unknown_15_[0x28 - 0x15];
    short unknown_28_;
    unsigned char unknown_2a_;
};

// USA: func_02081a14
extern "C" ARM void func_02081a14(struct Struct_02081a14* arg0, struct Struct_02081a14_2* arg1, struct Struct_02081a14_3* arg2) {
    int var0 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 0x4) {
        var0 = 5;
    }

    int var1 = func_020421a0();
#if defined(jpn)
    memset(arg0->unknown_18_, 0, 0x800);
    func_02046380(var1);
    int var2 = arg2->unknown_10_;
    func_020465c0((struct Struct_020465c0*)var1, var2, arg2->unknown_0_);
    func_020465d8((unsigned char*)var1, var2, arg2->unknown_14_0_);
    func_020465f0((unsigned char*)var1, var2, arg2->unknown_14_2_);

    void* var3 = func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
    func_02046608(var1, arg2->unknown_13_0_, var3, arg0->unknown_18_);

    int var4 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var4;
    arg1->unknown_b6_ = var4 + 1;

    func_0204f41c(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_), arg2->unknown_8_, arg0->unknown_18_,
                  arg2->unknown_13_0_, var0, &arg2->unknown_a_, &arg2->unknown_c_);
#else
    memset(arg0->unknown_18_, 0, 0x960);
    func_02046380(var1);
    func_020465c0((struct Struct_020465c0*)var1, arg2->unknown_10_, arg2->unknown_0_);

    void* var5 = func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
    func_02046608(var1, arg2->unknown_13_0_, var5, arg0->unknown_18_, 0x100, 0, 0);

    int var6 = 0;
    if (arg2->unknown_14_0_ != 0) {
        var6 = func_020420e8(arg0->unknown_18_, 0);
    }

    int var7 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var7;
    arg1->unknown_b6_ = var7 + 1;

    func_0204f41c(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_ - var6), arg2->unknown_8_, arg0->unknown_18_,
                  arg2->unknown_13_0_, var0, &arg2->unknown_a_, &arg2->unknown_c_, 0);
#endif
}
