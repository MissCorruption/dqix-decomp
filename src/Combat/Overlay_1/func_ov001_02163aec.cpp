#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" int func_0209cd50(int arg0);
struct Struct_0209c3b4_2;
extern "C" void func_0209c3b4(struct Struct_0209c3b4_2* arg0, int arg1);
extern void* data_02109bf4;

// USA: func_ov001_02163aec
extern "C" ARM int func_ov001_02163aec(void) {
    unsigned short var0 = *(unsigned short*)func_02012fe4();
    int var1 = func_0209cd50(var0);
    func_0209c3b4((struct Struct_0209c3b4_2*)&data_02109bf4, var1);
    return 1;
}
