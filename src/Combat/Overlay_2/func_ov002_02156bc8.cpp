#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0200f3a4_8;

extern const char* data_020f2a0c;
extern const char* data_020f2a18;
extern char data_ov002_0216cf21[];
extern char data_ov002_0216cf39[];
extern "C" void func_0209a804(int*);
extern "C" void func_0209a338(Struct_0200f3a4_8*);
#if defined(jpn)
extern "C" int func_020e12ec(char* arg0, const char* arg1);
extern char data_ov002_0216d539[];
#endif

// USA: func_ov002_02156bc8
extern "C" ARM void func_ov002_02156bc8(char* arg0) {
    if (*(unsigned int*)(arg0 + RG(0x247c, 0x22ac)) & 0x10) {
        return;
    }
#if defined(jpn)
    char var0[0x40];
    func_020e12ec(var0, data_ov002_0216d539);
#endif
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    var1->AddFence();
#if defined(jpn)
    *(int*)(arg0 + 0x1a6c) = var1->QueueLoadGP1(var0, 0);
#else
    *(int*)(arg0 + 0x1ba4) = var1->QueueLoadFileInGP2(data_020f2a18, data_020f2a0c, 0);
#endif
    *(int*)(arg0 + RG(0x1ba8, 0x1a70)) = var1->QueueLoadFile(data_ov002_0216cf21, 0);
    *(int*)(arg0 + RG(0x1bac, 0x1a74)) = var1->QueueLoadFile(data_ov002_0216cf39, 0);
    func_0209a804((int*)(arg0 + RG(0x2444, 0x227c)));
    func_0209a338((Struct_0200f3a4_8*)(arg0 + RG(0x243c, 0x2274)));
    *(unsigned int*)(arg0 + RG(0x247c, 0x22ac)) |= 0x10;
}
