#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021d612c(void* arg0);
struct Struct_ov001_0215e1cc;
extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
extern "C" void func_ov001_021537b0(void* arg0, int arg1, int arg2, int arg3);

extern const char data_ov001_02165745[];

struct Struct_ov001_021658b8_7 {
    int unknown_0_;
    char unknown_4_[0x8c - 0x4];
    unsigned char unknown_8c_;
};
extern Struct_ov001_021658b8_7 data_ov001_021658b8;
extern int data_ov001_021658d8;

// USA: func_ov001_0215e1cc
extern "C" ARM int func_ov001_0215e1cc(void* arg0) {
    char var0[0x28];
    int var1;
    int var2;
    int var3;

    sprintf(var0, data_ov001_02165745, func_ov017_021d612c(arg0));
    var3 = 0;
    ((BackgroundLoader*)((Struct_ov001_0215e1cc*)(int)BackgroundLoader::GetInstance()))->GetLoadedFileByName((const char*)(var0), (void**)(&var1), (unsigned int*)(&var2));
    if (var1 == 0) {
        BackgroundLoader::AddLockGlobal();
        var3 = 1;
        if (func_ov001_0215a750(var0, (void**)&var1) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return 0;
        }
    }
    func_ov001_021537b0(&data_ov001_021658d8, data_ov001_021658b8.unknown_0_, var1, var2);
    if (var3 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    data_ov001_021658b8.unknown_8c_ = 0;
    return 1;
}
