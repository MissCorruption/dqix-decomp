#include <globaldefs.h>

struct Struct_020daa20 {
    char unknown_0_[8];
    int unknown_8_;
};

// USA: func_020daa20
extern "C" ARM struct Struct_020daa20* func_020daa20(unsigned char* arg0) {
    struct Struct_020daa20* var0 = (struct Struct_020daa20*)(arg0 + 0x14);
    unsigned char var1 = 0;
    while (var1 < 4) {
        if (var0->unknown_8_ == -1) {
            return var0;
        }
        var1++;
        var0++;
    }
    return NULL;
}
