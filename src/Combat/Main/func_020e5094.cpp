#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};
extern "C" void func_020dfc6c(Struct_0201099c_14* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

struct Struct_02153694 {
    Struct_0201099c_14 unknown_0_;
    unsigned char unknown_14_[4];
};

extern Struct_02153694 data_02153694[2];
extern SafeAllocator data_02153680;
extern int data_02114e20;

// USA: func_020e5094
extern "C" ARM void func_020e5094(void) {
    int var0;
    for (var0 = 0; var0 < 2; var0++) {
        func_020dfc6c(&data_02153694[var0].unknown_0_);
    }
    void* var1 = data_02153680.GetSignedAllocator();
    if (var1 != NULL) {
        func_02012da4((AllocatorUnion*)&data_02114e20, var1);
        data_02153680.Destroy();
    }
}
