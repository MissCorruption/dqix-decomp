#if defined(jpn)
#define R(j,u) (j)
#define data_ov013_02187d98 data_ov013_02188ccc
#define func_ov013_02185be0 func_ov013_02186db0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);

struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);

extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" void func_ov013_02185424(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov013_02185310
extern "C" ARM void func_ov013_02185310(unsigned char* arg0) {
    func_0205de24((struct Struct_0205de24_2*)(arg0 + R(0x34, 0x38)), 0, 2);

    *(unsigned short*)(arg0 + R(0xd4, 0xd8)) = 0x1e;
    *(unsigned short*)(arg0 + R(0xd6, 0xda)) = 0xd;
    *(unsigned short*)(arg0 + R(0xd8, 0xdc)) = 1;
    *(unsigned short*)(arg0 + R(0xda, 0xde)) = 0;
    *(unsigned short*)(arg0 + R(0xdc, 0xe0)) = 0;
    *(unsigned short*)(arg0 + R(0xde, 0xe2)) = 5;
    *(unsigned short*)(arg0 + R(0xe0, 0xe4)) = 0xa;
    *(unsigned short*)(arg0 + R(0xe2, 0xe6)) = 0xd;
    arg0[R(0xe5, 0xe9)] = 0;

    if (arg0[R(0x5cc, 0x640)] != 0) arg0[R(0xe9, 0xed)] = 0;
    else arg0[R(0xe9, 0xed)] = 1;

    memset(*(void**)(arg0 + R(0x5e0, 0x658)), 0, R(0x800, 0x960));

    func_ov013_02185424(arg0, *(void**)(arg0 + R(0x5e0, 0x658)));

#if defined(jpn)
    func_0205d304(arg0 + R(0x34, 0x38), *(void**)(arg0 + R(0x5e0, 0x658)), 0, 0, 0, 1, 0);
#else
    func_0205d304(arg0 + R(0x34, 0x38), *(void**)(arg0 + R(0x5e0, 0x658)), 0, 0, 0, 1, 0, 0);
#endif

    arg0[R(0xe5, 0xe9)] = 0;
    *(int*)(arg0 + R(0x3c, 0x40)) = 1;
    *(int*)(arg0 + R(0x8c, 0x90)) = 1;
    func_0205ba68((struct Struct_0205ba68*)(arg0 + R(0x38, 0x3c)), 1, 6, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + R(0x88, 0x8c)), 1, 6, 0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + R(0x38, 0x3c)), 6);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + R(0x88, 0x8c)), 6);
    func_0205bcdc((struct Struct_0205bcdc*)(arg0 + R(0x38, 0x3c)), 1);
    func_0205bb04(arg0 + R(0x88, 0x8c), 1);
}
