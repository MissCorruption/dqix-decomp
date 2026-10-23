#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/WirelessScanDescriptor.h"
#include "Resource/Script.h"

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};

struct Struct_ov031_02291e04_2 {
    unsigned char unknown_0_;
#if defined(jpn)
    unsigned char unknown_1_[3];
#else
    unsigned char unknown1_1_[4];
#endif
    unsigned char unknown_5_;
#if defined(jpn)
    unsigned char unknown1_5_[0x2b];
#else
    unsigned char unknown_6_[0x26];
#endif
    Struct_ov031_0220ec04_3* unknown_2c_;
};

extern Struct_ov031_02291e04_2 data_ov031_02291e04;

// USA: func_ov031_02243348
extern "C" ARM int func_ov031_02243348(struct Struct_0201c3a4* arg0) {
    void* var0 = (void*)((Script::Parameter*)arg0)->ToString();
    int var1 = 0;
    int var2 = 0;
    while (var2 < data_ov031_02291e04.unknown_0_) {
        Struct_ov031_0220ec04_3* var3 = func_ov031_0220ec04(var2);
        if (strcmp((char*)var3->unknown_c_, (char*)var0) == 0) {
            memcpy(&data_ov031_02291e04.unknown_2c_[var1], var3, sizeof(*var3));
            var1++;
            if (var1 >= 8) break;
        }
        var2++;
    }
    data_ov031_02291e04.unknown_5_ = var1;
    return 1;
}
