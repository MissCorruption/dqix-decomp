#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_02065990_2 {
    char unknown_0_[0xbc];
    int unknown_bc_;              // 0xbc
    char unknown_c0_[0x12];         // 0xc0..0xd1
    short unknown_d2_;          // 0xd2
    char unknown_d4_[2];            // 0xd4..0xd5
    unsigned char unknown_d6_;  // 0xd6
    char unknown_d7_[3];            // 0xd7..0xd9
    unsigned short unknown_da_; // 0xda
    char unknown_dc_[1];            // 0xdc
    unsigned char unknown_dd_;  // 0xdd
};

// USA: func_0208bf28
extern "C" ARM void func_0208bf28(struct Struct_02065990_2* arg0, int arg1, unsigned char arg2) {
    if (arg1 < 0) return;
    arg0->unknown_d2_ = arg1;
    arg0->unknown_dd_ = arg2;
    if (arg0->unknown_bc_ >= 0) {
        int var0 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_bc_));
        arg0->unknown_bc_ = -1;
    }
    arg0->unknown_da_ |= 0x20;
    arg0->unknown_d6_ = 0;
}
