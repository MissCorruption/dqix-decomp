#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


int LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);

struct Struct_02013fb4;
struct Struct_02071488;
extern "C" int func_02071488(struct Struct_02013fb4* arg0, int arg1, int arg2, struct Struct_02071488* arg3);

extern char data_020f0c24;
extern char data_020f0c45;
extern char data_020f0c5e;
extern char data_0211e33c;

// USA: func_02071574
extern "C" ARM struct Struct_02071488* func_02071574(unsigned int arg0, struct Struct_02071488* arg1) {
    unsigned int var0;

    BackgroundLoader::AddLockGlobal();

    if (arg0 >= 0x5208 && arg0 < 0x9c40) {
        if (LoadFileIntoMemory(&data_020f0c24, &data_0211e33c, &var0) &&
            func_02071488((struct Struct_02013fb4*)&data_0211e33c, var0, arg0, arg1)) {
            BackgroundLoader::RemoveLockGlobal();
            return arg1;
        }
    } else if (arg0 >= 0x9c40) {
        if (LoadFileIntoMemory(&data_020f0c45, &data_0211e33c, &var0) &&
            func_02071488((struct Struct_02013fb4*)&data_0211e33c, var0, arg0, arg1)) {
            BackgroundLoader::RemoveLockGlobal();
            return arg1;
        }
    } else {
        if (LoadFileIntoMemory(&data_020f0c5e, &data_0211e33c, &var0) &&
            func_02071488((struct Struct_02013fb4*)&data_0211e33c, var0, arg0, arg1)) {
            BackgroundLoader::RemoveLockGlobal();
            return arg1;
        }
    }

    BackgroundLoader::RemoveLockGlobal();
    return NULL;
}
