#include <globaldefs.h>
#if defined(jpn)
#define data_020f1b14 data_020f1c8c
#define data_020f1b04 data_020f1c7c
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

int LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f1b14;
extern char data_0211e33c;
extern char data_020f1b04;

// USA: func_020a6194
extern "C" ARM void func_020a6194(void*) {
    int var0;
    char var1[0x430];
    int var2;

    BackgroundLoader::AddLockGlobal();
    var0 = 0;
    var2 = LoadFileIntoMemory(&data_020f1b14, &data_0211e33c, (unsigned int*)&var0);
    if (var2 != 0) {
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1b04);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load((struct Struct_02013fb4*)var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
