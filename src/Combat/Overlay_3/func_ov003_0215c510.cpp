#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_0209ca2c(void* arg0);
extern int data_02109bf4;

// USA: func_ov003_0215c510
extern "C" ARM void func_ov003_0215c510(char* arg0) {
    if (func_0209ca2c(&data_02109bf4) != 0) return;
    if (*(unsigned char*)(arg0 + 0x59d) != 0) return;

    int var0 = (int)BackgroundLoader::GetInstance();
    ((BackgroundLoader*)(var0))->MaybeFreeAllocations();
    ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)(arg0 + 0x578)));
    *(int*)(arg0 + 0x578) = -1;
    *(unsigned char*)(arg0 + 0x588) = 0xb;
    *(unsigned char*)(arg0 + 0x580) = 0;
}
