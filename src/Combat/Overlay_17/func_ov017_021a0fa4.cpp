#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020bb740(int* arg0);
extern "C" void func_020bb92c(int* arg0);
extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);

extern AllocatorUnion data_02114e20;

struct Struct_ov017_021d67a0 { int unknown_0_; int unknown_4_; };
struct Struct_ov017_021d67a4 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d67a0 data_ov017_021d67a0[];
extern Struct_ov017_021d67a4 data_ov017_021d67a4[];

struct Struct_ov017_021d66e0 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern Struct_ov017_021d66e0 data_ov017_021d66e0[];
extern Struct_ov017_021d66e0 data_ov017_021d66e8[];
extern Struct_ov017_021d66e0 data_ov017_021d66e4[];
extern Struct_ov017_021d66e0 data_ov017_021d67d0[];
extern Struct_ov017_021d66e0 data_ov017_021d67d8[];
extern Struct_ov017_021d66e0 data_ov017_021d67d4[];

#if defined(jpn)
enum { Enum_ov017_021a0fa4_10872 = 0x2868, Enum_ov017_021a0fa4_10960 = 0x28c0, Enum_ov017_021a0fa4_10920 = 0x2898, Enum_ov017_021a0fa4_3740 = 0xe4c, Enum_ov017_021a0fa4_3852 = 0xebc, Enum_ov017_021a0fa4_716 = 0x27c };
#else
enum { Enum_ov017_021a0fa4_10872 = 0x2a78, Enum_ov017_021a0fa4_10960 = 0x2ad0, Enum_ov017_021a0fa4_10920 = 0x2aa8, Enum_ov017_021a0fa4_3740 = 0xe9c, Enum_ov017_021a0fa4_3852 = 0xf0c, Enum_ov017_021a0fa4_716 = 0x2cc };
#endif

// USA: func_ov017_021a0fa4
extern "C" ARM void func_ov017_021a0fa4(char* arg0) {
    int var0;
    int var1;
    for (var0 = 0; (var1 = data_ov017_021d67a4[var0].unknown_0_) != 0; var0++) {
        void* var2 = func_02012d88(&data_02114e20, var1);
        int var3 = data_ov017_021d67a0[var0].unknown_0_;
        SafeAllocator* var4 = (SafeAllocator*)(arg0 + 0x38 + var3 * 0x14);
        var4->CreateTypeA(var2, var1);
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a0fa4_10872));
    func_020bb92c((int*)(arg0 + Enum_ov017_021a0fa4_10960));
    func_020bb588(0x20000, 0, 0);

    int var5;
    for (var0 = 0; (var5 = data_ov017_021d66e4[var0].unknown_0_) != 0; var0++) {
        int var6 = data_ov017_021d66e0[var0].unknown_0_;
        int var7 = data_ov017_021d66e8[var0].unknown_0_;
        func_0207de48((arg0 + Enum_ov017_021a0fa4_716) + var6 * 0x70, var5, var7);
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a0fa4_10920));

    for (var0 = 0; (var5 = data_ov017_021d67d4[var0].unknown_0_) != 0; var0++) {
        int var8 = data_ov017_021d67d0[var0].unknown_0_;
        int var9 = data_ov017_021d67d8[var0].unknown_0_;
        func_0207de48((arg0 + Enum_ov017_021a0fa4_716) + var8 * 0x70, var5, var9);
    }

    func_0207de48(arg0 + Enum_ov017_021a0fa4_3740, 0x8000, 0x400);
    func_0207de48(arg0 + Enum_ov017_021a0fa4_3852, 0x4000, 0x400);
}
