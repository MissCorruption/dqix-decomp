#include <globaldefs.h>

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
struct Struct_0207d798;
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" void func_0207d7c0(struct Struct_0207d798* arg0);

// USA: func_0207da7c
extern "C" ARM void func_0207da7c(struct Struct_0207d7f4* arg0, unsigned short arg1) {
    struct Struct_0207d7f4* var0 = func_0207d9bc(arg0, arg1);
    if (var0 != NULL) {
        func_0207d7c0((struct Struct_0207d798*)var0);
    }
}
