#include <globaldefs.h>
struct Struct_02083834 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
// USA: func_02083834
extern "C" ARM void func_02083834(struct Struct_02083834* arg0, int arg1) {
    int var0;
    if (arg1 < 0) {
        return;
    }
    for (var0 = 0; var0 < 8; var0++) {
        if (arg0->unknown_454_[var0] < 0) {
            arg0->unknown_454_[var0] = arg1;
            return;
        }
    }
}
