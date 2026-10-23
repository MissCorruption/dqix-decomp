#include <globaldefs.h>
#include "Filesystem/GPC.h"

void ZeroInitGPCPointer(GPCFile** ppGPC);

// USA: func_02079a3c
extern "C" ARM void* func_02079a3c(void* arg0) {
    ZeroInitGPCPointer((GPCFile**)(arg0));
    ((GPCReadPair*)arg0)->ZeroInitializeMachine();
    return arg0;
}
