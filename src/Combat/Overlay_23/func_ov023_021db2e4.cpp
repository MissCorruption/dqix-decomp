#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov023_021db2e4
extern "C" ARM void func_ov023_021db2e4(volatile int* arg0) {
    if (!arg0) return;
    if (*arg0 < 0) return;
    ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->RemoveTask((int)(*arg0));
    *arg0 = -1;
}
