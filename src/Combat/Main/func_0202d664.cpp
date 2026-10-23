#include <globaldefs.h>

extern char data_021015a0;

// USA: func_0202d664
extern "C" ARM void func_0202d664(unsigned short* arg0) {
    if (arg0[1] != 0)
        *(int*)(&data_021015a0 + 0x10) = 0xa;
    else
        *(int*)(&data_021015a0 + 0x10) = 0;
}
