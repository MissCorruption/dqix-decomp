#include <globaldefs.h>

extern char data_021015a0;
extern char data_02101600;
extern char data_02101640;

extern "C" int func_0202c958(void);
extern "C" void func_0202c848(int arg0);
extern "C" void func_0202c918(unsigned short* arg0);
extern "C" int func_020d68dc(int arg0, unsigned int arg1, void* arg2);

typedef unsigned int (*Type_0202c864)(void*, void*);

// USA: func_0202c864
extern "C" ARM void func_0202c864(unsigned short* arg0)
{
    unsigned short var0 = arg0[1];
    if (var0 != 0) {
        func_0202c848(var0);
        *(int*)(&data_021015a0 + 0x10) = 9;
        return;
    }

    Type_0202c864 var1 = *(Type_0202c864*)(&data_021015a0 + 0x3c);
    if (var1 != 0) {
        int var2;
        *(int*)(&data_021015a0 + 0x10) = 3;
        unsigned int var3 = var1(&data_02101600, &data_02101640);
        var2 = func_020d68dc((int)func_0202c918, var3, &data_02101600);
        if (var2 == 2) {
            var2 = 1;
        } else {
            func_0202c848(var2);
            *(int*)(&data_021015a0 + 0x10) = 9;
            var2 = 0;
        }
        if (var2 == 0) {
            *(int*)(&data_021015a0 + 0x10) = 9;
        }
    } else {
        if (func_0202c958() == 0) {
            *(int*)(&data_021015a0 + 0x10) = 9;
        }
    }
}
