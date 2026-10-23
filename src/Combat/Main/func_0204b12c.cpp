#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern int data_020e7b98[][4];

struct Struct_0204b12c {
    char unknown_0_[0x14];
    void* unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[3];
    unsigned char unknown_1f_;
};

// USA: func_0204b12c
extern "C" ARM void func_0204b12c(struct Struct_0204b12c* arg0, SafeAllocator* arg1) {
    unsigned int var0;
    void* var1;
    if (arg1 == NULL) return;
    var0 = data_020e7b98[arg0->unknown_1f_][arg0->unknown_18_];
    var1 = arg1->Allocate(var0);
    arg0->unknown_14_ = var1;
    memset(var1, 0, var0);
}
