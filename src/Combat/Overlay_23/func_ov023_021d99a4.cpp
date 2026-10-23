#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);

#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif


// USA: func_ov023_021d99a4
extern "C" ARM void func_ov023_021d99a4(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021d99a4_444=0x1bc};
#else
 enum {Enum_ov023_021d99a4_504=0x1f8};
#endif
    char* var0 = (char*)arg0;
#if defined(jpn)
    int var2 = 0x18;

#else
    struct Struct_02000c9c_8* var1 = (struct Struct_02000c9c_8*)GameState::GetInstance();
    int var2 = 0x18;
    int var3 = func_0200fb08(var1);
    if (var3 == 4) var2 = 0x19;

#endif
#if defined(jpn)
    char* var4 = var0;
    enum { Enum_ov023_021d99a4_0=0x1bc };
#else
    char* var4 = var0 + Enum_ov023_021d99a4_504;
    enum { Enum_ov023_021d99a4_0=0 };
#endif
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xa0) = 7;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xa2) = 0x11;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xa4) = var2;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xa6) = 5;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xa8) = 6;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xaa) = 6;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xac) = 0xa;
    *(unsigned short*)(var4 + Enum_ov023_021d99a4_0 + 0xae) = 0x10;
    unsigned char var5 = 0;
    var4[Enum_ov023_021d99a4_0 + 0xb1] = var5;
    var4[Enum_ov023_021d99a4_0 + 0xb5] = 1;
    var4[Enum_ov023_021d99a4_0 + 0xb6] = 1;
#if defined(jpn)
    memset(*(void**)(var0 + 0xd8), var5, 0x800);
    int var6 = func_020e0434((struct Struct_0201099c_3*)(var0 + 0xc0), 0x4274);
    sprintf(*(char**)(var0 + 0xd8), (const char*)(long)var6);
    func_0205d304(var0 + 0x1bc, *(void**)(var0 + 0xd8), 0, 0, 0, 0, 0);

#else
    void* var7 = *(void**)(var0 + 0xf8);
    memset(var7, var5, 0x960);
    int var8 = func_020e0434((struct Struct_0201099c_3*)(var0 + 0xe0), 0x4274);
    sprintf((char*)var7, (const char*)(long)var8);
    func_0205d304(var4, var7, 0, 0, 0, 0, 0, 0);

#endif
}
