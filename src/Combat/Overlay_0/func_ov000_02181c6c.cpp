#include <globaldefs.h>

struct Struct_ov000_02181c6c_2 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[0xe];
    struct Struct_ov000_02181c6c_2* unknown_30_;
};
struct Struct_ov000_02181c6c {
    char unknown_0_[0x10];
    struct Struct_ov000_02181c6c_2* unknown_10_;
};

// USA: func_ov000_02181c6c
extern "C" ARM int func_ov000_02181c6c(void* arg0, struct Struct_ov000_02181c6c* arg1, int* arg2) {
    struct Struct_ov000_02181c6c_2* var0 = arg1->unknown_10_;
    int var1 = 0;
    while (var0) {
        arg2[var1] = var0->unknown_20_;
        var0 = var0->unknown_30_;
        var1++;
    }
    return var1;
}
