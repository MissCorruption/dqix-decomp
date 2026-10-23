#include <globaldefs.h>

extern char data_0210f83c;

// USA: func_020bbf4c
extern "C" ARM void func_020bbf4c(int arg0, int arg1) {
    *(int*)(&data_0210f83c + arg0 * 0x24) = (unsigned short)arg1;
}
