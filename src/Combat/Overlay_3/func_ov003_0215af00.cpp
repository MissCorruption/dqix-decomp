#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov003_0215af00_2456 = 0x868 };
#else
enum { Enum_ov003_0215af00_2456 = 0x998 };
#endif

extern "C" void* func_020421a0(void);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
struct Struct_0201099c_3;
extern "C" void* func_020e0434(Struct_0201099c_3*, int);
extern "C" void func_ov003_02159250(void*, void*);
extern "C" void func_ov017_021d243c(int);
extern "C" void func_ov017_02191108(int, int, int, int, int);

// USA: func_ov003_0215af00
extern "C" ARM void func_ov003_0215af00(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = (unsigned char*)func_020421a0();
    unsigned char var2 = *(unsigned char*)(var0 + 0x580);

    if (var2 == 0) {
        func_0205d6a0((Struct_0205d6a0*)(var0 + 0xf4), 1);
        void* var3 = func_020e0434((Struct_0201099c_3*)(var0 + 0x64), 0x442);
        func_ov003_02159250(arg0, var3);
        *(unsigned char*)(var0 + 0x580) = *(unsigned char*)(var0 + 0x580) + 1;
    }

    if (!(var2 == 1 && *(int*)(var1 + Enum_ov003_0215af00_2456) == 0)) return;

    func_ov017_021d243c(0);
    int var4 = (int)GetGameResources();
    func_ov017_02191108(var4, 1, 1, 1, 1);

    *(unsigned char*)(var0 + 0x588) = 0xb;
    *(unsigned char*)(var0 + 0x580) = 0;
}
