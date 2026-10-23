#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern SafeAllocator data_02153680;

// USA: func_020e50ec
extern "C" ARM void func_020e50ec(void* arg0, unsigned int arg1) {
    data_02153680.CreateTypeA(arg0, arg1);
    data_02153680.Reset();
}
