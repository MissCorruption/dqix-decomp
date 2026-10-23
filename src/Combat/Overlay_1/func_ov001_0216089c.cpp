#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov001_0215af34;
extern "C" void func_ov017_021d6148(Struct_ov001_0215af34* arg0, unsigned int arg1);
extern "C" void* func_ov017_021bbbe4(void* arg0);

struct Struct_ov001_0216089c { int unknown_0_; int *unknown_4_; };
extern "C" void func_ov017_021d6134(Struct_ov001_0216089c* arg0, int arg1);

// USA: func_ov001_0216089c
extern "C" ARM int func_ov001_0216089c(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_0216089c_1844 = 0x524 };
#else
    enum { Enum_ov001_0216089c_1844 = 0x734 };
#endif
    char* var0 = (char*)func_ov017_021bbbe4(*(void**)((char*)GetGameResources() + 0x3000 + Enum_ov001_0216089c_1844));
    if (*(signed char*)var0 < 0) {
        return 0;
    }
    func_ov017_021d6134((Struct_ov001_0216089c*)arg0, *(unsigned char*)(var0 + 0x14));
    func_ov017_021d6148((Struct_ov001_0215af34*)((char*)arg0 + 8), *(unsigned int*)(var0 + 0x18));
    return 1;
}
