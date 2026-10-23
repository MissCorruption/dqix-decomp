#include <globaldefs.h>
extern "C" void func_020555a0(struct Struct_020555a0*);


struct Struct_020579ec {
    char unknown_0_[0x1ec];
    Struct_020579ec* unknown_1ec_;  // 0x1ec
};

// USA: func_020579ec
extern "C" ARM void func_020579ec(Struct_020579ec** arg0) {
    Struct_020579ec* var0 = *arg0;
    while (var0 != NULL) {
        func_020555a0((struct Struct_020555a0*)(var0));
        var0 = var0->unknown_1ec_;
    }
}
