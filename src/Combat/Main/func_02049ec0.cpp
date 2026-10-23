#include <globaldefs.h>

struct Struct_02049ec0 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};

// USA: func_02049ec0
extern "C" ARM int func_02049ec0(unsigned char* arg0) {
    int var0 = ((struct Struct_02049ec0*)(arg0 + 0xc1))->unknown_0_4_;
    if (var0 != 2 && var0 != 3 && var0 != 4 && var0 != 5) {
    } else {
        return 0;
    }
    return 1;
}
