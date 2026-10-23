#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_02191aac(char* arg0, int arg1, int arg2, unsigned char arg3);
extern "C" void func_ov017_021ce014(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3);

// USA: func_02083c48
extern "C" ARM void func_02083c48(char* arg0, int arg1, int arg2) {
    arg0[0x56c] = 0;
    if (arg2) {
        short var0 = *(short*)(arg0 + 0x568);
        func_ov017_02191aac((char*)GetGameResources(), 0, var0, 2);
    }
    if (arg1) {
        unsigned short var1 = *(unsigned short*)(arg0 + 0x568);
        func_ov017_021ce014(0, 1, 0, var1);
    }
}
