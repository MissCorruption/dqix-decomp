#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

struct Struct_02012fa4;
extern "C" void func_02047230(struct Struct_02012fa4* arg0);

// USA: func_02012fa4
extern "C" ARM void func_02012fa4(char* arg0) {
    signed char var0;
    for (var0 = 0; var0 < 4; var0++) {
        func_02047230((struct Struct_02012fa4*)(arg0 + var0 * 0x88));
        func_0204719c((struct Struct_02012fa4*)(arg0 + var0 * 0x88));
    }
}
