#include <globaldefs.h>

class Struct_ov023_021f698c {
public:
    virtual void inline_ov023_021f698c_2();
    virtual void inline_ov023_021f698c();
    char unknown_4_[0x14];
    Struct_ov023_021f698c* unknown_18_;
};
struct Struct_ov011_02184740 { Struct_ov023_021f698c* unknown_0_; };

// USA: func_ov023_021f698c
extern "C" ARM void func_ov023_021f698c(struct Struct_ov011_02184740* arg0) {
    Struct_ov023_021f698c* var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        var0->inline_ov023_021f698c();
        var0 = var0->unknown_18_;
    }
}
