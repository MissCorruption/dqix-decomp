#include <globaldefs.h>

extern "C" void* func_020bc018(void* arg0, int arg1);
extern void* data_ov031_02290d00;

// USA: func_ov031_022368e0
extern "C" ARM void* func_ov031_022368e0() {
    return func_020bc018((char*)data_ov031_02290d00 + 0x94, 0);
}
