#include <globaldefs.h>

struct Struct_0207f0ac;

struct Struct_020807c4 {
    char unknown_0_[0xa];
    short unknown_a_;
    short unknown_c_;
};

extern "C" struct Struct_020807c4* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);

// USA: func_020807c4
extern "C" ARM void func_020807c4(void* arg0, int arg1, short* arg2, short* arg3) {
    struct Struct_020807c4* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 != NULL) {
        *arg2 = var0->unknown_a_ << 3;
        *arg3 = var0->unknown_c_ << 3;
    }
}
