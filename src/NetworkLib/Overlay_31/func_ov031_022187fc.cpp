#include <globaldefs.h>
#include "NitroSDK/Memory.h"

typedef void (*Type_ov031_022187fc)(void*, int, int);

extern int data_ov031_02249f00;

// USA: func_ov031_022187fc
extern "C" ARM void func_ov031_022187fc(int arg0, void* arg1) {
    int var0 = *(int*)arg1;
    Type_ov031_022187fc var1 = *(Type_ov031_022187fc*)(arg0 + 0x1000 + 0x14);
    if (var0 != 0) {
        var1(&data_ov031_02249f00, var0, 0);
    }
    VectorizedMemset(arg1, 0, 0x10);
}
