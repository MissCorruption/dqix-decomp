#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void func_020938f0(void* arg0);

// USA: func_020939ac
extern "C" ARM void func_020939ac(void* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
#if defined(jpn)
    if (*(int*)((char*)arg0 + 0x100) >= 0) {
#else
    if (*(int*)((char*)arg0 + 0x340) >= 0) {
#endif
#if defined(jpn)
        ((BackgroundLoader*)(var0))->RemoveTask(*(int*)((char*)arg0 + 0x100));
#else
        ((BackgroundLoader*)(var0))->RemoveTask(*(int*)((char*)arg0 + 0x340));
#endif
#if defined(jpn)
        *(int*)((char*)arg0 + 0x100) = -1;
#else
        *(int*)((char*)arg0 + 0x340) = -1;
#endif
    }
    func_020938f0(arg0);
}
