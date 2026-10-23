#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_ov031_02291e04_2 {
    unsigned char unknown_0_;
#if defined(jpn)
    unsigned char unknown_1_[3];
#else
    unsigned char unknown1_1_[4];
#endif
    unsigned char unknown_5_;
#if defined(jpn)
    unsigned char unknown1_5_[0x26];
#else
    unsigned char unknown_6_[0x22];
#endif
    int* unknown_28_;
    void* unknown_2c_;
};
extern Struct_ov031_02291e04_2 data_ov031_02291e04;

// USA: func_ov031_02243300
extern "C" ARM int func_ov031_02243300(Script::Parameter* arg0) {
    int var0 = arg0[0].ToInt();
    if (var0 < 0 || var0 >= 14) return 1;
    int var1;
    *(volatile int*)&var1 = arg0[1].ToInt();
    data_ov031_02291e04.unknown_28_[var0] = var1;
    return 1;
}
