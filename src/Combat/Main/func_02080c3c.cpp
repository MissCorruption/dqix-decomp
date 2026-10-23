#include <globaldefs.h>

struct Struct_0207fdcc_2;
struct Struct_0207fdcc { char unknown_0_[0xc5]; unsigned char unknown_c5_; };
extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);

// USA: func_02080c3c
extern "C" ARM int func_02080c3c(struct Struct_0207fdcc_2* arg0, int arg1) {
    struct Struct_0207fdcc* var0 = func_02081da8(arg0, arg1);
    if (var0 != NULL) {
        return (var0->unknown_c5_ & 0x20) == 0;
    }
    return 0;
}
