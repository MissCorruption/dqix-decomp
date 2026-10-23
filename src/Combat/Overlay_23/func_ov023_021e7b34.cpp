#include <globaldefs.h>
#include "NitroSDK/Cache.h"

struct Struct_ov023_021e7b34_2 {
    char unknown_0_[0x5dc];
    int unknown_5dc_;
};

struct Struct_0204af14;
extern "C" void* func_0204af14(Struct_0204af14*, unsigned int);

struct Struct_0204ae44;
extern "C" void func_0204ae44(Struct_0204ae44*, int);

extern "C" int LoadToSubBG1ScreenData(int, int, unsigned int);

struct Struct_ov023_021e7b34 {
    char unknown_0_[8];
    int unknown_8_;
    void* unknown_c_;
};

// USA: func_ov023_021e7b34
extern "C" ARM int func_ov023_021e7b34(Struct_ov023_021e7b34_2* arg0, int arg1) {
    if (arg0->unknown_5dc_ == 0) return 1;
    int var0 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (!var0) return 1;
    Struct_0204af14* var1 = (Struct_0204af14*)((char*)arg0 + 0x154);
    void* var2 = func_0204af14(var1, 0);
    if (var2 == NULL) return 1;
    func_0204ae44((Struct_0204ae44*)var2, (unsigned short)(arg1 + 0xc));
    Struct_ov023_021e7b34* var3 = (Struct_ov023_021e7b34*)var2;
    void* var4 = var3->unknown_c_;
    int var5 = var3->unknown_8_;
    CleanInvalidateCacheRange(var4, var5);
    LoadToSubBG1ScreenData((int)var4, 0, var5);
    return 0;
}
