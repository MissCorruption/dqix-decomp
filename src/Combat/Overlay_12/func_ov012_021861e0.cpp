#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov012_021861e0_19 = 17, Enum_ov012_021861e0_4964 = 0x133c, Enum_ov012_021861e0_4960 = 0x1338, Enum_ov012_021861e0_4956 = 0x1334, Enum_ov012_021861e0_5008 = 0x135c, Enum_ov012_021861e0_92 = 0x54 };
#else
enum { Enum_ov012_021861e0_19 = 19, Enum_ov012_021861e0_4964 = 0x1364, Enum_ov012_021861e0_4960 = 0x1360, Enum_ov012_021861e0_4956 = 0x135c, Enum_ov012_021861e0_5008 = 0x1390, Enum_ov012_021861e0_92 = 0x5c };
#endif

struct Struct_02043368_2;
extern "C" void func_0205a198(Struct_02043368_2*);
struct Struct_02043368;
extern "C" void func_0205a234(Struct_02043368*);
extern "C" void func_0205a444(char*);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0205a528(void*, void*, int, void*);

// USA: func_ov012_021861e0
extern "C" ARM void func_ov012_021861e0(char* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    for (unsigned char var1 = 0; var1 < Enum_ov012_021861e0_19; ++var1)
        func_0205a198((Struct_02043368_2*)(*(char**)(arg0 + Enum_ov012_021861e0_4964) + var1 * 0x28));
    func_0205a234(*(Struct_02043368**)(arg0 + Enum_ov012_021861e0_4960));
    func_0205a444(*(char**)(arg0 + Enum_ov012_021861e0_4956));
    *(unsigned char*)(*(char**)(arg0 + Enum_ov012_021861e0_4956) + 0x50) = 0;
    char* var2 = *(char**)(arg0 + Enum_ov012_021861e0_4956);
    *(void**)(var2 + 0x40) = *(void**)(arg0 + Enum_ov012_021861e0_4964);
    *(short*)(var2 + 0x4c) = Enum_ov012_021861e0_19;
    void* var3 = *(void**)(arg0 + Enum_ov012_021861e0_4960);
    char* var4 = *(char**)(arg0 + Enum_ov012_021861e0_4956);
    *(void**)(var4 + 0x3c) = var3;

    void* var5;
    void* var6;
    unsigned int var7;
    int var8;
    var0->GetLoadedFileByID(*(int*)(arg0 + Enum_ov012_021861e0_5008), &var6, &var7);
    int var9 = func_02046900((Struct_02020cb8_4*)var6);
    ((SafeAllocator*)(arg0 + Enum_ov012_021861e0_92))->Reset();
    for (int var10 = 0; var10 < var9; ++var10) {
        void* var11 = func_020467f0((Struct_02020aec*)var6, var10, &var5, &var8);
        func_0205a528(*(char**)(arg0 + Enum_ov012_021861e0_4956), var11, var8, arg0 + Enum_ov012_021861e0_92);
    }
    var0->RemoveTask(*(int*)(arg0 + Enum_ov012_021861e0_5008));
    *(int*)(arg0 + Enum_ov012_021861e0_5008) = -1;
}
