#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern void* data_02108740[];
extern Script::OpcodeLookupEntry data_020f051c[];

// USA: func_0205e104
extern "C" ARM void func_0205e104(char* arg0, SafeAllocator* arg1, const void* arg2, unsigned int arg3) {
    Script var0;
    if (arg0 && arg2 && arg3) {
        data_02108740[1] = arg0;
        data_02108740[0] = arg1;
        var0.Initialize();
        var0.SetOpcodeLookup(data_020f051c);
        var0.Load(arg2, arg3);
        var0.Execute();
    }
}
