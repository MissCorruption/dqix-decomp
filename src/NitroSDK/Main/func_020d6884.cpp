#include <globaldefs.h>

extern "C" int func_020d1ae4(unsigned int);

// USA: func_020d6884
extern "C" ARM int func_020d6884(void *arg0, int arg1, int arg2, int arg3) {
    return func_020d1ae4(arg1 & ((1 << arg3) - 1)) * *(unsigned short*)((char*)arg0 + 0x810) + arg2;
}
