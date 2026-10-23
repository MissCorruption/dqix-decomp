#include <globaldefs.h>

struct Struct_ov023_021f8960 {
    char unknown_0_[0xc];
    short unknown_c_;
    short unknown_e_;
};

// USA: func_ov023_021f8960
extern "C" ARM void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2) {
    struct Struct_ov023_021f8960 *var0 = (struct Struct_ov023_021f8960 *)(arg0 + 0x100);
    var0->unknown_c_ = arg1;
    var0->unknown_e_ = arg2;
}
