#include <globaldefs.h>

struct Struct_020b18e8 {
    void *unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
};

extern "C" void func_020ca458(unsigned int value, void *dest, int count);

// USA: func_020b18e8
extern "C" ARM void func_020b18e8(struct Struct_020b18e8 *arg0, unsigned int arg1) {
    int var0 = arg0->unknown_c_;
    if (var0 == 4) {
        arg1 = arg1 | (arg1 << 4);
        arg1 = arg1 | (arg1 << 8);
        arg1 = arg1 | (arg1 << 16);
    } else {
        arg1 = arg1 | (arg1 << 8);
        arg1 = arg1 | (arg1 << 16);
    }
    {
        int var1 = arg0->unknown_4_ * arg0->unknown_8_;
        int var2 = (var0 << 6) / 8;
        func_020ca458(arg1, arg0->unknown_0_, var1 * var2);
    }
}
