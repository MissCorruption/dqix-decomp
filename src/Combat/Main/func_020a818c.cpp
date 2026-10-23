#include <globaldefs.h>
#if defined(jpn)
#define data_020f1b97 data_020f1d0f
#define data_020f1b6c data_020f1ce4
#endif
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

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

#if defined(jpn)
void* LoadFileIntoMemory(const char*, void*, unsigned int*);
extern char data_0211e33c[];
#else
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);
#endif

struct Struct_02109fe0_3 { void* unknown_0_; void* unknown_4_; };
extern struct Struct_02109fe0_3 data_02109fe0;

extern int data_020f1b97;
extern int data_020f1baa;
extern int data_020f1b6c;

// USA: func_020a818c
extern "C" ARM void func_020a818c(void* arg0, void* arg1) {
    BackgroundLoader::AddLockGlobal();
    int var0 = 0;
    #if defined(jpn)
    void* var1 = LoadFileIntoMemory((const char*)&data_020f1b97, data_0211e33c, (unsigned int*)&var0);
#else
    void* var1 = ExtractFileFromGP2((const char*)&data_020f1b97, (const char*)&data_020f1baa, (unsigned int*)&var0);
#endif
    if (var1 != 0) {
        struct Struct_0201f040 var2;
        data_02109fe0.unknown_0_ = arg1;
        data_02109fe0.unknown_4_ = arg0;
        ((Script*)&var2)->Initialize();
        ((Script*)&var2)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1b6c);
        ((Script*)((struct Struct_0201f040_2*)&var2))->Load((struct Struct_02013fb4*)var1, var0);
        ((Script*)((struct Struct_0201f040_3*)&var2))->Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
