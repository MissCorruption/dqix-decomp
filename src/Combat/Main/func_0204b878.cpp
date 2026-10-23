#include <globaldefs.h>

extern "C" void func_0204b620(void*, void*, int, int, int, int, int, int, int, int);

struct Struct_0204b878 {
    char unknown_0_[0x14];
    void* unknown_14_;
};

// USA: func_0204b878
extern "C" ARM void func_0204b878(struct Struct_0204b878* arg0, int arg1, int arg2, int arg3,
                                              short arg4, short arg5, short arg6, short arg7, unsigned short arg8) {
    if (arg0->unknown_14_ != NULL) {
        func_0204b620(arg0, arg0->unknown_14_, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
}
