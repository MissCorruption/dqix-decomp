#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void func_ov023_021db2e4(volatile int* arg0);

// USA: func_ov023_021dcdf4
extern "C" ARM void func_ov023_021dcdf4(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021dcdf4_1844=0x6b0, Enum_ov023_021dcdf4_1848=0x6b4, Enum_ov023_021dcdf4_1876=0x6d0, Enum_ov023_021dcdf4_1904=0x6ec, Enum_ov023_021dcdf4_1906=0x6ee, Enum_ov023_021dcdf4_1908=0x6f0, Enum_ov023_021dcdf4_1910=0x6f2, Enum_ov023_021dcdf4_1913=0x6f5};
#else
 enum {Enum_ov023_021dcdf4_1844=0x734, Enum_ov023_021dcdf4_1848=0x738, Enum_ov023_021dcdf4_1876=0x754, Enum_ov023_021dcdf4_1904=0x770, Enum_ov023_021dcdf4_1906=0x772, Enum_ov023_021dcdf4_1908=0x774, Enum_ov023_021dcdf4_1910=0x776, Enum_ov023_021dcdf4_1913=0x779};
#endif
    (int)BackgroundLoader::GetInstance();
    if (*((unsigned char*)arg0 + Enum_ov023_021dcdf4_1910)) {
        func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dcdf4_1844));
        for (int var0 = 0; var0 < 7; var0++) {
            func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dcdf4_1848 + var0 * 4));
        }
        *(int*)((char*)arg0 + Enum_ov023_021dcdf4_1876) = 0;
        *(unsigned short*)((char*)arg0 + Enum_ov023_021dcdf4_1908) |= 1;
    }
    *(short*)((char*)arg0 + Enum_ov023_021dcdf4_1906) = -1;
    *(short*)((char*)arg0 + Enum_ov023_021dcdf4_1904) = -2;
    *(char*)((char*)arg0 + Enum_ov023_021dcdf4_1913) = -1;
    *(unsigned short*)((char*)arg0 + Enum_ov023_021dcdf4_1908) &= ~4;
    *(unsigned short*)((char*)arg0 + Enum_ov023_021dcdf4_1908) &= ~0x2000;
}
