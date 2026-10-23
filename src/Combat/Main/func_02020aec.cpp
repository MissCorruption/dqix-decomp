#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "Filesystem/BackgroundLoader.h"
#include "Combat/MapDisplay.h"

struct Struct_020534ac;

extern "C" void* func_0203bd14();
extern "C" void* func_0203bd08(void);
extern "C" void* func_0203be4c(void);

struct Struct_02020aec;
extern "C" int func_0205a498(void* arg0, struct Struct_02020aec* arg1, int arg2, void* arg3);

extern "C" void func_0205af38(int arg0, char* arg1, int arg2, int arg3);

// USA: func_02020aec
extern "C" ARM void func_02020aec(Struct_02020554* arg0, Type_02020aec arg1, SafeAllocator* arg2) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    void* var1 = 0;
    unsigned int var2 = 0;
    #if defined(jpn)
    var0->GetLoadedFileByID(arg1, &var1, &var2);
#else
    var0->GetLoadedFileByID(*arg1, &var1, &var2);
#endif

    char* var3 = (char*)func_0203bd14();
    *(int*)(var3 + (IS_JPN ? 0x608 : 0x508)) = 0x2000;
    func_0203bd08();

    char* var4 = (char*)func_0203be4c() + 0x2c0;
    var3 = (char*)func_0203bd14();
    *(char**)var3 = var4;

    func_0205a498(&arg0->unknown_94_, (Struct_02020aec*)var1, var2, arg2);

    var0 = BackgroundLoader::GetInstance();
#if defined(jpn)
    var0->RemoveTask(arg1);
#else
    var0->RemoveTask(*arg1);
    *arg1 = -1;
#endif

    func_0205af38((int)&arg0->unknown_94_, (char*)&arg0->unknown_e8_[9], 1, 1);
    func_0205af38((int)&arg0->unknown_94_, (char*)&arg0->unknown_e8_[11], 1, 1);
}
