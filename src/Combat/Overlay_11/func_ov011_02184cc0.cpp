#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0203cf4c(void);

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

struct Struct_ov011_021849bc;
extern "C" int func_ov011_021849bc(struct Struct_ov011_021849bc* arg0, int arg1);
extern "C" void func_ov011_021849ac(void* arg0, unsigned int arg1);

extern "C" void func_0203e0a0(void* arg0, unsigned short arg1);
extern "C" void* func_ov017_0219bf74(void);
extern "C" void func_ov017_021a27e8(void* arg0);

struct Struct_0203cfb4;
extern "C" void func_0203cfb4(struct Struct_0203cfb4* arg0);

extern "C" void func_ov017_021a316c(int arg0);

extern "C" void func_ov017_0219b938(int arg0);

// USA: func_ov011_02184cc0
extern "C" ARM int func_ov011_02184cc0(struct Struct_ov011_02184c30* arg0) {
    int var0 = (int)GetGameResources();
    struct Struct_ov011_021849bc* var1 = (struct Struct_ov011_021849bc*)func_ov017_021b2164();
    void* var2 = func_0203cf4c();
    void* var3 = func_02012fe4();

    switch (func_ov011_02184c30(arg0)) {
    case 0:
        if (func_ov011_021849bc(var1, 1)) return 1;
        func_0203e0a0(var2, *(unsigned short*)var3);
        func_ov017_0219bf74();
        func_ov011_021849ac(var1, 1);
        break;
    case 1:
        if (func_ov011_021849bc(var1, 2)) return 1;
        func_0203e0a0(var2, *(unsigned short*)var3);
        func_ov017_021a27e8((void*)var0);
        func_0203cfb4((struct Struct_0203cfb4*)var2);
        func_ov017_021a316c(var0);
        SetFlags04((GameResources*)var0, 8);
        SetFlags04((GameResources*)var0, 0x10);
        func_ov011_021849ac(var1, 2);
        break;
    case 2:
        if (func_ov011_021849bc(var1, 4)) return 1;
        func_ov017_0219b938(var0);
        ((SafeAllocator*)((void*)(var0 + 0x9c)))->Reset();
        func_ov011_021849ac(var1, 4);
        break;
    }
    return 1;
}
