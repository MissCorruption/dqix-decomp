#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_020d9808(int* arg0, int* arg1, int* arg2);

extern int data_020f280c;
extern int data_020f2800;

// USA: func_020d97a8
extern "C" ARM int func_020d97a8(ProcessorContext* arg0, void* arg1, unsigned int arg2,
                             int arg3, const void* arg4, int arg5) {
    int var0 = func_020d9808(&arg3, &data_020f280c, &data_020f2800) + 16;
    PopulateContext(arg0, (unsigned int)arg4, arg5,
                    (unsigned int)((char*)arg1 + arg2), arg2, var0);
    return 1;
}
