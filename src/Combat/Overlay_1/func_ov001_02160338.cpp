#include <globaldefs.h>
#include "Graphics/LightingManager.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov001_021601f8(void* arg0, void* arg1);

struct Struct_ov001_02160338 { char unknown_0_[0x44]; int unknown_44_; char unknown_48_[0x54 - 0x48]; struct Struct_ov001_02160338* unknown_54_; };
struct Struct_ov001_02160338_2 { 
#if defined(jpn)
    char unknown_0_[0x430];
#else
    char unknown1_0_[0x410];
#endif
 int unknown_410_; char unknown_414_[0x41c - 0x414]; struct Struct_ov001_02160338* unknown_41c_; char unknown_420_[0x834 - 0x420]; unsigned char unknown_834_; };
struct Struct_ov001_02160338_3 { char unknown_0_[0x90]; int unknown_90_; };

// USA: func_ov001_02160338
extern "C" ARM int func_ov001_02160338(void* arg0) {
    Struct_ov001_02160338_2* var0 = (Struct_ov001_02160338_2*)func_02012fe4();
    Struct_ov001_02160338_3* var1 = (Struct_ov001_02160338_3*)LightingManager::GetInstance();
    if (var0->unknown_834_ != 0) {
        return 1;
    }
    var1->unknown_90_ = func_ov017_021d60f4(arg0);
    if (var0->unknown_410_ == 1) {
        Struct_ov001_02160338* var2 = var0->unknown_41c_;
        while (var2 != NULL) {
            if (var2->unknown_44_ != 0) {
                func_ov001_021601f8((void*)var2->unknown_44_, (char*)var2 + 4);
            }
            var2 = var2->unknown_54_;
        }
        var0->unknown_834_ = 1;
    }
    return 1;
}
