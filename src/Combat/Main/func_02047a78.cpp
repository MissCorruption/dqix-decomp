#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void func_0204719c(void* arg0, int arg1);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_02047b40(void* arg0, void* arg1, void* arg2);

extern "C" int func_020429d4(void);
void* LoadFileIntoMemory(const char* path, void* dst, unsigned int* outCount);

extern int data_020f0118;

struct Struct_02047a78 {
    char unknown_0_[0x84];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 7;
};

// USA: func_02047a78
extern "C" ARM void func_02047a78(struct Struct_02047a78* arg0, const char* arg1, void* arg2) {
    char var0[0x80];
    int var1;
    void* var2;

    if (arg1 == 0) {
        return;
    }
    var1 = arg0->unknown_84_0_;
    if (var1) {
        if (var1) {
            func_0204719c(arg0, var1);
        }
        arg0->unknown_84_0_ = 0;
    }
    if ((arg1 + strlen(arg1))[-1] != 'r') {
        return;
    }
    __clear(var0, 0x80);
    sprintf(var0, (const char*)&data_020f0118, arg1);
    var2 = (void*)func_020429d4();
    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(var0, var2, 0) != 0) {
        func_02047b40(arg0, var2, arg2);
    }
    BackgroundLoader::RemoveLockGlobal();
}
