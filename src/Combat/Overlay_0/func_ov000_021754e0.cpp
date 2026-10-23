#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x47c
#else
#define REGION_OFFSET_0 0x43c
#endif


struct Struct_ov000_021754e0 { char unknown_0_[REGION_OFFSET_0]; unsigned char unknown_43c_; };

extern "C" struct Struct_ov000_021754e0* func_ov000_02161318(int, int);

// USA: func_ov000_021754e0
extern "C" ARM void func_ov000_021754e0(int arg0, int arg1) {
    struct Struct_ov000_021754e0* var0 = func_ov000_02161318(arg0, arg1);
    if (var0) {
        var0->unknown_43c_ |= 0x2;
    }
}
