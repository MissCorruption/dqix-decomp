#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

extern char data_020f1088;
extern char data_020f109e;
extern Script::OpcodeLookupEntry data_020f1048[];

struct Struct_02108efc_4 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    void* unknown_c_;
};
extern struct Struct_02108efc_4 data_02108efc;

// USA: func_02089de8
extern "C" ARM void func_02089de8(void* arg0, void* arg1, const char* arg2) {
    BackgroundLoader::AddLockGlobal();
    unsigned int var0;
    Script var1;
    void* var2;
    void* var3 = data_0211e33c;
    unsigned int* var4 = &var0;
    if (arg2 != 0) {
        var2 = LoadFileIntoMemory(arg2, var3, var4);
    } else {
        #if defined(jpn)
        var2 = LoadFileIntoMemory(&data_020f1088, var3, var4);
#else
        var2 = ExtractFileFromGP2(&data_020f1088, &data_020f109e, var4);
#endif
    }
    if (var2 != 0) {
        data_02108efc.unknown_0_ = arg0;
        data_02108efc.unknown_c_ = arg1;
        data_02108efc.unknown_8_ = 0;
        data_02108efc.unknown_4_ = 0;
        var1.Initialize();
        var1.SetOpcodeLookup(data_020f1048);
        var1.Load(var2, var0);
        var1.Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
