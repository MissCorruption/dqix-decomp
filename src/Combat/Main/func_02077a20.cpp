#include <globaldefs.h>

struct Struct_02077a20 {
    char unknown_0_[8];
    short unknown_8_;
};

struct Struct_02077788_2 {
    char unknown_0_[0x184];
    struct Struct_02077a20* unknown_184_;
};

// USA: func_02077a20
extern "C" ARM int func_02077a20(struct Struct_02077788_2* arg0) {
    struct Struct_02077a20* var0 = arg0->unknown_184_;
    return var0 != NULL ? var0->unknown_8_ : 0x1000;
}
