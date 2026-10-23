#include <globaldefs.h>
#include "NitroSDK/Timing.h"

extern "C" void* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_022151b0(void*, void*, int, int);
extern int data_ov031_02245fb0;
extern int data_ov031_02245fb8;

// USA: func_ov031_02214b64
extern "C" ARM void func_ov031_02214b64(int arg0) {
    char* var0 = (char*)func_ov031_022133f8(0x10);
    switch (arg0) {
    case 3: {
        *(unsigned long long*)(var0 + 0xcb0) = GetCurrentTimestamp();
        int var1 = *(signed char*)(var0 + 0xd11);
        func_ov031_022151b0(&data_ov031_02245fb0, &data_ov031_02245fb8, var1, 0x200000);
        break;
    }
    case 4: {
        *(unsigned long long*)(var0 + 0xcb0) = GetCurrentTimestamp();
        int var2 = *(unsigned char*)(var0 + 0xd0f) * 0xc0;
        int var3 = *(unsigned short*)(var0 + 0x4a6 + var2) - 1;
        func_ov031_022151b0(var0 + 0x474 + var2, var0 + 0x47c + var2, var3, 0x300000);
        break;
    }
    case 5: {
        *(unsigned long long*)(var0 + 0xcb0) = GetCurrentTimestamp();
        int var4 = *(unsigned char*)(var0 + 0xd0f);
        int var5 = *(signed char*)(var0 + 0xd11);
        func_ov031_022151b0(&data_ov031_02245fb0, var0 + 0x304 + var4 * 0x24, var5, 0x300000);
        break;
    }
    }
}
