#include <globaldefs.h>

extern "C" int func_020d1f0c(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_020d26ec(void);
extern "C" void func_020d24c4(int arg0);
extern "C" void func_020d2680(unsigned int arg0);

extern char data_0210fd74;
extern char data_0210fdbc;

// USA: func_020bd02c
extern "C" ARM void func_020bd02c(void) {
    char* var0 = &data_0210fd74;
    char* var1 = &data_0210fdbc;
    if (*(int*)(var0 + 0x48) == 0) return;
    int var2 = *(int*)(var1 + 0x2c);
    int var3 = (var2 >= 0) ? (1 << var2) : 0;
    int var4 = *(int*)(var1 + 0x24);
    int var5 = *(int*)(var1 + 0x28);
    func_020d1f0c(var4, var5, var3, 0);
    int var6 = func_020d26ec();
    func_020d24c4(1);
    func_020d2680((unsigned int)var6);
}
