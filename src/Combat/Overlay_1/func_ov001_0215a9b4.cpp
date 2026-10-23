#include <globaldefs.h>

extern "C" void func_ov001_0215a134(void* arg0);
extern "C" void func_ov001_02158ae4(void);

struct Struct_ov001_02165880_5 { char unknown_0_[0x1c]; char* unknown_1c_; char unknown_20_[4]; int unknown_24_; };
extern Struct_ov001_02165880_5 data_ov001_02165880;

struct Struct_ov001_021658b8_3 { char unknown_0_[0xe4]; int unknown_e4_; };
extern Struct_ov001_021658b8_3 data_ov001_021658b8;

// USA: func_ov001_0215a9b4
extern "C" ARM int func_ov001_0215a9b4(void) {
    int var0;
    for (var0 = 0; var0 < 0x18; var0++) {
        func_ov001_0215a134(data_ov001_02165880.unknown_1c_ + var0 * 0x588);
    }
    if (data_ov001_021658b8.unknown_e4_ != 0 && data_ov001_02165880.unknown_24_ != 0) {
        func_ov001_02158ae4();
    }
    return 1;
}
