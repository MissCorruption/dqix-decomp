#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02169430_1256 = 0x4e4 };
enum { Enum_ov003_02169430_228 = 0xe0 };
enum { Enum_ov003_02169430_2400 = 0x800 };
enum { Enum_ov003_02169430_2456 = 0x868 };
enum { Enum_ov003_02169430_1260 = 0x4e8 };
#else
enum { Enum_ov003_02169430_1256 = 0x4e8 };
enum { Enum_ov003_02169430_228 = 0xe4 };
enum { Enum_ov003_02169430_2400 = 0x960 };
enum { Enum_ov003_02169430_2456 = 0x998 };
enum { Enum_ov003_02169430_1260 = 0x4ec };
#endif

#if defined(jpn)
extern "C" void func_0204500c(void*, void*, int);
#endif
#include "std_library_functions.h"

extern "C" int func_020421a0(void);
extern "C" int func_0205d6e4(void* arg0, int arg1);
extern "C" void func_ov003_0216abd8(void* arg0, void* arg1);
#if !defined(jpn)
extern "C" void func_0204500c(void* arg0, void* arg1, int arg2, int arg3);
#endif

// USA: func_ov003_02169430
extern "C" ARM void func_ov003_02169430(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = func_020421a0();
    unsigned char var2 = *(unsigned char*)(var0 + Enum_ov003_02169430_1256);
    if (var2 == 0) {
        func_0205d6e4(var0 + Enum_ov003_02169430_228, 1);
        memset(*(void**)(var0 + 0x7c), 0, Enum_ov003_02169430_2400);
        func_ov003_0216abd8(var0, *(void**)(var0 + 0x7c));
#if defined(jpn)
        func_0204500c((void*)var1, *(void**)(var0 + 0x7c), 0);
#else
        func_0204500c((void*)var1, *(void**)(var0 + 0x7c), 0, 0xe3);
#endif
        *(unsigned char*)(var0 + Enum_ov003_02169430_1256) = *(unsigned char*)(var0 + Enum_ov003_02169430_1256) + 1;
    } else if (var2 == 1) {
        if (*(int*)((char*)var1 + Enum_ov003_02169430_2456) == 0) {
            *(unsigned char*)(var0 + Enum_ov003_02169430_1260) = 6;
            *(unsigned char*)(var0 + Enum_ov003_02169430_1256) = 0;
        }
    }
}
