#include <globaldefs.h>
#if defined(jpn)
#define data_020f15ac data_020f1714
#define data_020f1574 data_020f16dc
#endif
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f15ac[];
extern char data_0211e33c[];
extern char data_020f1574[];

// USA: func_02099cb8
extern "C" ARM void func_02099cb8(char* arg0) {
    int var0;
    char var1[0x430];

    memset(arg0, 0, 0x12c);
    BackgroundLoader::AddLockGlobal();

    struct Struct_02013fb4* var2 = (struct Struct_02013fb4*)LoadFileIntoMemory(data_020f15ac, data_0211e33c, (unsigned int*)&var0);
    if (var2 != 0) {
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1574);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
