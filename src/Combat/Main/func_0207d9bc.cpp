#include <globaldefs.h>
struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
// USA: func_0207d9bc
extern "C" ARM struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4 *arg0, unsigned short arg1) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        if (arg0[var0].unknown_0_ == arg1) return &arg0[var0];
    }
    return NULL;
}
