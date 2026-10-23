#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov023_021f81f4_2 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_ov023_021f81f4 {
    char unknown_0_[0x100];
    unsigned short unknown_100_;
    unsigned short unknown_102_;
};

// USA: func_ov023_021f81f4
extern "C" ARM void func_ov023_021f81f4(struct Struct_ov023_021f81f4_2* arg0, struct Struct_ov023_021f81f4* arg1) {
    int var0[3];
    __clear(var0, 0xc);
    var0[0] = arg1->unknown_100_ << 0xc;
    var0[1] = arg1->unknown_102_ << 0xc;
    *(int(*)[3])arg0 = *(int(*)[3])var0;
}
