#include <globaldefs.h>

// USA: func_0208a018
extern "C" ARM void* func_0208a018(unsigned char* obj, int index) {
    unsigned char* base = *(unsigned char**)obj;
    if (base == 0) {
        return NULL;
    }
    if (*(short*)(obj + 4) <= index) {
        return NULL;
    }
    return base + index * 0x40;
}
