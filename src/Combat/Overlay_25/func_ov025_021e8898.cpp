#include <globaldefs.h>

#if defined(jpn)
enum { kWorkFlagOffset = 0x71c8 };
#else
enum { kWorkFlagOffset = 0x6fd8 };
#endif

extern "C" void* func_ov000_02160130(void);

// USA: func_ov025_021e8898
extern "C" ARM int func_ov025_021e8898(void) {
    void* obj = func_ov000_02160130();
    if (obj) {
        *((char*)obj + kWorkFlagOffset) = 1;
    }
    return 1;
}
