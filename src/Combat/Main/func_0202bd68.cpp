#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct Struct_0202b2f0;
extern "C" int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1);
extern "C" unsigned short func_0202df58(void);

// USA: func_0202bd68
extern "C" ARM int func_0202bd68(struct Struct_0202b2f0* arg0, int arg1) {
    signed char* var0 = (signed char*)((char*)arg0 + 0x38);
    int var1 = 0;
    var0 += 0x1000;
    for (; var1 < 4; var1++) {
        if (var1 > 0) {
            signed char var2 = *(signed char*)((char*)arg0 + var1 + 0x1038);
            if (var2 == 0) continue;
        }
        if (!func_0202c1c0(arg0, var0[var1])) continue;

        void* var3;
        if (var1 == func_0202df58()) {
            var3 = (char*)arg0 + 0x7c0;
        } else {
            var3 = func_0202c178(arg0, var0[var1]);
        }
        if (var3 == 0) continue;

        unsigned int var4 = *(unsigned short*)((char*)var3 + 2);
        unsigned int var5 = (var4 << 0x1b) >> 0x1c;
        if (var5 & (1 << arg1)) {
            return 0;
        }
    }
    return 1;
}
