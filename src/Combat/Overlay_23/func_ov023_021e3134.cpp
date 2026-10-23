#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021e3134 func_ov023_021e348c
#endif

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

extern "C" void func_ov023_021e3fc0(void* arg0);
extern "C" void func_ov023_021e4264(void* arg0);
extern "C" void func_ov023_021e4358(void* arg0);
extern "C" void func_ov023_021e43f0(void* arg0);
extern "C" void func_ov005_02154ef0(Struct_ov005_02153954* arg0);

// USA: func_ov023_021e3134
extern "C" ARM void func_ov023_021e3134(Struct_ov023_021e3134* arg0) {
    if (arg0->unknown_4e6_ == 0) return;
    if (arg0->unknown_4e6_ == -1) return;
    func_ov023_021e3fc0(arg0);
    func_ov023_021e4264(arg0);
    func_ov023_021e4358(arg0);
    func_ov023_021e43f0(arg0);
    Struct_ov005_02153954* var0 = arg0->unknown_0_;
    if (var0 == NULL) return;
    func_ov005_02154ef0(var0);
}
