#include <globaldefs.h>

extern "C" void func_02001b2c(void* arg0, int arg1, unsigned int arg2);

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02001aac
extern "C" ARM void* memset(void* arg0, int arg1, unsigned int arg2) {
    func_02001b2c(arg0, arg1, arg2);
    return arg0;
}
