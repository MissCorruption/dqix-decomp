#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

struct Struct_ov001_0215a608 { int unknown_0_; int unknown_4_, unknown_8_, unknown_c_; int unknown_10_; };

extern "C" struct Struct_ov001_0215a608* func_ov001_02159fd4(void);

// USA: func_ov001_0215a608
extern "C" ARM int func_ov001_0215a608(void* arg0, Struct_ov001_02158efc arg1, int arg2) {
    struct Struct_ov001_0215a608* var0 = func_ov001_02159fd4();
    if (var0 == NULL) return (int)var0;
    if (arg2 <= 0) {
        var0->unknown_0_ = 0x10;
    } else {
        var0->unknown_0_ = 0x11;
    }
    memcpy(&var0->unknown_4_, &arg1, 0xc);
    var0->unknown_10_ = arg2;
    return arg2;
}
