#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020960cc(int arg0, unsigned char* arg1, int arg2);

struct Struct_0209645c {
    unsigned int unknown_0_0_ : 9;
    unsigned char unknown_2_[12];
};

struct Struct_0209645c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_0209645c unknown_4_[9];
};

// USA: func_0209645c
extern "C" ARM int func_0209645c(Struct_0209645c_2* arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_0_ == 0) return 0;
    int var0;
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        if (arg1 == (int)arg0->unknown_4_[var0].unknown_0_0_) break;
    }
    if (var0 == arg0->unknown_0_) return 0;
    func_020960cc((int)arg0, (unsigned char*)arg0 + 0x4a8, arg1);
    Struct_0209645c var1[9];
    memset(var1, 0, sizeof(var1));
    memcpy(var1, arg0->unknown_4_, 0x80);
    memcpy(&arg0->unknown_4_[var0], &var1[var0 + 1], (arg0->unknown_0_ - var0) * 16);
    arg0->unknown_0_ = arg0->unknown_0_ - 1;
    return 1;
}
