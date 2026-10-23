#include <globaldefs.h>

extern int data_020e88e4[];

// USA: func_02074988
extern "C" ARM int func_02074988(int arg0) {
    if (arg0 < 0) return 0;
    if (arg0 > 4) return 0;
    return data_020e88e4[arg0];
}
