#include <globaldefs.h>

#include "Combat/NodeLookup.h"

struct Struct_0206dd68 {
    char unknown_0_[0x64];
    struct Struct_0206dd68* unknown_64_;
    struct Struct_0206dd68* unknown_68_;
};

// USA: func_0206dd68
extern "C" ARM void func_0206dd68(void* arg0, int arg1) {
    struct Struct_0206dd68* var0 = (Struct_0206dd68*)func_0206db20(arg0, arg1);
    if (var0 == NULL) {
        return;
    }
    if (var0->unknown_64_ != NULL) {
        var0->unknown_64_->unknown_68_ = var0->unknown_68_;
    } else {
        *(struct Struct_0206dd68**)arg0 = var0->unknown_68_;
    }
    if (var0->unknown_68_ != NULL) {
        var0->unknown_68_->unknown_64_ = var0->unknown_64_;
    }
}
