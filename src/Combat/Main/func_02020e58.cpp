#include <globaldefs.h>
#include "Combat/MapDisplay.h"
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;

struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8* arg0);

extern "C" void func_0204b11c(unsigned char* arg0, int arg1);

extern "C" void func_0204b5b4(void*, int);

struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);

extern "C" void func_0204b2e0(void* arg0, char* arg1);

struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(Struct_02020cb8_6* arg0, char* arg1);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);

struct Struct_02020cb8_3;
extern "C" void func_0204afb4(Struct_02020cb8_3* arg0);

// USA: func_02020e58
extern "C" ARM void func_02020e58(void* arg0, Type_02020aec arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    void* var1 = 0;
    unsigned int var2 = 0;
    int var3 = var0->GetTaskStatus(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
);
    if (var3 == -1) {
        *(unsigned int*)0x04001000 = (*(unsigned int*)0x04001000 & ~0x1f00) | 0x200;
        ((Struct_02020554*)arg0)->unknown_768_ = 0;
    } else {
        void* var4;
        void* var5[3];
        int var6[3];
        Struct_02020cb8 var7;

        var0->GetLoadedFileByID(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
, &var1, &var2);
        int var8 = func_02046900((Struct_02020cb8_4*)var1);
        for (int var9 = 0; var9 < var8; var9++) {
            var5[var9] = func_020467f0((Struct_02020aec*)var1, var9, &var4, &var6[var9]);
        }
        func_0204af64((Struct_02020cb8*)&var7);
        var7.unknown_1c_0_ = 1;
        var7.unknown_1c_4_ = 0;
        func_0204b5b4(&var7, 2);
        func_0204b11c((unsigned char*)&var7, 0);
        func_0204b5e8((Struct_02020cb8_5*)&var7, 0, 0);
        for (int var10 = 0; var10 < var8; var10++) {
            func_0204b2e0(&var7, (char*)var5[var10]);
            func_0204b3a0((Struct_02020cb8_6*)&var7, (char*)var5[var10]);
        }
        func_0204b0e8((Struct_02020cb8_2*)&var7, 0);
        func_0204afb4((Struct_02020cb8_3*)&var7);
        ((Struct_02020554*)arg0)->unknown_55c_ = 1;
    }
    BackgroundLoader* var11 = BackgroundLoader::GetInstance();
    var11->RemoveTask(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
);
#if !defined(jpn)
    *arg1 = -1;
#endif
}
