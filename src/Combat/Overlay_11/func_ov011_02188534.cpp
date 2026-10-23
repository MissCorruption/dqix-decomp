#include <globaldefs.h>
#include "Resource/MessageSystem.h"

extern "C" void* func_020421a0();
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_02188534
extern "C" ARM int func_ov011_02188534(unsigned int arg0) {
    Struct_02021b84* var0 = (Struct_02021b84*)func_020421a0();
    int var1 = 0;
    if (var0->unknown_9a0_ == 3) var1 = 1;
    func_ov011_02184c68(arg0, var1);
    return 1;
}
