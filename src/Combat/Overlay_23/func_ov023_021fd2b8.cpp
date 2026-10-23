#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct Struct_ov023_021fd2b8 {
    char unknown_0_[0x20];
    int unknown_20_;
    int unknown_24_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
};

// USA: func_ov023_021fd2b8
extern "C" ARM int func_ov023_021fd2b8(struct Struct_ov023_021fd2b8* arg0) {
    Struct_0208cb08* var0 = func_02094a00();
    func_02094ab0(var0);
    func_02094b40(var0);
    func_02094b34(var0, arg0->unknown_20_, arg0->unknown_24_, arg0->unknown_28_, arg0->unknown_29_);
    return 1;
}
