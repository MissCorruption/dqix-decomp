#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e7fb4_12 = 0x4 };
#else
enum { Enum_ov025_021e7fb4_12 = 0xc };
#endif

struct Struct_ov025_021e3c3c;
struct Struct_ov025_021ef988_7 {
    char unknown_0_[Enum_ov025_021e7fb4_12];
    Struct_ov025_021e3c3c* unknown_c_;
};
extern Struct_ov025_021ef988_7 data_ov025_021ef988;
extern "C" void func_ov025_021e9d14(void* arg0);
extern "C" void func_ov025_021e9edc(void* arg0);

// USA: func_ov025_021e7fb4
extern "C" ARM int func_ov025_021e7fb4() {
    Struct_ov025_021e3c3c* var0 = data_ov025_021ef988.unknown_c_;
    func_ov025_021e9d14(var0);
    var0 = data_ov025_021ef988.unknown_c_;
    func_ov025_021e9edc(var0);
    return 1;
}
