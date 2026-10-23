#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct AllocatorUnion;

#if defined(jpn)
#define func_ov008_021842a0 func_ov010_021842a0
#endif
extern "C" int func_ov010_02184354(void* arg0);
extern "C" void func_ov017_021c2710(unsigned char* arg0);
extern "C" void func_020a1940(unsigned int arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020c9be0(void);
extern "C" void func_ov008_021842a0(void* arg0);
extern char data_02114e20;

// USA: func_ov017_021c26ac
extern "C" ARM void func_ov017_021c26ac(unsigned char* arg0) {
    if (*(void**)(arg0 + 8) != NULL) {
        if (func_ov010_02184354(*(void**)(arg0 + 8)) == 0) {
            return;
        }
        func_ov017_021c2710(arg0);
        return;
    }
    func_020a1940(OVERLAY_ID(10));
    *(void**)(arg0 + 8) = func_02012d88((AllocatorUnion*)&data_02114e20, 0x28);
    if (*(void**)(arg0 + 8) == NULL) {
        func_020c9be0();
    }
    func_ov008_021842a0(*(void**)(arg0 + 8));
}
