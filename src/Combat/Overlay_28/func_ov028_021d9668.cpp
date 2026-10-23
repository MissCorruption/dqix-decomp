#include <globaldefs.h>
#include "Resource/ResourceMutex.h"

extern "C" void func_ov028_021d9574(void* arg0);
extern "C" void func_ov028_021d9188(void* arg0);

struct Struct_ov028_021d9668 {
    char unknown_0_[0x9c];
    unsigned char unknown_9c_;
};

// USA: func_ov028_021d9668
extern "C" ARM void func_ov028_021d9668(Struct_ov028_021d9668* arg0) {
    if (arg0 == 0) return;
    bool var0 = SetResourceMutexOperational(false);
    if (arg0->unknown_9c_ == 0) {
        func_ov028_021d9574(arg0);
    } else {
        func_ov028_021d9188(arg0);
        arg0->unknown_9c_ = (arg0->unknown_9c_ == 0) ? 1 : 0;
    }
    SetResourceMutexOperational(var0);
}
