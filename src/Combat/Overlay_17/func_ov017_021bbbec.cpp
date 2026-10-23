#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021bbbec_282 = 0x116 };
#else
enum { Enum_ov017_021bbbec_282 = 0x11a };
#endif

// USA: func_ov017_021bbbec
extern "C" ARM void func_ov017_021bbbec(void* arg0, unsigned short arg1) {
    *(unsigned short*)((char*)arg0 + Enum_ov017_021bbbec_282) = arg1;
}
