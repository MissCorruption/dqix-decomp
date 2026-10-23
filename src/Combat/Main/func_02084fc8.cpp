#include <globaldefs.h>

// USA: func_02084fc8
extern "C" ARM float func_02084fc8(char* arg0) {
    float var0 = 0.0f;
    int var1;
    for (var1 = 0; var1 < 11; var1++) {
        char* var2 = arg0 + var1 * 0x20;
        if (*(short*)(var2 + 0x1ac) > 0) {
            unsigned int* var3 = *(unsigned int**)(var2 + 0x194);
            unsigned int var4 = (var3[2] << 2) >> 22;
            var0 += (float)var4 / 10.0f;
        }
    }
    return var0;
}
