#include <globaldefs.h>

extern "C" void func_ov025_021e278c(int arg0, char* arg1);
extern "C" void func_ov025_021e27c8(char* arg0, signed char arg1);

struct Struct_ov025_021e4a58 {
    unsigned char unknown_0_[8];
    signed char unknown_8_;
    unsigned char unknown_9_[3];
    int unknown_c_;
};

// USA: func_ov025_021e4a58
extern "C" ARM int func_ov025_021e4a58(struct Struct_ov025_021e4a58* arg0) {
    char var0[0x50];
    func_ov025_021e278c(arg0->unknown_c_, var0);
    func_ov025_021e27c8(var0, arg0->unknown_8_);
    return 1;
}
