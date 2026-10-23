#include <globaldefs.h>
#include "Filesystem/GPC.h"
#include "std_library_functions.h"

struct Struct_020daa58 { int unknown_0_; int unknown_4_; };

extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" int func_02057924(void);
extern "C" int func_02057e6c(int, int, int, int, int, int);
extern const char data_020f28cb;

// USA: func_020daa58
extern "C" ARM int func_020daa58(Struct_020daa58* arg0, GPCFile* arg1, int arg2, int arg3) {
    int var0 = func_02057924();
    int var1;
    int var2 = arg0->unknown_0_;
    int var3 = arg0->unknown_4_;
    if (!var0 || !var2 || !var3) return 0;

    unsigned int var4 = 0;
    void* var5 = NULL;
    char var6[32];
    sprintf(var6, &data_020f28cb, arg2);
    if (GetUnknownGP2InnerFileDataByName(&var5, &var4, arg1, var6)) {
        var1 = (int)var5;
        func_0207df90((char*)var3);
        func_02057e6c(var0, 0x14, var2, var1, var4, var3);
        func_0207dfac((char*)var3);
    }
    sprintf(var6, &data_020f28cb, arg3);
    if (GetUnknownGP2InnerFileDataByName(&var5, &var4, arg1, var6)) {
        var1 = (int)var5;
        func_0207df90((char*)var3);
        func_02057e6c(var0, 0x15, var2, var1, var4, var3);
        func_0207dfac((char*)var3);
    }
    return 1;
}
