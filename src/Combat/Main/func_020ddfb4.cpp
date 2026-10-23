#include <globaldefs.h>

struct Struct_020ddfb4_2;
extern "C" void func_020ddffc(struct Struct_020ddfb4_2* arg0);
struct Struct_020ddfb4;
extern "C" void func_020de0c8(struct Struct_020ddfb4* arg0);
extern "C" void func_020de038(void* arg0);

struct Struct_020ddea0_2 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
};

// USA: func_020ddfb4
extern "C" ARM void func_020ddfb4(struct Struct_020ddea0_2* arg0) {
    unsigned char var0 = arg0->unknown_4_;
    if (var0 == 2) {
        func_020ddffc((struct Struct_020ddfb4_2*)arg0);
        return;
    }
    if (var0 == 1) return;
    if (var0 == 3) {
        func_020de038(arg0);
        return;
    }
    if (var0 != 4) return;
    func_020de0c8((struct Struct_020ddfb4*)arg0);
}
