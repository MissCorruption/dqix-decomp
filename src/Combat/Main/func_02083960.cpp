#include <globaldefs.h>
struct Struct_0207d300 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
// USA: func_02083960
extern "C" ARM int func_02083960(struct Struct_0207d300* arg0) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg0->unknown_454_[var1] > 0) {
            var0++;
        }
    }
    return var0;
}
