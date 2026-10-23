#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02083508_2;
extern "C" void func_020de1d4(struct Struct_02083508_2* arg0);

struct Struct_ov006_02157a60_2 {
    void* unknown_0_;
    void* unknown_4_;
    char unknown_8_[0x20 - 0x8];
    char unknown_20_[0x20];
    char unknown_40_[0x30];
    char unknown_70_[0x70 - 0x70];
    short unknown1_70_;
};

// USA: func_ov006_02157c78
extern "C" ARM void func_ov006_02157c78(struct Struct_ov006_02157a60_2* arg0) {
    func_020de1d4((struct Struct_02083508_2*)arg0);
    memset(arg0->unknown_20_, 0, 0x20);
    memset(arg0->unknown_40_, 0, 0x30);
    arg0->unknown_0_ = arg0->unknown_20_;
    arg0->unknown_4_ = arg0->unknown_40_;
    arg0->unknown1_70_ = -1;
}
