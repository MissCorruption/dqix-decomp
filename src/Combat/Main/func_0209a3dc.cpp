#include <globaldefs.h>

#if defined(jpn)
#define data_020f1628 data_020f1790
#endif

#if defined(jpn)
#define func_0209a3dc func_0209c130
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

extern char data_020f1628[];
extern Script::OpcodeLookupEntry data_020f1608[];

struct Struct_0209a3dc { void* unknown_0_; };
extern struct Struct_0209a3dc* data_02109ba4;

// USA: func_0209a3dc
extern "C" ARM void func_0209a3dc(struct Struct_0209a3dc* arg0, void* arg1) {
    unsigned int var0;
    Script var1;

    BackgroundLoader::AddLockGlobal();

    void* var2 = LoadFileIntoMemory(data_020f1628, data_0211e33c, &var0);
    if (var2 != NULL) {
        arg0->unknown_0_ = arg1;
        data_02109ba4 = arg0;
        var1.Initialize();
        var1.SetOpcodeLookup(data_020f1608);
        var1.Load(var2, var0);
        var1.Execute();
        data_02109ba4 = NULL;
    }
    BackgroundLoader::RemoveLockGlobal();
}
