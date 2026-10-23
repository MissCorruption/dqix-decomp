#include <globaldefs.h>

struct Struct_02094654_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    short unknown_6_;
};

enum {
    Enum_020946f8_3 = 3,
    Enum_020946f8_256 = 0x100,
    Enum_020946f8_768 = 0x300
};

// USA: func_020946f8
extern "C" ARM void func_020946f8(Struct_02094654_2* arg0, int arg1, int arg2, int arg3,
                            int arg4, int arg5, int arg6, int arg7, int arg8,
                            int arg9, int arg10, int arg11) {
    if (arg6 == Enum_020946f8_256 || arg6 == Enum_020946f8_768) {
        if (arg4 == Enum_020946f8_3) {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg11 << 25) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        } else {
            arg0->unknown_0_ = (arg2 & 0xff) | ((arg11 << 25) | (arg8 << 13)) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        }
    } else {
        if (arg4 == Enum_020946f8_3) {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        } else {
            arg0->unknown_0_ = (arg2 & 0xff) | (arg8 << 13) | (arg4 << 10) | (arg5 << 12) | arg7 | ((arg1 & 0x1ff) << 16) | arg6;
        }
    }
    arg0->unknown_4_ = arg9 | (arg3 << 10) | (arg10 << 12);
}
