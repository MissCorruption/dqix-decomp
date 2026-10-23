#include <globaldefs.h>
#include "NitroSDK/Mutex.h"

struct Struct_ov031_0224f670_9 {
    unsigned char unknown_0_[4];
    void* (*unknown_4_)(int);
};

extern Mutex data_ov031_0224f704;
extern Struct_ov031_0224f670_9 data_ov031_0224f670;

// USA: func_ov031_0221f9a0
extern "C" THUMB void* func_ov031_0221f9a0(void* arg0, int arg1) {
    if (arg1 > 0) {
        LockMutex(&data_ov031_0224f704);
        void* var0 = data_ov031_0224f670.unknown_4_(arg1);
        UnlockMutex(&data_ov031_0224f704);
        return var0;
    }
    return NULL;
}
