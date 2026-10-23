#include <globaldefs.h>

struct Struct_0204bab4_3 {
    char unknown_0_[0x10];
};

struct Struct_0204bbb4 {
    char unknown_0_[0x10];
    struct Struct_0204bab4_3* unknown_10_;
    char unknown_14_[0x1d - 0x14];
    unsigned char unknown_1d_;
};

extern "C" void func_0204bab4(struct Struct_0204bbb4*, struct Struct_0204bab4_3*, int, int, int, int, int, int, int);

// USA: func_0204bbb4
extern "C" ARM void func_0204bbb4(struct Struct_0204bbb4* arg0, unsigned int arg1, int arg2, int arg3,
                               short arg4, short arg5, short arg6, short arg7, unsigned short arg8) {
    if (arg0->unknown_1d_ > arg1 && arg0->unknown_10_ != NULL) {
        func_0204bab4(arg0, &arg0->unknown_10_[arg1], arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
}
