#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02163440_28228 = 0x7034 };
#else
enum { Enum_ov000_02163440_28228 = 0x6e44 };
#endif

// USA: func_ov000_02163440
extern "C" ARM void func_ov000_02163440(void* arg0, short arg1, unsigned short arg2, unsigned short arg3) {
    *(unsigned short*)((char*)arg0 + Enum_ov000_02163440_28228) = arg1;
    *(unsigned short*)((char*)arg0 + Enum_ov000_02163440_28228 + 2) = arg2;
    *(unsigned short*)((char*)arg0 + Enum_ov000_02163440_28228 + 4) = arg3;
}
