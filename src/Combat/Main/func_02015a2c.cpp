#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02015a2c_1143 = 0x497 };
#else
enum { Enum_02015a2c_1143 = 0x477 };
#endif

#include "World/LootableContainer.h"


struct Struct_02015a2c {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
    char unknown_17_[0x24 - 0x17];
};

struct Struct_02015a2c_2 {
    char unknown_0_[0x8];
    int unknown_8_;
    char unknown_c_[Enum_02015a2c_1143 - 0xc];
    unsigned char unknown_477_;
    char unknown_478_[0x47c - 0x478];
    struct Struct_02015a2c* unknown_47c_;
};

// USA: func_02015a2c
extern "C" ARM int func_02015a2c(struct Struct_02015a2c_2* arg0) {
    int var0;
    if (!(int)LootableContainerManager::GetMainInstance()) return 0;
    if (!arg0->unknown_8_) return 0;
    for (var0 = 0; var0 < arg0->unknown_477_; var0++) {
        unsigned char var1 = arg0->unknown_47c_[var0].unknown_16_;
        if (var1 != 0 && var1 != 1 && var1 != 8) return 1;
    }
    return 0;
}
