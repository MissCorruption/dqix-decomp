#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"


struct Struct_0201099c_9;
struct Struct_0201099c_10;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

extern "C" void func_ov023_021db0d4(void* arg0, int arg1);
extern int data_ov023_021ffa0c;

struct Struct_ov023_021dcb70;
extern "C" unsigned char func_ov023_021dcb70(struct Struct_ov023_021dcb70* arg0);

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_ov023_021dde00(void* arg0);
extern "C" void func_ov023_021dbd10(void* arg0, void* arg1);


extern char data_ov023_021fdba9[];
extern char data_ov023_021fdbbe[];
extern char data_ov023_021fdbd5[];
extern char data_ov023_021fdbeb[];
extern char data_ov023_021fdbfd[];
extern char data_ov023_021fdc12[];

#if defined(jpn)
extern char data_ov023_021fce87[];
extern char data_ov023_021fce9f[];
#endif
// USA: func_ov023_021dfc90
extern "C" ARM int func_ov023_021dfc90(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021dfc90_1792=0x600, Enum_ov023_021dfc90_112=0xec, Enum_ov023_021dfc90_121=0xf5, Enum_ov023_021dfc90_1884=0x6d8, Enum_ov023_021dfc90_123=0xf7, Enum_ov023_021dfc90_1888=0x6dc, Enum_ov023_021dfc90_1896=0x6e4, Enum_ov023_021dfc90_124=0xf8, Enum_ov023_021dfc90_116=0xf0, Enum_ov023_021dfc90_120=0xf4, Enum_ov023_021dfc90_1844=0x6b0};
#else
 enum {Enum_ov023_021dfc90_1792=0x700, Enum_ov023_021dfc90_112=0x70, Enum_ov023_021dfc90_121=0x79, Enum_ov023_021dfc90_1884=0x75c, Enum_ov023_021dfc90_123=0x7b, Enum_ov023_021dfc90_1888=0x760, Enum_ov023_021dfc90_1896=0x768, Enum_ov023_021dfc90_124=0x7c, Enum_ov023_021dfc90_116=0x74, Enum_ov023_021dfc90_120=0x78, Enum_ov023_021dfc90_1844=0x734};
#endif
    int var0 = (int)BackgroundLoader::GetInstance();

    if (*(void**)((char*)arg0 + 0x48) != 0) {
        short var1 = *(short*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_112);
        *(void**)((char*)arg0 + 0x50) = func_020dedd0((struct Struct_0201099c_10*)*(void**)((char*)arg0 + 0x48), var1);
    }

    int var2 = 0;
    void* var3 = *(void**)((char*)arg0 + 0x50);
    if (var3 != 0) {
        unsigned int var4 = ((unsigned int)*(int*)((char*)var3 + 8) << 0x14) >> 0x1d;
        if (var4 == 5) var2 = 1;
    }

    func_ov023_021db0d4(&data_ov023_021ffa0c, var2);

    unsigned char var5 = func_ov023_021dcb70((struct Struct_ov023_021dcb70*)*(void**)((char*)arg0 + 0x50));
    signed char var6 = *(signed char*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_121);
    int var7 = var5;

    if (var7 == var6) {
        *(int*)((char*)arg0 + Enum_ov023_021dfc90_1884) = 0x3800;
        if (*(signed char*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_123) == 1) {
            *(int*)((char*)arg0 + Enum_ov023_021dfc90_1884) = 0x2800;
        }
        *(int*)((char*)arg0 + Enum_ov023_021dfc90_1888) = 0;
        *(int*)((char*)arg0 + Enum_ov023_021dfc90_1896) = 0;
        func_ov023_021dde00(arg0);
        func_ov023_021dbd10((char*)arg0 + 0xcc, *(void**)((char*)arg0 + 0x50));
        *(void**)((char*)arg0 + 0x4c) = *(void**)((char*)arg0 + 0x50);
        *(void**)((char*)arg0 + 0x50) = 0;

        if (*(signed char*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_124) == 1) {
            unsigned int* var8 = (unsigned int*)0x4001000;
            unsigned int var9 = 0x12;
            if (var7 != 0) var9 |= 1;
            *var8 = (*var8 & ~0x1f00) | (var9 << 8);
        }

        *(unsigned short*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_116) |= 0x2000;
        return 2;
    }

    char var10[0x40];
#if defined(jpn)

#else
    char var11[0x40];
#endif

    __clear(var10, 0x40);
#if defined(jpn)

#else
    __clear(var11, 0x40);
#endif


#if defined(jpn)

#else
    int var12 = 0;
#endif

    if (var7 == 0) {
        unsigned char var13 = *(unsigned char*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_120);
        switch (var13) {
        case 0:
            goto dfdfc021dfc90;
        case 1:
            sprintf(var10, data_ov023_021fdba9);
            goto tail021dfc90;
        case 2:
            sprintf(var10, data_ov023_021fdbbe);
            goto tail021dfc90;
        default:
            goto tail021dfc90;
        }
    }

dfdfc021dfc90:
    if (!(*(unsigned short*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_116) & 4)) goto e4c021dfc90;
    if (*(unsigned char*)((char*)arg0 + Enum_ov023_021dfc90_1792 + Enum_ov023_021dfc90_120) == 0) goto e24021dfc90;
    if (*(int*)((char*)arg0 + Enum_ov023_021dfc90_1844) <= 0) goto e4c021dfc90;
e24021dfc90:
#if defined(jpn)
    sprintf(var10, data_ov023_021fce87, var7);
#else
    sprintf(var10, data_ov023_021fdbd5, var7);
    sprintf(var11, data_ov023_021fdbeb, var7);
    var12 = 1;
#endif

    goto tail021dfc90;
e4c021dfc90:
#if defined(jpn)
    sprintf(var10, data_ov023_021fce9f, var7);
#else
    sprintf(var10, data_ov023_021fdbfd, var7);
    sprintf(var11, data_ov023_021fdc12, var7);
    var12 = 1;
#endif


tail021dfc90:
    {
        int var14;
#if defined(jpn)
        var14 = ((BackgroundLoader*)(var0))->QueueLoadFile(var10, (SafeAllocator*)0);
#else
        if (var12) {
            var14 = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)((int)var10), (const char*)((int)var11), (SafeAllocator*)(0));
        } else {
            var14 = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)var10), (SafeAllocator*)(0));
        }

#endif
        *(int*)((char*)arg0 + Enum_ov023_021dfc90_1844) = var14;
    }
    return 1;
}
