#include <globaldefs.h>

// USA: func_02001ac0
extern "C" ARM void* func_02001ac0(void* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char var1 = (unsigned char)arg1;
    if (arg2 != 0) {
        do {
            unsigned char var2 = *var0++;
            if (var2 == var1) {
                return var0 - 1;
            }
        } while (--arg2 != 0);
    }
    return 0;
}
