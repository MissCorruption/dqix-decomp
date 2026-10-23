#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020421a0();
extern "C" void func_020dd0b0(void* arg0, void* arg1);

// USA: func_ov026_021d8a78
extern "C" ARM void* func_ov026_021d8a78(void* arg0) {
    int var0 = func_020421a0();
    void* var1 = *(void**)(var0 + 0x5c);
    memset(var1, 0, 0x960);
    func_020dd0b0(arg0, var1);
    return var1;
}
