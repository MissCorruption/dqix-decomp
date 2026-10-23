#include <globaldefs.h>

extern "C" void func_0209953c(unsigned short);

struct Struct_02028c14 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 4;
    unsigned short unknown_2_4_ : 12;
};

// USA: func_02028c14
extern "C" ARM void func_02028c14(struct Struct_02028c14* arg0, int arg1) {
    if (arg1 >= 0xc) {
        func_0209953c(4);
        return;
    }
    arg0->unknown_2_4_ |= 1 << arg1;
}
