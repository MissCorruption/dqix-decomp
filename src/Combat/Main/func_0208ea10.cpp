#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

#if defined(jpn)
enum { Enum_0208ea10_23770 = 0x5a7a, Enum_0208ea10_23772 = 0x5a7c };
#else
enum { Enum_0208ea10_23770 = 0x5cda, Enum_0208ea10_23772 = 0x5cdc };
#endif

struct Struct_0208e9f4;
extern "C" void func_0208e9f4(struct Struct_0208e9f4*);

extern "C" void func_020120d4(unsigned char* arg0, unsigned char arg1);
extern "C" void func_0208ec04(struct Struct_0208e9f4*);
extern "C" void* func_0208e0a8(void);
extern "C" int rand(void);

struct Struct_0208ea10_2;

extern "C" void __clear(void*, int);
extern "C" int sprintf(char*, const char*, ...);

extern int data_020f1308;
extern char data_020f1330[];
extern char data_020f134a[];
extern char data_020f1356[];

struct Struct_0208ea10_3 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 4;
    unsigned int unknown_1_5_ : 4;
    unsigned int unknown_2_1_ : 8;
    unsigned int unknown_3_1_ : 4;
    unsigned int unknown_3_5_ : 2;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_0208ea10 {
    union {
        unsigned int unknown_0_;
        struct Struct_0208ea10_3 unknown1_0_;
    } unknown_0_;
};

// USA: func_0208ea10
extern "C" ARM void func_0208ea10(void* arg0, int arg1) {
    char var0[0x430];
    char var1[0x430];
    char var2[0x40];
    unsigned int var3;
    unsigned int var4;
    const void* var5;

    unsigned char* var6 = (unsigned char*)GameState::GetInstance();

    if (var6[Enum_0208ea10_23770] == 8) {
        func_0208e9f4((struct Struct_0208e9f4*)arg0);
        func_020120d4(var6, rand() % 8);
    } else {
        func_0208ec04((struct Struct_0208e9f4*)arg0);
        return;
    }

    BackgroundLoader::AddLockGlobal();
    __clear(var2, 0x40);
    var3 = 0;

    if (LoadFileIntoMemory(data_020f1330, data_0211e33c, &var3) != 0) {
        if (GetFileInNarc(data_0211e33c, data_020f134a, &var5, &var4, 0) != 0) {
            ((Script*)((struct Struct_0208ea10_2*)var0))->Initialize();
            ((Script*)((struct Struct_0208ea10_2*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1308);
            ((Script*)((struct Struct_0208ea10_2*)var0))->Load(var5, var4);
            ((Script*)((struct Struct_0208ea10_2*)var0))->Execute();
            ((unsigned char*)func_0208e0a8())[0xa] = 1;
        }

        int var7;
        for (var7 = 1; var7 <= 0x3f; var7++) {
            sprintf(var2, data_020f1356, var7);
            var3 = 0;
            if (GetFileInNarc(data_0211e33c, var2, &var5, &var4, 0) != 0) {
                ((Script*)((struct Struct_0208ea10_2*)var1))->Initialize();
                ((Script*)((struct Struct_0208ea10_2*)var1))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1308);
                ((Script*)((struct Struct_0208ea10_2*)var1))->Load(var5, var4);
                ((Script*)((struct Struct_0208ea10_2*)var1))->Execute();
            }
        }

        int var8;
        for (var8 = 0; var8 < 2; var8++) {
            struct Struct_0208ea10* var9 = &((struct Struct_0208ea10*)(var6 + Enum_0208ea10_23772))[var8 + 0x62];
            var9->unknown_0_.unknown1_0_.unknown_3_7_ = 1;
            var9->unknown_0_.unknown1_0_.unknown_3_1_ = 2;
            var9->unknown_0_.unknown1_0_.unknown_1_1_ = 1;
            var9->unknown_0_.unknown1_0_.unknown_1_5_ = 1;
            var9->unknown_0_.unknown1_0_.unknown_3_5_ = 1;
            var9->unknown_0_.unknown1_0_.unknown_0_0_ = 0;
            var9->unknown_0_.unknown_0_ &= 0xfe01ffff;
        }
    }

    BackgroundLoader::RemoveLockGlobal();
}
