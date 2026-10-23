#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void func_ov001_0215a79c(void);
extern "C" void func_ov001_0215a8dc(void);

struct Struct_ov001_02165880_2 { char unknown_0_[4]; void* unknown_4_; void* unknown_8_; char unknown_c_[0x1c - 0xc]; void* unknown_1c_; void* unknown_20_; void* unknown_24_; };
extern struct Struct_ov001_02165880_2 data_ov001_02165880;

// USA: func_ov001_0215a850
extern "C" ARM void func_ov001_0215a850(SafeAllocator* arg0) {
    void* var0 = arg0->Allocate(0x260);
    unsigned int var1 = 0xa28;
    data_ov001_02165880.unknown_8_ = var0;
    void* var2 = arg0->Allocate(var1);
    unsigned int var3 = 0x700;
    data_ov001_02165880.unknown_24_ = var2;
    void* var4 = arg0->Allocate(var3);
    unsigned int var5 = 0x84c0;
    data_ov001_02165880.unknown_20_ = var4;
    void* var6 = arg0->Allocate(var5);
    unsigned int var7 = 0x200;
    data_ov001_02165880.unknown_1c_ = var6;
    void* var8 = arg0->Allocate(var7);
    data_ov001_02165880.unknown_4_ = var8;
    memset(var8, 0, 0x200);
    func_ov001_0215a79c();
    func_ov001_0215a8dc();
}
