#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/GPC.h"

// USA: func_ov000_0216638c
extern "C" ARM void func_ov000_0216638c(void* arg0, GPCReadPair* arg1, int) {
    arg1->Reset();
    BackgroundLoader::RemoveLockGlobal();
}
