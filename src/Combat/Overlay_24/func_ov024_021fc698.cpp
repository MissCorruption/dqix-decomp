#include <globaldefs.h>

struct Struct_ov024_021fc698 { char unknown_0_[0x71]; unsigned char unknown_71_; };

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021fd954(void* arg0, int arg1);

// USA: func_ov024_021fc698
extern "C" ARM void func_ov024_021fc698(struct Struct_ov024_021fc698* arg0) {
    if (arg0->unknown_71_) {
        if (func_ov024_021fe698(arg0, 12)) {
            func_ov024_021fd954(arg0, 11);
        }
    }
}
