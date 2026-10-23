#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02000c9c_92 {
    char unknown_0_[0x70];
};

struct Struct_ov006_02157a60 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    SafeAllocator* unknown_c_;
#if defined(jpn)
    char unknown_8_[0x3b8 - 8];
#else
    char unknown_10_[0x3b8 - 0x10];
#endif
    Struct_02000c9c_92 unknown_3b8_;
    int unknown_428_;
};

extern "C" void func_02076080(Struct_02000c9c_92* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);

// USA: func_ov006_0215fecc
extern "C" ARM int func_ov006_0215fecc(Struct_ov006_02157a60* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (!var0->GetTaskStatus(arg0->unknown_428_))
        return 0;
    SafeAllocator* var1 = &arg0->unknown_c_[9];
    var1->Reset();
    void* var2 = NULL;
    unsigned int var3 = 0;
    var0->GetLoadedFileByID(arg0->unknown_428_, &var2, &var3);
    func_02076080(&arg0->unknown_3b8_, var1, var2, var3);
    var0->RemoveTask(arg0->unknown_428_);
    arg0->unknown_428_ = -1;
    return 1;
}
