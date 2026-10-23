#include <globaldefs.h>

extern char data_021015a0;
extern "C" void func_0202c848(int arg0);
extern "C" void func_0202dd98(void);
extern "C" int func_020d559c(int arg0, unsigned int arg1);
extern "C" void func_0202d5ec(unsigned short* arg0);
extern "C" void func_0202dd28(void);

// USA: func_0202d584
extern "C" ARM void func_0202d584(unsigned short* arg0) {
    unsigned short var0 = arg0[1];
    if (var0 != 0) {
        func_0202c848(var0);
        func_0202dd98();
        return;
    }

    int var1;
    *(int*)(&data_021015a0 + 0x10) = 3;
    var1 = func_020d559c((int)func_0202d5ec, 0);
    if (var1 == 2) {
        var1 = 1;
    } else {
        func_0202c848(var1);
        func_0202dd28();
        var1 = 0;
    }
    if (var1 == 0) {
        *(int*)(&data_021015a0 + 0x10) = 9;
    }
}
