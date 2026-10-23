#include <globaldefs.h>

extern int data_ov031_0224e204;

extern "C" {
    int func_020c7ea0(void*, int*, int);
}

// USA: func_ov031_0220510c
extern "C" ARM void* func_ov031_0220510c(int arg0) {
    int var0;
    if (func_020c7ea0(&data_ov031_0224e204, &var0, arg0) != 0) {
        return (void*)var0;
    }
    return NULL;
}
