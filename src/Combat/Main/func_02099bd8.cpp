#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern short data_021099b0[8][8];

// USA: func_02099bd8
extern "C" ARM int func_02099bd8(struct Struct_0201c1c8* arg0) {
    int var0, var1;
    for (var0 = 0; var0 < 8; var0++) {
        for (var1 = 0; var1 < 8; var1++) {
            data_021099b0[var0][var1] = ((Script::Parameter*)arg0)->ToInt();
            arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
        }
    }
    return 1;
}
