#include <globaldefs.h>

// USA: func_ov023_021eb564
extern "C" ARM void func_ov023_021eb564(char* arg0, int arg1, int arg2) {
    if (arg1 != 0 && arg2 != 0) {
        *(int*)(arg0 + 0x20) = arg1;
        *(int*)(arg0 + 0x24) = arg2;
    }
}
