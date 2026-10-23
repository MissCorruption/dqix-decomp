#include <globaldefs.h>

extern "C" int func_020bd8ac(unsigned int arg0);

struct Struct_020c0044;
extern "C" int func_020c0044(struct Struct_020c0044 *arg0, unsigned int arg1);
extern "C" void *func_020c00b8(void *arg0);
struct Struct_020c00c8;
extern "C" int func_020c00c8(struct Struct_020c00c8 *arg0, int arg1, int arg2, int arg3);
extern "C" int func_020c0100(void *arg0);
extern "C" int func_020c0110(char *arg0, void *arg1);
extern "C" void func_020c0138(void);
extern "C" int func_020c013c(char *arg0, void *arg1, int arg2, int arg3);
extern "C" void func_020c0158(void);

// USA: func_020bffc4
extern "C" ARM void func_020bffc4(void *arg0, unsigned int arg1) {
    int var0 = func_020bd8ac(arg1);
    if (var0 == 0) {
        *(void **)((char *)arg0 + 0x164) = (void *)func_020c0044;
        *(void **)((char *)arg0 + 0x168) = (void *)func_020c00b8;
        *(void **)((char *)arg0 + 0x16c) = (void *)func_020c00c8;
        *(void **)((char *)arg0 + 0x170) = (void *)func_020c0100;
    } else {
        *(void **)((char *)arg0 + 0x164) = (void *)func_020c0110;
        *(void **)((char *)arg0 + 0x168) = (void *)func_020c0138;
        *(void **)((char *)arg0 + 0x16c) = (void *)func_020c013c;
        *(void **)((char *)arg0 + 0x170) = (void *)func_020c0158;
    }
}
