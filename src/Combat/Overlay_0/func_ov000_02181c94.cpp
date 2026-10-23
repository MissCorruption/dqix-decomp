#include <globaldefs.h>

struct Struct_ov000_02181c94_2 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x10];
    struct Struct_ov000_02181c94_2* unknown_20_;
};
struct Struct_ov000_02181c94 {
    char unknown_0_[0x14];
    struct Struct_ov000_02181c94_2* unknown_14_;
};

// USA: func_ov000_02181c94
extern "C" ARM int func_ov000_02181c94(void* arg0, struct Struct_ov000_02181c94* arg1, int* arg2) {
    struct Struct_ov000_02181c94_2* var0 = arg1->unknown_14_;
    int var1 = 0;
    while (var0) {
        arg2[var1] = var0->unknown_e_;
        var0 = var0->unknown_20_;
        var1++;
    }
    return var1;
}
