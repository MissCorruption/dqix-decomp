#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_0211e33c[];
extern int data_020f0cc8;

struct Struct_02108db0_3 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    void* unknown_10_;
};
extern struct Struct_02108db0_3 data_02108db0;

// USA: func_020727f8
extern "C" ARM void func_020727f8(void* arg0, const char* arg1, int arg2, void* arg3, unsigned char arg4) {
    unsigned int var0;
    char var1[0x430];

    BackgroundLoader::AddLockGlobal();

    struct Struct_02013fb4* var2 = (struct Struct_02013fb4*)LoadFileIntoMemory(arg1, data_0211e33c, &var0);
    if (var2 != 0) {
        data_02108db0.unknown_10_ = arg0;
        data_02108db0.unknown_c_ = 0;
        data_02108db0.unknown_8_ = &arg2;
        data_02108db0.unknown_2_ = 1;
        data_02108db0.unknown_4_ = arg3;
        data_02108db0.unknown_0_ = arg4;

        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0cc8);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(var2, var0);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
