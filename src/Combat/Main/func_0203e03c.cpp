#include <globaldefs.h>

struct Struct_0203e03c {
    char unknown_0_[0xC];
    int unknown_c_[0x20];
};

// USA: func_0203e03c
extern "C" ARM int func_0203e03c(struct Struct_0203e03c* arg0) {
    int var0;
    for (var0 = 0; var0 < 0x20; var0++) {
        if (arg0->unknown_c_[var0] == 0) {
            return var0;
        }
    }
    return -1;
}
