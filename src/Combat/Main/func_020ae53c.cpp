#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
enum { Enum_020ae53c_17496 = 0x41a8 };
#else
enum { Enum_020ae53c_17496 = 0x4458 };
#endif

extern "C" void* func_0205ec34(void);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_020aee04(int arg0, int arg1);

extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void func_020ae6e8(int arg0);
extern "C" void func_020ae730(int arg0);
extern "C" void func_020ae7d4(int arg0);
extern "C" void func_020ae880(int arg0);
extern "C" void func_020ae990(int arg0);
extern "C" void func_020ae9f0(void);
extern "C" void func_020ae694(int, int, unsigned short);
extern "C" void func_020ae4ec(int arg0, int arg1);

// USA: func_020ae53c
extern "C" ARM void func_020ae53c(int arg0) {
    char* var0 = (char*)GetGameResources();
    unsigned char* var1 = (unsigned char*)func_0205ec34();
    int var2;
    func_02012fe4();
    *(int*)((unsigned char*)var0 + Enum_020ae53c_17496) = arg0;

    func_020ae6e8(!func_0206dfb0((int)var1, var1 + 0x8c, 0x33e));
    func_020ae730((unsigned char)func_0206dfb0((int)var1, var1 + 0x8c, 0x344));
    func_020ae7d4((unsigned char)func_0206dfb0((int)var1, var1 + 0x8c, 0x347));
    func_020ae880((unsigned char)func_0206dfb0((int)var1, var1 + 0x8c, 0x34a));
    func_020ae990((unsigned char)func_0206dfb0((int)var1, var1 + 0x8c, 0x36c));
    func_020ae9f0();

    arg0 = func_0206dfb0((int)var1, var1 + 0x8c, 0x385);
    if (*func_02012fe4() == 0x1cea) {
        for (var2 = 0x4e; var2 <= 0x58; var2++) {
            func_020ae694((unsigned char)arg0, 0, var2);
        }
        func_020ae4ec(0x47, arg0 != 0);
    }
    func_020aee04(0, func_0206dfb0((int)var1, var1 + 0x8c, 0x386));
    *(int*)(var0 + Enum_020ae53c_17496) = 1;
}
