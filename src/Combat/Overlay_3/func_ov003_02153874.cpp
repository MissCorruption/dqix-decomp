#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov003_02153874
extern "C" ARM void func_ov003_02153874(void* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (*(int*)((char*)arg0 + 0x50) >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)((char*)arg0 + 0x50)));
    }
    if (*(int*)((char*)arg0 + 0x54) >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)((char*)arg0 + 0x54)));
    }
    *(int*)((char*)arg0 + 0x14) = 0;
    *(int*)((char*)arg0 + 0x10) = 0;
    *(int*)((char*)arg0 + 0x50) = -1;
    *(int*)((char*)arg0 + 0x54) = -1;
    *(unsigned char*)((char*)arg0 + 0x5a) = 2;
    *(unsigned char*)((char*)arg0 + 0x5b) = 0;
    *(unsigned char*)((char*)arg0 + 0x5c) = 0;
    *(unsigned char*)((char*)arg0 + 0x5d) &= ~2;
}
