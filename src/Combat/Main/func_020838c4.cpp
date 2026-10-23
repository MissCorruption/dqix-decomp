#include <globaldefs.h>
struct Struct_020838c4 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
// USA: func_020838c4
extern "C" ARM int func_020838c4(struct Struct_020838c4* arg0, int arg1) {
    int var0;
    int var1;
    int var2;
    if (arg1 < 0) {
        return 0;
    }
    var0 = 0;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg1 == arg0->unknown_454_[var1]) {
            arg0->unknown_454_[var1] = -1;
            var0 = 1;
            break;
        }
    }
    if (var0) {
        for (var2 = 0; var2 < 7; var2++) {
            if (arg0->unknown_454_[var2] < 0) {
                arg0->unknown_454_[var2] = arg0->unknown_454_[var2 + 1];
                arg0->unknown_454_[var2 + 1] = -1;
            }
        }
    }
    return var0;
}
