#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void func_ov017_021b86e0(void* arg0);

struct Struct_ov017_021cbc0c { unsigned char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov017_021cbc0c_2 { unsigned char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov017_021cbc0c
extern "C" ARM void func_ov017_021cbc0c(int arg0, Struct_ov017_021cbc0c* arg1, int arg2, GameResources* arg3) {
    void* var0 = arg3->unknown_ptr_3718;
    Struct_ov017_021cbc0c_2* var1 = (Struct_ov017_021cbc0c_2*)func_ov017_021b8478(var0);
    if (!var1) return;
    if (var1->unknown_8_ != arg1->unknown_4_) return;
    func_ov017_021b86e0(var0);
}
