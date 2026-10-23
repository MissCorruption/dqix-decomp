#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215c178(void* arg0, char* arg1, int arg2);
#if defined(jpn)
enum { Enum_ov002_0215c0f8_3000 = 0xa80, Enum_ov002_0215c0f8_3024 = 0xa98, Enum_ov002_0215c0f8_2400 = 0x800, Enum_ov002_0215c0f8_3784 = 0xe20 };
#define FINAL_ARG_0215c0f8
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
enum { Enum_ov002_0215c0f8_3000 = 0xbb8, Enum_ov002_0215c0f8_3024 = 0xbd0, Enum_ov002_0215c0f8_2400 = 0x960, Enum_ov002_0215c0f8_3784 = 0x2c8 + 0xc00 };
#define FINAL_ARG_0215c0f8 , 0
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov002_0215c0f8
extern "C" ARM void func_ov002_0215c0f8(unsigned char* arg0) {
    func_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + Enum_ov002_0215c0f8_3000)) & 0xff, 1, 1);

    memset(*(void**)(arg0 + 0x1000 + Enum_ov002_0215c0f8_3024), 0, Enum_ov002_0215c0f8_2400);

    func_ov002_0215c178(arg0, (char*)*(void**)(arg0 + 0x1000 + Enum_ov002_0215c0f8_3024), 0);

    func_0205d304(arg0 + Enum_ov002_0215c0f8_3784, *(int*)(arg0 + 0x1000 + Enum_ov002_0215c0f8_3024), 0, 1, 0, 1, 0 FINAL_ARG_0215c0f8);
}
