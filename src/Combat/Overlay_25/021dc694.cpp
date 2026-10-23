#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov025_021dc694_680 = 0x224, Enum_ov025_021dc694_332 = 0x138, Enum_ov025_021dc694_668 = 0x218, Enum_ov025_021dc694_3756 = 0xe28, Enum_ov025_021dc694_22308 = 0x5914 };
#else
enum { Enum_ov025_021dc694_680 = 0x2a8, Enum_ov025_021dc694_332 = 0x14c, Enum_ov025_021dc694_668 = 0x29c, Enum_ov025_021dc694_3756 = 0xeac, Enum_ov025_021dc694_22308 = 0x5724 };
#endif

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" void* func_02079e2c(char* arg0, int arg1);
extern "C" void func_ov025_021e88d8(void* arg0);
extern "C" void func_ov025_021e8a40(char* arg0, int arg1, int arg2);
extern "C" void func_ov025_021e8a4c(char* arg0, int arg1);
extern "C" void func_ov025_021e8d20(void* arg0, int arg1);
extern "C" void func_ov025_021db8d8(void* arg0);
extern "C" void* func_ov000_02169a58(char* arg0, int arg1);

struct Struct_02013fb4;
extern "C" ARM void func_ov000_0216d1c4(int arg0, struct Struct_02013fb4* arg1, int arg2, int* arg3);

extern int data_ov025_021ef404;
extern char data_ov025_021ef454[];
extern "C" char _ZZ21inline_ov025_021dcf14vE1s[];

struct Struct_ov025_021dc694 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    char unknown_6_[0x18 - 0x8];
    unsigned int : 5;
    unsigned int unknown_16_5_ : 7;
};

// USA: func_ov025_021dc694
extern "C" ARM void func_ov025_021dc694(void* arg0) {
    char* var0 = (char*)arg0;
    void* var1 = func_ov000_02160f20(var0);
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();

    if (var2->GetTaskStatus(data_ov025_021ef404) == 0) {
        return;
    }

    void* var3 = 0;
    unsigned int var4 = 0;
    var2->GetLoadedFileByID(data_ov025_021ef404, &var3, &var4);

    Struct_02108e10* var5 = func_020797dc();
    struct Struct_ov025_021dc694* var6 = (struct Struct_ov025_021dc694*)func_02079e2c((char*)var5, *(short*)var1);

    if (var3 != 0 && var4 != 0 && var6 != 0) {
        char var7[0x50];
        sprintf(var7, data_ov025_021ef454, var6->unknown_4_0_);

        const void* var8 = 0;
        unsigned int var9 = 0;
        if (GetFileInNarc(var3, var7, &var8, &var9, 0)) {
            int var10 = 0;
            func_ov000_0216d1c4((int)(var0 + 0x30), (struct Struct_02013fb4*)var8, var9, &var10);
            if (var10 != 0) {
                func_ov025_021e88d8(var0 + Enum_ov025_021dc694_680);
                func_ov025_021e8a40(var0 + Enum_ov025_021dc694_680, (int)(var0 + 0x30), (int)(var0 + Enum_ov025_021dc694_332));
                func_ov025_021e8a4c(var0 + Enum_ov025_021dc694_680, *(int*)(var0 + Enum_ov025_021dc694_668));
                func_ov025_021e8d20(var0 + Enum_ov025_021dc694_680, var10);
                func_ov025_021db8d8(var0);
            }
        }
    }

    int var11 = *(int*)(var0 + Enum_ov025_021dc694_3756);
    if (var11 != 3 && var11 != 2 && var11 != 6) {
        int var12 = var6->unknown_16_5_;
        int var13 = var6->unknown_4_0_;
        if (var12 == 0xc) {
            var13 = 0x158;
        }
        char* var14 = *(char**)(var0 + Enum_ov025_021dc694_22308);
        int var15 = (int)func_ov000_02169a58(var14, var13);
        if (var15 != 0) {
            func_ov025_021e88d8(var0 + Enum_ov025_021dc694_680);
            func_ov025_021e8a40(var0 + Enum_ov025_021dc694_680, (int)(var0 + 0x30), (int)(var0 + Enum_ov025_021dc694_332));
            func_ov025_021e8a4c(var0 + Enum_ov025_021dc694_680, *(int*)(var0 + Enum_ov025_021dc694_668));
            func_ov025_021e8d20(var0 + Enum_ov025_021dc694_680, var15);
            func_ov025_021db8d8(var0);
        } else {
            *(int*)(var0 + Enum_ov025_021dc694_3756) = 5;
            *(int*)(_ZZ21inline_ov025_021dcf14vE1s + 0x10) = 0;
            *(int*)(_ZZ21inline_ov025_021dcf14vE1s + 8) = 0;
        }
    }

    var2->RemoveTask(data_ov025_021ef404);
    data_ov025_021ef404 = -1;
}
