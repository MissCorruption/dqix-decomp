#include <globaldefs.h>

struct Struct_ov023_021db4e4 {
    char unknown_0_[8];
    char* unknown_8_;
    char unknown_c_[0x14 - 0xc];
    unsigned short unknown_14_;
};

// USA: func_ov023_021db4e4
extern "C" ARM void* func_ov023_021db4e4(struct Struct_ov023_021db4e4* arg0, short arg1) {
    char* var0 = arg0->unknown_8_;
    if (!var0) return 0;
    unsigned short var1 = arg0->unknown_14_;
    if (var1 == 0) return 0;
    for (unsigned short var2 = 0; var2 < var1; var2++) {
        char* var3 = var0 + var2 * 0x18;
        if (*(short*)var3 == arg1) return var3;
    }
    return 0;
}
