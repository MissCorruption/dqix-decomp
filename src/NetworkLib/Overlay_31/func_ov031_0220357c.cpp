#include <globaldefs.h>

struct Struct_ov031_0220357c_2 { unsigned char unknown_0_[8]; unsigned char unknown_8_; unsigned char unknown_9_; };
struct Struct_ov031_0220357c { unsigned char unknown_0_[0xa4]; Struct_ov031_0220357c_2* unknown_a4_; };
struct Struct_02111304_4 { unsigned char unknown_0_[4]; Struct_ov031_0220357c* unknown_4_; };

extern Struct_02111304_4 data_02111304;
extern "C" ARM int func_ov031_022034ac(unsigned int* arg0, void* arg1);
extern "C" int func_ov031_0220a594(unsigned int* arg0, void* arg1);
extern "C" ARM int func_ov031_02203500(unsigned int* arg0, void* arg1);

// USA: func_ov031_0220357c
extern "C" ARM int func_ov031_0220357c(unsigned int* arg0) {
    Struct_ov031_0220357c_2* var0 = data_02111304.unknown_4_->unknown_a4_;
    if (var0) {
        if ((unsigned char)(var0->unknown_8_ + 0xf6) <= 1) return func_ov031_022034ac(arg0, var0);
        if (var0->unknown_9_) return func_ov031_0220a594(arg0, var0);
        return func_ov031_02203500(arg0, var0);
    }
    *arg0 = 0;
    return 0;
}
