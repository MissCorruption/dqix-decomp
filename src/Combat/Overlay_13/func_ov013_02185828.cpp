#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02189d68 func_ov012_0218a804
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);

extern "C" void func_ov013_02185900(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

extern int data_ov013_02187d94;

// USA: func_ov013_02185828
extern "C" ARM void func_ov013_02185828(unsigned char* arg0) {
    unsigned char var0 = arg0[R(0x644,0x6bc)];
    arg0[R(0x644,0x6bc)] = var0 & ~1;

    func_0205de24((struct Struct_0205de24_2*)(arg0 + R(0x34,0x38)), 0, 2);

    *(unsigned short*)(arg0 + R(0xd4,0xd8)) = 0x20;
    *(unsigned short*)(arg0 + R(0xd6,0xda)) = 9;
    *(unsigned short*)(arg0 + R(0xd8,0xdc)) = 0;
    *(unsigned short*)(arg0 + R(0xda,0xde)) = 0xf;
    *(unsigned short*)(arg0 + R(0xdc,0xe0)) = 0xc;
    *(unsigned short*)(arg0 + R(0xde,0xe2)) = 0xa;
    *(unsigned short*)(arg0 + R(0xe0,0xe4)) = 0xc;
    *(unsigned short*)(arg0 + R(0xe2,0xe6)) = 0x14;
    arg0[R(0xe5,0xe9)] = 2;

    if (arg0[R(0x5cc,0x640)] != 0) arg0[R(0xe9,0xed)] = 0;
    else arg0[R(0xe9,0xed)] = 1;

    arg0[R(0x5c6,0x63a)] = 0;

    memset(*(void**)(arg0 + R(0x5e0,0x658)), 0, R(0x800,0x960));

    func_ov013_02185900(arg0, *(void**)(arg0 + R(0x5e0,0x658)));

#if defined(jpn)
    func_0205d304(arg0 + R(0x34,0x38), *(void**)(arg0 + R(0x5e0,0x658)), 0, 0, 0, 1, (int)&data_ov013_02187d94);
#else
    func_0205d304(arg0 + R(0x34,0x38), *(void**)(arg0 + R(0x5e0,0x658)), 0, 0, 0, 1, (int)&data_ov013_02187d94, 1);
#endif
}
