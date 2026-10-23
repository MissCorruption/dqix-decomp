#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

struct Struct_0203a54c {
    struct Struct_02012fa4 unknown_0_[5];
    struct Struct_02012fa4 unknown_2a8_[5];
};

extern "C" void func_02047230(struct Struct_02012fa4* arg0);

// USA: func_0203a54c
extern "C" ARM void func_0203a54c(struct Struct_0203a54c* arg0) {
    int var0;
    for (var0 = 0; var0 < 5; var0++) {
        func_02047230(&arg0->unknown_0_[var0]);
        func_02047230(&arg0->unknown_2a8_[var0]);
    }
}
