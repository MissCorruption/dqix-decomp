#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"

struct Struct_020fdc4c_6 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

unsigned int data_020fdc58;
SafeAllocator* data_020fdc54;
#if !defined(jpn)
char* data_020fdc50;
#endif
Struct_020fdc4c_6 data_020fdc4c;
char* data_020fdc5c;

#if defined(jpn)
#define data_020ef510 data_020ef3f4
#endif
extern Script::OpcodeLookupEntry data_020ef510[];

// USA: func_02020c18
extern "C" ARM void func_02020c18(Struct_02020554* arg0, Type_02020aec arg1, SafeAllocator* arg2) {
    Script var0;
    void* var1;
    unsigned int var2;
    BackgroundLoader* var3 = BackgroundLoader::GetInstance();
    void* var4 = 0;
    unsigned int var5 = 0;
#if defined(jpn)
    var3->GetLoadedFileByID(arg1, &var4, &var5);
#else
    var3->GetLoadedFileByID(*arg1, &var4, &var5);
#endif
    var2 = var5;
    data_020fdc5c = (char*)arg0;
    var1 = var4;
    data_020fdc54 = arg2;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020ef510);
    var0.Load(var1, var2);
    var0.Execute();
#if defined(jpn)
    BackgroundLoader::GetInstance()->RemoveTask(arg1);
#else
    BackgroundLoader::GetInstance()->RemoveTask(*arg1);
    *arg1 = -1;
#endif
}
