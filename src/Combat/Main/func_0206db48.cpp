#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Combat/WorkRecord.h"

// USA: func_0206db48
extern "C" ARM void func_0206db48(void *arg0, Struct_0206bf2c *arg1) {
    Struct_0206bf2c *var0 = (Struct_0206bf2c *) func_0206db20(arg0, arg1->unknown_0_);
    int var1;
    if (arg1->unknown_a_2_) {
        var1 = 0;
    } else if (arg1->unknown_a_6_) {
        var1 = 1;
    } else if (arg1->unknown_46_ >= 0) {
        var1 = 2;
    } else if (arg1->unknown_5_ && !arg1->unknown_8_) {
        var1 = 3;
    } else if (arg1->unknown_8_) {
        var1 = 4;
    } else {
        var1 = 5;
    }
    if (var0 != 0) {
        while (var0 != 0) {
            int var2;
            if (var0->unknown_a_2_) {
                var2 = 0;
            } else if (var0->unknown_a_6_) {
                var2 = 1;
            } else if (var0->unknown_46_ >= 0) {
                var2 = 2;
            } else if (var0->unknown_5_ && !var0->unknown_8_) {
                var2 = 3;
            } else if (var0->unknown_8_) {
                var2 = 4;
            } else {
                var2 = 5;
            }
            bool var3 = false;
            if (var1 < var2) {
                var3 = true;
            } else if (var1 == var2) {
                if (var1 == 4 || var1 == 1) {
                    int var4      = arg1->unknown_4_ * 1000 + arg1->unknown_5_ * 10 + arg1->unknown_6_;
                    int var5 = var0->unknown_4_ * 1000 + var0->unknown_5_ * 10 + var0->unknown_6_;
                    if (var4 == var5 && arg1->unknown_44_ < var0->unknown_44_) {
                        var3 = true;
                    } else if (var4 < var5) {
                        var3 = true;
                    }
                } else if (arg1->unknown_44_ < var0->unknown_44_) {
                    var3 = true;
                }
            }
            if (var3) {
                break;
            }
            var0 = var0->unknown_70_;
        }
        if (var0 == 0) {
            return;
        }
        if (var0->unknown_6c_ == 0) {
            if (var0->unknown_64_ != 0) {
                var0->unknown_64_->unknown_68_ = arg1;
            }
            if (var0->unknown_68_ != 0) {
                var0->unknown_68_->unknown_64_ = arg1;
            }
            arg1->unknown_64_ = var0->unknown_64_;
            arg1->unknown_68_ = var0->unknown_68_;
            var0->unknown_64_   = 0;
            var0->unknown_68_   = 0;
            if (arg1->unknown_64_ == 0) {
                *(Struct_0206bf2c **) arg0 = arg1;
            }
        }
        if (var0->unknown_6c_ != 0) {
            var0->unknown_6c_->unknown_70_ = arg1;
        }
        arg1->unknown_6c_ = var0->unknown_6c_;
        arg1->unknown_70_ = var0;
        var0->unknown_6c_   = arg1;
    } else {
        if (*(Struct_0206bf2c **) arg0 != 0) {
            (*(Struct_0206bf2c **) arg0)->unknown_64_ = arg1;
        }
        arg1->unknown_68_            = *(Struct_0206bf2c **) arg0;
        *(Struct_0206bf2c **) arg0 = arg1;
    }
}
