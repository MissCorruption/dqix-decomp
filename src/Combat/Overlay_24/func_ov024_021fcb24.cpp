#include <globaldefs.h>

struct Struct_ov024_021fcb24 { char unknown_0_[0x70]; unsigned char unknown_70_; };

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021fd954(void* arg0, int arg1);

// USA: func_ov024_021fcb24
extern "C" ARM void func_ov024_021fcb24(struct Struct_ov024_021fcb24* arg0) {
    if (arg0->unknown_70_) {
        if (func_ov024_021fe698(arg0, 11)) {
            func_ov024_021fd954(arg0, 15);
        }
    }
}
