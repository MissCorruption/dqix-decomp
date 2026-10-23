#if defined(jpn)
#define R(j,u) (j)
#define func_ov013_021846a0 func_ov013_021856dc
#define func_ov013_02184d80 func_ov013_02185db4
#define func_ov013_02186160 func_ov013_02187178
#define func_ov013_021864f0 func_ov013_02187820
#define func_ov013_02186590 func_ov013_021878c0
#define func_ov013_0218678c func_ov013_02187ab8
#define func_ov013_0218683c func_ov013_02187b68
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

// USA: func_ov013_0218782c
extern "C" ARM void func_ov013_0218782c(void* arg0, int arg1, int arg2) {
    char* var0 = (char*)arg0;
    if (var0[R(0x53,0x67)] == arg1 && (unsigned char)var0[R(0x54,0x68)] == (unsigned int)arg2) return;

    int var1 = (arg1 >= 0 && arg1 <= 3);
    if (!var1) return;
    if ((unsigned int)arg2 >= 5) return;

    var0[R(0x53,0x67)] = (char)arg1;
    var0[R(0x54,0x68)] = (char)arg2;

    if (*(int*)(var0 + R(0x48,0x5c)) >= 0) {
        int var2 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var2))->RemoveTask((int)(*(int*)(var0 + R(0x48,0x5c))));
        *(int*)(var0 + R(0x48,0x5c)) = -1;
    }

    ((unsigned char*)var0)[R(0x55,0x69)] |= 1;
    var0[R(0x52,0x66)] = 0;
}
