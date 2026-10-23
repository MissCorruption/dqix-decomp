#include <globaldefs.h>

extern "C" void func_020bc078(int* arg0);

struct Struct_ov001_021658b8 { char unknown_0_[0xe0]; int unknown_e0_; int unknown_e4_; int unknown_e8_; int unknown_ec_; char unknown_f0_[0x4b4 - 0xf0]; int unknown_4b4_; int unknown_4b8_; };
extern struct Struct_ov001_021658b8 data_ov001_021658b8;
extern int data_ov001_021659a8[0xe9];
extern int data_ov001_02165958[0x10];

// USA: func_ov001_0215a79c
extern "C" ARM void func_ov001_0215a79c(void) {
    data_ov001_021658b8.unknown_e8_ = 0;
    data_ov001_021658b8.unknown_ec_ = 0;
    data_ov001_021658b8.unknown_e0_ = 0;
    for (int var0 = 0; var0 < 0xe9; var0++) {
        data_ov001_021659a8[var0] = 0;
    }
    data_ov001_021658b8.unknown_e4_ = 0;
    for (int var1 = 0; var1 < 0x10; var1++) {
        func_020bc078(&data_ov001_02165958[var1]);
    }
    data_ov001_021658b8.unknown_4b4_ = 0;
    data_ov001_021658b8.unknown_4b8_ = 0;
}
