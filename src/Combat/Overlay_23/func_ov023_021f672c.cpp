#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov023_021f6788(void*);

struct Struct_ov011_0218438c {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x20];
    int unknown_28_;
    short unknown_2c_;
    short unknown_2e_;
    char unknown_30_[3][0x16];
};

// USA: func_ov023_021f672c
extern "C" ARM void func_ov023_021f672c(struct Struct_ov011_0218438c* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = -1;
    memset((char*)arg0 + 8, 0, 0x20);
    arg0->unknown_28_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_2e_ = 1;
    for (int var0 = 0; var0 < 3; var0++) {
        func_ov023_021f6788(arg0->unknown_30_[var0]);
    }
}
