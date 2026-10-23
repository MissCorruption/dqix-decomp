#include <globaldefs.h>

struct Struct_0207f0ac;

struct Struct_02081198_2 {
    char unknown_0_[0x12];
    unsigned char unknown_12_;
};

extern "C" struct Struct_02081198_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);

struct Struct_02081198 {
    char unknown_0_[0xc];
};

// USA: func_02081198
extern "C" ARM void func_02081198(struct Struct_02081198* arg0, int arg1, int arg2) {
    struct Struct_02081198_2* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) {
        return;
    }
    if (arg2) {
        var0->unknown_12_ = (var0->unknown_12_ & ~0xf0) | 0x10;
    } else {
        var0->unknown_12_ = var0->unknown_12_ & ~0xf0;
    }
}
