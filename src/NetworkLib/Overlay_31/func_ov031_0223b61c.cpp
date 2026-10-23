#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_ov031_0223b61c { unsigned char unknown_0_[0x84]; void* unknown_84_; };
struct Struct_ov031_02290d24_3 { Struct_ov031_0223b61c* unknown_0_; };
extern struct Struct_ov031_02290d24_3 data_ov031_02290d24;

extern "C" void func_ov031_0223bfa0(void*);
extern "C" void func_020c9be0(void);
extern "C" int func_ov031_0223b744(char*, char*, int);
extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void func_020ca7e8(void*, void*);
extern "C" unsigned int func_ov031_0223cf70(void** arg0);
extern char data_ov031_0224c56c[];

// USA: func_ov031_0223b61c
extern "C" ARM void* func_ov031_0223b61c(char* arg0, unsigned int* arg1, int arg2) {
    func_ov031_0223bfa0(data_ov031_02290d24.unknown_0_->unknown_84_);

    NitroVM var0;
    NitroVM_Initialize(&var0);
    if (!NitroVM_PrepareReadFileByPath(&var0, arg0))
        func_020c9be0();

    unsigned int var1 = var0.fileInfo.unknown_8_ - var0.fileInfo.unknown_4_;
    if (arg1) *arg1 = var1;

    int var2 = func_ov031_0223b744(arg0, data_ov031_0224c56c, 2) ? -4 : arg2;

    void* var3 = func_ov031_0223cf4c(var1, var2);
    NitroVM_ReadSync(&var0, var3, var1);
    NitroVM_FinishRead(&var0);

    if (var2 > 0) {
        return var3;
    }

    unsigned int var4 = *(unsigned int*)var3 >> 8;
    if (arg1) *arg1 = var4;
    void* var5 = func_ov031_0223cf4c(var4, arg2);
    func_020ca7e8(var3, var5);
    func_ov031_0223cf70(&var3);
    return var5;
}
