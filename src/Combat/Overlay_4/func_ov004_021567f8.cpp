#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(unsigned char* arg0, unsigned int arg1);
struct Struct_020a13c4;
extern "C" void func_020a13c4(Struct_020a13c4* arg0);
struct Struct_02013fb4;
extern "C" void func_020a147c(void*, void*, Struct_02013fb4*, int, int, unsigned short, unsigned char);
extern "C" int func_020ac460(void* arg0);
extern "C" void __clear(void* arg0, int arg1);
struct Struct_020a15bc;
struct Struct_020a15bc_2;
extern "C" Struct_020a15bc_2* func_020a15bc(Struct_020a15bc* arg0, int arg1);

extern void* data_ov004_021707c8;
#if defined(jpn)
extern char data_ov004_02170c94[];
#else
extern char data_ov004_0217039a[];
extern char data_ov004_021703af[];
#endif

// USA: func_ov004_021567f8
// KEEP-NAME
extern "C" ARM int func_ov004_021567f8(void* arg0) {
    char* var0 = (char*)func_ov011_021845f8((unsigned char*)arg0, 4);
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    SafeAllocator* var2 = (SafeAllocator*)(var0 + 4);
#if defined(jpn)
    *(void**)((char*)&data_ov004_021707c8 + 8) = var2->Allocate(0x14);
    BackgroundLoader::AddLockGlobal();
    unsigned int var3 = 0;
    void* var5 = LoadFileIntoMemory(data_ov004_02170c94, data_0211e33c, &var3);
#else
    *(void**)((char*)&data_ov004_021707c8 + 12) = var2->Allocate(0x14);
    int var4 = var1->QueueLoadFileInGP2(data_ov004_0217039a, data_ov004_021703af, 0);
    if (var4 < 0) return 0;
    while (!var1->GetTaskStatus(var4)) {
        var1->RemoveAllLocks();
    }
    if (var1->GetDetailedTaskStatus(var4) != 2) {
        var1->RemoveTask(var4);
        return 0;
    }
    void* var5;
    unsigned int var6;
    var1->GetLoadedFileByID(var4, &var5, &var6);
#endif
    if (var5 != 0) {
#if defined(jpn)
        func_020a13c4(*(Struct_020a13c4**)((char*)&data_ov004_021707c8 + 8));
        func_020a147c(*(void**)((char*)&data_ov004_021707c8 + 8), var2, (Struct_02013fb4*)var5, var3, 0, 0, 0xf);
#else
        func_020a13c4(*(Struct_020a13c4**)((char*)&data_ov004_021707c8 + 12));
        func_020a147c(*(void**)((char*)&data_ov004_021707c8 + 12), var2, (Struct_02013fb4*)var5, var6, 0, 0, 0xf);
#endif
    }
#if defined(jpn)
    BackgroundLoader::RemoveLockGlobal();
#else
    var1->RemoveTask(var4);
#endif
    if (var5 == 0) return 0;

#if defined(jpn)
    short* var7 = (short*)var2->Allocate(0x3c0);
    *(short**)((char*)&data_ov004_021707c8 + 4) = var7;
    memset(var7, 0, 0x3c0);
#else
    short* var8 = (short*)var2->Allocate(0x3c0);
    *(short**)((char*)&data_ov004_021707c8 + 8) = var8;
    memset(var8, 0, 0x3c0);
#endif
    unsigned int var9[15];
    __clear(var9, sizeof(var9));
    func_020ac460(var9);

    int var10, var11, var12;
    for (var12 = 0, var10 = 0; var10 < 0x1e0; var10++) {
        var11 = var10 + 1;
#if defined(jpn)
        Struct_020a15bc* var13 = *(Struct_020a15bc**)((char*)&data_ov004_021707c8 + 8);
#else
        Struct_020a15bc* var13 = *(Struct_020a15bc**)((char*)&data_ov004_021707c8 + 12);
#endif
        if (func_020a15bc(var13, (short)var11)) {
            int var14 = var11 / 32;
            int var15 = var11 % 32;
            if (var9[var14] & (1u << var15)) {
#if defined(jpn)
                (*(short**)((char*)&data_ov004_021707c8 + 4))[var12] = var11;
#else
                (*(short**)((char*)&data_ov004_021707c8 + 8))[var12] = var11;
#endif
                var12++;
            }
        }
    }
#if defined(jpn)
    data_ov004_021707c8 = var2->Allocate(0x3c0);
    memset(data_ov004_021707c8, 0, 0x3c0);
#else
    short* var16 = (short*)var2->Allocate(0x3c0);
    *(short**)((char*)&data_ov004_021707c8 + 4) = var16;
    memset(var16, 0, 0x3c0);
    data_ov004_021707c8 = var2->Allocate(0x1000);
    memset(data_ov004_021707c8, 0, 0x1000);
#endif
    return 0;
}
