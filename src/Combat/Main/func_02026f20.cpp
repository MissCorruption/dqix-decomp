#include <globaldefs.h>

extern char data_020fdccc;

// USA: func_02026f20
extern "C" ARM void func_02026f20(int arg0, int arg1) {
    (&data_020fdccc)[arg1 << 5] = 1;
}
