#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6230_12 = 0x4 };
#else
enum { Enum_ov025_021e6230_12 = 0xc };
#endif

extern "C" int func_ov025_021e2f54(void*, int, int);

struct Struct_ov025_021ef988_19 {
    char unknown_0_[Enum_ov025_021e6230_12];
    char* unknown_c_;
};
extern struct Struct_ov025_021ef988_19 data_ov025_021ef988;

// USA: func_ov025_021e6230
extern "C" ARM int func_ov025_021e6230(void* arg0, int arg1, int arg2, int arg3) {
    (void)arg0;
    (void)arg2;
    func_ov025_021e2f54(data_ov025_021ef988.unknown_c_ + 0x540, arg1, arg3);
    return 1;
}
