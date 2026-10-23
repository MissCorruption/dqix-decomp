#include <globaldefs.h>

// USA: func_0201f144
extern "C" ARM void* func_0201f144(unsigned char* obj, int index) {
    if (index < 0 || *(int*)(obj + 8) <= index) {
        return NULL;
    }
    return *(unsigned char**)obj + index * 0xc;
}
