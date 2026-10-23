#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021bdbe4(unsigned char* arg0);
extern "C" int func_ov017_021bdbd8(unsigned char* arg0);
extern "C" void func_ov023_021e5628(void* arg0, void* arg1);

struct Struct_ov023_021fcd70 { int unknown_0_; int unknown_4_; };
struct Struct_ov023_021fcd70_2 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; };

// USA: func_ov023_021fcd70
extern "C" ARM void func_ov023_021fcd70(void* arg0) {
    int var0 = (int)GetGameResources();
    Struct_ov023_021fcd70 var1;
    if (var0 == 0) {
        var1.unknown_4_ = 0;
        var1.unknown_0_ = 0;
    } else {
        var1.unknown_4_ = func_ov017_021bdbe4((unsigned char*)var0);
        var1.unknown_0_ = func_ov017_021bdbd8((unsigned char*)var0);
    }
    Struct_ov023_021fcd70_2* var2 = (Struct_ov023_021fcd70_2*)((char*)arg0 + 0x1864);
    unsigned int var3 = var2->unknown_0_0_;
    void* var4 = (char*)arg0 + 0x20 + var3 * 0xc20;
    func_ov023_021e5628(var4, &var1);
}
