#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int LoadToMainBG0CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToMainBG2CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToMainBG3CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG0CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG2CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG3CharacterData(int arg0, int arg1, unsigned int arg2);

// USA: func_0203b784
extern "C" ARM int func_0203b784(int* arg0, int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
    int* var0 = (int*)((char*)arg0 + 0x20);
    int var1 = arg0[arg1];
    arg0[arg1] = var1 + arg4;
    int var2 = *(int*)((char*)&arg0[arg1] + 0x20);
    int var3 = var0[arg1];
    var0[arg1] = var3 + arg5;
    CleanInvalidateCacheRange((void*)arg3, arg4);
    switch (arg1) {
    case 0:
        switch (arg2) {
        case 0: LoadToMainBG0CharacterData(arg3, var1, arg4); break;
        case 1: LoadToMainBG1CharacterData(arg3, var1, arg4); break;
        case 2: LoadToMainBG2CharacterData(arg3, var1, arg4); break;
        case 3: LoadToMainBG3CharacterData(arg3, var1, arg4); break;
        }
        break;
    case 1:
        switch (arg2) {
        case 0: LoadToSubBG0CharacterData(arg3, var1, arg4); break;
        case 1: LoadToSubBG1CharacterData(arg3, var1, arg4); break;
        case 2: LoadToSubBG2CharacterData(arg3, var1, arg4); break;
        case 3: LoadToSubBG3CharacterData(arg3, var1, arg4); break;
        }
        break;
    }
    return var2;
}
