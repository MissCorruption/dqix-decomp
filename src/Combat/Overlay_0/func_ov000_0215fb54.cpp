#include <globaldefs.h>

struct Struct_ov000_02182e6c { short unknown_0_; short unknown_2_; short unknown_4_; short unknown_6_; };
struct Struct_ov024_021fea1c { int unknown_0_; int unknown_4_; };
extern Struct_ov000_02182e6c data_ov000_02182e6c[];

// USA: func_ov000_0215fb54
extern "C" ARM int func_ov000_0215fb54(int arg0, int arg1, Struct_ov024_021fea1c* arg2) {
    Struct_ov000_02182e6c* var0 = data_ov000_02182e6c;
    while (var0->unknown_0_ != -1) {
        if (var0->unknown_0_ == arg1) {
            arg2->unknown_0_ = var0->unknown_2_;
            arg2->unknown_4_ = var0->unknown_4_;
            return var0->unknown_6_;
        }
        var0++;
    }
    return -1;
}
