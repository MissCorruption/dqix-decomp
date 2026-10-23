#include <globaldefs.h>

extern "C" void func_0204b620(void*, void*, int, int, int, int, int, int, int, int);

struct Struct_0204b8d0 {
    char unknown_0_[0x10];
    int unknown_10_;
    void* unknown_14_;
    char unknown_18_[5];
    unsigned char unknown_1d_;
};

// USA: func_0204b8d0
extern "C" ARM void func_0204b8d0(struct Struct_0204b8d0* arg0, unsigned int arg1, int arg2, int arg3,
                              short arg4, short arg5, short arg6, short arg7, unsigned short arg8) {
    if (arg0->unknown_1d_ <= arg1) return;
    int var0 = arg0->unknown_10_;
    if (var0 == 0) return;
    var0 += arg1 << 4;
    void* var1 = arg0->unknown_14_;
    if (var1 == NULL) return;
    func_0204b620(arg0, var1, var0, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
