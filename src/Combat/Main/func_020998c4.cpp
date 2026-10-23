#include <globaldefs.h>
#if defined(jpn)
#define data_020f155c data_020f16c4
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

struct Struct_020995c0;
extern struct Struct_020995c0* data_02109924;

extern char data_020f155c[];
extern char data_0211e33c[];
extern char data_020f1524[];

// USA: func_020998c4
extern "C" ARM void func_020998c4(struct Struct_020995c0* arg0) {
    int var0;
    char var1[0x430];

    BackgroundLoader::AddLockGlobal();

    struct Struct_02013fb4* var2 = (struct Struct_02013fb4*)LoadFileIntoMemory(data_020f155c, data_0211e33c, (unsigned int*)&var0);
    if (var2 != 0) {
        data_02109924 = arg0;
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1524);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
        data_02109924 = 0;
    }
    BackgroundLoader::RemoveLockGlobal();
}
