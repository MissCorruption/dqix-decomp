#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern "C" void func_020c015c();

// USA: func_020bf2f8
extern "C" ARM void func_020bf2f8(void* arg0, unsigned int arg1) {
    PopulateContext((ProcessorContext*)arg0, (unsigned int)func_020c015c, (unsigned int)arg0, (unsigned int)((char*)arg0 + 0x4c0), 0x400, arg1);
    ((SignedAllocatorList*)((char*)arg0 + 0x4e0))->Initialize(0);
    ZeroInitializeMutex((Mutex*)((char*)arg0 + 0x4c8));
    *(int*)((char*)arg0 + 0x4c4) = 0;
    *(int*)((char*)arg0 + 0x4c0) = 0;
    MarkContextReadyAndSwitch((ProcessorContext*)arg0);
}
