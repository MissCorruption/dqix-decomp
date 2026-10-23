#include <globaldefs.h>

struct Struct_ov025_021e3048_2 {
    short* unknown_0_;
    char unknown_4_[0x3c - 4];
};
struct Struct_ov025_021e3048 {
    char unknown_0_[0x540];
    Struct_ov025_021e3048_2 unknown_540_;
};
struct Struct_ov025_021ef988_6 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    Struct_ov025_021e3048* unknown_c_;
};
extern Struct_ov025_021ef988_6 data_ov025_021ef988;
extern "C" void func_ov025_021e2f54(Struct_ov025_021e3048_2*, short*, char*);
extern "C" void func_ov025_021e3084(Struct_ov025_021e3048_2*);

// USA: func_ov025_021e3048
extern "C" ARM int func_ov025_021e3048(void*, short* arg1, void*, char* arg3) {
    Struct_ov025_021e3048* var0 = data_ov025_021ef988.unknown_c_;
    func_ov025_021e3084(&var0->unknown_540_);
    var0->unknown_540_.unknown_0_ = arg1;
    func_ov025_021e2f54(&var0->unknown_540_, arg1, arg3);
    return 1;
}
