#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

// USA: func_ov017_0219e310
extern "C" ARM void func_ov017_0219e310(unsigned char* arg0, int arg1) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0[0x0] = 3;
    arg0[0x8] = 0;
    arg0[0x9] = 0;
    arg0[0xa] = 1;
    arg0[0xb] = 0;
    arg0[0xc] = 0;
    *(short*)(arg0 + 0xe) = 0;
    *(short*)(arg0 + 0x10) = 0;
    arg0[0x20] = 0;
    *(short*)(arg0 + 0x22) = 0;
    *(short*)(arg0 + 0x24) = 0;
#if !defined(jpn)
    *(int*)(arg0 + 0x28) = 0;
#endif
    short var0 = *(short*)(arg0 + 0x12);
    if (var0 != 0) {
        if (arg1 == 0) return;
    }
    VectorizedMemset(arg0 + 0x12, 0, 0xe);
}
