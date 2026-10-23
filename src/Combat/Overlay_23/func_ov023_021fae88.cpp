#include <globaldefs.h>

extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" void func_ov023_021f6c3c(void*, unsigned int, unsigned int, unsigned int);
extern "C" void* func_ov023_021fa854(char* arg0, unsigned int arg1);

// USA: func_ov023_021fae88
extern "C" ARM void func_ov023_021fae88(void* arg0, void* arg1) {
    unsigned short var0 = *(unsigned short*)((char*)arg0 + 0x20);
    void* var1 = func_ov023_021f6880(arg1, var0);
    if (var1 == NULL) return;
    char* var2 = (char*)func_ov023_021fad18(var1);
    unsigned char var3 = *(unsigned char*)(var2 + 0x50);
    void* var4 = func_ov023_021fa854(var2, *(unsigned short*)((char*)arg0 + 0x22));
    unsigned short var5 = *(unsigned short*)var4;
    unsigned short var6 = *(unsigned short*)((char*)arg0 + 0x24);
    func_ov023_021f6c3c(arg1, var3, var6, var5);
}
