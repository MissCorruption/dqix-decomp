#include <globaldefs.h>

class Struct_ov023_021f69bc {
public:
    virtual void inline_ov023_021f69bc_3();
    virtual void inline_ov023_021f69bc();
    virtual void inline_ov023_021f69bc_2();
    char unknown_4_[0x14];
    Struct_ov023_021f69bc* unknown_18_;
};
struct Struct_ov011_02184750 { Struct_ov023_021f69bc* unknown_0_; };

// USA: func_ov023_021f69bc
extern "C" ARM void func_ov023_021f69bc(struct Struct_ov011_02184750* arg0) {
    Struct_ov023_021f69bc* var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        var0->inline_ov023_021f69bc_2();
        var0 = var0->unknown_18_;
    }
}
