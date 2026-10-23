#include <globaldefs.h>

struct Struct_ov024_021fd1bc {
    char unknown_0_[0x3c];
    int unknown_3c_;
};

// USA: func_ov024_021fe6b4
extern "C" ARM void func_ov024_021fe6b4(struct Struct_ov024_021fd1bc* arg0, int arg1) {
    arg0->unknown_3c_ = arg1;
    *((unsigned char*)arg0 + 0x40) = *((unsigned char*)arg0 + arg1 + 0x10);
}
