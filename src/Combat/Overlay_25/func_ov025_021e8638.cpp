#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;

extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" void func_ov017_0219230c(void* arg0, int arg1, int arg2);

struct Struct_ov025_021e8638 {
    char unknown_0_[0x8];
    signed char unknown_8_;
};

// USA: func_ov025_021e8638
extern "C" ARM int func_ov025_021e8638(struct Struct_ov025_021e8638* arg0, struct Struct_ov000_0215440c_2* arg1) {
    void* var0 = GetGameResources();
    struct Struct_ov000_02160094* var1 = func_ov000_02160094(arg1, 0);
    func_ov017_0219230c(var0, *(unsigned short*)((char*)var1 + 0x20), arg0->unknown_8_);
    return 1;
}
