#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02161318_1096 = 0x488 };
#else
enum { Enum_ov000_02161318_1096 = 0x448 };
#endif

// USA: func_ov000_02161318
extern "C" ARM void* func_ov000_02161318(void* arg0, int arg1) {
    int var0 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (var0) {
        for (int var1 = 0; var1 < 4; var1++) {
            int var2 = *(int*)((char*)arg0 + var1 * Enum_ov000_02161318_1096 + 0x9a4);
            if (arg1 == var2) {
                return (char*)arg0 + 0x958 + var1 * Enum_ov000_02161318_1096;
            }
        }
    }
    return 0;
}
