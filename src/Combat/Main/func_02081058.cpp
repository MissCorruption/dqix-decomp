#include <globaldefs.h>

struct Struct_02081058 {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
    unsigned char unknown_2c_;
    char unknown_2d_[0x30 - 0x2d];
};

struct Struct_0207f524;

extern "C" struct Struct_02081058* func_0207f6ac(struct Struct_0207f524*, int);

// USA: func_02081058
extern "C" ARM void func_02081058(void* arg0, int arg1, int arg2) {
    struct Struct_02081058* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 4), arg1);
    if (var0 == NULL) {
        return;
    }
    var0->unknown_2b_ = (unsigned char)arg2;
    var0->unknown_2c_ = 8;
    var0->unknown_2a_ |= 0x20;
}
