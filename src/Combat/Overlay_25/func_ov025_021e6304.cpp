#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6304_12 = 0x4 };
#else
enum { Enum_ov025_021e6304_12 = 0xc };
#endif

extern void* data_ov025_021ef988;

struct Struct_ov025_021e6304 {
    char unknown_0_[8];
    int unknown_8_;
};

// USA: func_ov025_021e6304
extern "C" ARM int func_ov025_021e6304(struct Struct_ov025_021e6304* arg0) {
    *(int*)((char*)*(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e6304_12) + 0x558) = arg0->unknown_8_;
    return 1;
}
