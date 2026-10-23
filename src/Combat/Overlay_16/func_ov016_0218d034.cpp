#include <globaldefs.h>

extern "C" void func_020c391c(int arg0, int arg1, int arg2);

struct Struct_ov016_0219d144_5 { char unknown_0_[0x4]; int unknown_4_;
#if defined(jpn)
 char unknown_8_[0xc - 0x8];
#else
 char unknown1_8_[0x30 - 0x8];
#endif
 int unknown_30_; };
extern Struct_ov016_0219d144_5 data_ov016_0219d144;
extern char data_027e0000;

// USA: func_ov016_0218d034
extern "C" ARM void func_ov016_0218d034(void) {
    if (data_ov016_0219d144.unknown_30_ == 0) {
        data_ov016_0219d144.unknown_30_ = 1;
        if (data_ov016_0219d144.unknown_4_ == 0) {
            func_020c391c(6, 0, 0);
            *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1000;
        } else {
            func_020c391c(2, 0, 0);
            *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x400;
        }
        data_ov016_0219d144.unknown_4_ ^= 1;
    }
    *(unsigned int*)((char*)&data_027e0000 + 0x3000 + 0xff8) |= 1;
}
