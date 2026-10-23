// KEEP-NAME
#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov012_02189f38_4977 = 0x1341, Enum_ov012_02189f38_4980 = 0x1344, Enum_ov012_02189f38_2400 = 0x800, Enum_ov012_02189f38_144 = 0x90 };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#else
enum { Enum_ov012_02189f38_4977 = 0x1371, Enum_ov012_02189f38_4980 = 0x1374, Enum_ov012_02189f38_2400 = 0x960, Enum_ov012_02189f38_172 = 0xac };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int, int);
#endif

extern "C" void func_ov012_021893b4(void*, int, int, int);
extern "C" void func_ov012_02189fb0(void*, void*, int);

// USA: func_ov012_02189f38
extern "C" ARM void func_ov012_02189f38(char* arg0) {
    func_ov012_021893b4(arg0, *(unsigned char*)(arg0 + Enum_ov012_02189f38_4977), 25, 10);
    void* var0 = *(void**)(arg0 + Enum_ov012_02189f38_4980);
    memset(var0, 0, Enum_ov012_02189f38_2400);
    func_ov012_02189fb0(arg0, *(void**)(arg0 + Enum_ov012_02189f38_4980), 0);
#if defined(jpn)
    func_0205d304(arg0 + Enum_ov012_02189f38_144, *(void**)(arg0 + Enum_ov012_02189f38_4980), 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + Enum_ov012_02189f38_172, *(void**)(arg0 + Enum_ov012_02189f38_4980), 0, 1, 0, 1, 0, 0);
#endif
}
