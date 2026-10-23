#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void*, int);
extern "C" int func_ov000_0217f5dc(void*);

// USA: func_ov000_0217608c
extern "C" ARM int func_ov000_0217608c(void* arg0) {
    int var0 = 0;
    for (int var1 = 0; var1 < 4; var1++) {
        void* var2 = func_ov000_02161318(arg0, var1);
        if (var2) {
            if (func_ov000_0217f5dc(var2)) var0++;
        }
    }
    return var0;
}
