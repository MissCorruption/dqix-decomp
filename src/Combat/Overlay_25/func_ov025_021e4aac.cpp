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

extern int data_ov025_021ef988;
extern char data_ov025_021eefa0[];

struct Struct_ov025_021e4aac_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[3];
    char* unknown_c_;
};

#if defined(jpn)
enum { Enum_ov025_021e4aac_12 = 0x4 };
#else
enum { Enum_ov025_021e4aac_12 = 0xc };
#endif

// USA: func_ov025_021e4aac
extern "C" ARM int func_ov025_021e4aac(struct Struct_ov025_021e4aac_2* arg0, int arg1, int arg2, void* arg3) {
    GameState::GetInstance();
    int var0 = (int)BackgroundLoader::GetInstance();
    func_ov025_021e8a54(*(char**)((char*)&data_ov025_021ef988 + Enum_ov025_021e4aac_12));

    char var1[0x50];
    int var2 = 0x50;
    unsigned char* var3 = (unsigned char*)var1;
    unsigned char* var4 = (unsigned char*)data_ov025_021eefa0;
    do {
        *var3 = *var4;
        var3++;
        var4++;
    } while (--var2);
    strcat(var1, arg0->unknown_c_);

    char var5[0x50];
    char var6[0x50];
    int var7 = 0;
    int var8;
    int var9;
    if (func_ov025_021e24d0(var1, var5, var6)) {
        var9 = ((BackgroundLoader*)((struct Struct_ov025_021e4aac*)var0))->GetLoadedFileInArchive((const char*)(var5), (const char*)(var6), (void**)(&var7), (unsigned int*)(&var8));
    } else {
        var9 = ((BackgroundLoader*)((struct Struct_ov001_0215e1cc*)var0))->GetLoadedFileByName((const char*)(var1), (void**)(&var7), (unsigned int*)(&var8));
    }

    if (var7 != 0) {
        int var10[8];
        int var11 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var10[0]);
        if (var11 > 0) {
            for (int var12 = 0; var12 < var11; var12++) {
                func_ov025_021e267c(var10[var12], var7, var8, 0);
            }
        }
    }

    ((BackgroundLoader*)(var0))->RemoveTask((int)(var9));
    func_ov025_021eb084((struct Struct_ov025_021e27c8*)(*(char**)((char*)&data_ov025_021ef988 + Enum_ov025_021e4aac_12)), var9);
    return 1;
}
