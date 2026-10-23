#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02082fc4_2384 = 0x8b8 };
#else
enum { Enum_02082fc4_2384 = 0x950 };
#endif

#include "Combat/ResourceScriptEntry.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Filesystem/FileIO.h"

extern "C" void* func_0208247c(void* arg0);

extern "C" void func_02083cbc(void* arg0, void* arg1, void* arg2);
extern "C" void func_02083e28(void* arg0, int arg1);

extern char data_020f1019[];
extern unsigned char data_0211e33c[0x30000];
struct Struct_02082fc4 { unsigned int unknown_0_[5]; };
struct Struct_02082fc4_2 { unsigned char unknown_0_[0x18]; };
struct Struct_02082fc4_3 {
    Struct_02082fc4 unknown_0_;
    Struct_02082fc4 unknown_14_;
    Struct_02082fc4 unknown_28_;
    Struct_02082fc4_2 unknown_3c_;
};

// USA: func_02082fc4
extern "C" ARM void func_02082fc4(void* arg0, void* arg1) {
    char var0[0x18];
    sprintf(var0, data_020f1019, *(int*)((char*)arg0 + Enum_02082fc4_2384));
    BackgroundLoader::AddLockGlobal();
    unsigned int var1;
    void* var2 = LoadFileIntoMemory(var0, &data_0211e33c, &var1);
    if (var2 != NULL) {
        Struct_02082fc4_3 var3;
        func_0208247c(&var3);
        unsigned short var4 = *(unsigned short*)((char*)arg0 + *(int*)((char*)arg0 + Enum_02082fc4_2384) * 2 + 0x16c);
        func_02082490(&var3, var2, var1, var4, 0);
        func_02083cbc(arg0, &var3, &var3.unknown_3c_);
        func_02083e28(arg0, 0);
        if (arg1 != NULL) {
            Struct_02082fc4_3* var5 = (Struct_02082fc4_3*)arg1;
            var5->unknown_0_ = var3.unknown_0_;
            var5->unknown_14_ = var3.unknown_14_;
            var5->unknown_28_ = var3.unknown_28_;
            var5->unknown_3c_ = var3.unknown_3c_;
        }
    }
    BackgroundLoader::RemoveLockGlobal();
}
