#include <globaldefs.h>

struct Struct_ov005_02153954;
struct Struct_ov023_021e3134 {
    Struct_ov005_02153954* unknown_0_;
#if defined(jpn)
    char unknown_4_[0x4e2 - 4];
#else
    char unknown1_4_[0x4e6 - 4];
#endif
    signed char unknown_4e6_;
};

extern "C" void func_ov005_02155108(void* arg0);

// USA: func_ov023_021e3184
extern "C" ARM void func_ov023_021e3184(Struct_ov023_021e3134* arg0) {
    if (arg0->unknown_4e6_ == 0) return;
    if (arg0->unknown_4e6_ == -1) return;
    Struct_ov005_02153954* var0 = arg0->unknown_0_;
    if (var0 == NULL) return;
    func_ov005_02155108(var0);
}
