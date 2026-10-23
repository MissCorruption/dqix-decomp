#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f6bb8(void*);
extern "C" void func_ov023_021f6bb0(void*, int);

extern char data_ov023_021ff480;
extern char data_ov023_021ff496;

struct Struct_ov023_021fc2b8 { char unknown_0_[0x1c]; int unknown_1c_; };

// USA: func_ov023_021fc2b8
#if defined(jpn)
extern char data_ov023_021fe718;

extern "C" ARM int func_ov023_021fc2b8(struct Struct_ov023_021fc2b8* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    int var1 = func_ov023_021f6bb8(var0);
    if (var1 >= 0) {
        return arg0->unknown_1c_;
    }
    int var2 = (int)BackgroundLoader::GetInstance();
    int var3 = ((BackgroundLoader*)(var2))->QueueLoadFile((const char*)((int)&data_ov023_021fe718), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var0, var3);
    return 1;
}
#else
extern "C" ARM int func_ov023_021fc2b8(struct Struct_ov023_021fc2b8* arg0, void* arg1) {
    void* var4 = func_ov011_021849c8(arg1);
    int var5 = func_ov023_021f6bb8(var4);
    if (var5 >= 0) {
        return arg0->unknown_1c_;
    }
    int var6 = (int)BackgroundLoader::GetInstance();
    int var7 = ((BackgroundLoader*)(var6))->QueueLoadFileInGP2((const char*)((int)&data_ov023_021ff480), (const char*)((int)&data_ov023_021ff496), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var4, var7);
    return 1;
}
#endif
