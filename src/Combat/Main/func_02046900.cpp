#include <globaldefs.h>

struct Struct_02020cb8_4 {
    signed char unknown_0_;
    char unknown_1_[0x47];
    int unknown_48_;
};

// USA: func_02046900
extern "C" ARM int func_02046900(struct Struct_02020cb8_4* arg0) {
    int var0 = 0;
    while (arg0->unknown_0_ ? 1 : 0) {
        var0++;
        arg0 = (struct Struct_02020cb8_4*)((char*)arg0 + arg0->unknown_48_);
    }
    return var0;
}
