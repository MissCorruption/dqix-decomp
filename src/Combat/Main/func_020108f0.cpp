#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020108f0_2404 = 0x8cc };
#else
enum { Enum_020108f0_2404 = 0x964 };
#endif


// USA: func_020108f0
extern "C" ARM void* func_020108f0(void* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 4) {
        return NULL;
    }
    for (int var0 = 0; var0 < 4; var0++) {
        int var1 = var0 * Enum_020108f0_2404;
        short var2 = *(short*)((char*)arg0 + var1 + 0x9dc);
        if (arg1 == var2) {
            return (char*)arg0 + 0x74 + 0x400 + var1;
        }
    }
    return NULL;
}
