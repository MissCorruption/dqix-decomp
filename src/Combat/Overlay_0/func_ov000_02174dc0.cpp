#include <globaldefs.h>
extern "C" void func_0203c198(char* arg0);

// USA: func_ov000_02174dc0
extern "C" ARM void func_ov000_02174dc0(void* arg0) {
    int var0;
#if !defined(jpn)
    for (var0 = 0; var0 < 3; var0++) {
        func_0203c198((char*)arg0 + 0x1b0c + var0 * 0x18);
    }
#endif
    for (var0 = 0; var0 < 8; var0++) {
#if defined(jpn)
        func_0203c198((char*)arg0 + 0x1d94 + var0 * 0x38);
#else
        func_0203c198((char*)arg0 + 0x1c5c + var0 * 0x18);
#endif
    }
}
