#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

extern char data_020f14b0[] __attribute__((aligned(4)));
extern Script::OpcodeLookupEntry data_020f1444[];

struct Struct_02109404_2 {
    char unknown_0_[0x10];
    char* unknown_10_;
};
extern struct Struct_02109404_2 data_02109404;

// USA: func_02096524
extern "C" ARM void func_02096524(char* arg0) {
    unsigned int var0;
    Script var1;

    BackgroundLoader::AddLockGlobal();
    void* var2 = LoadFileIntoMemory(data_020f14b0, data_0211e33c, &var0);
    if (var2 != 0) {
        char* var3 = arg0 + 0xac;
        struct Struct_02109404_2* var4 = &data_02109404;
        var4->unknown_10_ = var3;
        unsigned int var5 = var0;
        var1.Initialize();
        var1.SetOpcodeLookup(data_020f1444);
        var1.Load(var2, var5);
        var1.Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
