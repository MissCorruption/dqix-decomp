#include <globaldefs.h>

struct Struct_ov031_0223beec { unsigned short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; int unknown_4_[64]; };
extern "C" Struct_ov031_0223beec* func_ov031_0223beb8(int arg0);

// USA: func_ov031_0223beec
extern "C" ARM void func_ov031_0223beec(int arg0, int arg1, int arg2) {
    Struct_ov031_0223beec* var0 = func_ov031_0223beb8(arg0);
    for (int var1 = 0; var1 < arg0; var1++) {
        var0->unknown_4_[var1] = arg1;
        arg1 += arg2;
    }
    var0->unknown_3_ = arg0;
}
