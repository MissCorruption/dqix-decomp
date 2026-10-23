#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
enum { Enum_ov017_021a09c8_10872 = 0x2868, Enum_ov017_021a09c8_10960 = 0x28c0, Enum_ov017_021a09c8_10920 = 0x2898, Enum_ov017_021a09c8_716 = 0x27c, Enum_ov017_021a09c8_3852 = 0xebc, Enum_ov017_021a09c8_3068 = 0xbac, Enum_ov017_021a09c8_3892 = 0xee4, Enum_ov017_021a09c8_3108 = 0xbd4, Enum_ov017_021a09c8_3932 = 0xf0c, Enum_ov017_021a09c8_3148 = 0xbfc, Enum_ov017_021a09c8_3936 = 0xf10, Enum_ov017_021a09c8_3152 = 0xc00, Enum_ov017_021a09c8_3940 = 0xf14, Enum_ov017_021a09c8_3156 = 0xc04, Enum_ov017_021a09c8_3948 = 0xf1c, Enum_ov017_021a09c8_3164 = 0xc0c, Enum_ov017_021a09c8_3956 = 0xf24, Enum_ov017_021a09c8_3172 = 0xc14, Enum_ov017_021a09c8_3960 = 0xf28, Enum_ov017_021a09c8_3176 = 0xc18 };
#else
enum { Enum_ov017_021a09c8_10872 = 0x2a78, Enum_ov017_021a09c8_10960 = 0x2ad0, Enum_ov017_021a09c8_10920 = 0x2aa8, Enum_ov017_021a09c8_716 = 0x2cc, Enum_ov017_021a09c8_3852 = 0xf0c, Enum_ov017_021a09c8_3068 = 0xbfc, Enum_ov017_021a09c8_3892 = 0xf34, Enum_ov017_021a09c8_3108 = 0xc24, Enum_ov017_021a09c8_3932 = 0xf5c, Enum_ov017_021a09c8_3148 = 0xc4c, Enum_ov017_021a09c8_3936 = 0xf60, Enum_ov017_021a09c8_3152 = 0xc50, Enum_ov017_021a09c8_3940 = 0xf64, Enum_ov017_021a09c8_3156 = 0xc54, Enum_ov017_021a09c8_3948 = 0xf6c, Enum_ov017_021a09c8_3164 = 0xc5c, Enum_ov017_021a09c8_3956 = 0xf74, Enum_ov017_021a09c8_3172 = 0xc64, Enum_ov017_021a09c8_3960 = 0xf78, Enum_ov017_021a09c8_3176 = 0xc68 };
#endif

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);
extern "C" void func_020bb740(int* arg0);
extern "C" void func_020bb92c(int* arg0);
extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);

extern AllocatorUnion data_02114e20;

struct Struct_ov017_021d689c { int unknown_0_; int unknown_4_; };
struct Struct_ov017_021d6758 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern Struct_ov017_021d689c data_ov017_021d689c[];
extern Struct_ov017_021d689c data_ov017_021d68a0[];
extern Struct_ov017_021d6758 data_ov017_021d6758[];
extern Struct_ov017_021d6758 data_ov017_021d6760[];
extern Struct_ov017_021d6758 data_ov017_021d675c[];
extern Struct_ov017_021d6758 data_ov017_021d6850[];
extern Struct_ov017_021d6758 data_ov017_021d6858[];
extern Struct_ov017_021d6758 data_ov017_021d6854[];

struct Struct_ov017_021a09c8 { unsigned int unknown_0_[10]; };
struct Struct_ov017_021a09c8_2 { unsigned int unknown_0_[2]; };

// USA: func_ov017_021a09c8
extern "C" ARM void func_ov017_021a09c8(char* arg0) {
    int var0;
    for (int var1 = 0; (var0 = data_ov017_021d68a0[var1].unknown_0_) != 0; var1++) {
        void* var2 = func_02012d88(&data_02114e20, var0);
        int var3 = data_ov017_021d689c[var1].unknown_0_;
        ((SafeAllocator*)((arg0 + 0x38) + var3 * 0x14))->CreateTypeA(var2, var0);
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a09c8_10872));
    func_020bb92c((int*)(arg0 + Enum_ov017_021a09c8_10960));
    func_020bb588(0x20000, 0, 0);

    {
        int var4;
        for (int var5 = 0; (var4 = data_ov017_021d675c[var5].unknown_0_) != 0; var5++) {
            func_0207de48((arg0 + Enum_ov017_021a09c8_716) + data_ov017_021d6758[var5].unknown_0_ * 0x70, var4, data_ov017_021d6760[var5].unknown_0_);
        }
    }

    func_020bb740((int*)(arg0 + Enum_ov017_021a09c8_10920));

    {
        int var6;
        for (int var7 = 0; (var6 = data_ov017_021d6854[var7].unknown_0_) != 0; var7++) {
            func_0207de48((arg0 + Enum_ov017_021a09c8_716) + data_ov017_021d6850[var7].unknown_0_ * 0x70, var6, data_ov017_021d6858[var7].unknown_0_);
        }
    }

    *(Struct_ov017_021a09c8*)(arg0 + Enum_ov017_021a09c8_3852) = *(Struct_ov017_021a09c8*)(arg0 + Enum_ov017_021a09c8_3068);
    *(Struct_ov017_021a09c8*)(arg0 + Enum_ov017_021a09c8_3892) = *(Struct_ov017_021a09c8*)(arg0 + Enum_ov017_021a09c8_3108);

    *(int*)(arg0 + Enum_ov017_021a09c8_3932) = *(int*)(arg0 + Enum_ov017_021a09c8_3148);
    *(int*)(arg0 + Enum_ov017_021a09c8_3936) = *(int*)(arg0 + Enum_ov017_021a09c8_3152);
    *(Struct_ov017_021a09c8_2*)(arg0 + Enum_ov017_021a09c8_3940) = *(Struct_ov017_021a09c8_2*)(arg0 + Enum_ov017_021a09c8_3156);
    *(Struct_ov017_021a09c8_2*)(arg0 + Enum_ov017_021a09c8_3948) = *(Struct_ov017_021a09c8_2*)(arg0 + Enum_ov017_021a09c8_3164);
    *(int*)(arg0 + Enum_ov017_021a09c8_3956) = *(int*)(arg0 + Enum_ov017_021a09c8_3172);
    *(int*)(arg0 + Enum_ov017_021a09c8_3960) = *(int*)(arg0 + Enum_ov017_021a09c8_3176);
}
