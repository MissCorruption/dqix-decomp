#include <globaldefs.h>

extern "C" void func_0200159c(int);

struct Struct_ov017_021d4980 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };

// USA: func_ov017_021d4980
extern "C" ARM void func_ov017_021d4980(Struct_ov017_021d4980 arg0) {
    int var0 = *(volatile int*)&arg0.unknown_0_;
    int var1 = *(volatile int*)&arg0.unknown_4_;
    (void)var1;
    if (var0 != 0) {
        func_0200159c(-1);
    }
}
