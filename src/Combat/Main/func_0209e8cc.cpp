#include <globaldefs.h>
#include "Combat/Main/CandidateFilter.h"
#include "std_library_functions.h"

struct Struct_0209e8cc {
    unsigned int unknown_0_[16];
};

struct Struct_0209e8cc_2 {
    int unknown_0_;
    Struct_0209e8cc unknown_4_[16];
};

struct Struct_0209e8cc_3 {
    char unknown_0_[4];
    char* unknown_4_;
    char unknown_8_[0x90];
    Struct_0209e8cc_2 unknown_98_;
    Struct_0209e8cc_2 unknown_49c_;
};

// USA: func_0209e8cc
extern "C" ARM void func_0209e8cc(Struct_0209e8cc_3* arg0, int arg1, int arg2) {
    if (arg1 == 0) {
        arg0->unknown_98_.unknown_0_ = 0;
        int var0 = *(unsigned char*)(arg0->unknown_4_ + 0x8e07);
        int var1 = 0;
        while (var1 < var0) {
            Struct_0209e8cc* var2 = (Struct_0209e8cc*)(arg0->unknown_4_ + 0x5c60 + (var1 << 6));
            if (var2 != NULL && func_0209e1cc(arg0, var2, 0, arg2)) {
                int var3 = arg0->unknown_98_.unknown_0_;
                arg0->unknown_98_.unknown_0_ = arg0->unknown_98_.unknown_0_ + 1;
                memcpy(&arg0->unknown_98_.unknown_4_[var3], var2, 0x40);
            }
            var1++;
        }
    } else {
        arg0->unknown_49c_.unknown_0_ = 0;
        memset(arg0->unknown_49c_.unknown_4_, 0, 0x400);
        int var4 = 0;
        while (var4 < arg0->unknown_98_.unknown_0_) {
            Struct_0209e8cc* var5 = &arg0->unknown_98_.unknown_4_[var4];
            if (func_0209e1cc(arg0, var5, 0, arg2)) {
                int var6 = arg0->unknown_49c_.unknown_0_;
                arg0->unknown_49c_.unknown_0_ = arg0->unknown_49c_.unknown_0_ + 1;
                memcpy(&arg0->unknown_49c_.unknown_4_[var6], var5, 0x40);
            }
            var4++;
        }
        arg0->unknown_98_.unknown_0_ = arg0->unknown_49c_.unknown_0_;
        memcpy(arg0->unknown_98_.unknown_4_, arg0->unknown_49c_.unknown_4_, 0x400);
    }
}
