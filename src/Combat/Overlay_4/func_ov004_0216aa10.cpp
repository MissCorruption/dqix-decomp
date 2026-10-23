#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

#if defined(jpn)
enum { Enum_ov004_0216aa10_2456 = 0x868 };
#else
enum { Enum_ov004_0216aa10_2456 = 0x998 };
#endif

extern "C" void func_ov004_02169144(void);
extern "C" void func_020dc2d0(int arg0);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);

// USA: func_ov004_0216aa10
extern "C" ARM int func_ov004_0216aa10(void) {
    func_ov004_02169144();
    BG0CNTSUB = (BG0CNTSUB & ~3) | 1;
    BG1CNTSUB = (BG1CNTSUB & ~3) | 2;
    BG2CNTSUB = (BG2CNTSUB & ~3);
    func_020dc2d0(0);
    int var0 = func_020421a0();
    if (*(int*)((char*)var0 + Enum_ov004_0216aa10_2456) != 0) {
        func_02043204((char*)var0);
    }
    return 0;
}
