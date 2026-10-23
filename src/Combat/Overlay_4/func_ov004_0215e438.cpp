#include <globaldefs.h>

// USA: func_ov004_0215e438
extern "C" ARM void* func_ov004_0215e438(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + 0x40);
    void* var1 = NULL;
    if (var0 != NULL) {
        unsigned short var2 = *(unsigned short*)((char*)arg0 + 0x4e);
        if ((unsigned int)arg1 < var2) {
            var1 = (char*)var0 + arg1 * 0x28;
        }
    }
    return var1;
}
