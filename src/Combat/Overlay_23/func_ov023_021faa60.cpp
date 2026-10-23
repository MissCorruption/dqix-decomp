#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

extern "C" int func_ov011_021849d8(void* arg0);

extern "C" char* func_020467c0(void* arg0, char* arg1, unsigned int* arg2);

extern "C" void func_ov023_021fab48(void* arg0, void* arg1, const void* arg2, int arg3);

struct Struct_ov023_021faa60 {
    char unknown_0_[0x10];
    char* unknown_10_;
    char unknown_14_[0x1c - 0x14];
    int unknown_1c_;
};

// USA: func_ov023_021faa60
extern "C" ARM void func_ov023_021faa60(struct Struct_ov023_021faa60* arg0, void* arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = func_ov011_021849d8(arg1);
    if (var1 < 0) {
        return;
    }
    if (!var0->GetTaskStatus(var1)) {
        return;
    }
    if (var0->GetDetailedTaskStatus(var1) != BackgroundLoader::TaskStatus_Complete) {
        return;
    }

    void* var2;
    unsigned int var3;
    var0->GetLoadedFileByID(var1, &var2, &var3);

    const void* var4;
    unsigned int var5;
    if (GetFileInNarc(var2, arg0->unknown_10_, &var4, &var5, 0)) {
        func_ov023_021fab48(arg0, arg1, var2, var3);
        arg0->unknown_1c_ = 2;
        return;
    }

    var4 = func_020467c0(var2, arg0->unknown_10_, &var5);
    if (var4 == NULL) {
        return;
    }

    func_ov023_021fab48(arg0, arg1, var2, var3);
    arg0->unknown_1c_ = 2;
}
