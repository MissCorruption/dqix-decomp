#include <globaldefs.h>
struct Struct_02061c04_22 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
// USA: func_0208386c
extern "C" ARM void func_0208386c(struct Struct_02061c04_22* arg0, int arg1) {
    if (arg1 < 0) return;
    if (arg1 >= 8) return;
    arg0->unknown_454_[arg1] = -1;
    for (; arg1 < 7; arg1++) {
        arg0->unknown_454_[arg1] = arg0->unknown_454_[arg1 + 1];
        arg0->unknown_454_[arg1 + 1] = -1;
    }
}
