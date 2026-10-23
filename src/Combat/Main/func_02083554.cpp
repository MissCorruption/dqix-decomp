#include <globaldefs.h>
struct Struct_0206f81c_8 { unsigned char unknown_0_[0x18]; short unknown_18_; unsigned char unknown_1a_[6]; };
struct Struct_0206f81c { unsigned char unknown_0_[0x194]; struct Struct_0206f81c_8 unknown_194_[11]; };
// USA: func_02083554
extern "C" ARM struct Struct_0206f81c_8* func_02083554(struct Struct_0206f81c* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 0xb; var0++) {
        if (arg1 == arg0->unknown_194_[var0].unknown_18_) {
            return &arg0->unknown_194_[var0];
        }
    }
    return 0;
}
