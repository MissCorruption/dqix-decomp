#include <globaldefs.h>

// USA: func_020c3194
extern "C" ARM long long func_020c3194(unsigned long long rad) {
    if (rad == 0x100000000ULL) {
        return 0xb504f334;
    }
    unsigned long long rad2 = (rad * rad) >> 32;
    unsigned long long tmp;
    tmp = 0x100000000ULL - ((rad2 * 0x02d1e41dULL) >> 32);
    tmp = 0x100000000ULL - ((tmp * ((rad2 * 0x054387adULL) >> 32)) >> 32);
    tmp = 0x100000000ULL - ((tmp * ((rad2 * 0x0d28d331ULL) >> 32)) >> 32);
    return 0x100000000ULL - ((tmp * ((rad2 * 0x4ef4f327ULL) >> 32)) >> 32);
}
