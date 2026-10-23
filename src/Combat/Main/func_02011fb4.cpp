#include <globaldefs.h>

struct Struct_02011b68 {
    unsigned char unknown_0_[6];
};

// USA: func_02011fb4
extern "C" ARM int func_02011fb4(unsigned char* arg0, struct Struct_02011b68 arg1) {
    int var0;
    for (var0 = 0; var0 < 6; var0++) {
        if (arg1.unknown_0_[var0] != arg0[var0]) {
            return 0;
        }
    }
    return 1;
}
