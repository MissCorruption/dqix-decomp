#include <globaldefs.h>

// USA: func_0209c0a8
extern "C" ARM int func_0209c0a8(void* arg0, int arg1) {
    if (*(unsigned short*)((char*)arg0 + 0x18) <= arg1) {
        return -1;
    }
    return ((unsigned short*)arg0)[arg1];
}
