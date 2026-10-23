#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0209bb6c_2 { char unknown_0_[0xc0]; int unknown_c0_; };
struct Struct_0209bb6c {
    struct Struct_0209bb6c_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};
extern struct Struct_0209bb6c* data_02109bb0;

// USA: func_0209bb6c
extern "C" ARM int func_0209bb6c(struct Struct_0201c1c8* arg0, int arg1) {
    int var0, var1, var2, var3;

    data_02109bb0->unknown_14_ = 0;
    if (data_02109bb0->unknown_10_ == 0) return 1;
    {
        int var4 = ((Script::Parameter*)arg0)->ToInt();
        if (var4 != data_02109bb0->unknown_4_) return 1;
    }

    var0 = 0;
    var1 = 0;
    var2 = 0;
    var3 = 0;
    if (arg1 > 1) {
        var0 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
        var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
        var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
        var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x20)))->ToInt();
    }

    {
        int var5 = var0 * 100 + var1;
        int var6 = var2 * 100 + var3;
        int var7 = data_02109bb0->unknown_8_ * 100 + data_02109bb0->unknown_c_;

        if (var0 == 0 && var1 == 0 && var2 == 0 && var3 == 0) {
            data_02109bb0->unknown_14_ = 1;
            data_02109bb0->unknown_0_->unknown_c0_ = 0;
        } else if (var5 <= var7 && var7 <= var6) {
            data_02109bb0->unknown_14_ = 1;
            data_02109bb0->unknown_10_ = 0;
            data_02109bb0->unknown_0_->unknown_c0_ = 0;
        }
    }
    return 1;
}
