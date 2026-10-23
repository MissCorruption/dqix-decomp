#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

extern "C" int func_ov011_021849d8(void* arg0);

struct Struct_020534ac_2;

struct Struct_020534ac;

extern "C" char* func_020467c0(void* arg0, char* arg1, unsigned int* arg2);

extern "C" void func_ov023_021fd120(void* arg0, void* arg1, void* arg2, unsigned int arg3);

struct Struct_ov023_021fd03c {
    char unknown_0_[0x10];
    char* unknown_10_;
    char unknown_14_[0x1c - 0x14];
    int unknown_1c_;
};

// USA: func_ov023_021fd03c
extern "C" ARM void func_ov023_021fd03c(struct Struct_ov023_021fd03c* arg0, void* arg1) {
    void* var0 = (void*)(int)BackgroundLoader::GetInstance();
    int var1 = func_ov011_021849d8(arg1);
    if (var1 < 0) {
        return;
    }
    if (!((BackgroundLoader*)(var0))->GetTaskStatus((int)(var1))) {
        return;
    }
    if (((BackgroundLoader*)((struct Struct_020534ac_2*)var0))->GetDetailedTaskStatus((int)(var1)) != 2) {
        return;
    }

    int var2, var3;
    ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(var1), (void**)(&var2), (unsigned int*)(&var3));

    void* var4;
    unsigned int var5;
    if (GetFileInNarc((void*)var2, arg0->unknown_10_, (const void**)&var4, &var5, 0)) {
        func_ov023_021fd120(arg0, arg1, var4, var5);
        arg0->unknown_1c_ = 2;
        return;
    }

    var4 = func_020467c0((void*)var2, arg0->unknown_10_, &var5);
    if (var4 == NULL) {
        return;
    }

    func_ov023_021fd120(arg0, arg1, var4, var5);
    arg0->unknown_1c_ = 2;
}
