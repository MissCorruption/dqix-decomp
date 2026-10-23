#include <globaldefs.h>

extern char data_0210cf88;

// USA: func_020bb910
extern "C" ARM void func_020bb910(int* arg0) {
    arg0[0] = *(int*)(&data_0210cf88 + 0x0);
    arg0[1] = *(int*)(&data_0210cf88 + 0x4);
}
