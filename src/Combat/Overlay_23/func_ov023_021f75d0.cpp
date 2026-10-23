#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6bb8(void* arg0);
extern "C" void func_ov023_021f6bb0(void* arg0, int arg1);

extern char data_ov023_021fe5ec;

struct Struct_ov023_021f75d0 {
    char unknown_0_[0x10];
    char* unknown_10_;
    char unknown_14_[8];
    int unknown_1c_;
    char unknown_20_[4];
    char* unknown_24_;
};

// USA: func_ov023_021f75d0
#if defined(jpn)
extern char data_ov023_021fd8b8;

extern "C" ARM int func_ov023_021f75d0(struct Struct_ov023_021f75d0* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    if (arg0->unknown_10_ == 0) return 1;
    if (func_ov023_021f6bb8(var0) >= 0) {
        return arg0->unknown_1c_;
    }
    int var1 = (int)BackgroundLoader::GetInstance();
    char var2[0x50];
    sprintf(var2, &data_ov023_021fd8b8, arg0->unknown_10_);
    int var3 = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)((int)var2), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var0, var3);
    return 1;
}
#else
extern "C" ARM int func_ov023_021f75d0(struct Struct_ov023_021f75d0* arg0, void* arg1) {
    void* var4 = func_ov011_021849c8(arg1);
    if (arg0->unknown_10_ == 0) return 1;
    int var5 = func_ov023_021f6bb8(var4);
    if (var5 < 0) {
        int var6 = (int)BackgroundLoader::GetInstance();
        char var7[0x50];
        int var8;
        if (arg0->unknown_24_ != 0) {
            sprintf(var7, &data_ov023_021fe5ec, arg0->unknown_24_);
        } else {
            sprintf(var7, &data_ov023_021fe5ec, arg0->unknown_10_);
        }
        if (arg0->unknown_24_ != 0) {
            var8 = ((BackgroundLoader*)(var6))->QueueLoadFileInGP2((const char*)((int)var7), (const char*)((int)arg0->unknown_10_), (SafeAllocator*)(0));
        } else {
            var8 = ((BackgroundLoader*)(var6))->QueueLoadFile((const char*)((int)var7), (SafeAllocator*)(0));
        }
        func_ov023_021f6bb0(var4, var8);
        return 1;
    }
    return arg0->unknown_1c_;
}
#endif
