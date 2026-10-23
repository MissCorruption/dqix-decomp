#include <globaldefs.h>

extern char data_021015a0;
extern char data_021016e0;
extern char data_02101614;

extern "C" void func_0202d2a4();
extern "C" int func_020d54d0(void* arg0, void* arg1, void* arg2, int arg3, unsigned short arg4);
extern "C" void func_0202c848(int arg0);

// USA: func_0202d224
extern "C" ARM int func_0202d224(void) {
    int var0 = *(int*)(&data_021015a0 + 0x10);
    if (!(var0 != 4 && var0 != 6 && var0 != 5))
        return 1;
    *(int*)(&data_021015a0 + 0x10) = 3;
    int var1 = (*(int*)(&data_021015a0 + 0x30) != 0);
    int var2 = func_020d54d0((void*)func_0202d2a4, &data_021016e0, &data_02101614, 1, var1);
    if (var2 == 2)
        return 1;
    func_0202c848(var2);
    return 0;
}
