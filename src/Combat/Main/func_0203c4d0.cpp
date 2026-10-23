#include <globaldefs.h>

#if defined(jpn)
#include "std_library_functions.h"

struct Struct_0203bdf4_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_0201099c_21 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_0203bdf4 {
    Struct_0201099c_21* unknown_0_;
    Struct_0203bdf4_2 unknown_4_[96];
    unsigned char unknown_604_[8];
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
};


extern "C" void func_0203bb6c(const Struct_0203bdf4_2* arg0, Struct_0201099c_21* arg1,
                              int arg2, int arg3, int arg4,
                              int arg5, int arg6, int arg7);

extern "C" ARM void func_0203c4d0(Struct_0203bdf4* arg0, int arg1, const short* arg2,
                                int arg3, int arg4, int arg5,
                                int arg6, int arg7, int arg8, int arg9,
                                int arg10) {
    if (arg2 == NULL || arg0->unknown_0_ == NULL) return;
    int var0 = ((arg0->unknown_60c_ >> 5) + arg8) & 0xf;
    int var1 = arg6;
    int var2 = arg7;
    for (int var3 = 0; var3 < arg1; ++var3) {
        short var4 = arg2[var3];
        if (var4 >= 0) {
            func_0203bb6c(&arg0->unknown_4_[var4],
                         &arg0->unknown_0_[arg0->unknown_610_],
                         arg3, arg4, arg5, var1, var2, var0);
            ++arg0->unknown_610_;
            arg0->unknown_610_ &= 0x7f;
            var1 += arg0->unknown_4_[var4].unknown_0_;
        }
        if (var4 == -2) {
            var1 = arg6;
            var2 += arg10;
        } else {
            var1 += arg9;
        }
    }
}

#else

struct Struct_0203c05c_2 {
    char unknown_0_[0x22];
    short unknown_22_;
};

struct Struct_0203c05c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

extern "C" void func_0203c05c(struct Struct_0203c05c_2* arg0, struct Struct_0203c05c* arg1,
                                int arg2, int arg3, int arg4, int arg5);

struct Struct_0203c4d0 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned short unknown_10_;
};

struct Struct_0203c4d0_2 {
    struct Struct_0203c05c* unknown_0_;
    unsigned char unknown_4_[0x4fc];
    struct Struct_0203c4d0 unknown_500_;
};

// USA: func_0203c4d0
extern "C" ARM void func_0203c4d0(void* arg0, short arg1, int arg2, int arg3, int arg4,
                                 int arg5) {
    struct Struct_0203c4d0_2* var5 = (struct Struct_0203c4d0_2*)arg0;
    int var6;

    if (arg1 < 0) {
        return;
    }

    if (var5->unknown_0_ == 0) {
        return;
    }

    var6 = (var5->unknown_500_.unknown_c_ >> 5) + arg5;
    var6 = var6 & 0xf;

    func_0203c05c(
        (struct Struct_0203c05c_2*)((char*)var5 + 4 + arg1 * 0x28),
        var5->unknown_0_ + var5->unknown_500_.unknown_10_,
        arg2, arg3, arg4,
        var6 & 0xf);

    var5->unknown_500_.unknown_10_ = var5->unknown_500_.unknown_10_ + 4;
    var5->unknown_500_.unknown_10_ = var5->unknown_500_.unknown_10_ & 0x7f;
}
#endif
