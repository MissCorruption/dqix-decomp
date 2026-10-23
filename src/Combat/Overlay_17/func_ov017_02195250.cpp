#include <globaldefs.h>

#include "Combat/NameEntryQueue.h"

// USA: func_ov017_02195250
extern "C" ARM void func_ov017_02195250(void *arg0, void *arg1) {
    Struct_ov017_02195250_2 *var0 = (Struct_ov017_02195250_2 *) arg0;
    Struct_ov017_021941fc *var1           = (Struct_ov017_021941fc *) arg1;

    if (var0->unknown_441c_->unknown_0_ == 2 && var0->unknown_441c_->unknown_2_.unknown_0_ == var1->unknown_0_) {
        var1->unknown_e_ = 1;
    } else {
        var1->unknown_e_ = 0;
    }
    for (int var2 = 0; var2 < var0->unknown_42f0_; var2++) {
        if (var1->unknown_0_ == var0->unknown_42f1_[var2].unknown_0_) {
            func_ov017_02195214(&var0->unknown_42f1_[var2], var1);
            return;
        }
    }

    {
        Struct_ov017_02195250 *var3 = var0->unknown_441c_;
        if (var3->unknown_0_ == 1 && var3->unknown_2_.unknown_0_ == var1->unknown_0_) {
            var3->unknown_0_ = 0;
            var3->unknown_1_  = 0;
        }
    }
    if (var0->unknown_42f0_ < 3) {
        func_ov017_02195214(&var0->unknown_42f1_[var0->unknown_42f0_++], var1);
    }
}
