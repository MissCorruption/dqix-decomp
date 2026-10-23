#include <globaldefs.h>

extern "C" void* func_ov023_021db4e4(void*);
extern "C" void* func_ov023_021e2450(void* arg0, int arg1);

// USA: func_ov023_021e2418
extern "C" ARM void* func_ov023_021e2418(void* arg0) {
    void* var0 = func_ov023_021db4e4(arg0);
    if (var0 != 0) {
        unsigned short var1 = *(unsigned short*)((char*)var0 + 0x2);
        if (var1 != 0) {
            void* var2 = *(void**)((char*)var0 + 0x4);
            if (var2 != 0) {
                short var3 = *(short*)var2;
                return func_ov023_021e2450(arg0, var3);
            }
        }
    }
    return 0;
}
