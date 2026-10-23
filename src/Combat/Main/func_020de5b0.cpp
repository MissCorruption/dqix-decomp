#include <globaldefs.h>

struct Struct_020de5b0_3 { unsigned int unknown_0_; char unknown_4_[0x20 - 0x4]; };
struct Struct_020de5b0 { unsigned short unknown_0_; char unknown_2_[0xc - 0x2]; struct Struct_020de5b0_3* unknown_c_; };
struct Struct_020de5b0_2;
extern "C" int func_020de5fc(struct Struct_020de5b0_2* arg0);

// USA: func_020de5b0
extern "C" ARM int func_020de5b0(struct Struct_020de5b0* arg0) {
    struct Struct_020de5b0_3* var0 = arg0->unknown_c_ + arg0->unknown_0_;
    struct Struct_020de5b0_3* var1 = arg0->unknown_c_;
    unsigned short var2 = arg0->unknown_0_;
    int var3;
    for (var3 = 0; var3 < var2; var3++, var1++) {
        unsigned int var4 = 0;
        int var5 = (int)var1->unknown_0_;
        if (var5 != -1) var4 = (unsigned int)(var0 + var5);
        var1->unknown_0_ = var4;
    }
    func_020de5fc((struct Struct_020de5b0_2*)arg0);
    return 1;
}
