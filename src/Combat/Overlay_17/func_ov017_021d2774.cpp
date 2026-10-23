#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_0218d4b8(unsigned char* arg0, int arg1);
extern "C" void func_ov017_0218d4d0(void* arg0, int arg1);

struct Struct_ov017_021d2774 { unsigned char unknown_0_[4]; unsigned char unknown_4_; unsigned char unknown_5_; };

// USA: func_ov017_021d2774
extern "C" ARM void func_ov017_021d2774(void* arg0, Struct_ov017_021d2774* arg1) {
    void* var0 = GetGameResources();
    if (arg1->unknown_5_ != 0)
        func_ov017_0218d4b8((unsigned char*)var0, arg1->unknown_4_);
    else
        func_ov017_0218d4d0(var0, arg1->unknown_4_);
}
