#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02028754 {
    int unknown_0_;   // 0x0
    int unknown_4_;   // 0x4
};

struct Struct_0201a300_7 {
    char unknown_0_;                    // 0x0
    unsigned char unknown_1_;          // 0x1
    char unknown_2_[6];                  // 0x2..0x7
    struct Struct_02028754* unknown_8_;  // 0x8
};

// USA: func_02028754
extern "C" ARM void func_02028754(struct Struct_0201a300_7* arg0, SafeAllocator* arg1, int arg2) {
    int var0;
    struct Struct_02028754* var1;
    arg0->unknown_8_ = (struct Struct_02028754*)arg1->Allocate(arg2 * 8);
    if (arg0->unknown_8_ == NULL) {
        arg0->unknown_1_ = 0;
        return;
    }
    arg0->unknown_1_ = arg2;
    for (var0 = 0; var0 < arg0->unknown_1_; var0++) {
        var1 = arg0->unknown_8_ + var0;
        var1->unknown_4_ = 0;
        var1->unknown_0_ = 0;
    }
}
