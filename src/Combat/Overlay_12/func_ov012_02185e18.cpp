#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_02072a68_2;
extern "C" void* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" void func_020728ac(void* arg0, SafeAllocator* arg1, const void* arg2, unsigned int arg3, int, int, int);
#if defined(jpn)
extern char data_ov012_0218bf40[];
extern char data_ov012_0218bf52[];
#endif

// USA: func_ov012_02185e18
extern "C" ARM void func_ov012_02185e18(char* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
#if defined(jpn)
    void* var1;
    unsigned int var2;
    const void* var3;
    unsigned int var4;
    var0->GetLoadedFileByID(*(int*)(arg0 + 0x1350), &var1, &var2);
    if (!GetFileInNarc(var1, data_ov012_0218bf40, &var3, &var4, 0)) {
        var0->RemoveTask(*(int*)(arg0 + 0x1350));
        *(int*)(arg0 + 0x1350) = -1;
        return;
    }
    ((SafeAllocator*)(arg0 + 0x2c))->Reset();
    func_020728ac(arg0 + 0x1314, (SafeAllocator*)(arg0 + 0x2c), var3, var4, 0, 0, 0);
    *(void**)(arg0 + 0x1348) = func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), 0);
    if (!GetFileInNarc(var1, data_ov012_0218bf52, &var3, (unsigned int*)(arg0 + 0x1410), 0)) {
        var0->RemoveTask(*(int*)(arg0 + 0x1350));
        *(int*)(arg0 + 0x1350) = -1;
        return;
    }
    memcpy(*(void**)(arg0 + 0x140c), var3, *(unsigned int*)(arg0 + 0x1410));
    var0->RemoveTask(*(int*)(arg0 + 0x1350));
    *(int*)(arg0 + 0x1350) = -1;
#else
    int var5 = *(int*)(arg0 + 0x1380);
    void* var6;
    unsigned int var7;
    var0->GetLoadedFileByID(var5, &var6, &var7);
    ((SafeAllocator*)(arg0 + 0x34))->Reset();
    func_020728ac(arg0 + 0x133c, (SafeAllocator*)(arg0 + 0x34), var6, var7, 0, 0, 0);
    *(void**)(arg0 + 0x1378) = func_02072a68((Struct_02072a68_2*)(arg0 + 0x133c), 0);
    var0->RemoveTask(*(int*)(arg0 + 0x1380));
    *(int*)(arg0 + 0x1380) = -1;
#endif
}
