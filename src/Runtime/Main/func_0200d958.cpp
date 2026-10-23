#include <globaldefs.h>

// USA: func_0200d958
extern "C" ARM void* func_0200d958(void* arg0, int* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    int var1 = *(signed char*)var0;
    switch (var1 & 1) {
    case 0:
        *arg1 = var1 >> 1;
        return var0 + 1;
    default:
        unsigned int var2 = var0[1];
        switch (var1 & 2) {
        case 0:
            *arg1 = var2 | ((var1 >> 2) << 8);
            return var0 + 2;
        default:
            unsigned int var3 = var0[2];
            switch (var1 & 4) {
            case 0:
                *arg1 = var3 | (((var1 >> 3) << 16) | (var2 << 8));
                return var0 + 3;
            default:
                unsigned int var4 = var0[3];
                *arg1 = var4 | (((var1 >> 3) << 24) | (var2 << 16) | (var3 << 8));
                return var0 + 4;
            }
        }
    }
}
