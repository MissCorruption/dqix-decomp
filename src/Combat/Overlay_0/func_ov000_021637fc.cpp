#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_021637fc_828 = 0x12c, Enum_ov000_021637fc_29696 = 0x7800, Enum_ov000_021637fc_30528 = 0x7930 };
#else
enum { Enum_ov000_021637fc_828 = 0x33c, Enum_ov000_021637fc_29696 = 0x7400, Enum_ov000_021637fc_30528 = 0x7740 };
#endif
#include "Util/Random.h"

// USA: func_ov000_021637fc
extern "C" ARM int func_ov000_021637fc(void* arg0, int arg1) {
    int var0;
    signed char var1;
    char* var2;
    if (arg1 < 0 || arg1 >= 4) {
        return 0;
    }
    var2 = (char*)arg0 + Enum_ov000_021637fc_828;
    var1 = -1;
    var0 = 0;
    var2 = var2 + Enum_ov000_021637fc_29696;
    while (var0 < 4) {
        signed char var3 = var2[var0];
        if (var3 < 0) {
            int var4;
            struct Random* var5;
            var2[var0] = (char)arg1;
            var5 = GetBTRandom();
            if (var1 < 0) {
                var4 = 0;
            } else {
                var4 = var1 + NextRandomBetween(var5, 3, 10);
            }
            *((char*)arg0 + var0 + Enum_ov000_021637fc_30528) = (char)var4;
            return 1;
        }
        var1 = *((char*)arg0 + var0 + Enum_ov000_021637fc_30528);
        var0++;
    }
    return 0;
}
