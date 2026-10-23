#include <globaldefs.h>

extern "C" int func_020421a0(void);

// USA: func_ov023_021d8ea0
extern "C" ARM void func_ov023_021d8ea0(char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021d8ea0_92=0x28};
#else
 enum {Enum_ov023_021d8ea0_92=0x5c};
#endif
    unsigned char var0 = *(unsigned char*)(arg0 + 0x11b);
    if (var0 == 0xff) return;
    if (var0 != 0) return;

    int var1 = func_020421a0();
    *(int*)(arg0 + 0x4) = *(int*)((char*)var1 + Enum_ov023_021d8ea0_92);

    volatile unsigned short* var2 = (volatile unsigned short*)0x4001008;
    var2[0] = (var2[0] & ~3) | 1;
    var2[1] = (var2[1] & ~3) | 2;
    var2[2] = (var2[2] & ~3);
    var2[3] = (var2[3] & ~3) | 3;

    volatile unsigned int* var3 = (volatile unsigned int*)0x4001000;
    *var3 = (*var3 & ~0x1f00) | 0x700;

    *(unsigned char*)(arg0 + 0x11b) = 0xff;
}
