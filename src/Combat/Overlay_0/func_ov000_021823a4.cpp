#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

extern "C" void func_02047230(struct Struct_02012fa4* arg0);

struct Struct_ov000_021820fc { unsigned char unknown_0_; unsigned char unknown_1_; short unknown_2_; short unknown_4_; };
extern "C" void func_ov000_021820fc(struct Struct_ov000_021820fc* arg0);

// USA: func_ov000_021823a4
extern "C" ARM void func_ov000_021823a4(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 13; var0++) {
        func_02047230((struct Struct_02012fa4*)(arg0 + var0 * 0x88));
    }
    func_ov000_021820fc((struct Struct_ov000_021820fc*)(arg0 + 0x6e8));
}
