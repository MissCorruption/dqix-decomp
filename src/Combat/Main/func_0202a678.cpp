#include <globaldefs.h>

struct Struct_02029988 {
    char unknown_0_[0x40];
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    unsigned short unknown_4c_;
};

// USA: func_0202a678
extern "C" ARM void func_0202a678(struct Struct_02029988* arg0, int arg1) {
    int var0;
    int var1;
    arg0->unknown_40_ += arg1;
    var1 = arg0->unknown_44_;
    var0 = arg0->unknown_48_;
    if (arg0->unknown_4c_ & 0x100) {
        var1 = arg0->unknown_48_;
        var0 = arg0->unknown_44_;
    }
    if (arg0->unknown_40_ < arg0->unknown_44_) {
        arg0->unknown_40_ = var1;
        return;
    }
    if (arg0->unknown_48_ < arg0->unknown_40_) {
        arg0->unknown_40_ = var0;
    }
}
