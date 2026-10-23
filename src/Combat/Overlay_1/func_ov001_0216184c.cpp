#include <globaldefs.h>

extern "C" void* func_0203cf4c(void);
extern "C" int func_ov017_021d60f4(void*);

struct Struct_ov001_0216184c { char unknown_0_[0x98]; unsigned int unknown_98_; };

// USA: func_ov001_0216184c
extern "C" ARM int func_ov001_0216184c(void* arg0) {
    struct Struct_ov001_0216184c* var0 = (struct Struct_ov001_0216184c*)func_0203cf4c();
    int var1 = func_ov017_021d60f4(arg0);
    if (var1 == 0) {
        var0->unknown_98_ |= 0x2;
    } else {
        var0->unknown_98_ &= ~0x2;
    }
    return 1;
}
