#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02174988_4096 = 0xf00 };
enum { Enum_ov003_02174988_70 = 0xc2 };
#else
enum { Enum_ov003_02174988_4096 = 0x1000 };
enum { Enum_ov003_02174988_70 = 0x46 };
#endif

extern "C" int func_ov023_021dc488(void* arg0);

// USA: func_ov003_02174988
extern "C" ARM void func_ov003_02174988(char* arg0) {
    if ((*(unsigned short*)(arg0 + Enum_ov003_02174988_4096 + Enum_ov003_02174988_70) & 0x80) == 0) {
        return;
    }
    if (func_ov023_021dc488(arg0 + 0x3c) != 0) {
        *(unsigned short*)(arg0 + Enum_ov003_02174988_4096 + Enum_ov003_02174988_70) &= ~0x80;
    }
}
