#include <globaldefs.h>

extern "C" int func_02049468(unsigned char*);
extern "C" int func_0204948c(unsigned char*);

// USA: func_ov025_021e1f08
extern "C" ARM int func_ov025_021e1f08(unsigned char* arg0, unsigned char* arg1) {
    int var0 = func_02049468(arg0);
    if (var0 != 0xff) {
        return var0;
    }
    int var1 = func_0204948c(arg0);
    if (var1 != 0xff) {
        return var1;
    }
    void* var2 = *(void**)(arg1+0x14);
    if (var2 != 0) {
        return *(short*)((unsigned char*)var2+0xe);
    }
    return var1;
}
