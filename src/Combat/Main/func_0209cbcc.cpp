#include <globaldefs.h>
#if defined(jpn)
#define data_020f1744 data_020f18ac
#define data_020f1718 data_020f1880
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

int LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f1744;
extern char data_0211e33c;
extern char data_020f1718;

// USA: func_0209cbcc
extern "C" ARM void func_0209cbcc(void*) {
    int var0;
    char var1[0x430];

    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(&data_020f1744, &data_0211e33c, (unsigned int*)&var0) != 0) {
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1718);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load((struct Struct_02013fb4*)&data_0211e33c, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
