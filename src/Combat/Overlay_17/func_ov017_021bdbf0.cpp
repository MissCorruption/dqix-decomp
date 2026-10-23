#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021bdbf0
extern "C" ARM void func_ov017_021bdbf0(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0x0] = 0x32;
    arg0[0x10] = 0;
    arg0[0x11] = 1;
    for (int var0 = 0; var0 < 4; var0++) {
        *(short*)(arg0 + var0 * 2 + 8) = -1;
    }
}
