#include <globaldefs.h>

struct Struct_0204af14 {
    char unknown_0_[0x10];     // 0x0..0xf
    char* unknown_10_;       // 0x10
    char unknown_14_[9];        // 0x14..0x1c
    unsigned char unknown_1d_; // 0x1d
};

// USA: func_0204af14
extern "C" ARM void* func_0204af14(struct Struct_0204af14* arg0, unsigned int arg1) {
    char* var0 = arg0->unknown_10_;
    if (var0 == NULL) {
        return NULL;
    }
    return (arg0->unknown_1d_ <= arg1) ? NULL : var0 + arg1 * 0x10;
}
