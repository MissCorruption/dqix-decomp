#include <globaldefs.h>

struct Struct_ov001_02159d44 { void* unknown_0_; int unknown_4_; char unknown_8_[0x88]; int unknown_90_; };

extern "C" void func_ov001_02159d9c(struct Struct_ov001_02159d44* arg0);
extern "C" void func_ov001_02159cfc(void* arg0);

// USA: func_ov001_02159d44
extern "C" ARM int func_ov001_02159d44(struct Struct_ov001_02159d44* arg0, void* arg1, int arg2) {
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
    func_ov001_02159d9c(arg0);
    if (arg0->unknown_0_ != NULL && arg0->unknown_4_ > 0) {
        for (int var0 = 0; var0 < arg0->unknown_4_; var0++) {
            func_ov001_02159cfc((char*)arg0->unknown_0_ + var0 * 0x40);
        }
    }
    arg0->unknown_90_ = 0x1000;
    return 0x1000;
}
