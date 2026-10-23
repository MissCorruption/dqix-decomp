#include <globaldefs.h>

struct Struct_02081130 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
    char unknown_16_[0x18 - 0x16];
};

struct Struct_0207f0ac;

extern "C" struct Struct_02081130* func_0207f0ac(struct Struct_0207f0ac*, int);

// USA: func_02081130
extern "C" ARM void func_02081130(void* arg0, int arg1, int arg2) {
    struct Struct_02081130* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) {
        return;
    }
    if (arg2 != 0) {
        var0->unknown_15_ |= 1;
    } else {
        var0->unknown_15_ &= ~1;
    }
}
