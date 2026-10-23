#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov011_021849d8(void* arg0);

struct Struct_020534ac_2;

struct Struct_020534ac;

extern "C" char* func_020467c0(void* arg0, char* arg1, unsigned int* arg2);
extern "C" void func_ov023_021f7aac(void* arg0, void* arg1, char* arg2, unsigned int arg3);

struct Struct_ov023_021f745c {
    char unknown_0_[0x10];
    char* unknown_10_;
};

// USA: func_ov023_021f7a08
extern "C" ARM void func_ov023_021f7a08(struct Struct_ov023_021f745c* arg0, void* arg1) {
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
    if (var2 == 0 || var3 == 0) {
        return;
    }

    unsigned int var4;
    char* var5 = func_020467c0((void*)var2, arg0->unknown_10_, &var4);
    if (var5 == NULL) {
        return;
    }

    func_ov023_021f7aac(arg0, arg1, var5, var4);
}
