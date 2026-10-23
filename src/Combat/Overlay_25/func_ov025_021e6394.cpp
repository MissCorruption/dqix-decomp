#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6394_12 = 0x4 };
#else
enum { Enum_ov025_021e6394_12 = 0xc };
#endif

struct Struct_ov025_021ef988_22 { char unknown_0_[Enum_ov025_021e6394_12]; void* unknown_c_; };
extern struct Struct_ov025_021ef988_22 data_ov025_021ef988;

struct Struct_ov025_021e6394 { char unknown_0_[8]; int unknown_8_; };

// USA: func_ov025_021e6394
extern "C" ARM int func_ov025_021e6394(struct Struct_ov025_021e6394* arg0) {
    *(int*)((char*)data_ov025_021ef988.unknown_c_ + 0x560) = arg0->unknown_8_;
    return 1;
}
