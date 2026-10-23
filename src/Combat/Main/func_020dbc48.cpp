#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

// USA: func_020dbc48
extern "C" ARM SafeAllocator* func_020dbc48(SafeAllocator* arg0) {
    arg0->ResetAllocatorPointer();
    return arg0;
}
