#include <globaldefs.h>

struct Struct_020db3f4_2;
extern "C" ARM void func_020dde64(struct Struct_020db3f4_2* arg0);

struct Struct_020ddfb4 {
    unsigned char unknown_0_[0x18];
    int unknown_18_;
};

// USA: func_020de0c8
extern "C" ARM void func_020de0c8(struct Struct_020ddfb4* arg0) {
    arg0->unknown_18_ -= 0x333;
    if (arg0->unknown_18_ > 0) return;
    func_020dde64((struct Struct_020db3f4_2*)arg0);
}
