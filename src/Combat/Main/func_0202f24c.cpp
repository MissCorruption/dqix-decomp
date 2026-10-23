#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Filesystem/NarcHandle.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
void* LoadFileIntoMemory(const char*, void*, unsigned int*);
extern "C" void func_0202f310(char*, void*, void*);

extern AllocatorUnion data_02114e20;
extern char data_020ef7ac[];
extern char data_0211e33c[];
extern char data_020ef7c0[];

struct Struct_0202f24c {
    char unknown_0_[0x444];
    class SafeAllocator* unknown_444_;
};

// USA: func_0202f24c
extern "C" ARM void func_0202f24c(struct Struct_0202f24c* arg0) {
    if (arg0->unknown_444_ == 0) {
        arg0->unknown_444_ = (class SafeAllocator*)func_02012d88(&data_02114e20, 0x14);
        arg0->unknown_444_->ResetAllocatorPointer();
        void* var0 = func_02012d88(&data_02114e20, 0xf08);
        arg0->unknown_444_->CreateTypeA(var0, 0xf08);
        arg0->unknown_444_->Reset();
    } else {
        arg0->unknown_444_->Reset();
    }
    BackgroundLoader::AddLockGlobal();

    unsigned int var1;
    void* var2 = LoadFileIntoMemory(data_020ef7ac, data_0211e33c, &var1);
    if (var2 != 0) {
        NarcHandle var3;
        if (var3.Initialize(data_020ef7c0, (const unsigned char*)var2)) {
            func_0202f310((char*)arg0, arg0->unknown_444_, var2);
            var3.Destroy();
        }
    }
    BackgroundLoader::RemoveLockGlobal();
}
