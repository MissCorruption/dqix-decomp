#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" int func_020ca3b8(int, int, int);

// USA: func_020c555c
extern "C" ARM int func_020c555c(int a) {
    return func_020ca3b8(a, 0x4000330, 0x10);
}
