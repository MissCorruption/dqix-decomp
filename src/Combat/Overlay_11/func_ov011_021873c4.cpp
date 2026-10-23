#include <globaldefs.h>
#include "Resource/MessageSystem.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
extern "C" int func_ov011_02184c30(Struct_ov011_02184c30* arg0);
extern "C" void* func_ov017_021b2164();
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void* func_ov023_021fa598(void* arg0);
extern "C" int func_020421a0();
struct Struct_02072a68_2;
extern "C" void* func_02072a68(Struct_02072a68_2* arg0, int arg1);

// USA: func_ov011_021873c4
extern "C" ARM int func_ov011_021873c4(Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    int var1 = func_ov011_02184c30(&arg0[1]);
    void* var2 = func_ov017_021b2164();
    void* var3 = func_ov011_021849c8(var2);
    void* var4 = func_ov023_021f6880(var3, var0);
    if (!var4) return 1;
#if defined(jpn)
    if (func_ov023_021f6f10(var4) != 4) return 1;
#else
    if (func_ov024_021f6f10(var4) != 4) return 1;
#endif
    Struct_02072a68_2* var5 = (Struct_02072a68_2*)func_ov023_021fa598(var4);
    if (!var5) return 1;
    Struct_02021b84* var6 = (Struct_02021b84*)func_020421a0();
    const char* var7 = (const char*)func_02072a68(var5, (short)var1);
#if defined(jpn)
    func_0204500c(var6, var7, 0);
    var6->unknown_998_ = 1;
    var6->unknown_17ff_.unknown_0_4_ = 1;
#else
    func_0204500c(var6, var7, 0, 0xe3);
    var6->unknown_998_ = 1;
    var6->unknown_19d2_ = 1;
#endif
    return 1;
}
