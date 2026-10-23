#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020421a0();
extern "C" void func_020dd0b0(void* a, void* b);

// USA: func_ov026_021d8a78
extern "C" ARM void* func_ov026_021d8a78(void* a0) {
    int base = func_020421a0();
    void* buf = *(void**)(base + 0x5c);
    memset(buf, 0, 0x960);
    func_020dd0b0(a0, buf);
    return buf;
}
