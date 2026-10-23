#include <globaldefs.h>

extern "C" void func_020c391c(int arg0, int arg1, int arg2);

struct Struct_ov016_0219d0c0_5 {
#if defined(jpn)
 char unknown_0_[0x34];
#else
 char unknown1_0_[0x18];
#endif
 int unknown_18_; };
extern Struct_ov016_0219d0c0_5 data_ov016_0219d0c0;

// USA: func_ov016_0218be7c
extern "C" ARM void func_ov016_0218be7c(void) {
    if (data_ov016_0219d0c0.unknown_18_ == 0) {
        func_020c391c(6, 0, 0);
    } else {
        func_020c391c(2, 0, 0);
    }
    data_ov016_0219d0c0.unknown_18_ ^= 1;
}
