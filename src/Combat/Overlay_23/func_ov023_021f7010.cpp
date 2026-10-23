#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov011_021849c8(int arg0);
extern "C" int func_ov023_021f6bb8(int arg0);
extern "C" void func_ov023_021f6bb0(int arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern char data_ov023_021fe4e0;

struct Struct_ov023_021f7010 {
    char unknown_0_[0x10];
    int unknown_10_;
    char unknown_14_[0x1c - 0x14];
    int unknown_1c_;
};

// USA: func_ov023_021f7010
extern "C" ARM int func_ov023_021f7010(Struct_ov023_021f7010* arg0, int arg1) {
    char var0[0x50];
    int var1 = func_ov011_021849c8(arg1);
    int var2 = func_ov023_021f6bb8(var1);
    if (var2 >= 0) {
        return arg0->unknown_1c_;
    }
    int var3 = (int)BackgroundLoader::GetInstance();
    sprintf(var0, &data_ov023_021fe4e0, arg0->unknown_10_);
    int var4 = ((BackgroundLoader*)(var3))->QueueLoadFile((const char*)((int)var0), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var1, var4);
    return 1;
}
