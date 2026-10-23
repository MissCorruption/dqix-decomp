#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov025_021ef7ef;
extern "C" void func_ov025_021e27c8(char* arg0, signed char arg1);

struct Struct_ov025_021e4168 {
    unsigned char unknown_0_[8];
    signed char unknown_8_;
    unsigned char unknown_9_[3];
    int unknown_c_;
};

// USA: func_ov025_021e4168
extern "C" ARM int func_ov025_021e4168(struct Struct_ov025_021e4168* arg0) {
    char var0[0x50];
    sprintf(var0, &data_ov025_021ef7ef, arg0->unknown_c_);
    func_ov025_021e27c8(var0, arg0->unknown_8_);
    return 1;
}
