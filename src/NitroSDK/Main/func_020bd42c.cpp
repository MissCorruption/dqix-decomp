#include <globaldefs.h>

extern void* data_02110370;

// USA: func_020bd42c
extern "C" ARM void* func_020bd42c(void* arg0) {
    void* var0 = data_02110370;
    data_02110370 = arg0;
    return var0;
}
