#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" ARM void func_020bb740(int* arg0);
extern "C" ARM void func_020bb92c(int* arg0);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);

extern AllocatorUnion data_02114e20;

struct Struct_ov017_021d6830 { int unknown_0_; int unknown_4_; };
extern struct Struct_ov017_021d6830 data_ov017_021d6830[];
extern struct Struct_ov017_021d6830 data_ov017_021d6834[];

struct Struct_ov017_021d66f8 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern struct Struct_ov017_021d66f8 data_ov017_021d66f8[];
extern struct Struct_ov017_021d66f8 data_ov017_021d66fc[];
extern struct Struct_ov017_021d66f8 data_ov017_021d6700[];

struct Struct_ov017_021d6740 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern struct Struct_ov017_021d6740 data_ov017_021d6740[];
extern struct Struct_ov017_021d6740 data_ov017_021d6744[];
extern struct Struct_ov017_021d6740 data_ov017_021d6748[];

#if defined(jpn)
enum { Enum_ov017_021a0c0c_10872 = 0x2868, Enum_ov017_021a0c0c_10960 = 0x28c0, Enum_ov017_021a0c0c_10920 = 0x2898, Enum_ov017_021a0c0c_3740 = 0xe4c, Enum_ov017_021a0c0c_3852 = 0xebc, Enum_ov017_021a0c0c_716 = 0x27c };
#else
enum { Enum_ov017_021a0c0c_10872 = 0x2a78, Enum_ov017_021a0c0c_10960 = 0x2ad0, Enum_ov017_021a0c0c_10920 = 0x2aa8, Enum_ov017_021a0c0c_3740 = 0xe9c, Enum_ov017_021a0c0c_3852 = 0xf0c, Enum_ov017_021a0c0c_716 = 0x2cc };
#endif

// USA: func_ov017_021a0c0c
extern "C" ARM void func_ov017_021a0c0c(char* arg0) {
    int var0;

    int var1;
    for (var0 = 0; (var1 = data_ov017_021d6834[var0].unknown_0_) != 0; var0++) {
        void* var2 = func_02012d88(&data_02114e20, var1);
        SafeAllocator* var3 = (SafeAllocator*)(arg0 + 0x38 + data_ov017_021d6830[var0].unknown_0_ * 0x14);
        var3->CreateTypeA(var2, var1);
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a0c0c_10872));
    func_020bb92c((int*)(arg0 + Enum_ov017_021a0c0c_10960));

    for (var0 = 0; data_ov017_021d66fc[var0].unknown_0_ != 0; var0++) {
        func_0207de48(arg0 + Enum_ov017_021a0c0c_716 + data_ov017_021d66f8[var0].unknown_0_ * 0x70, data_ov017_021d66fc[var0].unknown_0_, data_ov017_021d6700[var0].unknown_0_);
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a0c0c_10920));

    for (var0 = 0; data_ov017_021d6744[var0].unknown_0_ != 0; var0++) {
        func_0207de48(arg0 + Enum_ov017_021a0c0c_716 + data_ov017_021d6740[var0].unknown_0_ * 0x70, data_ov017_021d6744[var0].unknown_0_, data_ov017_021d6748[var0].unknown_0_);
    }

    func_0207de48(arg0 + Enum_ov017_021a0c0c_3740, 0x8000, 0x400);
    func_0207de48(arg0 + Enum_ov017_021a0c0c_3852, 0x4000, 0x400);
}
