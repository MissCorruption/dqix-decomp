#include <globaldefs.h>

extern "C" int LoadToSubOAM(int, int, unsigned int);

// USA: func_020bbc20
extern "C" ARM int func_020bbc20(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubOAM(arg0, arg1, arg2);
}
