#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e3c3c_12 = 0x4 };
#else
enum { Enum_ov025_021e3c3c_12 = 0xc };
#endif

extern "C" int func_ov025_021eb050(void* arg0);
extern "C" void func_ov025_021eb044(void* arg0, int arg1);
struct Struct_ov025_021e3c3c;
struct Struct_ov025_021ef988_7 {
    char unknown_0_[Enum_ov025_021e3c3c_12];
    Struct_ov025_021e3c3c* unknown_c_;
};
extern Struct_ov025_021ef988_7 data_ov025_021ef988;

struct Struct_ov025_021e3c3c_2 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
};

// USA: func_ov025_021e3c3c
extern "C" ARM int func_ov025_021e3c3c(struct Struct_ov025_021e3c3c_2* arg0) {
    Struct_ov025_021e3c3c* var0 = data_ov025_021ef988.unknown_c_;
    int var1 = func_ov025_021eb050(var0);
    if (arg0->unknown_8_ == var1) {
        var0 = data_ov025_021ef988.unknown_c_;
        func_ov025_021eb044(var0, 0);
    }
    return 1;
}
