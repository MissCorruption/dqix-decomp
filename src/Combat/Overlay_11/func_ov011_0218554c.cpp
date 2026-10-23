#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void* func_ov017_021b2164(void);
extern "C" int func_ov011_021849d8(void* arg0);
extern "C" void func_ov011_021849d0(void* arg0, int arg1);

extern const char data_ov011_02188b6c[];

struct Struct_ov011_0218554c { int unknown_0_; int unknown_4_; };

// USA: func_ov011_0218554c
extern "C" ARM int func_ov011_0218554c(struct Struct_ov011_0218554c* arg0) {
    int var0 = (arg0->unknown_0_ == 2) ? arg0->unknown_4_ : 0;
    if (var0 == 0) return 0;
    void* var1 = func_ov017_021b2164();
    if (func_ov011_021849d8(var1) >= 0) return 0;
    int var2 = (int)BackgroundLoader::GetInstance();
    char var3[0x50];
    sprintf(var3, data_ov011_02188b6c, var0);
    int var4 = ((BackgroundLoader*)(var2))->QueueLoadFile((const char*)((int)var3), (SafeAllocator*)(0));
    func_ov011_021849d0(var1, var4);
    return 1;
}
