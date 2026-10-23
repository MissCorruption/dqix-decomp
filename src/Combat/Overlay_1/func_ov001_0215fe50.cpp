#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" void func_ov017_0219b43c(void* arg0, int arg1, Struct_ov001_02158efc* arg2, int arg3, int arg4);

// USA: func_ov001_0215fe50
extern "C" ARM int func_ov001_0215fe50(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = (char*)arg0 + 0x8;
    arg0 = (char*)arg0 + 0x10;
    int var2;
    int var3;
    int var4 = func_ov017_021d60f4(var1);
    char* var5 = (char*)func_ov001_0215ab20(var0);
    if (!var5) {
        return 0;
    }
    Struct_ov001_02158efc var6 = *(Struct_ov001_02158efc*)(var5 + 0x74);
    var2 = 0;
    var3 = 0;
    if (arg1 >= 3) {
        var2 = func_ov017_021d60f4(arg0);
        arg0 = (char*)arg0 + 0x8;
    }
    if (arg1 >= 4) {
        var3 = func_ov017_021d60f4(arg0);
    }
    func_ov017_0219b43c(GetGameResources(), var4, &var6, var2, var3);
    return 1;
}
