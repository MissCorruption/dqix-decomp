#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

struct Struct_ov016_0218b5c4_4 {
    char unknown_0_[8];
    int unknown_8_;
};
extern struct Struct_ov016_0218b5c4_4* data_ov016_0219d1bc;
extern char data_ov016_0219d054[];
extern char data_0211e33c[];
extern char data_ov016_0219d044[];

// USA: func_ov016_0218e098
extern "C" ARM void func_ov016_0218e098(struct Struct_ov016_0218b5c4_4* arg0, int arg1) {
    unsigned int var0;
    char var1[0x430];

    arg0->unknown_8_ = arg1;
    data_ov016_0219d1bc = arg0;
    BackgroundLoader::AddLockGlobal();

    struct Struct_02013fb4* var2 = (struct Struct_02013fb4*)LoadFileIntoMemory(data_ov016_0219d054, data_0211e33c, &var0);
    if (var2 != 0) {
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_ov016_0219d044);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
    arg0->unknown_8_ = 0;
}
