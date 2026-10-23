#include <globaldefs.h>
extern "C" int func_020d503c(int);

extern char data_021015a0;
extern "C" void func_0202d664(unsigned short*);

// USA: func_0202df10
extern "C" ARM int func_0202df10() {
    *(int*)(&data_021015a0 + 0x10) = 3;
    if (func_020d503c((int)((void*)func_0202d664)) != 2) {
        *(int*)(&data_021015a0 + 0x10) = 9;
        return 0;
    }
    *(short*)(&data_021015a0 + 0xe) = 0;
    return 1;
}
