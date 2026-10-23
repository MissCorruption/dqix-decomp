#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204792c_3;
extern "C" int func_020480b8(struct Struct_0204792c_3* arg0, char* arg1);
extern "C" unsigned long long _u32_div_f(unsigned int arg0, unsigned int arg1);
extern int data_02114e50;

struct Struct_0204792c { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_0204792c_2 { int unknown_0_; struct Struct_0204792c* unknown_4_; };

struct Struct_02017098_2 {
    char unknown_0_[0xc];
    struct Struct_0204792c_2* unknown_c_;
    char unknown_10_[0x70 - 0x10];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    int unknown_7c_;
    char unknown_80_[0x84 - 0x80];
    unsigned char unknown_84_0_ : 1;
};

// USA: func_0204792c
extern "C" ARM void func_0204792c(struct Struct_02017098_2* arg0, char* arg1) {
    if (!arg0->unknown_84_0_) {
        return;
    }
    int var0 = func_020480b8((struct Struct_0204792c_3*)((char*)arg0 + 0x14), arg1);
    if (arg0->unknown_74_ == var0 || var0 == 0) {
        return;
    }
    arg0->unknown_74_ = var0;
    arg0->unknown_70_ = 0;
    arg0->unknown_78_ = data_02114e50;
    arg0->unknown_7c_ = arg0->unknown_c_[arg0->unknown_74_].unknown_4_[arg0->unknown_70_].unknown_4_;
    unsigned long long var1 = _u32_div_f((unsigned int)rand(), (unsigned int)arg0->unknown_7c_);
    arg0->unknown_78_ = arg0->unknown_78_ - (unsigned int)(var1 >> 32);
}
