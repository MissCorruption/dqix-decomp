#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern void* data_ov031_0224e5d8;

// USA: func_ov031_022161b0
extern "C" ARM int func_ov031_022161b0(int arg0, void* arg1) {
    void* var0 = data_ov031_0224e5d8;
    if (*(int*)((char*)var0 + 0x1a90) != 2) return -1;
    if (arg0 < 0 || arg0 >= *(int*)((char*)var0 + 0x1a88)) return -1;

    VectorizedMemset(arg1, 0, 0x78);
    *(int*)arg1 = 1;
    unsigned short var1 = *(unsigned short*)((char*)data_ov031_0224e5d8 + 0x1a48 + arg0 * 2);
    *(short*)((char*)arg1 + 4) = var1;
    char* var2 = (char*)data_ov031_0224e5d8 + 0x1348 + arg0 * 0x70;
    VectorizedInvertedMemcpy(var2, (char*)arg1 + 6, 0x70);
    return 0;
}
