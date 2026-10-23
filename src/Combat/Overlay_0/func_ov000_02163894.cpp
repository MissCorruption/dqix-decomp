#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02163894_30524 = 0x792c };
#else
enum { Enum_ov000_02163894_30524 = 0x773c };
#endif
#include "Util/Random.h"

// USA: func_ov000_02163894
extern "C" ARM void func_ov000_02163894(char* arg0) {
    int var0 = 0;
    for (int var1 = 0; var1 < 4; var1++) {
        if (*(signed char*)(arg0 + Enum_ov000_02163894_30524 + var1) >= 0) {
            var0++;
        }
    }
    if (var0 <= 1) {
        return;
    }
    int var2 = NextRandomBetween(GetBTRandom(), 2, 10);
    for (int var3 = 1; var3 < var2; var3++) {
        int var4 = var3 % var0;
        signed char var5 = *(signed char*)(arg0 + Enum_ov000_02163894_30524);
        *(signed char*)(arg0 + Enum_ov000_02163894_30524) = *(signed char*)(arg0 + Enum_ov000_02163894_30524 + var4);
        *(signed char*)(arg0 + Enum_ov000_02163894_30524 + var4) = var5;
    }
}
