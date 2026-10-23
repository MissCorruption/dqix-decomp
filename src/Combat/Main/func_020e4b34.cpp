#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e4b34_2 {
    unsigned int unknown_0_0_ : 6;
    unsigned int unknown_0_6_ : 6;
    unsigned int unknown_1_4_ : 6;
    unsigned int unknown_2_2_ : 6;
    unsigned int unknown_3_0_ : 2;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_020e4b34 {
    int unknown_0_;
    int unknown_4_;
    union {
        unsigned int unknown_0_;
        Struct_020e4b34_2 unknown1_0_;
    } unknown_8_;
};

// USA: func_020e4b34
extern "C" ARM void func_020e4b34(Struct_020e4b34* arg0, int arg1, int arg2, unsigned int arg3,
        unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7,
        unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11) {
    memset(arg0, 0, 0xc);
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
    arg0->unknown_8_.unknown1_0_.unknown_0_0_ = arg3;
    arg0->unknown_8_.unknown1_0_.unknown_0_6_ = arg4;
    arg0->unknown_8_.unknown1_0_.unknown_1_4_ = arg5;
    arg0->unknown_8_.unknown1_0_.unknown_2_2_ = arg6;
    arg0->unknown_8_.unknown1_0_.unknown_3_0_ = arg7;
    arg0->unknown_8_.unknown1_0_.unknown_3_2_ = arg8;
    arg0->unknown_8_.unknown1_0_.unknown_3_3_ = arg9;
    arg0->unknown_8_.unknown1_0_.unknown_3_4_ = arg10;
    arg0->unknown_8_.unknown1_0_.unknown_3_6_ = arg11;
}
