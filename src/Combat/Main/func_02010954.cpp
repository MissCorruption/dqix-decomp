#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02010954_2404 = 0x8cc };
#else
enum { Enum_02010954_2404 = 0x964 };
#endif

// USA: func_02010954
extern "C" ARM void* func_02010954(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        if (*(short*)(arg0 + var0 * Enum_02010954_2404 + 0x9dc) < 0) {
            return arg0 + 0x474 + var0 * Enum_02010954_2404;
        }
    }
    return NULL;
}
