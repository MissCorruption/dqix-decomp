#include <globaldefs.h>
struct Struct_ov024_021ea4d0;

struct Struct_ov024_021ea4d0_2 { int unknown_0_[5]; unsigned int unknown_14_; int unknown_18_[1]; unsigned int unknown_1c_; };

// USA: func_ov024_021ea4d0
extern "C" ARM int func_ov024_021ea4d0(Struct_ov024_021ea4d0* arg0, Struct_ov024_021ea4d0_2* arg1) {
    unsigned int var0 = arg1->unknown_14_ >> 0x1c;
    if (var0 != 4 && var0 != 3) goto ret0;
    {
        unsigned int var1 = arg1->unknown_1c_;
        var1 = (var1 << 0xd) >> 0x1b;
        if (var1 == 0) return 1;
    }
ret0:
    return 0;
}
