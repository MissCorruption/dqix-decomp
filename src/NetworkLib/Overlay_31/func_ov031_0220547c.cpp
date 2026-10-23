#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

extern "C" ARM int func_ov031_0220547c(void* arg0);
extern "C" ARM void func_ov031_02205524(void* arg0, void* arg1);
extern "C" ARM void func_ov031_022070c8(void* arg0);

typedef void* (*Type_01ff8300_2)(int size);
struct Struct_ov031_02205414 { char unknown_0_[0x18]; Type_01ff8300_2 unknown_18_; };
extern Struct_ov031_02205414* data_ov031_022496a4;

// USA: func_ov031_02205414
extern "C" ARM void* func_ov031_02205414(void* arg0) {
    int var0 = func_ov031_0220547c(arg0);
    void* var1;
    int var2 = DisableIRQInterrupts();
    var1 = data_ov031_022496a4->unknown_18_(var0);
    if (var1 != NULL) {
        VectorizedMemset(var1, 0, var0);
        func_ov031_02205524(var1, arg0);
        func_ov031_022070c8(var1);
    }
    SetIRQInterruptState(var2);
    return var1;
}
