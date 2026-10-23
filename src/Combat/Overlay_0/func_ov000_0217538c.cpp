#include <globaldefs.h>

struct Struct_ov000_02184288_5 { int unknown_0_; int unknown_4_; };
extern struct Struct_ov000_02184288_5 data_ov000_02184288;

#if defined(jpn)
enum { Enum_ov000_0217538c_7452 = 0x1f54 };
#else
enum { Enum_ov000_0217538c_7452 = 0x1d1c };
#endif

// USA: func_ov000_0217538c
extern "C" ARM int func_ov000_0217538c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = -1;
    int var2 = 0;
    for (int var3 = 0; var3 < data_ov000_02184288.unknown_4_; var3++) {
        int var4 = *(int*)(var0 + var3 * 4 + Enum_ov000_0217538c_7452);
        if (var1 != var4) {
            var1 = var4;
            var2++;
        }
    }
    return var2;
}
