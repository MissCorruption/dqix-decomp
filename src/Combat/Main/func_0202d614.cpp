#include <globaldefs.h>

extern char data_021015a0;
extern "C" void func_0202c848(int);

// USA: func_0202d614
extern "C" ARM void func_0202d614(unsigned short* arg0) {
    void (*var0)(unsigned short*);
    if (arg0[1] != 0) {
        *(int*)(&data_021015a0 + 0x10) = 9;
        func_0202c848(arg0[1]);
        return;
    }
    var0 = *(void (**)(unsigned short*))(&data_021015a0 + 0x18);
    if (var0 != NULL) var0(arg0);
    *(int*)(&data_021015a0 + 0x10) = 1;
}
