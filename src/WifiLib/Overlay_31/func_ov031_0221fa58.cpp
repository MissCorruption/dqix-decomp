#include <globaldefs.h>

struct Struct_ov031_0224f670_11 {
    char unknown_0_[0x68];
    int unknown_68_;
    int unknown_6c_;
};
extern Struct_ov031_0224f670_11 data_ov031_0224f670;
extern void* data_ov031_0224f6f4[4];

// USA: func_ov031_0221fa58
extern "C" THUMB void func_ov031_0221fa58(int arg0, int) {
    Struct_ov031_0224f670_11* var0 = &data_ov031_0224f670;
    int var1 = var0->unknown_68_;
    int var2 = var1 + 1;
    int var3 = var0->unknown_6c_;
    if (var2 != var3 && var1 != var3 + 3) {
        data_ov031_0224f6f4[var1] = (void*)arg0;
        var0->unknown_68_ = var2;
        if (var2 >= 4) var0->unknown_68_ = 0;
    }
}
