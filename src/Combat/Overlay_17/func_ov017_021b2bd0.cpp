#include <globaldefs.h>

// USA: func_ov017_021b2bd0
extern "C" ARM void func_ov017_021b2bd0(void* arg0, int arg1, int arg2) {
    *(int*)((char*)arg0 + 0x30) = arg1;
    *(int*)((char*)arg0 + 0x34) = arg2;
}
