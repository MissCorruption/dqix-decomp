#include <globaldefs.h>
struct Struct_0208b788 { int unknown_0_, unknown_4_; float unknown_8_; unsigned short unknown_c_; unsigned short unknown_e_; };
struct Struct_020e8d0c { Struct_0208b788 unknown_0_[3]; };
extern Struct_020e8d0c data_020e8d0c;
// USA: func_0208b788
extern "C" ARM void func_0208b788(int arg0, float arg1, Struct_0208b788* arg2, int arg3) {
    Struct_020e8d0c var0 = data_020e8d0c;
    if (arg3) var0.unknown_0_[0].unknown_8_ = 1.2f;
    Struct_0208b788* var1 = &var0.unknown_0_[arg0];
    Struct_0208b788* var2 = &var0.unknown_0_[arg0 + 1];
    arg2->unknown_0_ = (int)((float)var1->unknown_0_ + arg1 * (float)(var2->unknown_0_ - var1->unknown_0_));
    arg2->unknown_4_ = (int)((float)var1->unknown_4_ + arg1 * (float)(var2->unknown_4_ - var1->unknown_4_));
    arg2->unknown_8_ = var1->unknown_8_ + arg1 * (var2->unknown_8_ - var1->unknown_8_);
    arg2->unknown_c_ = (unsigned int)((float)(unsigned int)var1->unknown_c_ + arg1 * (float)(var2->unknown_c_ - var1->unknown_c_));
}
