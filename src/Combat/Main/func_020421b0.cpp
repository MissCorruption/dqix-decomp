#include <globaldefs.h>

extern char data_02107800;

// USA: func_020421b0
extern "C" ARM void* func_020421b0(int arg0) {
    return (void*)(*(int*)(&data_02107800 + 0x4) + (arg0 << 5));
}
