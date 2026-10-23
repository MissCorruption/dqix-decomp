#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x6e8
#else
#define REGION_OFFSET_0 0x4f4
#endif

struct Struct_ov000_02162c90 { char unknown_0_[REGION_OFFSET_0]; int unknown_4f4_; };

// USA: func_ov000_02162c90
extern "C" ARM void func_ov000_02162c90(char* arg0, int arg1, int arg2) {
    int var0 = (arg1 >= 0 && arg1 <= 3);
    if (var0) {
        ((struct Struct_ov000_02162c90*)(arg0 + arg1 * 4 + 0x5000))->unknown_4f4_ = arg2;
    }
}
