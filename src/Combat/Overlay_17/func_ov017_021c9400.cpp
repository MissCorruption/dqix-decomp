#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c9400 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    unsigned char unknown_7_0_ : 4;
    signed char unknown_7_4_ : 4;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c9400
extern "C" ARM void func_ov017_021c9400(int arg0, int arg1, int arg2, Struct_ov001_02158efc arg3, Struct_ov001_02158efc arg4, int arg5) {
    void* var0 = func_0202ae24();
    Struct_ov017_021c9400 var1;
    var1.unknown_0_ = 0x85;
    var1.unknown_4_ = arg0;
    var1.unknown_7_0_ = (unsigned char)arg1;
    var1.unknown_7_4_ = (signed char)arg5;
    var1.unknown_c_ = arg3.unknown_0_;
    var1.unknown_a_ = arg3.unknown_4_ >> 4;
    var1.unknown_10_ = arg3.unknown_8_;
    var1.unknown_8_ = arg4.unknown_4_;
    func_0205e330(var0, &var1, 0);
}
