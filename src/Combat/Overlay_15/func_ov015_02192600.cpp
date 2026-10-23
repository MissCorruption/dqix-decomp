#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_0207de48(void* arg0, int arg1, int arg2);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

extern AllocatorUnion data_02114e20;

struct Struct_ov015_02192600 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_ov015_02193e48 { struct Struct_ov015_02192600 unknown_0_[10]; };
extern struct Struct_ov015_02193e48 data_ov015_02193e48;

struct Struct_ov015_02192600_2 { void* unknown_0_; int unknown_4_; };

struct Struct_ov015_02192600_3 {
    char unknown_0_[0xc4];
    struct Struct_ov015_02192600_2 unknown_c4_[4];
    struct Struct_ov015_02192600_2 unknown_e4_[4];
    struct Struct_ov015_02192600_2 unknown_104_[4];
};

// USA: func_ov015_02192600
extern "C" ARM void func_ov015_02192600(struct Struct_ov015_02192600_3* arg0) {
    struct Struct_ov015_02193e48 var0 = data_ov015_02193e48;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        arg0->unknown_c4_[var1].unknown_0_ = func_02012d88(&data_02114e20, 0x460);
        arg0->unknown_e4_[var1].unknown_0_ = func_02012d88(&data_02114e20, 0x460);
        arg0->unknown_104_[var1].unknown_0_ = func_02012d88(&data_02114e20, 0x70);
        int var2;
        for (var2 = 0; var2 < 10; var2++) {
            func_0207de48((char*)arg0->unknown_c4_[var1].unknown_0_ + var2 * 0x70, var0.unknown_0_[var2].unknown_0_, var0.unknown_0_[var2].unknown_4_);
            func_0207de48((char*)arg0->unknown_e4_[var1].unknown_0_ + var2 * 0x70, var0.unknown_0_[var2].unknown_8_, var0.unknown_0_[var2].unknown_c_);
        }
        func_0207de48(arg0->unknown_104_[var1].unknown_0_, 0x4000, 0x400);
    }
    func_0207de48((char*)arg0 + 0x124, 0x4000, 0x40);
}
