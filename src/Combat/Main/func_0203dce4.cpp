#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"

struct Struct_0203dce4_2 {
    char unknown_0_[0xc];
    struct Struct_0203dce4* unknown_c_[0x20];
};

// USA: func_0203dce4
extern "C" ARM struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1) {
    struct Struct_0203dce4* var0;
    if ((unsigned int)arg1 >= 0x20) {
        return 0;
    }
    var0 = arg0->unknown_c_[arg1];
    if (var0 != 0 && (var0->unknown_0_ & 0x8000)) {
        var0 = 0;
    }
    return var0;
}
