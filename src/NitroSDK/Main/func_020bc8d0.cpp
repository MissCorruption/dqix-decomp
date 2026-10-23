#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020bcde0;
extern "C" void func_020bcde0(struct Struct_020bcde0*);
struct Struct_020bce2c;
extern "C" void func_020bce2c(struct Struct_020bce2c*);

extern int data_0210fca4;
extern SignedAllocatorList data_0210fca8;

struct Struct_020bc8d0 {
    char unknown_0_[0x8];
    void (*unknown_8_)(struct Struct_020bcde0*);
    void* unknown_c_;
    char unknown_10_[0x14 - 0x10];
    void (*unknown_14_)(struct Struct_020bce2c*);
    void* unknown_18_;
    char unknown_1c_[0x24 - 0x1c];
    int unknown_24_;
    char unknown_28_[0x44 - 0x28];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_020bc8d0
extern "C" ARM void func_020bc8d0(struct Struct_020bc8d0* arg0) {
    if (!data_0210fca4) {
        data_0210fca8.Initialize(0);
        data_0210fca4 = 1;
    }
    arg0->unknown_8_ = func_020bcde0;
    arg0->unknown_c_ = arg0;
    arg0->unknown_14_ = func_020bce2c;
    arg0->unknown_18_ = arg0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_24_ &= ~0x1;
    arg0->unknown_24_ &= ~0x2;
}
