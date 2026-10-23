#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct SafeAllocator;
struct Struct_0203d028;

struct Struct_ov025_021e8af8 {
    char unknown_0_[0x10];
    SafeAllocator* unknown_10_[4];
    Struct_0203d028* unknown_20_[4];
    unsigned char unknown_30_;
};

extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void _ZN13SafeAllocator7DestroyEv(SafeAllocator*, unsigned int);
extern "C" void func_ov025_021e8bc4(Struct_ov025_021e8af8*, unsigned int);

// USA: func_ov025_021e8af8
extern "C" ARM void func_ov025_021e8af8(Struct_ov025_021e8af8* arg0) {
    if (arg0->unknown_30_ == 0) {
        return;
    }
    func_ov025_021e8bc4(arg0, arg0->unknown_30_);
    void* var0 = arg0->unknown_10_[arg0->unknown_30_]->GetSignedAllocator();
    _ZN13SafeAllocator7DestroyEv(arg0->unknown_10_[arg0->unknown_30_], arg0->unknown_30_);
    arg0->unknown_10_[arg0->unknown_30_ - 1]->Free(var0);
    func_0207df50(arg0->unknown_20_[arg0->unknown_30_]);
    arg0->unknown_30_--;
}
