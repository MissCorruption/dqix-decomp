#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/NetworkProtocolVersion.h"

extern "C" void func_ov031_02207a10(void* arg0);
extern "C" int func_ov031_02208a40(void* arg0, int arg1, int arg2);

// USA: func_ov031_02208b78
extern "C" ARM int func_ov031_02208b78(void* arg0, unsigned char* arg1) {
    int var0 = func_ov031_02208aa0(arg1[0], arg1[1]);
    if (!var0) return var0;

    VectorizedInvertedMemcpy(arg1 + 2, (char*)arg0 + 0x34, 0x20);
    unsigned char var1 = arg1[0x22];
    unsigned char* var2 = arg1 + 0x23;
    if (var1 != 0x20) {
        *(unsigned char*)((char*)arg0 + 0x30) = 0;
    } else {
        VectorizedInvertedMemcpy(var2, (char*)arg0 + 0x74, 0x20);
        func_ov031_02207a10(arg0);
    }

    unsigned char* var3 = var2 + var1;
    int var4 = var3[0];
    var4 = (var4 << 8) + var3[1];

    unsigned short var5 = (unsigned short)func_ov031_02208a40(var3 + 2, var4 / 2, 2);
    *(unsigned short*)((char*)arg0 + 0x32) = var5;
    if (var5 != 0) {
        var5 = 1;
        *(unsigned char*)((char*)arg0 + 0x455) = 1;
    }
    return var5;
}
