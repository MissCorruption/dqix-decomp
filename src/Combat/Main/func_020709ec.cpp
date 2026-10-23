#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

struct Struct_020709ec;
extern "C" void func_02070a30(Struct_020709ec*, SafeAllocator*, void*, unsigned int);

extern char data_020f0b64;

// USA: func_020709ec
extern "C" ARM void func_020709ec(void* arg0, void* arg1) {
    unsigned int var0;
    BackgroundLoader::AddLockGlobal();
    void* var1 = LoadFileIntoMemory(&data_020f0b64, data_0211e33c, &var0);
    func_02070a30(static_cast<Struct_020709ec*>(arg0),
                           static_cast<SafeAllocator*>(arg1), var1, var0);
    BackgroundLoader::RemoveLockGlobal();
}
