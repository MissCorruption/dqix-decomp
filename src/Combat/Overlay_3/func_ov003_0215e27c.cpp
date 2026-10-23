#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0215e27c_1000 = 0x400 };
#else
enum { Enum_ov003_0215e27c_1000 = 0x3e8 };
#endif
struct Struct_ov003_0215c924 { char unknown_0_[Enum_ov003_0215e27c_1000]; int unknown_3e8_; };

// USA: func_ov003_0215e27c
#pragma optimize_for_size off
extern "C" ARM int func_ov003_0215e27c(struct Struct_ov003_0215c924* arg0, int arg1) {
    if (arg0->unknown_3e8_ > arg1) {
        arg0->unknown_3e8_ -= arg1;
    } else {
        arg0->unknown_3e8_ = 0;
        return 0;
    }
    return 1;
}
