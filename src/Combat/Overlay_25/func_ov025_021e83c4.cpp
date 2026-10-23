#if defined(jpn)
enum { Enum_ov025_021e83c4_336 = 0x144, Enum_ov025_021e83c4_12 = 0x4 };
#else
enum { Enum_ov025_021e83c4_336 = 0x150, Enum_ov025_021e83c4_12 = 0xc };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void* func_ov025_021e8a54(char* arg0);
extern "C" int func_ov025_021e24d0(char* arg0, char* arg1, char* arg2);

struct Struct_ov025_021e4aac;
struct Struct_ov001_0215e1cc;
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov025_021e267c(int arg0, int arg1, int arg2, int arg3);
struct Struct_ov025_021e27c8;
extern "C" void func_ov025_021eb084(struct Struct_ov025_021e27c8* arg0, int arg1);

struct Struct_ov025_021ef988_37 { char unknown_0_[Enum_ov025_021e83c4_12]; void* unknown_c_; };
extern struct Struct_ov025_021ef988_37 data_ov025_021ef988;
extern char data_ov025_021ef87f;

struct Struct_ov025_021e83c4_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

struct Struct_ov025_021e83c4_3 { char unknown_0_[0x10]; void* unknown_10_; };

struct Struct_ov025_021e83c4 { char unknown_0_[0x49c]; unsigned char unknown_49c_0_ : 1; };

// USA: func_ov025_021e83c4
extern "C" ARM int func_ov025_021e83c4(struct Struct_ov025_021e83c4_2* arg0, struct Struct_ov025_021e83c4_3* arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (int)BackgroundLoader::GetInstance();
    func_ov025_021e8a54((char*)data_ov025_021ef988.unknown_c_);

    int var2 = *(unsigned short*)((char*)arg1->unknown_10_ + 0x20);
    GameObject* var3 = func_0200ff1c(var0, var2);
    struct Struct_ov025_021e83c4* var4 = *(struct Struct_ov025_021e83c4**)((char*)var3 + Enum_ov025_021e83c4_336);
    char var5 = 'm';
    if (var4->unknown_49c_0_ == 1) {
        var5 = 'w';
    }

    char var6[0x50];
    sprintf(var6, &data_ov025_021ef87f, var5);

    char var7[0x50];
    char var8[0x50];
    int var9 = 0;
    int var10;
    int var11;
    if (func_ov025_021e24d0(var6, var7, var8)) {
        var11 = ((BackgroundLoader*)((struct Struct_ov025_021e4aac*)var1))->GetLoadedFileInArchive((const char*)(var7), (const char*)(var8), (void**)(&var9), (unsigned int*)(&var10));
    } else {
        var11 = ((BackgroundLoader*)((struct Struct_ov001_0215e1cc*)var1))->GetLoadedFileByName((const char*)(var6), (void**)(&var9), (unsigned int*)(&var10));
    }

    if (var9 != 0) {
        int var12[8];
        int var13 = func_ov000_021820bc(arg3, (int)arg1, arg0->unknown_8_, (int)&var12[0]);
        if (var13 > 0) {
            for (int var14 = 0; var14 < var13; var14++) {
                func_ov025_021e267c(var12[var14], var9, var10, 0);
            }
        }
    }

    ((BackgroundLoader*)(var1))->RemoveTask((int)(var11));
    func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var11);
    return 1;
}
