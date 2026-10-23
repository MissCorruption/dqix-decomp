#include <globaldefs.h>

struct Struct_ov028_021d8a74 {
    int unknown_0_;
    char unknown_4_[4];
    int unknown_8_;
};

// USA: func_ov028_021d8a74
extern "C" ARM void func_ov028_021d8a74(Struct_ov028_021d8a74* arg0, float arg1) {
    arg0->unknown_0_ = arg0->unknown_0_ + (int)(2.0f * arg1 * 4096.0f);
    arg0->unknown_8_ = arg0->unknown_8_ + (int)(2.0f * arg1 * 4096.0f);
}
