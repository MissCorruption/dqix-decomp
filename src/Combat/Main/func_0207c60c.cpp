#include <globaldefs.h>

// USA: func_0207c60c
extern "C" ARM void* func_0207c60c(void* arg0, unsigned int arg1) {
    if (arg1 > 7) {
        return 0;
    }
    return ((void**)((char*)arg0 + 0xbf0))[arg1];
}
