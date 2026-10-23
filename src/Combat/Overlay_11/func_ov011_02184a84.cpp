#include <globaldefs.h>

struct Struct_ov011_02184a84 {
    char unknown_0_[0xbc];
    unsigned short unknown_bc_;
    unsigned short unknown_be_;
};

struct Struct_ov011_02184694_2 {
    char unknown_0_[0x1b4];
    int (**unknown_1b4_)(void*);
};

// USA: func_ov011_02184a84
extern "C" ARM void func_ov011_02184a84(struct Struct_ov011_02184694_2* arg0) {
    struct Struct_ov011_02184a84* var0 = (struct Struct_ov011_02184a84*)((char*)arg0 + 0x100);
    unsigned short var1 = var0->unknown_bc_;
    if (var1 != 0) {
        int var2 = arg0->unknown_1b4_[var1](arg0);
        if (var2 == 0) {
            ((struct Struct_ov011_02184a84*)((char*)arg0 + 0x100))->unknown_bc_ = 0;
        }
        return;
    }
    var1 = var0->unknown_be_;
    if (var1 == 0) return;
    arg0->unknown_1b4_[var1](arg0);
}
