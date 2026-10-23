#include <globaldefs.h>
extern "C" void func_020cf0fc(int);

struct Struct_02098f20 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };

// USA: func_02098f20
extern "C" ARM int func_02098f20(int arg0, int arg1, int arg2) {
    struct Struct_02098f20 var0;
    int var1;
    func_020cf0fc((int)(&var0));
    var0.unknown_0_ += 0x7d0;
    var1 = var0.unknown_0_ - arg0;
    if (arg1 * 100 + arg2 > var0.unknown_4_ * 100 + var0.unknown_8_) var1 -= 1;
    return var1;
}
