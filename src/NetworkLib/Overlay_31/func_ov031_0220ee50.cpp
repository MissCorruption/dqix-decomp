#include <globaldefs.h>
#include "NitroSDK/WirelessScanDescriptor.h"

struct Struct_ov031_0220ee50_2 {
    int unknown_0_;
    Struct_ov031_0220ec04_2* unknown_4_;
};

struct Struct_ov031_0220ee50 {
    char unknown_0_[0x2270];
    Struct_ov031_0220ee50_2* unknown_2270_;
    unsigned int unknown_2274_;
};

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220ee50
extern "C" ARM Struct_ov031_0220ec04_2* func_ov031_0220ee50(int arg0) {
    Struct_ov031_0220ee50* var0 = (Struct_ov031_0220ee50*)func_ov031_0220d60c();
    Struct_ov031_0220ee50_2* var1 = var0->unknown_2270_;
    Struct_ov031_0220ec04_2* var2 = NULL;
    if (var1 != NULL && var0->unknown_2274_ > 12) {
        var2 = var1->unknown_4_;
        if (var2 != NULL) {
            do {
                if (var2->unknown_4_ == arg0) break;
                var2 = var2->unknown_c_;
            } while (var2 != NULL);
        }
    }
    return var2;
}
