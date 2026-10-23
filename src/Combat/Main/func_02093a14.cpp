#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void func_02093980(char* arg0);

// USA: func_02093a14
extern "C" ARM void func_02093a14(char* arg0) {
    unsigned char var0;
    for (var0 = 0; var0 < 8; var0++) {
        func_02093980(arg0 + var0 * (IS_JPN ? 0x10 : 0x34));
    }
    arg0[(IS_JPN ? 0x13b : 0x3cb)] = 0;
    ((unsigned char*)arg0)[(IS_JPN ? 0x13d : 0x3cd)] &= ~4;
}
