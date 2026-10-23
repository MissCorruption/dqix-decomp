#include <globaldefs.h>

struct Struct_0204c610 {
    char unknown_0_[0xc];
    short unknown_c_[18]; // 0xc
    short unknown_30_[18]; // 0x30
    short unknown_54_[18]; // 0x54
    short unknown_78_[18]; // 0x78
};

// USA: func_0204c610
extern "C" ARM void func_0204c610(struct Struct_0204c610* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5) {
    if (arg1 < 0) return;
    if (arg1 >= 18) return;
    *arg2 = arg0->unknown_c_[arg1];
    *arg3 = arg0->unknown_30_[arg1];
    *arg4 = arg0->unknown_54_[arg1];
    *arg5 = arg0->unknown_78_[arg1];
}
