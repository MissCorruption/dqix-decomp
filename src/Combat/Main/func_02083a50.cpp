#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02083a50_2284 = 0x854 };
#else
enum { Enum_02083a50_2284 = 0x8ec };
#endif


struct Struct_02083a50 {
    unsigned char unknown_0_[Enum_02083a50_2284];
    unsigned char unknown_8ec_[0x24];
};

// USA: func_02083a50
extern "C" ARM int func_02083a50(struct Struct_02083a50* arg0, short* arg1, int arg2) {
    int var0;
    int var1;
    int var2;
    var2 = 0;
    for (var0 = 0; var0 < 0x24; var0++) {
        unsigned char var3 = arg0->unknown_8ec_[var0];
        if (var3 == 0) {
            continue;
        }
        for (var1 = 0; var1 < 8; var1++) {
            if (arg0->unknown_8ec_[var0] & (1 << var1)) {
                arg1[var2] = (short)(var1 + (var0 << 3));
                var2++;
                if (var2 == arg2) {
                    return var2;
                }
            }
        }
    }
    return var2;
}
