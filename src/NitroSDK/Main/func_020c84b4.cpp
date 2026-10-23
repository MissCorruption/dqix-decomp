#include <globaldefs.h>

extern "C" int func_020c8548(int);
extern "C" int func_020c862c(int);
extern "C" void func_020c86d4(int arg0, int arg1);
extern "C" void func_020c86e8(int arg0, int arg1);
extern "C" unsigned int func_020c7dcc();
extern "C" void func_020c8a2c(unsigned int arg0);
extern "C" void func_020c8a34(unsigned int arg0);

extern int data_0211155c;

// USA: func_020c84b4
extern "C" ARM void func_020c84b4(void) {
    int var0 = func_020c8548(2);
    func_020c86d4(2, var0);
    int var1 = func_020c862c(2);
    func_020c86e8(2, var1);

    int var2 = *(int*)((char*)&data_0211155c + 0x4);
    if (var2 != 0) {
        unsigned int var3 = func_020c7dcc();
        if ((var3 & 0x3) != 0x1) {
            return;
        }
    }
    func_020c8a2c(0x200002b);
    func_020c8a34(0x23e0021);
}
