#include <globaldefs.h>

extern "C" int func_ov017_021b6174(int arg0, int arg1, int arg2);

// USA: func_ov017_021cfe24
extern "C" ARM int func_ov017_021cfe24(void* arg0, char* arg1) {
    return func_ov017_021b6174(*(unsigned short*)(arg1 + 4), *(unsigned short*)(arg1 + 6), *(unsigned short*)(arg1 + 8));
}
