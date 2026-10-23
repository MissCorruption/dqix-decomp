#include <globaldefs.h>
#if defined(jpn)
#define data_020f15d4 data_020f173c
#define data_020f15c4 data_020f172c
#endif
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f15d4[];
extern char data_0211e33c[];
extern char data_020f15c4[];

// USA: func_02099f6c
extern "C" ARM void func_02099f6c(char* arg0) {
    int var0;
    char var1[0x430];

    memset(arg0, 0, 0x150);
    BackgroundLoader::AddLockGlobal();

    struct Struct_02013fb4* var2 = (struct Struct_02013fb4*)LoadFileIntoMemory(data_020f15d4, data_0211e33c, (unsigned int*)&var0);
    if (var2 != 0) {
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f15c4);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
