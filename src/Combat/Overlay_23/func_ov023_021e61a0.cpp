#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov023_021e61a0
extern "C" ARM void func_ov023_021e61a0(void* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    for (int var1 = 0; var1 < 0xc; var1++) {
        if (*(short*)((char*)arg0 + (var1 << 1) + 0xb00 + 0xf4) > -1) {
            ((BackgroundLoader*)(var0))->RemoveTask((int)(*(short*)((char*)arg0 + (var1 << 1) + 0xb00 + 0xf4)));
        }
        *(short*)((char*)arg0 + (unsigned int)(var1 << 1) + 0xb00 + 0xf4) = -1;
    }
}
