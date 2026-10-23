#include <globaldefs.h>

struct Struct_ov024_021fbefc {
    char unknown_0_[0xc];
    int unknown_c_;
};

extern "C" void func_ov024_021fd954(struct Struct_ov024_021fbefc* arg0, int arg1);

// USA: func_ov024_021fbefc
extern "C" ARM void func_ov024_021fbefc(struct Struct_ov024_021fbefc* arg0) {
    if (arg0->unknown_c_ >= 3) {
        func_ov024_021fd954(arg0, 4);
    }
}
