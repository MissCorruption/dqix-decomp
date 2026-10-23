#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193fa0 data_ov015_02194ae0
#define data_ov015_02193fc8 data_ov015_02194b08
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_0201f040 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    char unknown_2c_[0x400];
    unsigned char unknown_42c_;
};

struct Struct_02013fb4;
struct Struct_0201f040_2;

struct Struct_0201f040_3;

extern "C" void func_ov015_0218b828();
void* LoadFileIntoMemory(const char* path, void* buf, unsigned int* outLen);

extern int data_0211e33c;
extern int data_ov015_02193fc8;
extern void* data_ov015_02194560;
extern int data_ov015_02193fa0;

// USA: func_ov015_0218ba44
extern "C" ARM void func_ov015_0218ba44(void* arg0, const char* arg1) {
    func_ov015_0218b828();
    BackgroundLoader::AddLockGlobal();

    unsigned int var0;
    void* var1;
    if (arg1 != 0) {
        var1 = LoadFileIntoMemory(arg1, &data_0211e33c, &var0);
    } else {
        var1 = LoadFileIntoMemory((const char*)&data_ov015_02193fc8, &data_0211e33c, &var0);
    }

    if (var1 != 0) {
        data_ov015_02194560 = arg0;

        struct Struct_0201f040 var2;
        ((Script*)&var2)->Initialize();
        ((Script*)&var2)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov015_02193fa0);
        ((Script*)((struct Struct_0201f040_2*)&var2))->Load((struct Struct_02013fb4*)var1, var0);
        ((Script*)((struct Struct_0201f040_3*)&var2))->Execute();
    }

    BackgroundLoader::RemoveLockGlobal();
}
