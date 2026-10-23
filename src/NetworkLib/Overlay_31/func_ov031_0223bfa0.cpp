#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0223e168;
extern "C" ARM int func_ov031_0223bfa0(Struct_ov031_0223e168* arg0);
extern "C" ARM void func_ov031_0223d8d8(void* arg0, void* arg1);

extern char* data_ov031_02290d9c;

// USA: func_ov031_0223e22c
extern "C" ARM void* func_ov031_0223e22c(int arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4) {
    Struct_ov031_0223e168* var0 = *(Struct_ov031_0223e168**)(data_ov031_02290d9c + (arg0 << 6));
    void* var1 = (void*)func_ov031_0223bfa0(var0);
    *(int*)((char*)var1 + 0x8) = arg1;
    *(int*)((char*)var1 + 0xc) = arg2;
    *(unsigned char*)((char*)var1 + 0x10) = arg3;
    *(unsigned char*)((char*)var1 + 0x11) = arg4;

    unsigned int var2 = DisableSpecificInterrupts(1);
    char* var3 = *(char**)(data_ov031_02290d9c + (arg0 << 6) + 0x10);
    while (1) {
        unsigned char var4 = *(unsigned char*)(var3 + 0x10);
        if (arg3 < var4) {
            func_ov031_0223d8d8(var3, var1);
            break;
        }
        var3 = *(char**)(var3 + 0x4);
    }
    EnableSpecificInterrupts(var2);
    return var1;
}
