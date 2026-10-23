#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020286fc {
    char unknown_0_[0x10];
};

struct Struct_0201a300_6 {
    unsigned char unknown_0_;           // 0x0
    char unknown_1_[3];                   // 0x1..0x3
    struct Struct_020286fc* unknown_4_;   // 0x4
};

struct Struct_02027d94;
extern "C" void func_02027d94(struct Struct_02027d94* arg0);

// USA: func_020286fc
extern "C" ARM void func_020286fc(struct Struct_0201a300_6* arg0, SafeAllocator* arg1, int arg2) {
    int var0;
    arg0->unknown_4_ = (struct Struct_020286fc*)arg1->Allocate(arg2 * 16);
    if (arg0->unknown_4_ == NULL) {
        arg0->unknown_0_ = 0;
        return;
    }
    arg0->unknown_0_ = arg2;
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        func_02027d94((struct Struct_02027d94*)(arg0->unknown_4_ + var0));
    }
}
