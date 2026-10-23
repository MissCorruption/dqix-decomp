#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

int LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_0211e33c;
extern char data_020ef418;

struct Struct_020fdc40_7 {
    int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};
extern struct Struct_020fdc40_7 data_020fdc40;

// USA: func_0201f040
extern "C" ARM void func_0201f040(void* arg0, void* arg1, struct Struct_02013fb4* arg2, unsigned int arg3) {
    unsigned int var0 = arg3;
    int var1 = 0;
    struct Struct_02013fb4* var2 = arg2;
    char var3[0x430];

    if (var2 == NULL) {
        int var4;
        BackgroundLoader::AddLockGlobal();
        var4 = var1;
        var1 = 1;
        var2 = (struct Struct_02013fb4*)LoadFileIntoMemory((const char*)var4, &data_0211e33c, &var0);
    }
    if (var2 != NULL) {
        data_020fdc40.unknown_4_ = arg1;
        data_020fdc40.unknown_8_ = arg0;
        ((Script*)((struct Struct_0201f040*)var3))->Initialize();
        ((Script*)var3)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020ef418);
        ((Script*)((struct Struct_0201f040_2*)var3))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var3))->Execute();
        data_020fdc40.unknown_8_ = 0;
        data_020fdc40.unknown_4_ = 0;
    }
    if (var1) {
        BackgroundLoader::RemoveLockGlobal();
    }
}
