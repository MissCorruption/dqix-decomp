#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
    } unknown_4_;
};

extern unsigned short data_02109928[10][2];

// USA: func_02099ac4
extern "C" ARM int func_02099ac4(Struct_0201c1c8* arg0) {
    int var0, var1;
    for (var0 = 0; var0 < 10; var0++) {
        for (var1 = 0; var1 < 2; var1++) {
            data_02109928[var0][var1] = (unsigned short)((Script::Parameter*)arg0)->ToInt();
            arg0++;
        }
    }
    return 1;
}
