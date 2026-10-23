#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d6134(void* arg0, int arg1);

struct Struct_ov001_02160a7c { 
#if defined(jpn)
    char unknown_0_[0xc8];
#else
    char unknown1_0_[0xcc];
#endif
 unsigned char unknown_cc_, unknown_cd_, unknown_ce_, unknown_cf_; };

// USA: func_ov001_02160a7c
extern "C" ARM int func_ov001_02160a7c(char* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov001_02160a7c_14132 = 0x3524 };
#else
    enum { Enum_ov001_02160a7c_14132 = 0x3734 };
#endif
    int var0;
    void* var1 = GetGameResources();
    struct Struct_ov001_02160a7c* var2 = *(struct Struct_ov001_02160a7c**)((char*)var1 + Enum_ov001_02160a7c_14132);
    func_ov017_021d6134(arg0, var2->unknown_cd_);
    arg0 += 8;
    if (arg1 >= 2) {
        func_ov017_021d6134(arg0, var2->unknown_cf_);
        arg0 += 8;
    }
    if (arg1 >= 3) {
        func_ov017_021d6134(arg0, var2->unknown_ce_);
        arg0 += 8;
    }
    if (arg1 >= 4) {
        unsigned char var3 = var2->unknown_cc_;
        if (var3 == 2) {
            var0 = 0;
        } else if (var3 == 1) {
            var0 = 1;
        }
        func_ov017_021d6134(arg0, var0);
    }
    return 1;
}
