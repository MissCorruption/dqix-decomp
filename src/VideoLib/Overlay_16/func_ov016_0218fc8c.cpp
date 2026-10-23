#include <globaldefs.h>

struct Struct_ov016_0219d1c0 { unsigned char unknown_0_[0x8]; int unknown_8_; unsigned char unknown_c_[0x8]; int unknown_14_; int unknown_18_; };
extern struct Struct_ov016_0219d1c0 data_ov016_0219d1c0;

// USA: func_ov016_0218fc8c
extern "C" ARM void func_ov016_0218fc8c(void* arg0, unsigned int arg1) {
    data_ov016_0219d1c0.unknown_18_ = (int)arg0;
    data_ov016_0219d1c0.unknown_14_ = (int)(arg1 & ~3u);
    data_ov016_0219d1c0.unknown_8_ = 0;
}
