#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02055ed0_3;
extern "C" void func_02058c88(struct Struct_02055ed0_3* arg0);

struct Struct_02055ed0 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;
    char unknown_2d_[0x148 - 0x2d];
    struct Struct_02055ed0* unknown_148_;
};

struct Struct_02055ed0_2 {
    char unknown_0_[0x28];
    SafeAllocator* unknown_28_;
    char unknown_2c_[0x34 - 0x2c];
    struct Struct_02055ed0* unknown_34_;
};

// USA: func_02055ed0
extern "C" ARM struct Struct_02055ed0* func_02055ed0(struct Struct_02055ed0_2* arg0) {
    struct Struct_02055ed0** var0 = &arg0->unknown_34_;
    struct Struct_02055ed0* var1;
    while ((var1 = *var0) != 0) {
        if (var1->unknown_2c_ == 0) {
            return var1;
        }
        var0 = &var1->unknown_148_;
    }
    struct Struct_02055ed0* var2 = 0;
    SafeAllocator* var3 = arg0->unknown_28_;
    int var4;
    if (var3 == 0) {
        var4 = 0;
    } else {
        var2 = (struct Struct_02055ed0*)var3->Allocate(sizeof(struct Struct_02055ed0));
        if (var2 == 0) {
            var4 = 0;
        } else {
            func_02058c88((struct Struct_02055ed0_3*)var2);
            var2->unknown_148_ = 0;
            var4 = 1;
        }
    }
    if (!var4) {
        return 0;
    }
    func_02058c88((struct Struct_02055ed0_3*)var2);
    var2->unknown_148_ = 0;
    *var0 = var2;
    return var2;
}
