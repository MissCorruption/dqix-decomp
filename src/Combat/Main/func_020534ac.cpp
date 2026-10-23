#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02012de8;
extern "C" void* func_020d6c00(void);
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);

struct Struct_020534ac_2;

struct Struct_020534ac;

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);

extern "C" void func_0204719c(void);
extern "C" void func_02047b40(void* arg0, int arg1, void* arg2);
extern "C" void func_0205308c(void* arg0, int arg1);

// USA: func_020534ac
extern "C" ARM void func_020534ac(char* arg0) {
    int var0;
    char* var1;
    char* var2;
    void* var3;
    void* var4;
    int var5;
    int var6;

    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 2)) {
        return;
    }
    if (*(unsigned char*)(arg0 + (IS_JPN ? 0x179 : 0x185)) == 0) {
        return;
    }

    var3 = (void*)(int)BackgroundLoader::GetInstance();

    if (((BackgroundLoader*)((struct Struct_020534ac_2*)var3))->GetDetailedTaskStatus((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194)))) == 2) {
        ((BackgroundLoader*)((struct Struct_020534ac*)var3))->GetLoadedFileByID((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194))), (void**)(&var5), (unsigned int*)(&var6));
        if (var5 != 0) {
            var0 = *(int*)(arg0 + (IS_JPN ? 0x148 : 0x154));
            var1 = (char*)(var0 + 0x168);
            var2 = (char*)(var0 + 0x154);
            func_0207df50((struct Struct_0203d028*)(var1 + 0x400));
            func_0207df90(var1 + 0x400);
            var4 = ((SafeAllocator*)(var2 + 0x400))->Allocate(0x88);
            *(void**)(arg0 + (IS_JPN ? 0x184 : 0x190)) = var4;
            if (var4 != NULL) {
                func_0204719c();
                *(unsigned char*)((char*)(*(void**)(arg0 + (IS_JPN ? 0x184 : 0x190))) + 0x84) |= 4;
                func_02047b40(*(void**)(arg0 + (IS_JPN ? 0x184 : 0x190)), var5, var2 + 0x400);
            }
            func_0207dfac(var1 + 0x400);
        }
    }

    ((BackgroundLoader*)(var3))->RemoveTask((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194))));
    *(int*)(arg0 + (IS_JPN ? 0x188 : 0x194)) = -1;
    *(unsigned char*)(arg0 + (IS_JPN ? 0x179 : 0x185)) = 0;

    if (*(unsigned char*)(arg0 + (IS_JPN ? 0x17a : 0x186)) != 0) {
        signed char var7 = *(signed char*)(arg0 + (IS_JPN ? 0x171 : 0x17d));
        char* var8 = arg0 + (var7 + 1);
        func_0205308c(arg0, *(signed char*)(var8 + 0x100 + (IS_JPN ? 0x6c : 0x78)));
        *(unsigned char*)(arg0 + (IS_JPN ? 0x17a : 0x186)) = 0;
    }
}
