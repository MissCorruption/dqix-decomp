#include <globaldefs.h>

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" int func_ov023_021f6c90(void* arg0, int arg1, int arg2);
extern "C" ARM void func_ov023_021f6bec(void* arg0, int arg1, unsigned int arg2, unsigned int arg3);

// USA: func_ov023_021fb2b0
extern "C" ARM int func_ov023_021fb2b0(void* arg0, void* arg1, unsigned short arg2, unsigned short arg3, unsigned int arg4, unsigned int arg5) {
    func_ov023_021f6ed8(arg0);
    *(unsigned short*)((char*)arg0 + 0x4) = 0xb;
    *(unsigned short*)((char*)arg0 + 0x6) = arg2;
    *(unsigned short*)((char*)arg0 + 0x8) = arg3;
    *(unsigned short*)((char*)arg0 + 0xa) = 0;
    *(unsigned int*)((char*)arg0 + 0x10) = 0;
    *(unsigned int*)((char*)arg0 + 0x1c) = 2;
    *(unsigned short*)((char*)arg0 + 0x20) = arg4;
    void* var0 = func_ov011_021849c8(arg1);
    void* var1 = func_ov023_021f6880((void**)var0, *(unsigned short*)((char*)arg0 + 0x20));
    if (var1 == 0) return 0;
    void* var2 = func_ov023_021fad18(var1);
    unsigned char var3 = *(unsigned char*)((char*)var2 + 0x50);
    *(unsigned short*)((char*)arg0 + 0x22) = arg5;
    int var4 = func_ov023_021f6c90(var0, var3, 1);
    *(unsigned short*)((char*)arg0 + 0x24) = var4;
    func_ov023_021f6bec(var0, var3, *(unsigned short*)((char*)arg0 + 0x24), 1);
    *(unsigned short*)((char*)arg0 + 0x26) = 0;
    *(unsigned short*)((char*)arg0 + 0x28) = 0;
    *(unsigned short*)((char*)arg0 + 0x2a) = 0;
    return 1;
}
