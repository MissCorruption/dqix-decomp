#include <globaldefs.h>
#include "NitroSDK/Mutex.h"

struct Struct_ov031_0221038c {
    int unknown_0_;
    volatile int unknown_4_;
    Mutex unknown_8_;
};
extern Struct_ov031_0221038c* data_ov031_0224e588;

// USA: func_ov031_0221038c
extern "C" ARM void func_ov031_0221038c(int arg0) {
    Struct_ov031_0221038c* var0 = data_ov031_0224e588;
    if (var0 == NULL) return;
    Mutex* var1 = &var0->unknown_8_;
    (void)var0->unknown_4_;
    LockMutex(var1);
    if (data_ov031_0224e588->unknown_4_ != 2) data_ov031_0224e588->unknown_4_ = arg0;
    UnlockMutex(&data_ov031_0224e588->unknown_8_);
}
