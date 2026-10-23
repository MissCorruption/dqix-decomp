#include <globaldefs.h>

// USA: func_ov003_021734dc
extern "C" ARM int func_ov003_021734dc(int unused, int a, int b) {
#if defined(jpn)
    enum { regionalLow = 0x4f, regionalHigh = 0xb1 };
#else
    enum { regionalLow = 0x43, regionalHigh = 0xbd };
#endif
    if (a >= regionalLow && a <= regionalHigh && b >= 0x5f && b <= 0x6f) return 1;
    return 0;
}
