#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
enum { ResourceFlagOffset = 0x41a8 };
#else
enum { ResourceFlagOffset = 0x4458 };
#endif

extern "C" void* func_0205ec34(void);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_020aee04(int mode, int value);

extern "C" int func_0206dfb0(int unused, unsigned char* arr, int index);
extern "C" void func_020ae6e8(int enable);
extern "C" void func_020ae730(int a);
extern "C" void func_020ae7d4(int mode);
extern "C" void func_020ae880(int mode);
extern "C" void func_020ae990(int a);
extern "C" void func_020ae9f0(void);
extern "C" void func_020ae694(int, int, unsigned short);
extern "C" void func_020ae4ec(int param0, int param1);

// USA: func_020ae53c
extern "C" ARM void func_020ae53c(int arg) {
    char* res = (char*)GetGameResources();
    unsigned char* f = (unsigned char*)func_0205ec34();
    int key;
    func_02012fe4();
    *(int*)((unsigned char*)res + ResourceFlagOffset) = arg;

    func_020ae6e8(!func_0206dfb0((int)f, f + 0x8c, 0x33e));
    func_020ae730((unsigned char)func_0206dfb0((int)f, f + 0x8c, 0x344));
    func_020ae7d4((unsigned char)func_0206dfb0((int)f, f + 0x8c, 0x347));
    func_020ae880((unsigned char)func_0206dfb0((int)f, f + 0x8c, 0x34a));
    func_020ae990((unsigned char)func_0206dfb0((int)f, f + 0x8c, 0x36c));
    func_020ae9f0();

    arg = func_0206dfb0((int)f, f + 0x8c, 0x385);
    if (*func_02012fe4() == 0x1cea) {
        for (key = 0x4e; key <= 0x58; key++) {
            func_020ae694((unsigned char)arg, 0, key);
        }
        func_020ae4ec(0x47, arg != 0);
    }
    func_020aee04(0, func_0206dfb0((int)f, f + 0x8c, 0x386));
    *(int*)(res + ResourceFlagOffset) = 1;
}
