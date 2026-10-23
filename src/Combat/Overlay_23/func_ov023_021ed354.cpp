#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" int func_020421a0(void);
extern "C" ARM void func_02046608(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_02042058(char*, const char*);
#else
extern "C" ARM void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif


// USA: func_ov023_021ed354
extern "C" ARM void func_ov023_021ed354(char* arg0) {
    struct Struct_ov023_021ed354 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };
    unsigned char var0 = ((Struct_ov023_021ed354*)(arg0 + 0xa0))->unknown_0_0_;
    func_0205de24((struct Struct_0205de24_2*)(arg0 + 0xc4), var0, 3);

    *(unsigned short*)(arg0 + 0x164) = 0x1e;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x166) = 0xb;
#else
    *(unsigned short*)(arg0 + 0x166) = 0xa;
#endif

    *(unsigned short*)(arg0 + 0x168) = 0x1;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x16a) = 0xc;
#else
    *(unsigned short*)(arg0 + 0x16a) = 0xd;
#endif

#if defined(jpn)
    *(unsigned short*)(arg0 + 0x16c) = 0xa;
#else
    *(unsigned short*)(arg0 + 0x16c) = 0x7;
#endif

#if defined(jpn)
    *(unsigned short*)(arg0 + 0x16e) = 0xa;
#else
    *(unsigned short*)(arg0 + 0x16e) = 0x8;
#endif

    *(unsigned short*)(arg0 + 0x170) = 0xc;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x172) = 0x14;
#else
    *(unsigned short*)(arg0 + 0x172) = 0xc;
#endif

    *(unsigned char*)(arg0 + 0x17b) = 0xc;
    *(unsigned char*)(arg0 + 0x175) = 0x1;
    *(unsigned char*)(arg0 + 0x179) = 0;
    *(unsigned char*)(arg0 + 0x17a) = 0;

#if defined(jpn)
    char* var1 = *(char**)(arg0 + 0x20) + *(unsigned char*)(arg0 + 0x28) * 0x15c;
    memset(*(void**)(arg0 + 0x1c), 0, 0x800);
    func_02042058(*(char**)(arg0 + 0x1c), *(char**)(var1 + 4));

#else
    void* var2 = (void*)func_020421a0();
    memset(*(void**)(arg0 + 0x1c), 0, 0x960);

    void* var3 = *(void**)(arg0 + 0x20);
    unsigned char var4 = *(unsigned char*)(arg0 + 0x28);
    int var5 = *(int*)((char*)var3 + var4 * 0x244 + 4);
    func_02046608(var2, 1, var5, *(void**)(arg0 + 0x1c), 0xe3, 0, 1);


#endif
#if defined(jpn)
    func_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0);
#else
    func_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0, 1);
#endif

}
