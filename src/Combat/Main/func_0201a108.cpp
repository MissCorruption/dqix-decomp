#include <globaldefs.h>

// USA: func_0201a108
extern "C" ARM void func_0201a108(void* arg0, unsigned char* arg1, int arg2) {
    unsigned char var0 = *arg1 & 1;
    unsigned char var1 = (*arg1 & 2) >> 1;
    unsigned char var2 = (*arg1 & 4) >> 2;
    unsigned char var3 = (*arg1 & 8) >> 3;
    switch (arg2) {
    case 1: *arg1 = var1 | (var2 << 1) | (var3 << 2) | (var0 << 3); break;
    case 2: *arg1 = var2 | (var3 << 1) | (var0 << 2) | (var1 << 3); break;
    case 3: *arg1 = var3 | (var0 << 1) | (var1 << 2) | (var2 << 3); break;
    }
}
