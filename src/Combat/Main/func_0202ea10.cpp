#include <globaldefs.h>

// USA: func_0202ea10
extern "C" ARM void func_0202ea10(unsigned char* arg0, int arg1, int arg2) {
    if (arg2 != 0) {
        *(int*)(arg0 + 0x1e4) = arg1;
        *(int*)(arg0 + 0x1e8) = arg2;
    }
}
