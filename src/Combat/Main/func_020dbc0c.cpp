#include <globaldefs.h>
#include "Resource/ResourceMutex.h"

struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);

extern "C" void func_020dbae0(void* arg0);

// USA: func_020dbc0c
extern "C" ARM void func_020dbc0c(void* arg0) {
    bool var0 = SetResourceMutexOperational(false);
    if (!func_02046708((struct Struct_02012de8*)func_020d6c00(), 0x100)) {
        func_020dbae0(arg0);
    }
    SetResourceMutexOperational(var0);
}
