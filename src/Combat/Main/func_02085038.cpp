#include <globaldefs.h>

// USA: func_02085038
extern "C" ARM int func_02085038(char* arg0) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 11; var1++) {
        char* var2 = arg0 + var1 * 0x20;
        if (*(short*)(var2 + 0x1ac) > 0) {
            unsigned int* var3 = *(unsigned int**)(var2 + 0x194);
            var0 += (var3[1] << 5) >> 25;
        }
    }
    return var0;
}
