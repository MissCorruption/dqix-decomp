#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov003_021538f4
extern "C" ARM void func_ov003_021538f4(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (*(unsigned char*)(var0 + 0x5a) == 0) return;
    signed char var1 = *(signed char*)(var0 + 0x59);
    int var2 = 0;
    if (var1 < 0) goto check;
    if (var1 <= 3) var2 = 1;
check:
    if (!var2) return;
    if (arg1 <= 0) return;
    if (arg1 >= 0xd) return;
    if (*(int*)(var0 + 0x14) == arg1) return;

    int var3 = (int)BackgroundLoader::GetInstance();
    int var4 = *(int*)(var0 + 0x50);
    if (var4 >= 0) ((BackgroundLoader*)(var3))->RemoveTask((int)(var4));
    int var5 = *(int*)(var0 + 0x54);
    if (var5 >= 0) ((BackgroundLoader*)(var3))->RemoveTask((int)(var5));
    *(int*)(var0 + 0x50) = -1;
    *(int*)(var0 + 0x54) = -1;
    *(int*)(var0 + 0x14) = arg1;
    *(unsigned char*)(var0 + 0x5b) = 0;
    *(unsigned char*)(var0 + 0x5c) = 0;
    *(unsigned char*)(var0 + 0x5d) |= 1;
}
