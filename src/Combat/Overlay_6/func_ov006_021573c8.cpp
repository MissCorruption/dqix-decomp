#include <globaldefs.h>

struct Struct_ov006_021573c8 {
    short unknown_0_;
    char unknown_2_[0x16 - 0x2];
    unsigned char unknown_16_;
    char unknown_17_[0x18 - 0x17];
};

extern "C" struct Struct_ov006_021573c8* func_ov006_02157368(void* arg0, int arg1);

// USA: func_ov006_021573c8
extern "C" ARM void func_ov006_021573c8(void* arg0) {
    struct Struct_ov006_021573c8* var0;
    var0 = func_ov006_02157368(arg0, 0x50);
    if (var0 != NULL) {
        var0->unknown_16_ &= ~0x1;
    }
    var0 = func_ov006_02157368(arg0, 0x4f);
    if (var0 != NULL) {
        var0->unknown_16_ &= ~0x1;
    }
    var0 = func_ov006_02157368(arg0, 0xe);
    if (var0 != NULL) {
        var0->unknown_16_ &= ~0x1;
    }
    var0 = func_ov006_02157368(arg0, 0xf);
    if (var0 != NULL) {
        var0->unknown_16_ &= ~0x1;
    }
    var0 = func_ov006_02157368(arg0, 0x15);
    if (var0 != NULL) {
        var0->unknown_16_ |= 0x1;
    }
}
