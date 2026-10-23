#include <globaldefs.h>

class Struct_ov023_021f69ec {
public:
    virtual void inline_ov023_021f69ec_6();
    virtual void inline_ov023_021f69ec();
    virtual void inline_ov023_021f69ec_2();
    virtual void inline_ov023_021f69ec_3();
    virtual void inline_ov023_021f69ec_4();
    virtual void inline_ov023_021f69ec_5();
    char unknown_4_[0x14];
    Struct_ov023_021f69ec* unknown_18_;
};
struct Struct_ov011_02184760 { Struct_ov023_021f69ec* unknown_0_; };

// USA: func_ov023_021f69ec
extern "C" ARM void func_ov023_021f69ec(struct Struct_ov011_02184760* arg0) {
    Struct_ov023_021f69ec* var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        var0->inline_ov023_021f69ec_5();
        var0 = var0->unknown_18_;
    }
}
