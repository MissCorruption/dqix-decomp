#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020489bc(void* arg0);
extern "C" void func_020bc078(int* arg0);

#if defined(jpn)
enum { Enum_02052a4c_0 = 0xc };
#else
enum { Enum_02052a4c_0 = 0 };
#endif

// USA: func_02052a4c
extern "C" ARM void func_02052a4c(void* arg0) {
    char* var0 = (char*)arg0;
    func_020489bc(arg0);
    *(unsigned short*)var0 |= 0x100;
    func_020bc078((int*)(var0 + (0x198 - Enum_02052a4c_0)));
    *(int*)(var0 + (0x150 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x154 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x158 - Enum_02052a4c_0)) = 0;
    memset(var0 + (0x178 - Enum_02052a4c_0), 0, 4);
    *(unsigned char*)(var0 + (0x17c - Enum_02052a4c_0)) = 0;
    *(unsigned char*)(var0 + (0x17d - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x180 - Enum_02052a4c_0)) = -1;
    *(unsigned char*)(var0 + (0x17e - Enum_02052a4c_0)) = 0;
    *(unsigned char*)(var0 + (0x17f - Enum_02052a4c_0)) = 0;
    *(unsigned char*)(var0 + (0x184 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x190 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x194 - Enum_02052a4c_0)) = -1;
    *(unsigned char*)(var0 + (0x185 - Enum_02052a4c_0)) = 0;
    *(unsigned char*)(var0 + (0x186 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x188 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x1b4 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x1b8 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x1bc - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x18c - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x19c - Enum_02052a4c_0)) = 0;
    *(unsigned short*)(var0 + (0x1b2 - Enum_02052a4c_0)) = 0;
    *(unsigned short*)(var0 + (0x1c0 - Enum_02052a4c_0)) = 0;
    *(int*)(var0 + (0x15c - Enum_02052a4c_0)) = -1;
    *(int*)(var0 + (0x1c4 - Enum_02052a4c_0)) = 0;
}
