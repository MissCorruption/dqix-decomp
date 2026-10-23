#include <globaldefs.h>
struct Struct_02083994 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
// USA: func_02083994
extern "C" ARM int func_02083994(struct Struct_02083994* arg0, int arg1) {
    int var0;
    int var1;
    if (arg1 < 0) {
        return 0;
    }
    var0 = 0;
    for (var1 = 0; var1 < 8; var1++) {
        short var2 = arg0->unknown_454_[var1];
        if (var2 < 0) {
            break;
        }
        if (var2 == arg1) {
            var0++;
        }
    }
    return var0;
}
