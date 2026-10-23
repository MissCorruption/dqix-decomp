#include <globaldefs.h>

extern "C" void func_02015554(void* arg0, void* arg1);

// USA: func_02015518
extern "C" ARM void func_02015518(void* arg0, char* arg1) {
    int var0 = *(int*)(arg1 + 0x14);
    int var1;
    for (var1 = 0; var1 < var0; var1++) {
        func_02015554(arg0, *(char**)(arg1 + 0x44) + var1 * 0x70);
    }
}
