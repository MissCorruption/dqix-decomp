#include <globaldefs.h>

// USA: func_ov017_021bb9fc
ARM short GetField14e_021bb9fc(void* obj) {
#if defined(jpn)
    enum { regionalOffset0 = 0x14a };
#else
    enum { regionalOffset0 = 0x14e };
#endif
    return *(short*)((char*)obj + regionalOffset0);
}
