#include <globaldefs.h>

// USA: func_020c30ac
extern "C" ARM unsigned long long func_020c30ac(unsigned long long arg0) {
    if (arg0 == 0x100000000ULL) {
        return 0xB504F334ULL;
    }
    unsigned long long var0 = (arg0 * arg0) >> 32;
    unsigned long long var1;
    var1 = 0x100000000ULL - ((var0 * 0x02317888ULL) >> 32);
    var1 = 0x100000000ULL - ((var1 * ((var0 * 0x03C2857CULL) >> 32)) >> 32);
    var1 = 0x100000000ULL - ((var1 * ((var0 * 0x07E54B84ULL) >> 32)) >> 32);
    var1 = 0xC90FDAA2ULL - ((var1 * ((var0 * 0x14ABBCE6ULL) >> 32)) >> 32);
    return (var1 * arg0) >> 32;
}
