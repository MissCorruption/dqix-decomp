#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov008_02184918 { char unknown_0_[0xb10]; signed char unknown_b10_; char unknown_b11_[0xb18 - 0xb11]; unsigned int unknown_b18_; };

// USA: func_ov008_02184918
extern "C" ARM void func_ov008_02184918(struct Struct_ov008_02184918* arg0) {
    signed char var0 = arg0->unknown_b10_;
    if (var0 == 0 || var0 == 0xe) return;
    if (arg0->unknown_b18_ & 0x80) return;
    *(volatile unsigned int*)0x04000444 = 0;
    ((Object3D*)((char*)arg0 + 0x790))->Draw(0);
    *(volatile unsigned int*)0x04000448 = 1;
}
