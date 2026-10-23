#include <globaldefs.h>
#if defined(jpn)
#define data_020f1917 data_020f1a7f
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

struct Struct_02109d94_2 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
};
extern struct Struct_02109d94_2 data_02109d94;

extern int data_020f1917;
extern int data_020f192c;
extern int data_020f18ec;

// USA: func_020a13e4
extern "C" ARM void func_020a13e4(void* arg0, void* arg1, int arg2, unsigned short arg3, unsigned char arg4) {
    if (arg1 != 0) {
        int var0;
        void* var1;
        data_02109d94.unknown_4_ = arg0;
        data_02109d94.unknown_8_ = arg1;
        data_02109d94.unknown_c_ = arg2;
        data_02109d94.unknown_2_ = arg3;
        data_02109d94.unknown_0_ = arg4;
        BackgroundLoader::AddLockGlobal();
        var0 = 0;
        #if defined(jpn)
        var1 = LoadFileIntoMemory((const char*)&data_020f1917, data_0211e33c, (unsigned int*)&var0);
#else
        var1 = ExtractFileFromGP2((const char*)&data_020f1917, (const char*)&data_020f192c, (unsigned int*)&var0);
#endif
        if (var1 != 0) {
            struct Struct_0201f040 var2;
            ((Script*)&var2)->Initialize();
            ((Script*)&var2)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f18ec);
            ((Script*)((struct Struct_0201f040_2*)&var2))->Load((struct Struct_02013fb4*)var1, var0);
            ((Script*)((struct Struct_0201f040_3*)&var2))->Execute();
        }
        BackgroundLoader::RemoveLockGlobal();
    }
}
