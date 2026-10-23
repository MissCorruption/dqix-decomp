#include <globaldefs.h>

struct Struct_ov004_02163478 {
#if defined(jpn)
    char unknown1_0_[0x19fa];
#else
    char unknown_0_[0x18fa];
#endif
    unsigned char unknown_18fa_;
    unsigned char unknown_18fb_;
};

// USA: func_ov004_02163478
extern "C" ARM void func_ov004_02163478(Struct_ov004_02163478* arg0) {
    arg0->unknown_18fb_ = arg0->unknown_18fa_;
    unsigned char var0 = arg0->unknown_18fa_;
    if (var0 == 0) { arg0->unknown_18fa_ = 1; return; }
    if (var0 == 1) { arg0->unknown_18fa_ = 2; return; }
    if (var0 == 2) { arg0->unknown_18fa_ = 0; return; }
}
