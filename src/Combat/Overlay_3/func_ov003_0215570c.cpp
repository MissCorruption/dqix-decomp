#include <globaldefs.h>

struct Struct_ov003_0215570c {
    char unknown_0_[0x20];
    int* unknown_20_;
};

// USA: func_ov003_0215570c
extern "C" ARM int func_ov003_0215570c(struct Struct_ov003_0215570c* arg0) {
    int var0 = 0;
    for (unsigned char var1 = 0; var1 < 0xc; var1++) {
        if (arg0->unknown_20_[var1] != 0) var0++;
    }
    return var0;
}
