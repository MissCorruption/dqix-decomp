#include <globaldefs.h>

extern "C" void func_0209953c(unsigned short);

struct Struct_02018300_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_02028c64
extern "C" ARM void func_02028c64(struct Struct_02018300_2* arg0, int arg1) {
    if (arg1 < 0x10) {
        arg0->unknown_4_ |= 1 << arg1;
        return;
    }
    func_0209953c(5);
}
