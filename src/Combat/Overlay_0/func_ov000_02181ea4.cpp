#include <globaldefs.h>

extern "C" int func_ov000_021818e0(int arg0, int arg1, void* arg2, int* arg3);

// USA: func_ov000_02181ea4
extern "C" ARM int func_ov000_02181ea4(int arg0, void* arg1, int* arg2) {
    return func_ov000_021818e0(0, 4, arg1, arg2);
}
