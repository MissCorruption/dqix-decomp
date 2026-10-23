#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"

// USA: func_0207f7f0
extern "C" ARM void func_0207f7f0(Struct_0207f7f0* arg0, Struct_0207f7f0_2* arg1, int arg2) {
    unsigned char var0;
    arg0->unknown_30_ = arg1;
    arg0->unknown_39_ = (unsigned char)arg2;
    if (arg0->unknown_30_ != NULL && arg0->unknown_39_ != 0) {
        for (var0 = 1; var0 < arg0->unknown_39_; var0++)
            arg0->unknown_30_[var0].unknown_0_ = &arg0->unknown_30_[var0 - 1];
    }
}
