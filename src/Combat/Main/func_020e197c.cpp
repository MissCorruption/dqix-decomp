#include <globaldefs.h>

struct Struct_020e1780_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

// USA: func_020e197c
extern "C" ARM void func_020e197c(struct Struct_020e1780_2* arg0, int arg1, int arg2, int arg3,
        int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11) {
    if (arg6 == 0x100 || arg6 == 0x300) {
        if (arg4 == 3) {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg11 << 25) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        } else {
            arg0->unknown_0_ = (arg2 & 0xff) | ((arg11 << 25) | (arg8 << 13)) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        }
    } else {
        if (arg4 == 3) {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        } else {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg8 << 13) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        }
    }
    arg0->unknown_4_ = (unsigned short)(arg9 | (arg3 << 10) | (arg10 << 12));
}
