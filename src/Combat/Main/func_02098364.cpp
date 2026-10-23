#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"

struct Struct_020827c4 { char unknown_0_[0x1c]; };
extern "C" void func_020827c4(Struct_020827c4*);

struct Struct_02098364 {
    char unknown_0_[11];
    unsigned char unknown_b_0_ : 7;
    unsigned char unknown_b_7_ : 1;
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 7;
    unsigned int unknown_d_7_ : 4;
    unsigned int unknown_e_3_ : 5;
    unsigned int unknown_f_0_ : 6;
    unsigned int unknown_f_6_ : 1;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 2;
    unsigned int unknown_10_2_ : 30;
    char unknown_14_[6];
    Struct_020827c4 unknown_1a_;
    char unknown_36_[2];
    char unknown_38_[0x18];
    char unknown_50_[0x1c];
    unsigned int unknown_6c_0_ : 12;
    unsigned int unknown_6d_4_ : 4;
    unsigned int unknown_6e_0_ : 5;
    unsigned int unknown_6e_5_ : 4;
    unsigned int unknown_6f_1_ : 1;
    unsigned int unknown_6f_2_ : 1;
    unsigned int unknown_6f_3_ : 1;
    unsigned int unknown_6f_4_ : 1;
    unsigned int unknown_6f_5_ : 1;
    unsigned int unknown_6f_6_ : 1;
    unsigned int unknown_6f_7_ : 1;
    unsigned int unknown_70_0_ : 9;
    unsigned int unknown_71_1_ : 10;
    unsigned int unknown_72_3_ : 11;
    unsigned int unknown_73_6_ : 1;
    unsigned int unknown_73_7_ : 1;
    unsigned char unknown_74_;
};

// USA: func_02098364
extern "C" ARM void func_02098364(Struct_02098364* arg0) {
    memset(arg0, 0, 11);
    arg0->unknown_c_0_ = 0;
    arg0->unknown_c_4_ = 0;
    arg0->unknown_b_0_ = 0;
    arg0->unknown_d_7_ = 0;
    arg0->unknown_e_3_ = 0;
    arg0->unknown_f_0_ = 0;
    arg0->unknown_f_6_ = 0;
    arg0->unknown_10_0_ = 0;
    arg0->unknown_f_7_ = 0;
    arg0->unknown_b_7_ = 0;
    arg0->unknown_10_2_ = 0;
    VectorizedMemset(arg0->unknown_14_, 0, 6);
    arg0->unknown_6c_0_ = 2000;
    arg0->unknown_6d_4_ = 1;
    arg0->unknown_6e_0_ = 1;
    arg0->unknown_6f_4_ = 0;
    arg0->unknown_6e_5_ = 0;
    arg0->unknown_6f_3_ = 0;
    arg0->unknown_6f_1_ = 0;
    arg0->unknown_6f_2_ = 0;
    arg0->unknown_6f_5_ = 0;
    arg0->unknown_6f_6_ = 1;
    arg0->unknown_6f_7_ = 0;
    arg0->unknown_70_0_ = 511;
    arg0->unknown_73_6_ = 0;
    arg0->unknown_71_1_ = 300;
    arg0->unknown_72_3_ = 706;
    arg0->unknown_74_ = 0;
    func_020827c4(&arg0->unknown_1a_);
    VectorizedMemset(arg0->unknown_38_, 0, 0x18);
    VectorizedMemset(arg0->unknown_50_, 0, 0x1c);
}
