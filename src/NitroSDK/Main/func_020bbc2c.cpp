#include <globaldefs.h>

extern "C" int LoadToSubObjVRAM(int, int, unsigned int);

// USA: func_020bbc2c
extern "C" ARM int func_020bbc2c(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubObjVRAM(arg0, arg1, arg2);
}
