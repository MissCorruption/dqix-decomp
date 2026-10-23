#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e4eac_12 = 0x4 };
#else
enum { Enum_ov025_021e4eac_12 = 0xc };
#endif

struct Struct_ov025_021ef988_13 {
    char unknown_0_[Enum_ov025_021e4eac_12];
    void* unknown_c_;
};

extern struct Struct_ov025_021ef988_13 data_ov025_021ef988;
extern "C" void func_ov025_021e8a74(void* arg0);

// USA: func_ov025_021e4eac
extern "C" ARM int func_ov025_021e4eac(void) {
    func_ov025_021e8a74(data_ov025_021ef988.unknown_c_);
    return 1;
}
