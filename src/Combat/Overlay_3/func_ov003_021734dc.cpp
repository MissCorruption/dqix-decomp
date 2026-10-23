#include <globaldefs.h>

// USA: func_ov003_021734dc
extern "C" ARM int func_ov003_021734dc(int arg0, int arg1, int arg2) {
#if defined(jpn)
    enum { Enum_ov003_021734dc_67 = 0x4f, Enum_ov003_021734dc_189 = 0xb1 };
#else
    enum { Enum_ov003_021734dc_67 = 0x43, Enum_ov003_021734dc_189 = 0xbd };
#endif
    if (arg1 >= Enum_ov003_021734dc_67 && arg1 <= Enum_ov003_021734dc_189 && arg2 >= 0x5f && arg2 <= 0x6f) return 1;
    return 0;
}
