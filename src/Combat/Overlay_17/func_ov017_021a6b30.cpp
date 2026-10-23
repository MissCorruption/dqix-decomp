#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020bb740(int* arg0);
extern "C" void func_020bb92c(int* arg0);
extern "C" void func_020a0c0c(void);

extern int data_02114e20;

struct Struct_ov017_021a6b30 {
    char unknown_0_[0x10];
    SafeAllocator unknown_10_;
};

// USA: func_ov017_021a6b30
extern "C" ARM void func_ov017_021a6b30(struct Struct_ov017_021a6b30* arg0) {
    func_02057f00(func_02057924(arg0), 0xc);

    void* var0 = arg0->unknown_10_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_10_.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, var0);
    }

    func_020bb740((int*)((char*)arg0 + 0x24));
    func_020bb92c((int*)((char*)arg0 + 0x4c));
    func_020a0c0c();
}
