#include <globaldefs.h>

// USA: func_ov023_021e1518
extern "C" ARM void func_ov023_021e1518(void* arg0) {
    char* var0 = *(char**)((char*)arg0 + 0x4);
    short var1 = *(short*)((char*)arg0 + 0x8);
    for (short var2 = 0; var2 < var1; var2++) {
        char* var3 = var0 + (var2 << 4);
        *(unsigned int*)var3 = 0;
        *(unsigned char*)(var3 + 0xe) &= ~1;
    }
    *(int*)arg0 = 0;
}
