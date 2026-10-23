#include <globaldefs.h>

extern "C" void func_0204f3bc(void* arg0, int arg1);

struct Struct_02081498 {
    char unknown_0_[4];
    short* unknown_4_;
    char unknown_8_[0x14 - 8];
    unsigned char unknown_14_;
};

// USA: func_02081530
extern "C" ARM void func_02081530(void* arg0, void* arg1, struct Struct_02081498* arg2) {
    unsigned char var0;
    if (arg2 == NULL) {
        return;
    }
    for (var0 = 0; var0 < arg2->unknown_14_; var0++) {
        func_0204f3bc(arg1, arg2->unknown_4_[var0]);
    }
}
