#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov023_021db2e4(volatile int* arg0);
extern "C" unsigned int GetSubBG0ScreenBase(void);
extern "C" unsigned int GetMainBG2ScreenBase(void);

struct Struct_ov023_021dcba4 {
#if defined(jpn)
    char unknown_0_[0xec];
#else
    char unknown1_0_[0x70];
#endif

    short unknown_70_;
    short unknown_72_;
    unsigned short unknown_74_;
    char unknown_76_[0x7c - 0x76];
    signed char unknown_7c_;
};

// USA: func_ov023_021dcba4
extern "C" ARM void func_ov023_021dcba4(void* arg0, short arg1) {
#if defined(jpn)
 enum {Enum_ov023_021dcba4_1844=0x6b0, Enum_ov023_021dcba4_1848=0x6b4, Enum_ov023_021dcba4_1876=0x6d0, Enum_ov023_021dcba4_1904=0x6ec, Enum_ov023_021dcba4_1906=0x6ee, Enum_ov023_021dcba4_1908=0x6f0, Enum_ov023_021dcba4_1910=0x6f2, Enum_ov023_021dcba4_1916=0x6f8, Enum_ov023_021dcba4_1792=0x600};
#else
 enum {Enum_ov023_021dcba4_1844=0x734, Enum_ov023_021dcba4_1848=0x738, Enum_ov023_021dcba4_1876=0x754, Enum_ov023_021dcba4_1904=0x770, Enum_ov023_021dcba4_1906=0x772, Enum_ov023_021dcba4_1908=0x774, Enum_ov023_021dcba4_1910=0x776, Enum_ov023_021dcba4_1916=0x77c, Enum_ov023_021dcba4_1792=0x700};
#endif
    if (*((unsigned char*)arg0 + Enum_ov023_021dcba4_1910) == 0) {
        ((struct Struct_ov023_021dcba4*)((char*)arg0 + Enum_ov023_021dcba4_1792))->unknown_72_ = arg1;
        return;
    }

    if ((((struct Struct_ov023_021dcba4*)((char*)arg0 + Enum_ov023_021dcba4_1792))->unknown_74_ & 4) == 0) {
        return;
    }

    func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dcba4_1844));
    for (int var0 = 0; var0 < 7; var0++) {
        func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dcba4_1848 + var0 * 4));
    }

    *(short*)((char*)arg0 + Enum_ov023_021dcba4_1904) = arg1;
    *(short*)((char*)arg0 + Enum_ov023_021dcba4_1906) = *(short*)((char*)arg0 + Enum_ov023_021dcba4_1904);
    *(int*)((char*)arg0 + Enum_ov023_021dcba4_1876) = 0;
    *(unsigned short*)((char*)arg0 + Enum_ov023_021dcba4_1908) |= 9;

    if (*(signed char*)((char*)arg0 + Enum_ov023_021dcba4_1916) == 1) {
        memset((void*)GetSubBG0ScreenBase(), 0, 0x800);
    } else {
        memset((void*)GetMainBG2ScreenBase(), 0, 0x800);
    }
}
