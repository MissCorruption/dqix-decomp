#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

struct Struct_ov000_021820fc { unsigned char unknown_0_; unsigned char unknown_1_; short unknown_2_; short unknown_4_; };
extern "C" void func_ov000_021820fc(struct Struct_ov000_021820fc* arg0);

struct Struct_ov000_02161e30_6 {
    Struct_02012fa4 unknown_0_[13];
    Struct_ov000_021820fc unknown_6e8_;
};

// USA: func_ov000_02182114
extern "C" ARM void func_ov000_02182114(char* arg0)
{
    Struct_ov000_02161e30_6* var0 = (Struct_ov000_02161e30_6*)arg0;
    int var1;
    for (var1 = 0; var1 < 13; var1++) {
        func_0204719c(&var0->unknown_0_[var1]);
    }
    func_ov000_021820fc(&var0->unknown_6e8_);
}
