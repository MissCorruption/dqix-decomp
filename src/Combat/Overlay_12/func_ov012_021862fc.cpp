#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"


struct Struct_02043368_2;
extern "C" void func_0205a198(struct Struct_02043368_2* arg0);

extern "C" void func_0205a444(char* arg0);

struct Struct_020534ac;

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, void* arg3);

// USA: func_ov012_021862fc
extern "C" ARM void func_ov012_021862fc(char* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();

    for (int var1 = 0; var1 < 3; var1++) {
        func_0205a198((struct Struct_02043368_2*)(*(char**)(arg0 + 0x1000 + 0x36c) + var1 * 0x28));
    }

    func_0205a444(*(char**)(arg0 + 0x1000 + 0x368));

    *(unsigned char*)(*(char**)(arg0 + 0x1000 + 0x368) + 0x50) = 1;

    char* var2 = *(char**)(arg0 + 0x1000 + 0x368);
    *(int*)(var2 + 0x40) = *(int*)(arg0 + 0x1000 + 0x36c);
    *(short*)(var2 + 0x4c) = 3;

    void* var3;
    int var4;
    int var5;
    int var6;
    ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(*(int*)(arg0 + 0x1000 + 0x394)), (void**)(&var4), (unsigned int*)(&var5));

    int var7 = func_02046900((struct Struct_02020cb8_4*)var4);
    ((SafeAllocator*)(arg0 + 0x98))->Reset();

    for (int var8 = 0; var8 < var7; var8++) {
        void* var9 = func_020467f0((struct Struct_02020aec*)var4, var8, &var3, &var6);
        func_0205a528(*(char**)(arg0 + 0x1000 + 0x368), var9, var6, arg0 + 0x98);
    }

    ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)(arg0 + 0x1000 + 0x394)));
    *(int*)(arg0 + 0x1000 + 0x394) = -1;
}
