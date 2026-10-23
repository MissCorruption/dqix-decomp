#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/GPC.h"


extern char data_ov000_02183a2f[];
extern char data_0211e33c[];

// USA: func_ov000_02166008
extern "C" ARM unsigned int func_ov000_02166008(void* arg0, GPCReadPair* arg1, int arg2) {
    unsigned int var0;
    if (arg2) {
        BackgroundLoader::AddLockGlobal();
        BackgroundLoader::FreeAllocationsGlobal();
    }
    arg1->ZeroInitialize();
    LoadAndDecompressGPCHeaderAndInnerFileInfo(&arg1->pGPCFile, arg1->machine,
        data_ov000_02183a2f, data_0211e33c, var0, 0x30000, false, NULL);
    return var0;
}
