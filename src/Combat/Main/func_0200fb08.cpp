#include <globaldefs.h>

extern "C" void func_020c99c8(void* arg0);

struct Struct_02000c9c_8 { unsigned char unknown_0_[5]; unsigned char unknown_5_; };

// USA: func_0200fb08
// EUR: func_0200fb08
extern "C" ARM unsigned char func_0200fb08(Struct_02000c9c_8* arg0) {
    unsigned char var0[0x54];
    unsigned char var1;
    func_020c99c8(var0);
    var1 = var0[0];
    arg0->unknown_5_ = var1;
#if defined(eur)
    if (var1 != 2 && var1 != 3 && var1 != 4 && var1 != 5) arg0->unknown_5_ = 1;
#else
    if (var1 != 2 && var1 != 5) arg0->unknown_5_ = 1;
#endif
    return arg0->unknown_5_;
}
