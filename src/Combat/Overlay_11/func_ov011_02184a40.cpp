#include <globaldefs.h>

struct Struct_ov011_02184a40_2 {
    char unknown_0_[0xbc];
    unsigned short unknown_bc_;
};

struct Struct_ov011_02184a40 {
    char unknown_0_[0x1b4];
    int (**unknown_1b4_)(void*);
    unsigned int unknown_1b8_;
};

// USA: func_ov011_02184a40
extern "C" ARM void* func_ov011_02184a40(struct Struct_ov011_02184a40* arg0, unsigned int arg1) {
    if (arg0->unknown_1b4_ == 0) return arg0;
    if (arg1 == 0) return arg0;
    if (arg0->unknown_1b8_ <= arg1) return arg0;
    void* var0 = (void*)arg0->unknown_1b4_[arg1](arg0);
    if (var0 != 0) {
        struct Struct_ov011_02184a40_2* var1 = (struct Struct_ov011_02184a40_2*)((char*)arg0 + 0x100);
        var1->unknown_bc_ = (unsigned short)arg1;
        var0 = var1;
    }
    return var0;
}
