#include <globaldefs.h>

struct Struct_ov006_021591ec;

extern "C" int func_ov006_0215919c(void* arg0);
extern "C" unsigned short func_ov006_021591ec(struct Struct_ov006_021591ec* arg0);

// USA: func_ov006_02159218
extern "C" ARM int func_ov006_02159218(struct Struct_ov006_021591ec* arg0) {
    short* var0 = (short*)func_ov006_0215919c(arg0);
    unsigned short var1 = func_ov006_021591ec(arg0);
    int var2 = 0;
    if (var0 != 0) {
        for (unsigned short var3 = 0; var3 < var1; var3++) {
            if (var0[var3] > 0) {
                var2 = 1;
                break;
            }
        }
    }
    return var2;
}
