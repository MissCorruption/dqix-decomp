#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

#if defined(jpn)
#define REGION_OFFSET_0 0xdc
#define REGION_OFFSET_1 0x1e4
#else
#define REGION_OFFSET_0 0x9c
#define REGION_OFFSET_1 0x1a4
#endif

extern "C" void* func_02079e2c(char* arg0, int arg1);

struct Struct_ov000_02170cf8 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
};

// USA: func_ov000_02170cf8
extern "C" ARM void* func_ov000_02170cf8(char* arg0, int arg1) {
    if (arg1 == 0) {
        return 0;
    }
    Struct_02108e10* var0 = func_020797dc();
    if (var0 == 0) {
        return 0;
    }
    void* var1 = func_02079e2c((char*)var0, (short)arg1);
    if (var1 != 0) {
        return var1;
    }
    struct Struct_ov000_02170cf8** var2 = (struct Struct_ov000_02170cf8**)(arg0 + REGION_OFFSET_0);
    for (unsigned short var3 = 0; var3 < 0x42; var3++) {
        struct Struct_ov000_02170cf8* var4 = var2[var3];
        if (var4 != 0 && var4->unknown_4_0_ == arg1) {
            return var4;
        }
    }
    struct Struct_ov000_02170cf8** var5 = (struct Struct_ov000_02170cf8**)(arg0 + REGION_OFFSET_1);
    for (unsigned short var6 = 0; var6 < 0x93; var6++) {
        struct Struct_ov000_02170cf8* var7 = var5[var6];
        if (var7 != 0 && var7->unknown_4_0_ == arg1) {
            return var7;
        }
    }
    return 0;
}
