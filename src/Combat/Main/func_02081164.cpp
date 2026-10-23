#include <globaldefs.h>

struct Struct_0207f0ac;

struct Struct_02081164_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};

extern "C" struct Struct_02081164_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);

struct Struct_02081164 {
    char unknown_0_[0xc];
};

// USA: func_02081164
extern "C" ARM void func_02081164(struct Struct_02081164* arg0, int arg1, int arg2) {
    struct Struct_02081164_2* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) {
        return;
    }
    if (arg2) {
        var0->unknown_15_ |= 0x2;
    } else {
        var0->unknown_15_ &= ~0x2;
    }
}
