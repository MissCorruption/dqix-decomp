#include <globaldefs.h>
#include "Util/Random.h"

extern signed char data_ov000_02182a85[12];

// USA: func_ov000_0215fbe0
extern "C" ARM signed char func_ov000_0215fbe0(struct Random* arg0, int arg1) {
    signed char var0[12];
    unsigned char* var1 = (unsigned char*)var0;
    unsigned char* var2 = (unsigned char*)data_ov000_02182a85;
    int var3 = 12;
    do {
        *var1 = *var2;
        var1++;
        var2++;
    } while (--var3);
    var0[3] = (signed char)NextRandomBetween(arg0, 3, 4);
    var0[0xb] = (signed char)NextRandomBetween(arg0, 6, 8);
    {
        signed char* var4 = var0;
        if (arg1 < 0 || arg1 >= 0xc) {
            return 0;
        }
        return var4[arg1];
    }
}
