#include <globaldefs.h>

// USA: func_02011aa0
extern "C" ARM void* func_02011aa0(char* arg0, unsigned int arg1) {
    void* var0 = NULL;
    if (arg1 <= 3) {
        #if defined(jpn)
        var0 = arg0 + 0x621e + arg1 * 0x20;
#else
        var0 = arg0 + 0x649e;
#endif
    }
    return var0;
}
