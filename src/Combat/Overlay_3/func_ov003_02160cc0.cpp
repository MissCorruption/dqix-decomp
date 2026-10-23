#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02160cc0_1124 = 0x28c };
#else
enum { Enum_ov003_02160cc0_1124 = 0x464 };
#endif

extern "C" int func_ov003_02160cf8(void* arg0);
extern "C" int func_ov003_02160e34(void* arg0);

// USA: func_ov003_02160cc0
extern "C" ARM int func_ov003_02160cc0(char* arg0) {
    int var0 = *(int*)(arg0 + Enum_ov003_02160cc0_1124);
    int var1 = 1;
    if (var0 & 0x400) {
        var1 = func_ov003_02160cf8(arg0);
    } else if (var0 & 0x800) {
        var1 = func_ov003_02160e34(arg0);
    }
    return var1;
}
