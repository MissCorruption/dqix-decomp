#include <globaldefs.h>

struct Struct_0209afd4_5 { unsigned short unknown_0_; char unknown_2_[0x4a]; };

// USA: func_0209b9e4
extern "C" ARM struct Struct_0209afd4_5* func_0209b9e4(struct Struct_0209afd4_5 *arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 6; var0++) {
        if (arg1 == arg0[var0].unknown_0_) return &arg0[var0];
    }
    return NULL;
}
