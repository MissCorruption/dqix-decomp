#include <globaldefs.h>

// USA: func_ov023_021fa854
extern "C" ARM void* func_ov023_021fa854(char* arg0, unsigned int arg1) {
    void* var0 = *(void**)(arg0 + 0x40);
    void* var1 = NULL;
    if (var0 != NULL) {
        unsigned short var2 = *(unsigned short*)(arg0 + 0x4e);
        if (arg1 < var2) {
            var1 = (char*)var0 + arg1 * 0x28;
        }
    }
    return var1;
}
