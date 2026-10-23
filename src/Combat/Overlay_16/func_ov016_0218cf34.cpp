#include <globaldefs.h>

struct Struct_ov016_0219d144_3 {
#if defined(jpn)
 unsigned char unknown1_0_[0x30];
#else
 unsigned char unknown_0_[0x44];
#endif
 unsigned long long unknown_48_; };
extern struct Struct_ov016_0219d144_3 data_ov016_0219d144;

// USA: func_ov016_0218cf34
extern "C" ARM void func_ov016_0218cf34(void) {
    data_ov016_0219d144.unknown_48_++;
}
