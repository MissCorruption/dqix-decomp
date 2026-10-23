#include <globaldefs.h>

extern float data_020e88d0[];

// USA: func_02074948
extern "C" ARM float func_02074948(int arg0) {
    if (arg0 < 0) arg0 = 0;
    if (arg0 > 4) arg0 = 4;
    return data_020e88d0[arg0];
}
