#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f1668[];
extern char data_0211e33c[];
extern char data_020f1640[];

struct Struct_0201099c_18 { void* unknown_0_; };
extern struct Struct_0201099c_18* data_02109ba8;

// USA: func_0209a810
extern "C" ARM void func_0209a810(struct Struct_0201099c_18* arg0, void* arg1) {
    unsigned int var0;
    char var1[0x430];

    BackgroundLoader::AddLockGlobal();

    if (LoadFileIntoMemory(data_020f1668, data_0211e33c, &var0) != NULL) {
        arg0->unknown_0_ = arg1;
        memset(arg1, 0, 0x550);
        data_02109ba8 = arg0;
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1640);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load((struct Struct_02013fb4*)data_0211e33c, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
        data_02109ba8 = NULL;
    }
    BackgroundLoader::RemoveLockGlobal();
}
