#include <globaldefs.h>
#include "std_library_functions.h"
struct Struct_020e4f18_2 { unsigned int unknown_0_0_:6, unknown_0_6_:6, unknown_1_4_:6, unknown_2_2_:6, unknown_3_0_:2, unknown_3_2_:1, unknown_3_3_:1, unknown_3_4_:1, unknown_3_5_:2, unknown_3_7_:1; };
struct Struct_020e4f18 { char* unknown_0_; char* unknown_4_; Struct_020e4f18_2 unknown_8_; };
// USA: func_020e4f18
extern "C" ARM void func_020e4f18(Struct_020e4f18* arg0, Struct_020e4f18* arg1, int arg2) {
    if (!arg0 || !arg1) return;
    if (arg2 & 1) {
        char* var0 = arg1->unknown_4_;
        sprintf(arg1->unknown_0_, arg0->unknown_0_);
        sprintf(var0, arg0->unknown_4_);
    }
    if (arg2 & 2) {
        arg1->unknown_8_.unknown_0_0_ = arg0->unknown_8_.unknown_0_0_;
        arg1->unknown_8_.unknown_0_6_ = arg0->unknown_8_.unknown_0_6_;
        arg1->unknown_8_.unknown_1_4_ = arg0->unknown_8_.unknown_1_4_;
        arg1->unknown_8_.unknown_2_2_ = arg0->unknown_8_.unknown_2_2_;
    }
    arg1->unknown_8_.unknown_3_0_ = arg0->unknown_8_.unknown_3_0_;
    arg1->unknown_8_.unknown_3_2_ = arg0->unknown_8_.unknown_3_2_;
    arg1->unknown_8_.unknown_3_3_ = arg0->unknown_8_.unknown_3_3_;
    arg1->unknown_8_.unknown_3_4_ = arg0->unknown_8_.unknown_3_4_;
    arg1->unknown_8_.unknown_3_7_ = arg0->unknown_8_.unknown_3_7_;
}
