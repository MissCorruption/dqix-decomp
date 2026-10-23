#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_0216768c_712 = 0x218 };
#else
enum { Enum_ov004_0216768c_712 = 0x2c8 };
#endif

extern "C" int func_020421a0(void);

// USA: func_ov004_0216768c
#if defined(jpn)
extern "C" ARM int func_ov004_02167c98(void)
#else
extern "C" ARM int func_ov004_0216768c(void)
#endif
{
    *(int*)((char*)func_020421a0() + Enum_ov004_0216768c_712) = 1;
    return 0;
}
