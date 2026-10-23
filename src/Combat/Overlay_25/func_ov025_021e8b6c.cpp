#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct SafeAllocator;
struct Struct_0203d028;

struct Struct_ov025_021e8b6c {
    char unknown_0_[0x10];
    SafeAllocator* unknown_10_[4];
    Struct_0203d028* unknown_20_[4];
    unsigned char unknown_30_;
};

extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_ov025_021e8bc4(Struct_ov025_021e8b6c*, unsigned int);

// USA: func_ov025_021e8b6c
extern "C" ARM void func_ov025_021e8b6c(Struct_ov025_021e8b6c* arg0) {
    arg0->unknown_10_[arg0->unknown_30_]->Reset();
    func_0207df50(arg0->unknown_20_[arg0->unknown_30_]);
    func_ov025_021e8bc4(arg0, arg0->unknown_30_);
}
