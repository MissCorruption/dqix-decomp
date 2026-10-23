#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020bc2f0_2;
extern "C" void func_020bc6fc(struct Struct_020bc2f0_2*);

struct Struct_020bc180_2;
extern "C" void func_020c0204(struct Struct_020bc180_2*, int, int);

extern "C" void func_020bc870(SignedAllocatorHeader*, unsigned char);

struct Struct_020bc548 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;
};

// USA: func_020bc548
extern "C" ARM void func_020bc548(struct Struct_020bc548* arg0, int arg1) {
    if (arg0 == 0 || arg0->unknown_2c_ == 0) return;
    if (arg1 == 0) {
        func_020bc6fc((struct Struct_020bc2f0_2*)arg0);
        return;
    }
    func_020c0204((struct Struct_020bc180_2*)((char*)arg0 + 0x1c), 0, arg1);
    func_020bc870((SignedAllocatorHeader*)arg0, 0);
    arg0->unknown_2c_ = 2;
}
